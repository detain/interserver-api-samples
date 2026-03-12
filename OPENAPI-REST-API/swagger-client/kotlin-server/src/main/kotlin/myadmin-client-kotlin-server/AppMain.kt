package myadmin-client-kotlin-server

import com.codahale.metrics.Slf4jReporter
import com.typesafe.config.ConfigFactory
import io.ktor.application.Application
import io.ktor.application.ApplicationStopping
import io.ktor.application.install
import io.ktor.application.log
import io.ktor.client.HttpClient
import io.ktor.client.engine.apache.Apache
import io.ktor.config.HoconApplicationConfig
import io.ktor.features.AutoHeadResponse
import io.ktor.features.Compression
import io.ktor.features.ContentNegotiation
import io.ktor.features.DefaultHeaders
import io.ktor.features.HSTS
import io.ktor.gson.GsonConverter
import io.ktor.http.ContentType
import io.ktor.locations.KtorExperimentalLocationsAPI
import io.ktor.locations.Locations
import io.ktor.routing.Routing
import java.util.concurrent.TimeUnit
import io.ktor.util.KtorExperimentalAPI
import io.ktor.auth.Authentication
import io.ktor.auth.oauth
import io.ktor.auth.basic
import io.ktor.auth.UserIdPrincipal
import io.ktor.metrics.dropwizard.DropwizardMetrics
import io.swagger.server.infrastructure.ApiKeyCredential
import io.swagger.server.infrastructure.ApiPrincipal
import io.swagger.server.infrastructure.apiKeyAuth
import io.swagger.server.apis.AccountApi
import io.swagger.server.apis.BackupsApi
import io.swagger.server.apis.BillingApi
import io.swagger.server.apis.DNSApi
import io.swagger.server.apis.DomainsApi
import io.swagger.server.apis.FloatingIPsApi
import io.swagger.server.apis.LicensesApi
import io.swagger.server.apis.MailApi
import io.swagger.server.apis.PublicApi
import io.swagger.server.apis.QuickServersApi
import io.swagger.server.apis.SSLCertificatesApi
import io.swagger.server.apis.ScrubIpsApi
import io.swagger.server.apis.ServersApi
import io.swagger.server.apis.TicketsApi
import io.swagger.server.apis.VPSApi
import io.swagger.server.apis.WebhostingApi

@KtorExperimentalAPI
internal val settings = HoconApplicationConfig(ConfigFactory.defaultApplication(HTTP::class.java.classLoader))

object HTTP {
    val client = HttpClient(Apache)
}

@KtorExperimentalAPI
@KtorExperimentalLocationsAPI
fun Application.main() {
    install(DefaultHeaders)
    install(DropwizardMetrics) {
        val reporter = Slf4jReporter.forRegistry(registry)
                .outputTo(log)
                .convertRatesTo(TimeUnit.SECONDS)
                .convertDurationsTo(TimeUnit.MILLISECONDS)
                .build()
        reporter.start(10, TimeUnit.SECONDS)
    }
    install(ContentNegotiation) {
        register(ContentType.Application.Json, GsonConverter())
    }
    install(AutoHeadResponse) // see http://ktor.io/features/autoheadresponse.html
    install(HSTS, ApplicationHstsConfiguration()) // see http://ktor.io/features/hsts.html
    install(Compression, ApplicationCompressionConfiguration()) // see http://ktor.io/features/compression.html
    install(Locations) // see http://ktor.io/features/locations.html
    install(Authentication) {
        // "Implement API key auth (apiKeyAuth) for parameter name 'X-API-KEY'."
        apiKeyAuth("apiKeyAuth") {
            validate { apikeyCredential: ApiKeyCredential ->
                when {
                    apikeyCredential.value == "keyboardcat" -> ApiPrincipal(apikeyCredential)
                    else -> null
                }
            }
        }
        // "Implement API key auth (sessionIdCookieAuth) for parameter name 'sessionid'."
        apiKeyAuth("sessionIdCookieAuth") {
            validate { apikeyCredential: ApiKeyCredential ->
                when {
                    apikeyCredential.value == "keyboardcat" -> ApiPrincipal(apikeyCredential)
                    else -> null
                }
            }
        }
        // "Implement API key auth (sessionIdHeaderAuth) for parameter name 'sessionid'."
        apiKeyAuth("sessionIdHeaderAuth") {
            validate { apikeyCredential: ApiKeyCredential ->
                when {
                    apikeyCredential.value == "keyboardcat" -> ApiPrincipal(apikeyCredential)
                    else -> null
                }
            }
        }
    }
    install(Routing) {
        AccountApi()
        BackupsApi()
        BillingApi()
        DNSApi()
        DomainsApi()
        FloatingIPsApi()
        LicensesApi()
        MailApi()
        PublicApi()
        QuickServersApi()
        SSLCertificatesApi()
        ScrubIpsApi()
        ServersApi()
        TicketsApi()
        VPSApi()
        WebhostingApi()
    }


    environment.monitor.subscribe(ApplicationStopping)
    {
        HTTP.client.close()
    }
}

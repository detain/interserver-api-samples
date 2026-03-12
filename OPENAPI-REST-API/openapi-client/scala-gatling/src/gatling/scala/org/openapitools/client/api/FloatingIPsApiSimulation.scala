package org.openapitools.client.api

import org.openapitools.client.model._
import com.typesafe.config.ConfigFactory

import io.gatling.core.Predef._
import io.gatling.http.Predef._
import io.gatling.core.structure.PopulationBuilder

import java.io.File

import scala.collection.mutable

class FloatingIPsApiSimulation extends Simulation {

    def getCurrentDirectory = new File("").getAbsolutePath
    def userDataDirectory = getCurrentDirectory + "/src/gatling/resources/data"

    // basic test setup
    val configName = System.getProperty("testConfig", "baseline")
    val config = ConfigFactory.load(configName).withFallback(ConfigFactory.load("default"))
    val durationSeconds = config.getInt("performance.durationSeconds")
    val rampUpSeconds = config.getInt("performance.rampUpSeconds")
    val rampDownSeconds = config.getInt("performance.rampDownSeconds")
    val authentication = config.getString("performance.authorizationHeader")
    val acceptHeader = config.getString("performance.acceptType")
    val contentTypeHeader = config.getString("performance.contentType")
    val rateMultiplier = config.getDouble("performance.rateMultiplier")
    val instanceMultiplier = config.getDouble("performance.instanceMultiplier")

    // global assertion data
    val globalResponseTimeMinLTE = config.getInt("performance.global.assertions.responseTime.min.lte")
    val globalResponseTimeMinGTE = config.getInt("performance.global.assertions.responseTime.min.gte")
    val globalResponseTimeMaxLTE = config.getInt("performance.global.assertions.responseTime.max.lte")
    val globalResponseTimeMaxGTE = config.getInt("performance.global.assertions.responseTime.max.gte")
    val globalResponseTimeMeanLTE = config.getInt("performance.global.assertions.responseTime.mean.lte")
    val globalResponseTimeMeanGTE = config.getInt("performance.global.assertions.responseTime.mean.gte")
    val globalResponseTimeFailedRequestsPercentLTE = config.getDouble("performance.global.assertions.failedRequests.percent.lte")
    val globalResponseTimeFailedRequestsPercentGTE = config.getDouble("performance.global.assertions.failedRequests.percent.gte")
    val globalResponseTimeSuccessfulRequestsPercentLTE = config.getDouble("performance.global.assertions.successfulRequests.percent.lte")
    val globalResponseTimeSuccessfulRequestsPercentGTE = config.getDouble("performance.global.assertions.successfulRequests.percent.gte")

// Setup http protocol configuration
    val httpConf = http
        .baseURL("https://my.interserver.net/apiv2")
        .doNotTrackHeader("1")
        .acceptLanguageHeader("en-US,en;q=0.5")
        .acceptEncodingHeader("gzip, deflate")
        .userAgentHeader("Mozilla/5.0 (Windows NT 5.1; rv:31.0) Gecko/20100101 Firefox/31.0")
        .acceptHeader(acceptHeader)
        .contentTypeHeader(contentTypeHeader)

    // set authorization header if it has been modified from config
    if(!authentication.equals("~MANUAL_ENTRY")){
        httpConf.authorizationHeader(authentication)
    }

    // Setup all the operations per second for the test to ultimately be generated from configs
    val addFloatingIpPerSecond = config.getDouble("performance.operationsPerSecond.addFloatingIp") * rateMultiplier * instanceMultiplier
    val floatingIpsCancelPerSecond = config.getDouble("performance.operationsPerSecond.floatingIpsCancel") * rateMultiplier * instanceMultiplier
    val getFloatingIpInfoPerSecond = config.getDouble("performance.operationsPerSecond.getFloatingIpInfo") * rateMultiplier * instanceMultiplier
    val getFloatingIpInvoicesPerSecond = config.getDouble("performance.operationsPerSecond.getFloatingIpInvoices") * rateMultiplier * instanceMultiplier
    val getFloatingIpsListPerSecond = config.getDouble("performance.operationsPerSecond.getFloatingIpsList") * rateMultiplier * instanceMultiplier
    val getFloatingIpsWelcomeEmailPerSecond = config.getDouble("performance.operationsPerSecond.getFloatingIpsWelcomeEmail") * rateMultiplier * instanceMultiplier
    val getNewFloatingIpPerSecond = config.getDouble("performance.operationsPerSecond.getNewFloatingIp") * rateMultiplier * instanceMultiplier
    val postFloatingIpsChangeIpPerSecond = config.getDouble("performance.operationsPerSecond.postFloatingIpsChangeIp") * rateMultiplier * instanceMultiplier
    val putFloatingIpsPerSecond = config.getDouble("performance.operationsPerSecond.putFloatingIps") * rateMultiplier * instanceMultiplier
    val updateFloatingIpInfoPerSecond = config.getDouble("performance.operationsPerSecond.updateFloatingIpInfo") * rateMultiplier * instanceMultiplier

    val scenarioBuilders: mutable.MutableList[PopulationBuilder] = new mutable.MutableList[PopulationBuilder]()

    // Set up CSV feeders
    val floating_ipsCancelPATHFeeder = csv(userDataDirectory + File.separator + "floatingIpsCancel-pathParams.csv").random
    val getFloatingIpInfoPATHFeeder = csv(userDataDirectory + File.separator + "getFloatingIpInfo-pathParams.csv").random
    val getFloatingIpInvoicesPATHFeeder = csv(userDataDirectory + File.separator + "getFloatingIpInvoices-pathParams.csv").random
    val getFloatingIpsWelcomeEmailPATHFeeder = csv(userDataDirectory + File.separator + "getFloatingIpsWelcomeEmail-pathParams.csv").random
    val postFloatingIpsChangeIpPATHFeeder = csv(userDataDirectory + File.separator + "postFloatingIpsChangeIp-pathParams.csv").random
    val updateFloatingIpInfoPATHFeeder = csv(userDataDirectory + File.separator + "updateFloatingIpInfo-pathParams.csv").random

    // Setup all scenarios

    
    val scnaddFloatingIp = scenario("addFloatingIpSimulation")
        .exec(http("addFloatingIp")
        .httpRequest("POST","/floating_ips/order")
)

    // Run scnaddFloatingIp with warm up and reach a constant rate for entire duration
    scenarioBuilders += scnaddFloatingIp.inject(
        rampUsersPerSec(1) to(addFloatingIpPerSecond) during(rampUpSeconds),
        constantUsersPerSec(addFloatingIpPerSecond) during(durationSeconds),
        rampUsersPerSec(addFloatingIpPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scnfloatingIpsCancel = scenario("floatingIpsCancelSimulation")
        .feed(floating_ipsCancelPATHFeeder)
        .exec(http("floatingIpsCancel")
        .httpRequest("DELETE","/floating_ips/${id}")
)

    // Run scnfloatingIpsCancel with warm up and reach a constant rate for entire duration
    scenarioBuilders += scnfloatingIpsCancel.inject(
        rampUsersPerSec(1) to(floatingIpsCancelPerSecond) during(rampUpSeconds),
        constantUsersPerSec(floatingIpsCancelPerSecond) during(durationSeconds),
        rampUsersPerSec(floatingIpsCancelPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scngetFloatingIpInfo = scenario("getFloatingIpInfoSimulation")
        .feed(getFloatingIpInfoPATHFeeder)
        .exec(http("getFloatingIpInfo")
        .httpRequest("GET","/floating_ips/${id}")
)

    // Run scngetFloatingIpInfo with warm up and reach a constant rate for entire duration
    scenarioBuilders += scngetFloatingIpInfo.inject(
        rampUsersPerSec(1) to(getFloatingIpInfoPerSecond) during(rampUpSeconds),
        constantUsersPerSec(getFloatingIpInfoPerSecond) during(durationSeconds),
        rampUsersPerSec(getFloatingIpInfoPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scngetFloatingIpInvoices = scenario("getFloatingIpInvoicesSimulation")
        .feed(getFloatingIpInvoicesPATHFeeder)
        .exec(http("getFloatingIpInvoices")
        .httpRequest("GET","/floating_ips/${id}/invoices")
)

    // Run scngetFloatingIpInvoices with warm up and reach a constant rate for entire duration
    scenarioBuilders += scngetFloatingIpInvoices.inject(
        rampUsersPerSec(1) to(getFloatingIpInvoicesPerSecond) during(rampUpSeconds),
        constantUsersPerSec(getFloatingIpInvoicesPerSecond) during(durationSeconds),
        rampUsersPerSec(getFloatingIpInvoicesPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scngetFloatingIpsList = scenario("getFloatingIpsListSimulation")
        .exec(http("getFloatingIpsList")
        .httpRequest("GET","/floating_ips")
)

    // Run scngetFloatingIpsList with warm up and reach a constant rate for entire duration
    scenarioBuilders += scngetFloatingIpsList.inject(
        rampUsersPerSec(1) to(getFloatingIpsListPerSecond) during(rampUpSeconds),
        constantUsersPerSec(getFloatingIpsListPerSecond) during(durationSeconds),
        rampUsersPerSec(getFloatingIpsListPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scngetFloatingIpsWelcomeEmail = scenario("getFloatingIpsWelcomeEmailSimulation")
        .feed(getFloatingIpsWelcomeEmailPATHFeeder)
        .exec(http("getFloatingIpsWelcomeEmail")
        .httpRequest("GET","/floating_ips/${id}/welcome_email")
)

    // Run scngetFloatingIpsWelcomeEmail with warm up and reach a constant rate for entire duration
    scenarioBuilders += scngetFloatingIpsWelcomeEmail.inject(
        rampUsersPerSec(1) to(getFloatingIpsWelcomeEmailPerSecond) during(rampUpSeconds),
        constantUsersPerSec(getFloatingIpsWelcomeEmailPerSecond) during(durationSeconds),
        rampUsersPerSec(getFloatingIpsWelcomeEmailPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scngetNewFloatingIp = scenario("getNewFloatingIpSimulation")
        .exec(http("getNewFloatingIp")
        .httpRequest("GET","/floating_ips/order")
)

    // Run scngetNewFloatingIp with warm up and reach a constant rate for entire duration
    scenarioBuilders += scngetNewFloatingIp.inject(
        rampUsersPerSec(1) to(getNewFloatingIpPerSecond) during(rampUpSeconds),
        constantUsersPerSec(getNewFloatingIpPerSecond) during(durationSeconds),
        rampUsersPerSec(getNewFloatingIpPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scnpostFloatingIpsChangeIp = scenario("postFloatingIpsChangeIpSimulation")
        .feed(postFloatingIpsChangeIpPATHFeeder)
        .exec(http("postFloatingIpsChangeIp")
        .httpRequest("POST","/floating_ips/${id}/change_ip")
)

    // Run scnpostFloatingIpsChangeIp with warm up and reach a constant rate for entire duration
    scenarioBuilders += scnpostFloatingIpsChangeIp.inject(
        rampUsersPerSec(1) to(postFloatingIpsChangeIpPerSecond) during(rampUpSeconds),
        constantUsersPerSec(postFloatingIpsChangeIpPerSecond) during(durationSeconds),
        rampUsersPerSec(postFloatingIpsChangeIpPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scnputFloatingIps = scenario("putFloatingIpsSimulation")
        .exec(http("putFloatingIps")
        .httpRequest("PUT","/floating_ips/order")
)

    // Run scnputFloatingIps with warm up and reach a constant rate for entire duration
    scenarioBuilders += scnputFloatingIps.inject(
        rampUsersPerSec(1) to(putFloatingIpsPerSecond) during(rampUpSeconds),
        constantUsersPerSec(putFloatingIpsPerSecond) during(durationSeconds),
        rampUsersPerSec(putFloatingIpsPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scnupdateFloatingIpInfo = scenario("updateFloatingIpInfoSimulation")
        .feed(updateFloatingIpInfoPATHFeeder)
        .exec(http("updateFloatingIpInfo")
        .httpRequest("POST","/floating_ips/${id}")
)

    // Run scnupdateFloatingIpInfo with warm up and reach a constant rate for entire duration
    scenarioBuilders += scnupdateFloatingIpInfo.inject(
        rampUsersPerSec(1) to(updateFloatingIpInfoPerSecond) during(rampUpSeconds),
        constantUsersPerSec(updateFloatingIpInfoPerSecond) during(durationSeconds),
        rampUsersPerSec(updateFloatingIpInfoPerSecond) to(1) during(rampDownSeconds)
    )

    setUp(
        scenarioBuilders.toList
    ).protocols(httpConf).assertions(
        global.responseTime.min.lte(globalResponseTimeMinLTE),
        global.responseTime.min.gte(globalResponseTimeMinGTE),
        global.responseTime.max.lte(globalResponseTimeMaxLTE),
        global.responseTime.max.gte(globalResponseTimeMaxGTE),
        global.responseTime.mean.lte(globalResponseTimeMeanLTE),
        global.responseTime.mean.gte(globalResponseTimeMeanGTE),
        global.failedRequests.percent.lte(globalResponseTimeFailedRequestsPercentLTE),
        global.failedRequests.percent.gte(globalResponseTimeFailedRequestsPercentGTE),
        global.successfulRequests.percent.lte(globalResponseTimeSuccessfulRequestsPercentLTE),
        global.successfulRequests.percent.gte(globalResponseTimeSuccessfulRequestsPercentGTE)
    )
}

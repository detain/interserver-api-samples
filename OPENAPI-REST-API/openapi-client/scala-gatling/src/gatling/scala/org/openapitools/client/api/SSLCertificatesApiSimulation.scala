package org.openapitools.client.api

import org.openapitools.client.model._
import com.typesafe.config.ConfigFactory

import io.gatling.core.Predef._
import io.gatling.http.Predef._
import io.gatling.core.structure.PopulationBuilder

import java.io.File

import scala.collection.mutable

class SSLCertificatesApiSimulation extends Simulation {

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
    val addSslPerSecond = config.getDouble("performance.operationsPerSecond.addSsl") * rateMultiplier * instanceMultiplier
    val getNewSslPerSecond = config.getDouble("performance.operationsPerSecond.getNewSsl") * rateMultiplier * instanceMultiplier
    val getSslInfoPerSecond = config.getDouble("performance.operationsPerSecond.getSslInfo") * rateMultiplier * instanceMultiplier
    val getSslInvoicesPerSecond = config.getDouble("performance.operationsPerSecond.getSslInvoices") * rateMultiplier * instanceMultiplier
    val getSslListPerSecond = config.getDouble("performance.operationsPerSecond.getSslList") * rateMultiplier * instanceMultiplier
    val getSslWelcomeEmailPerSecond = config.getDouble("performance.operationsPerSecond.getSslWelcomeEmail") * rateMultiplier * instanceMultiplier
    val putSslPerSecond = config.getDouble("performance.operationsPerSecond.putSsl") * rateMultiplier * instanceMultiplier
    val sslCancelPerSecond = config.getDouble("performance.operationsPerSecond.sslCancel") * rateMultiplier * instanceMultiplier
    val updateSslInfoPerSecond = config.getDouble("performance.operationsPerSecond.updateSslInfo") * rateMultiplier * instanceMultiplier

    val scenarioBuilders: mutable.MutableList[PopulationBuilder] = new mutable.MutableList[PopulationBuilder]()

    // Set up CSV feeders
    val getSslInfoPATHFeeder = csv(userDataDirectory + File.separator + "getSslInfo-pathParams.csv").random
    val getSslInvoicesPATHFeeder = csv(userDataDirectory + File.separator + "getSslInvoices-pathParams.csv").random
    val getSslWelcomeEmailPATHFeeder = csv(userDataDirectory + File.separator + "getSslWelcomeEmail-pathParams.csv").random
    val sslCancelPATHFeeder = csv(userDataDirectory + File.separator + "sslCancel-pathParams.csv").random
    val updateSslInfoPATHFeeder = csv(userDataDirectory + File.separator + "updateSslInfo-pathParams.csv").random

    // Setup all scenarios

    
    val scnaddSsl = scenario("addSslSimulation")
        .exec(http("addSsl")
        .httpRequest("POST","/ssl/order")
)

    // Run scnaddSsl with warm up and reach a constant rate for entire duration
    scenarioBuilders += scnaddSsl.inject(
        rampUsersPerSec(1) to(addSslPerSecond) during(rampUpSeconds),
        constantUsersPerSec(addSslPerSecond) during(durationSeconds),
        rampUsersPerSec(addSslPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scngetNewSsl = scenario("getNewSslSimulation")
        .exec(http("getNewSsl")
        .httpRequest("GET","/ssl/order")
)

    // Run scngetNewSsl with warm up and reach a constant rate for entire duration
    scenarioBuilders += scngetNewSsl.inject(
        rampUsersPerSec(1) to(getNewSslPerSecond) during(rampUpSeconds),
        constantUsersPerSec(getNewSslPerSecond) during(durationSeconds),
        rampUsersPerSec(getNewSslPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scngetSslInfo = scenario("getSslInfoSimulation")
        .feed(getSslInfoPATHFeeder)
        .exec(http("getSslInfo")
        .httpRequest("GET","/ssl/${id}")
)

    // Run scngetSslInfo with warm up and reach a constant rate for entire duration
    scenarioBuilders += scngetSslInfo.inject(
        rampUsersPerSec(1) to(getSslInfoPerSecond) during(rampUpSeconds),
        constantUsersPerSec(getSslInfoPerSecond) during(durationSeconds),
        rampUsersPerSec(getSslInfoPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scngetSslInvoices = scenario("getSslInvoicesSimulation")
        .feed(getSslInvoicesPATHFeeder)
        .exec(http("getSslInvoices")
        .httpRequest("GET","/ssl/${id}/invoices")
)

    // Run scngetSslInvoices with warm up and reach a constant rate for entire duration
    scenarioBuilders += scngetSslInvoices.inject(
        rampUsersPerSec(1) to(getSslInvoicesPerSecond) during(rampUpSeconds),
        constantUsersPerSec(getSslInvoicesPerSecond) during(durationSeconds),
        rampUsersPerSec(getSslInvoicesPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scngetSslList = scenario("getSslListSimulation")
        .exec(http("getSslList")
        .httpRequest("GET","/ssl")
)

    // Run scngetSslList with warm up and reach a constant rate for entire duration
    scenarioBuilders += scngetSslList.inject(
        rampUsersPerSec(1) to(getSslListPerSecond) during(rampUpSeconds),
        constantUsersPerSec(getSslListPerSecond) during(durationSeconds),
        rampUsersPerSec(getSslListPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scngetSslWelcomeEmail = scenario("getSslWelcomeEmailSimulation")
        .feed(getSslWelcomeEmailPATHFeeder)
        .exec(http("getSslWelcomeEmail")
        .httpRequest("GET","/ssl/${id}/welcome_email")
)

    // Run scngetSslWelcomeEmail with warm up and reach a constant rate for entire duration
    scenarioBuilders += scngetSslWelcomeEmail.inject(
        rampUsersPerSec(1) to(getSslWelcomeEmailPerSecond) during(rampUpSeconds),
        constantUsersPerSec(getSslWelcomeEmailPerSecond) during(durationSeconds),
        rampUsersPerSec(getSslWelcomeEmailPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scnputSsl = scenario("putSslSimulation")
        .exec(http("putSsl")
        .httpRequest("PUT","/ssl/order")
)

    // Run scnputSsl with warm up and reach a constant rate for entire duration
    scenarioBuilders += scnputSsl.inject(
        rampUsersPerSec(1) to(putSslPerSecond) during(rampUpSeconds),
        constantUsersPerSec(putSslPerSecond) during(durationSeconds),
        rampUsersPerSec(putSslPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scnsslCancel = scenario("sslCancelSimulation")
        .feed(sslCancelPATHFeeder)
        .exec(http("sslCancel")
        .httpRequest("DELETE","/ssl/${id}")
)

    // Run scnsslCancel with warm up and reach a constant rate for entire duration
    scenarioBuilders += scnsslCancel.inject(
        rampUsersPerSec(1) to(sslCancelPerSecond) during(rampUpSeconds),
        constantUsersPerSec(sslCancelPerSecond) during(durationSeconds),
        rampUsersPerSec(sslCancelPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scnupdateSslInfo = scenario("updateSslInfoSimulation")
        .feed(updateSslInfoPATHFeeder)
        .exec(http("updateSslInfo")
        .httpRequest("POST","/ssl/${id}")
)

    // Run scnupdateSslInfo with warm up and reach a constant rate for entire duration
    scenarioBuilders += scnupdateSslInfo.inject(
        rampUsersPerSec(1) to(updateSslInfoPerSecond) during(rampUpSeconds),
        constantUsersPerSec(updateSslInfoPerSecond) during(durationSeconds),
        rampUsersPerSec(updateSslInfoPerSecond) to(1) during(rampDownSeconds)
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

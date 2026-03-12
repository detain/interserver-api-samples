package org.openapitools.client.api

import org.openapitools.client.model._
import com.typesafe.config.ConfigFactory

import io.gatling.core.Predef._
import io.gatling.http.Predef._
import io.gatling.core.structure.PopulationBuilder

import java.io.File

import scala.collection.mutable

class BackupsApiSimulation extends Simulation {

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
    val addBackupPerSecond = config.getDouble("performance.operationsPerSecond.addBackup") * rateMultiplier * instanceMultiplier
    val cancelBackupPerSecond = config.getDouble("performance.operationsPerSecond.cancelBackup") * rateMultiplier * instanceMultiplier
    val getBackupInfoPerSecond = config.getDouble("performance.operationsPerSecond.getBackupInfo") * rateMultiplier * instanceMultiplier
    val getBackupInvoicesPerSecond = config.getDouble("performance.operationsPerSecond.getBackupInvoices") * rateMultiplier * instanceMultiplier
    val getBackupLoginPerSecond = config.getDouble("performance.operationsPerSecond.getBackupLogin") * rateMultiplier * instanceMultiplier
    val getBackupsListPerSecond = config.getDouble("performance.operationsPerSecond.getBackupsList") * rateMultiplier * instanceMultiplier
    val getBackupsWelcomeEmailPerSecond = config.getDouble("performance.operationsPerSecond.getBackupsWelcomeEmail") * rateMultiplier * instanceMultiplier
    val getNewBackupPerSecond = config.getDouble("performance.operationsPerSecond.getNewBackup") * rateMultiplier * instanceMultiplier
    val updateBackupInfoPerSecond = config.getDouble("performance.operationsPerSecond.updateBackupInfo") * rateMultiplier * instanceMultiplier
    val validateBackupOrderPerSecond = config.getDouble("performance.operationsPerSecond.validateBackupOrder") * rateMultiplier * instanceMultiplier

    val scenarioBuilders: mutable.MutableList[PopulationBuilder] = new mutable.MutableList[PopulationBuilder]()

    // Set up CSV feeders
    val cancelBackupPATHFeeder = csv(userDataDirectory + File.separator + "cancelBackup-pathParams.csv").random
    val getBackupInfoPATHFeeder = csv(userDataDirectory + File.separator + "getBackupInfo-pathParams.csv").random
    val getBackupInvoicesPATHFeeder = csv(userDataDirectory + File.separator + "getBackupInvoices-pathParams.csv").random
    val getBackupLoginPATHFeeder = csv(userDataDirectory + File.separator + "getBackupLogin-pathParams.csv").random
    val getBackupsWelcomeEmailPATHFeeder = csv(userDataDirectory + File.separator + "getBackupsWelcomeEmail-pathParams.csv").random
    val updateBackupInfoPATHFeeder = csv(userDataDirectory + File.separator + "updateBackupInfo-pathParams.csv").random

    // Setup all scenarios

    
    val scnaddBackup = scenario("addBackupSimulation")
        .exec(http("addBackup")
        .httpRequest("POST","/backups/order")
)

    // Run scnaddBackup with warm up and reach a constant rate for entire duration
    scenarioBuilders += scnaddBackup.inject(
        rampUsersPerSec(1) to(addBackupPerSecond) during(rampUpSeconds),
        constantUsersPerSec(addBackupPerSecond) during(durationSeconds),
        rampUsersPerSec(addBackupPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scncancelBackup = scenario("cancelBackupSimulation")
        .feed(cancelBackupPATHFeeder)
        .exec(http("cancelBackup")
        .httpRequest("DELETE","/backups/${id}")
)

    // Run scncancelBackup with warm up and reach a constant rate for entire duration
    scenarioBuilders += scncancelBackup.inject(
        rampUsersPerSec(1) to(cancelBackupPerSecond) during(rampUpSeconds),
        constantUsersPerSec(cancelBackupPerSecond) during(durationSeconds),
        rampUsersPerSec(cancelBackupPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scngetBackupInfo = scenario("getBackupInfoSimulation")
        .feed(getBackupInfoPATHFeeder)
        .exec(http("getBackupInfo")
        .httpRequest("GET","/backups/${id}")
)

    // Run scngetBackupInfo with warm up and reach a constant rate for entire duration
    scenarioBuilders += scngetBackupInfo.inject(
        rampUsersPerSec(1) to(getBackupInfoPerSecond) during(rampUpSeconds),
        constantUsersPerSec(getBackupInfoPerSecond) during(durationSeconds),
        rampUsersPerSec(getBackupInfoPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scngetBackupInvoices = scenario("getBackupInvoicesSimulation")
        .feed(getBackupInvoicesPATHFeeder)
        .exec(http("getBackupInvoices")
        .httpRequest("GET","/backups/${id}/invoices")
)

    // Run scngetBackupInvoices with warm up and reach a constant rate for entire duration
    scenarioBuilders += scngetBackupInvoices.inject(
        rampUsersPerSec(1) to(getBackupInvoicesPerSecond) during(rampUpSeconds),
        constantUsersPerSec(getBackupInvoicesPerSecond) during(durationSeconds),
        rampUsersPerSec(getBackupInvoicesPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scngetBackupLogin = scenario("getBackupLoginSimulation")
        .feed(getBackupLoginPATHFeeder)
        .exec(http("getBackupLogin")
        .httpRequest("GET","/backups/${id}/login")
)

    // Run scngetBackupLogin with warm up and reach a constant rate for entire duration
    scenarioBuilders += scngetBackupLogin.inject(
        rampUsersPerSec(1) to(getBackupLoginPerSecond) during(rampUpSeconds),
        constantUsersPerSec(getBackupLoginPerSecond) during(durationSeconds),
        rampUsersPerSec(getBackupLoginPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scngetBackupsList = scenario("getBackupsListSimulation")
        .exec(http("getBackupsList")
        .httpRequest("GET","/backups")
)

    // Run scngetBackupsList with warm up and reach a constant rate for entire duration
    scenarioBuilders += scngetBackupsList.inject(
        rampUsersPerSec(1) to(getBackupsListPerSecond) during(rampUpSeconds),
        constantUsersPerSec(getBackupsListPerSecond) during(durationSeconds),
        rampUsersPerSec(getBackupsListPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scngetBackupsWelcomeEmail = scenario("getBackupsWelcomeEmailSimulation")
        .feed(getBackupsWelcomeEmailPATHFeeder)
        .exec(http("getBackupsWelcomeEmail")
        .httpRequest("GET","/backups/${id}/welcome_email")
)

    // Run scngetBackupsWelcomeEmail with warm up and reach a constant rate for entire duration
    scenarioBuilders += scngetBackupsWelcomeEmail.inject(
        rampUsersPerSec(1) to(getBackupsWelcomeEmailPerSecond) during(rampUpSeconds),
        constantUsersPerSec(getBackupsWelcomeEmailPerSecond) during(durationSeconds),
        rampUsersPerSec(getBackupsWelcomeEmailPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scngetNewBackup = scenario("getNewBackupSimulation")
        .exec(http("getNewBackup")
        .httpRequest("GET","/backups/order")
)

    // Run scngetNewBackup with warm up and reach a constant rate for entire duration
    scenarioBuilders += scngetNewBackup.inject(
        rampUsersPerSec(1) to(getNewBackupPerSecond) during(rampUpSeconds),
        constantUsersPerSec(getNewBackupPerSecond) during(durationSeconds),
        rampUsersPerSec(getNewBackupPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scnupdateBackupInfo = scenario("updateBackupInfoSimulation")
        .feed(updateBackupInfoPATHFeeder)
        .exec(http("updateBackupInfo")
        .httpRequest("POST","/backups/${id}")
)

    // Run scnupdateBackupInfo with warm up and reach a constant rate for entire duration
    scenarioBuilders += scnupdateBackupInfo.inject(
        rampUsersPerSec(1) to(updateBackupInfoPerSecond) during(rampUpSeconds),
        constantUsersPerSec(updateBackupInfoPerSecond) during(durationSeconds),
        rampUsersPerSec(updateBackupInfoPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scnvalidateBackupOrder = scenario("validateBackupOrderSimulation")
        .exec(http("validateBackupOrder")
        .httpRequest("PUT","/backups/order")
)

    // Run scnvalidateBackupOrder with warm up and reach a constant rate for entire duration
    scenarioBuilders += scnvalidateBackupOrder.inject(
        rampUsersPerSec(1) to(validateBackupOrderPerSecond) during(rampUpSeconds),
        constantUsersPerSec(validateBackupOrderPerSecond) during(durationSeconds),
        rampUsersPerSec(validateBackupOrderPerSecond) to(1) during(rampDownSeconds)
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

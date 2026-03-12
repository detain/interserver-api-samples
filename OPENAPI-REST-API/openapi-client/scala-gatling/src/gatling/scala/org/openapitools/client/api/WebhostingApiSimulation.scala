package org.openapitools.client.api

import org.openapitools.client.model._
import com.typesafe.config.ConfigFactory

import io.gatling.core.Predef._
import io.gatling.http.Predef._
import io.gatling.core.structure.PopulationBuilder

import java.io.File

import scala.collection.mutable

class WebhostingApiSimulation extends Simulation {

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
    val addWebsitePerSecond = config.getDouble("performance.operationsPerSecond.addWebsite") * rateMultiplier * instanceMultiplier
    val getNewWebsitePerSecond = config.getDouble("performance.operationsPerSecond.getNewWebsite") * rateMultiplier * instanceMultiplier
    val getWebsiteBuyIpPerSecond = config.getDouble("performance.operationsPerSecond.getWebsiteBuyIp") * rateMultiplier * instanceMultiplier
    val getWebsiteInfoPerSecond = config.getDouble("performance.operationsPerSecond.getWebsiteInfo") * rateMultiplier * instanceMultiplier
    val getWebsiteInvoicesPerSecond = config.getDouble("performance.operationsPerSecond.getWebsiteInvoices") * rateMultiplier * instanceMultiplier
    val getWebsiteListPerSecond = config.getDouble("performance.operationsPerSecond.getWebsiteList") * rateMultiplier * instanceMultiplier
    val getWebsitesBackupsPerSecond = config.getDouble("performance.operationsPerSecond.getWebsitesBackups") * rateMultiplier * instanceMultiplier
    val getWebsitesLoginPerSecond = config.getDouble("performance.operationsPerSecond.getWebsitesLogin") * rateMultiplier * instanceMultiplier
    val getWebsitesWelcomeEmailPerSecond = config.getDouble("performance.operationsPerSecond.getWebsitesWelcomeEmail") * rateMultiplier * instanceMultiplier
    val gettWebsiteReverseDnsPerSecond = config.getDouble("performance.operationsPerSecond.gettWebsiteReverseDns") * rateMultiplier * instanceMultiplier
    val postWebsiteBuyIpPerSecond = config.getDouble("performance.operationsPerSecond.postWebsiteBuyIp") * rateMultiplier * instanceMultiplier
    val postWebsiteMigrationPerSecond = config.getDouble("performance.operationsPerSecond.postWebsiteMigration") * rateMultiplier * instanceMultiplier
    val postWebsitesReverseDnsPerSecond = config.getDouble("performance.operationsPerSecond.postWebsitesReverseDns") * rateMultiplier * instanceMultiplier
    val putWebsitesPerSecond = config.getDouble("performance.operationsPerSecond.putWebsites") * rateMultiplier * instanceMultiplier
    val updateWebsiteInfoPerSecond = config.getDouble("performance.operationsPerSecond.updateWebsiteInfo") * rateMultiplier * instanceMultiplier
    val webhostingCancelPerSecond = config.getDouble("performance.operationsPerSecond.webhostingCancel") * rateMultiplier * instanceMultiplier

    val scenarioBuilders: mutable.MutableList[PopulationBuilder] = new mutable.MutableList[PopulationBuilder]()

    // Set up CSV feeders
    val getWebsiteBuyIpPATHFeeder = csv(userDataDirectory + File.separator + "getWebsiteBuyIp-pathParams.csv").random
    val getWebsiteInfoPATHFeeder = csv(userDataDirectory + File.separator + "getWebsiteInfo-pathParams.csv").random
    val getWebsiteInvoicesPATHFeeder = csv(userDataDirectory + File.separator + "getWebsiteInvoices-pathParams.csv").random
    val getWebsitesBackupsPATHFeeder = csv(userDataDirectory + File.separator + "getWebsitesBackups-pathParams.csv").random
    val getWebsitesLoginPATHFeeder = csv(userDataDirectory + File.separator + "getWebsitesLogin-pathParams.csv").random
    val getWebsitesWelcomeEmailPATHFeeder = csv(userDataDirectory + File.separator + "getWebsitesWelcomeEmail-pathParams.csv").random
    val gettWebsiteReverseDnsPATHFeeder = csv(userDataDirectory + File.separator + "gettWebsiteReverseDns-pathParams.csv").random
    val postWebsiteBuyIpPATHFeeder = csv(userDataDirectory + File.separator + "postWebsiteBuyIp-pathParams.csv").random
    val postWebsiteMigrationPATHFeeder = csv(userDataDirectory + File.separator + "postWebsiteMigration-pathParams.csv").random
    val postWebsitesReverseDnsPATHFeeder = csv(userDataDirectory + File.separator + "postWebsitesReverseDns-pathParams.csv").random
    val updateWebsiteInfoPATHFeeder = csv(userDataDirectory + File.separator + "updateWebsiteInfo-pathParams.csv").random
    val webhostingCancelPATHFeeder = csv(userDataDirectory + File.separator + "webhostingCancel-pathParams.csv").random

    // Setup all scenarios

    
    val scnaddWebsite = scenario("addWebsiteSimulation")
        .exec(http("addWebsite")
        .httpRequest("POST","/websites/order")
)

    // Run scnaddWebsite with warm up and reach a constant rate for entire duration
    scenarioBuilders += scnaddWebsite.inject(
        rampUsersPerSec(1) to(addWebsitePerSecond) during(rampUpSeconds),
        constantUsersPerSec(addWebsitePerSecond) during(durationSeconds),
        rampUsersPerSec(addWebsitePerSecond) to(1) during(rampDownSeconds)
    )

    
    val scngetNewWebsite = scenario("getNewWebsiteSimulation")
        .exec(http("getNewWebsite")
        .httpRequest("GET","/websites/order")
)

    // Run scngetNewWebsite with warm up and reach a constant rate for entire duration
    scenarioBuilders += scngetNewWebsite.inject(
        rampUsersPerSec(1) to(getNewWebsitePerSecond) during(rampUpSeconds),
        constantUsersPerSec(getNewWebsitePerSecond) during(durationSeconds),
        rampUsersPerSec(getNewWebsitePerSecond) to(1) during(rampDownSeconds)
    )

    
    val scngetWebsiteBuyIp = scenario("getWebsiteBuyIpSimulation")
        .feed(getWebsiteBuyIpPATHFeeder)
        .exec(http("getWebsiteBuyIp")
        .httpRequest("GET","/websites/${id}/buy_ip")
)

    // Run scngetWebsiteBuyIp with warm up and reach a constant rate for entire duration
    scenarioBuilders += scngetWebsiteBuyIp.inject(
        rampUsersPerSec(1) to(getWebsiteBuyIpPerSecond) during(rampUpSeconds),
        constantUsersPerSec(getWebsiteBuyIpPerSecond) during(durationSeconds),
        rampUsersPerSec(getWebsiteBuyIpPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scngetWebsiteInfo = scenario("getWebsiteInfoSimulation")
        .feed(getWebsiteInfoPATHFeeder)
        .exec(http("getWebsiteInfo")
        .httpRequest("GET","/websites/${id}")
)

    // Run scngetWebsiteInfo with warm up and reach a constant rate for entire duration
    scenarioBuilders += scngetWebsiteInfo.inject(
        rampUsersPerSec(1) to(getWebsiteInfoPerSecond) during(rampUpSeconds),
        constantUsersPerSec(getWebsiteInfoPerSecond) during(durationSeconds),
        rampUsersPerSec(getWebsiteInfoPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scngetWebsiteInvoices = scenario("getWebsiteInvoicesSimulation")
        .feed(getWebsiteInvoicesPATHFeeder)
        .exec(http("getWebsiteInvoices")
        .httpRequest("GET","/websites/${id}/invoices")
)

    // Run scngetWebsiteInvoices with warm up and reach a constant rate for entire duration
    scenarioBuilders += scngetWebsiteInvoices.inject(
        rampUsersPerSec(1) to(getWebsiteInvoicesPerSecond) during(rampUpSeconds),
        constantUsersPerSec(getWebsiteInvoicesPerSecond) during(durationSeconds),
        rampUsersPerSec(getWebsiteInvoicesPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scngetWebsiteList = scenario("getWebsiteListSimulation")
        .exec(http("getWebsiteList")
        .httpRequest("GET","/websites")
)

    // Run scngetWebsiteList with warm up and reach a constant rate for entire duration
    scenarioBuilders += scngetWebsiteList.inject(
        rampUsersPerSec(1) to(getWebsiteListPerSecond) during(rampUpSeconds),
        constantUsersPerSec(getWebsiteListPerSecond) during(durationSeconds),
        rampUsersPerSec(getWebsiteListPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scngetWebsitesBackups = scenario("getWebsitesBackupsSimulation")
        .feed(getWebsitesBackupsPATHFeeder)
        .exec(http("getWebsitesBackups")
        .httpRequest("GET","/websites/${id}/backups")
)

    // Run scngetWebsitesBackups with warm up and reach a constant rate for entire duration
    scenarioBuilders += scngetWebsitesBackups.inject(
        rampUsersPerSec(1) to(getWebsitesBackupsPerSecond) during(rampUpSeconds),
        constantUsersPerSec(getWebsitesBackupsPerSecond) during(durationSeconds),
        rampUsersPerSec(getWebsitesBackupsPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scngetWebsitesLogin = scenario("getWebsitesLoginSimulation")
        .feed(getWebsitesLoginPATHFeeder)
        .exec(http("getWebsitesLogin")
        .httpRequest("GET","/websites/${id}/login")
)

    // Run scngetWebsitesLogin with warm up and reach a constant rate for entire duration
    scenarioBuilders += scngetWebsitesLogin.inject(
        rampUsersPerSec(1) to(getWebsitesLoginPerSecond) during(rampUpSeconds),
        constantUsersPerSec(getWebsitesLoginPerSecond) during(durationSeconds),
        rampUsersPerSec(getWebsitesLoginPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scngetWebsitesWelcomeEmail = scenario("getWebsitesWelcomeEmailSimulation")
        .feed(getWebsitesWelcomeEmailPATHFeeder)
        .exec(http("getWebsitesWelcomeEmail")
        .httpRequest("GET","/websites/${id}/welcome_email")
)

    // Run scngetWebsitesWelcomeEmail with warm up and reach a constant rate for entire duration
    scenarioBuilders += scngetWebsitesWelcomeEmail.inject(
        rampUsersPerSec(1) to(getWebsitesWelcomeEmailPerSecond) during(rampUpSeconds),
        constantUsersPerSec(getWebsitesWelcomeEmailPerSecond) during(durationSeconds),
        rampUsersPerSec(getWebsitesWelcomeEmailPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scngettWebsiteReverseDns = scenario("gettWebsiteReverseDnsSimulation")
        .feed(gettWebsiteReverseDnsPATHFeeder)
        .exec(http("gettWebsiteReverseDns")
        .httpRequest("GET","/websites/${id}/reverse_dns")
)

    // Run scngettWebsiteReverseDns with warm up and reach a constant rate for entire duration
    scenarioBuilders += scngettWebsiteReverseDns.inject(
        rampUsersPerSec(1) to(gettWebsiteReverseDnsPerSecond) during(rampUpSeconds),
        constantUsersPerSec(gettWebsiteReverseDnsPerSecond) during(durationSeconds),
        rampUsersPerSec(gettWebsiteReverseDnsPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scnpostWebsiteBuyIp = scenario("postWebsiteBuyIpSimulation")
        .feed(postWebsiteBuyIpPATHFeeder)
        .exec(http("postWebsiteBuyIp")
        .httpRequest("POST","/websites/${id}/buy_ip")
)

    // Run scnpostWebsiteBuyIp with warm up and reach a constant rate for entire duration
    scenarioBuilders += scnpostWebsiteBuyIp.inject(
        rampUsersPerSec(1) to(postWebsiteBuyIpPerSecond) during(rampUpSeconds),
        constantUsersPerSec(postWebsiteBuyIpPerSecond) during(durationSeconds),
        rampUsersPerSec(postWebsiteBuyIpPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scnpostWebsiteMigration = scenario("postWebsiteMigrationSimulation")
        .feed(postWebsiteMigrationPATHFeeder)
        .exec(http("postWebsiteMigration")
        .httpRequest("POST","/websites/${id}/migration")
)

    // Run scnpostWebsiteMigration with warm up and reach a constant rate for entire duration
    scenarioBuilders += scnpostWebsiteMigration.inject(
        rampUsersPerSec(1) to(postWebsiteMigrationPerSecond) during(rampUpSeconds),
        constantUsersPerSec(postWebsiteMigrationPerSecond) during(durationSeconds),
        rampUsersPerSec(postWebsiteMigrationPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scnpostWebsitesReverseDns = scenario("postWebsitesReverseDnsSimulation")
        .feed(postWebsitesReverseDnsPATHFeeder)
        .exec(http("postWebsitesReverseDns")
        .httpRequest("POST","/websites/${id}/reverse_dns")
)

    // Run scnpostWebsitesReverseDns with warm up and reach a constant rate for entire duration
    scenarioBuilders += scnpostWebsitesReverseDns.inject(
        rampUsersPerSec(1) to(postWebsitesReverseDnsPerSecond) during(rampUpSeconds),
        constantUsersPerSec(postWebsitesReverseDnsPerSecond) during(durationSeconds),
        rampUsersPerSec(postWebsitesReverseDnsPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scnputWebsites = scenario("putWebsitesSimulation")
        .exec(http("putWebsites")
        .httpRequest("PUT","/websites/order")
)

    // Run scnputWebsites with warm up and reach a constant rate for entire duration
    scenarioBuilders += scnputWebsites.inject(
        rampUsersPerSec(1) to(putWebsitesPerSecond) during(rampUpSeconds),
        constantUsersPerSec(putWebsitesPerSecond) during(durationSeconds),
        rampUsersPerSec(putWebsitesPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scnupdateWebsiteInfo = scenario("updateWebsiteInfoSimulation")
        .feed(updateWebsiteInfoPATHFeeder)
        .exec(http("updateWebsiteInfo")
        .httpRequest("POST","/websites/${id}")
)

    // Run scnupdateWebsiteInfo with warm up and reach a constant rate for entire duration
    scenarioBuilders += scnupdateWebsiteInfo.inject(
        rampUsersPerSec(1) to(updateWebsiteInfoPerSecond) during(rampUpSeconds),
        constantUsersPerSec(updateWebsiteInfoPerSecond) during(durationSeconds),
        rampUsersPerSec(updateWebsiteInfoPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scnwebhostingCancel = scenario("webhostingCancelSimulation")
        .feed(webhostingCancelPATHFeeder)
        .exec(http("webhostingCancel")
        .httpRequest("DELETE","/websites/${id}")
)

    // Run scnwebhostingCancel with warm up and reach a constant rate for entire duration
    scenarioBuilders += scnwebhostingCancel.inject(
        rampUsersPerSec(1) to(webhostingCancelPerSecond) during(rampUpSeconds),
        constantUsersPerSec(webhostingCancelPerSecond) during(durationSeconds),
        rampUsersPerSec(webhostingCancelPerSecond) to(1) during(rampDownSeconds)
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

package org.openapitools.client.api

import org.openapitools.client.model._
import com.typesafe.config.ConfigFactory

import io.gatling.core.Predef._
import io.gatling.http.Predef._
import io.gatling.core.structure.PopulationBuilder

import java.io.File

import scala.collection.mutable

class DNSApiSimulation extends Simulation {

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
    val addDnsDomainPerSecond = config.getDouble("performance.operationsPerSecond.addDnsDomain") * rateMultiplier * instanceMultiplier
    val addDnsRecordPerSecond = config.getDouble("performance.operationsPerSecond.addDnsRecord") * rateMultiplier * instanceMultiplier
    val deleteDnsDomainPerSecond = config.getDouble("performance.operationsPerSecond.deleteDnsDomain") * rateMultiplier * instanceMultiplier
    val deleteDnsRecordPerSecond = config.getDouble("performance.operationsPerSecond.deleteDnsRecord") * rateMultiplier * instanceMultiplier
    val getDnsDomainPerSecond = config.getDouble("performance.operationsPerSecond.getDnsDomain") * rateMultiplier * instanceMultiplier
    val getDnsListPerSecond = config.getDouble("performance.operationsPerSecond.getDnsList") * rateMultiplier * instanceMultiplier
    val updateDnsRecordPerSecond = config.getDouble("performance.operationsPerSecond.updateDnsRecord") * rateMultiplier * instanceMultiplier

    val scenarioBuilders: mutable.MutableList[PopulationBuilder] = new mutable.MutableList[PopulationBuilder]()

    // Set up CSV feeders
    val addDnsRecordPATHFeeder = csv(userDataDirectory + File.separator + "addDnsRecord-pathParams.csv").random
    val deleteDnsDomainPATHFeeder = csv(userDataDirectory + File.separator + "deleteDnsDomain-pathParams.csv").random
    val deleteDnsRecordPATHFeeder = csv(userDataDirectory + File.separator + "deleteDnsRecord-pathParams.csv").random
    val getDnsDomainPATHFeeder = csv(userDataDirectory + File.separator + "getDnsDomain-pathParams.csv").random
    val updateDnsRecordPATHFeeder = csv(userDataDirectory + File.separator + "updateDnsRecord-pathParams.csv").random

    // Setup all scenarios

    
    val scnaddDnsDomain = scenario("addDnsDomainSimulation")
        .exec(http("addDnsDomain")
        .httpRequest("POST","/dns")
)

    // Run scnaddDnsDomain with warm up and reach a constant rate for entire duration
    scenarioBuilders += scnaddDnsDomain.inject(
        rampUsersPerSec(1) to(addDnsDomainPerSecond) during(rampUpSeconds),
        constantUsersPerSec(addDnsDomainPerSecond) during(durationSeconds),
        rampUsersPerSec(addDnsDomainPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scnaddDnsRecord = scenario("addDnsRecordSimulation")
        .feed(addDnsRecordPATHFeeder)
        .exec(http("addDnsRecord")
        .httpRequest("POST","/dns/${id}")
)

    // Run scnaddDnsRecord with warm up and reach a constant rate for entire duration
    scenarioBuilders += scnaddDnsRecord.inject(
        rampUsersPerSec(1) to(addDnsRecordPerSecond) during(rampUpSeconds),
        constantUsersPerSec(addDnsRecordPerSecond) during(durationSeconds),
        rampUsersPerSec(addDnsRecordPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scndeleteDnsDomain = scenario("deleteDnsDomainSimulation")
        .feed(deleteDnsDomainPATHFeeder)
        .exec(http("deleteDnsDomain")
        .httpRequest("DELETE","/dns/${id}")
)

    // Run scndeleteDnsDomain with warm up and reach a constant rate for entire duration
    scenarioBuilders += scndeleteDnsDomain.inject(
        rampUsersPerSec(1) to(deleteDnsDomainPerSecond) during(rampUpSeconds),
        constantUsersPerSec(deleteDnsDomainPerSecond) during(durationSeconds),
        rampUsersPerSec(deleteDnsDomainPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scndeleteDnsRecord = scenario("deleteDnsRecordSimulation")
        .feed(deleteDnsRecordPATHFeeder)
        .exec(http("deleteDnsRecord")
        .httpRequest("DELETE","/dns/${domainId}/${recordId}")
)

    // Run scndeleteDnsRecord with warm up and reach a constant rate for entire duration
    scenarioBuilders += scndeleteDnsRecord.inject(
        rampUsersPerSec(1) to(deleteDnsRecordPerSecond) during(rampUpSeconds),
        constantUsersPerSec(deleteDnsRecordPerSecond) during(durationSeconds),
        rampUsersPerSec(deleteDnsRecordPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scngetDnsDomain = scenario("getDnsDomainSimulation")
        .feed(getDnsDomainPATHFeeder)
        .exec(http("getDnsDomain")
        .httpRequest("GET","/dns/${id}")
)

    // Run scngetDnsDomain with warm up and reach a constant rate for entire duration
    scenarioBuilders += scngetDnsDomain.inject(
        rampUsersPerSec(1) to(getDnsDomainPerSecond) during(rampUpSeconds),
        constantUsersPerSec(getDnsDomainPerSecond) during(durationSeconds),
        rampUsersPerSec(getDnsDomainPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scngetDnsList = scenario("getDnsListSimulation")
        .exec(http("getDnsList")
        .httpRequest("GET","/dns")
)

    // Run scngetDnsList with warm up and reach a constant rate for entire duration
    scenarioBuilders += scngetDnsList.inject(
        rampUsersPerSec(1) to(getDnsListPerSecond) during(rampUpSeconds),
        constantUsersPerSec(getDnsListPerSecond) during(durationSeconds),
        rampUsersPerSec(getDnsListPerSecond) to(1) during(rampDownSeconds)
    )

    
    val scnupdateDnsRecord = scenario("updateDnsRecordSimulation")
        .feed(updateDnsRecordPATHFeeder)
        .exec(http("updateDnsRecord")
        .httpRequest("POST","/dns/${domainId}/${recordId}")
)

    // Run scnupdateDnsRecord with warm up and reach a constant rate for entire duration
    scenarioBuilders += scnupdateDnsRecord.inject(
        rampUsersPerSec(1) to(updateDnsRecordPerSecond) during(rampUpSeconds),
        constantUsersPerSec(updateDnsRecordPerSecond) during(durationSeconds),
        rampUsersPerSec(updateDnsRecordPerSecond) to(1) during(rampDownSeconds)
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

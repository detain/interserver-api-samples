package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
/**
 * MaxMind fraud detection scoring data for a credit card transaction.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "MaxMind fraud detection scoring data for a credit card transaction.")

public class AccountInfoMaxMindResponse   {
  private String distance = null;
  private String countryMatch = null;
  private String countryCode = null;
  private String freeMail = null;
  private String anonymousProxy = null;
  private String score = null;
  private String binMatch = null;
  private String binCountry = null;
  private String err = null;
  private String proxyScore = null;
  private String ipRegion = null;
  private String ipCity = null;
  private String ipLatitude = null;
  private String ipLongitude = null;
  private String binName = null;
  private String ipIsp = null;
  private String ipOrg = null;
  private String binNameMatch = null;
  private String binPhoneMatch = null;
  private String binPhone = null;
  private String custPhoneInBillingLoc = null;
  private String highRiskCountry = null;
  private String queriesRemaining = null;
  private String cityPostalMatch = null;
  private String shipCityPostalMatch = null;
  private String maxmindID = null;
  private String ipAsnum = null;
  private String ipUserType = null;
  private String ipCountryConf = null;
  private String ipRegionConf = null;
  private String ipCityConf = null;
  private String ipPostalCode = null;
  private String ipPostalConf = null;
  private String ipAccuracyRadius = null;
  private String ipNetSpeedCell = null;
  private String ipMetroCode = null;
  private String ipAreaCode = null;
  private String ipTimeZone = null;
  private String ipRegionName = null;
  private String ipDomain = null;
  private String ipCountryName = null;
  private String ipContinentCode = null;
  private String ipCorporateProxy = null;
  private String carderEmail = null;
  private String highRiskUsername = null;
  private String highRiskPassword = null;
  private OneOfAccountInfoMaxMindResponseRiskScore riskScore = null;
  private String isTransProxy = null;
  private String prepaid = null;
  private String minfraudVersion = null;
  private String serviceLevel = null;
  private String explanation = null;
  private String femaleName = null;

  /**
   **/
  public AccountInfoMaxMindResponse distance(String distance) {
    this.distance = distance;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("distance")
  @NotNull
  public String getDistance() {
    return distance;
  }
  public void setDistance(String distance) {
    this.distance = distance;
  }

  /**
   **/
  public AccountInfoMaxMindResponse countryMatch(String countryMatch) {
    this.countryMatch = countryMatch;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("countryMatch")
  @NotNull
  public String getCountryMatch() {
    return countryMatch;
  }
  public void setCountryMatch(String countryMatch) {
    this.countryMatch = countryMatch;
  }

  /**
   **/
  public AccountInfoMaxMindResponse countryCode(String countryCode) {
    this.countryCode = countryCode;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("countryCode")
  @NotNull
  public String getCountryCode() {
    return countryCode;
  }
  public void setCountryCode(String countryCode) {
    this.countryCode = countryCode;
  }

  /**
   **/
  public AccountInfoMaxMindResponse freeMail(String freeMail) {
    this.freeMail = freeMail;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("freeMail")
  @NotNull
  public String getFreeMail() {
    return freeMail;
  }
  public void setFreeMail(String freeMail) {
    this.freeMail = freeMail;
  }

  /**
   **/
  public AccountInfoMaxMindResponse anonymousProxy(String anonymousProxy) {
    this.anonymousProxy = anonymousProxy;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("anonymousProxy")
  @NotNull
  public String getAnonymousProxy() {
    return anonymousProxy;
  }
  public void setAnonymousProxy(String anonymousProxy) {
    this.anonymousProxy = anonymousProxy;
  }

  /**
   **/
  public AccountInfoMaxMindResponse score(String score) {
    this.score = score;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("score")
  @NotNull
  public String getScore() {
    return score;
  }
  public void setScore(String score) {
    this.score = score;
  }

  /**
   **/
  public AccountInfoMaxMindResponse binMatch(String binMatch) {
    this.binMatch = binMatch;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("binMatch")
  @NotNull
  public String getBinMatch() {
    return binMatch;
  }
  public void setBinMatch(String binMatch) {
    this.binMatch = binMatch;
  }

  /**
   **/
  public AccountInfoMaxMindResponse binCountry(String binCountry) {
    this.binCountry = binCountry;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("binCountry")
  @NotNull
  public String getBinCountry() {
    return binCountry;
  }
  public void setBinCountry(String binCountry) {
    this.binCountry = binCountry;
  }

  /**
   **/
  public AccountInfoMaxMindResponse err(String err) {
    this.err = err;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("err")
  @NotNull
  public String getErr() {
    return err;
  }
  public void setErr(String err) {
    this.err = err;
  }

  /**
   **/
  public AccountInfoMaxMindResponse proxyScore(String proxyScore) {
    this.proxyScore = proxyScore;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("proxyScore")
  @NotNull
  public String getProxyScore() {
    return proxyScore;
  }
  public void setProxyScore(String proxyScore) {
    this.proxyScore = proxyScore;
  }

  /**
   **/
  public AccountInfoMaxMindResponse ipRegion(String ipRegion) {
    this.ipRegion = ipRegion;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("ip_region")
  @NotNull
  public String getIpRegion() {
    return ipRegion;
  }
  public void setIpRegion(String ipRegion) {
    this.ipRegion = ipRegion;
  }

  /**
   **/
  public AccountInfoMaxMindResponse ipCity(String ipCity) {
    this.ipCity = ipCity;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("ip_city")
  @NotNull
  public String getIpCity() {
    return ipCity;
  }
  public void setIpCity(String ipCity) {
    this.ipCity = ipCity;
  }

  /**
   **/
  public AccountInfoMaxMindResponse ipLatitude(String ipLatitude) {
    this.ipLatitude = ipLatitude;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("ip_latitude")
  @NotNull
  public String getIpLatitude() {
    return ipLatitude;
  }
  public void setIpLatitude(String ipLatitude) {
    this.ipLatitude = ipLatitude;
  }

  /**
   **/
  public AccountInfoMaxMindResponse ipLongitude(String ipLongitude) {
    this.ipLongitude = ipLongitude;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("ip_longitude")
  @NotNull
  public String getIpLongitude() {
    return ipLongitude;
  }
  public void setIpLongitude(String ipLongitude) {
    this.ipLongitude = ipLongitude;
  }

  /**
   **/
  public AccountInfoMaxMindResponse binName(String binName) {
    this.binName = binName;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("binName")
  @NotNull
  public String getBinName() {
    return binName;
  }
  public void setBinName(String binName) {
    this.binName = binName;
  }

  /**
   **/
  public AccountInfoMaxMindResponse ipIsp(String ipIsp) {
    this.ipIsp = ipIsp;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("ip_isp")
  @NotNull
  public String getIpIsp() {
    return ipIsp;
  }
  public void setIpIsp(String ipIsp) {
    this.ipIsp = ipIsp;
  }

  /**
   **/
  public AccountInfoMaxMindResponse ipOrg(String ipOrg) {
    this.ipOrg = ipOrg;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("ip_org")
  @NotNull
  public String getIpOrg() {
    return ipOrg;
  }
  public void setIpOrg(String ipOrg) {
    this.ipOrg = ipOrg;
  }

  /**
   **/
  public AccountInfoMaxMindResponse binNameMatch(String binNameMatch) {
    this.binNameMatch = binNameMatch;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("binNameMatch")
  @NotNull
  public String getBinNameMatch() {
    return binNameMatch;
  }
  public void setBinNameMatch(String binNameMatch) {
    this.binNameMatch = binNameMatch;
  }

  /**
   **/
  public AccountInfoMaxMindResponse binPhoneMatch(String binPhoneMatch) {
    this.binPhoneMatch = binPhoneMatch;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("binPhoneMatch")
  @NotNull
  public String getBinPhoneMatch() {
    return binPhoneMatch;
  }
  public void setBinPhoneMatch(String binPhoneMatch) {
    this.binPhoneMatch = binPhoneMatch;
  }

  /**
   **/
  public AccountInfoMaxMindResponse binPhone(String binPhone) {
    this.binPhone = binPhone;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("binPhone")
  @NotNull
  public String getBinPhone() {
    return binPhone;
  }
  public void setBinPhone(String binPhone) {
    this.binPhone = binPhone;
  }

  /**
   **/
  public AccountInfoMaxMindResponse custPhoneInBillingLoc(String custPhoneInBillingLoc) {
    this.custPhoneInBillingLoc = custPhoneInBillingLoc;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("custPhoneInBillingLoc")
  @NotNull
  public String getCustPhoneInBillingLoc() {
    return custPhoneInBillingLoc;
  }
  public void setCustPhoneInBillingLoc(String custPhoneInBillingLoc) {
    this.custPhoneInBillingLoc = custPhoneInBillingLoc;
  }

  /**
   **/
  public AccountInfoMaxMindResponse highRiskCountry(String highRiskCountry) {
    this.highRiskCountry = highRiskCountry;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("highRiskCountry")
  @NotNull
  public String getHighRiskCountry() {
    return highRiskCountry;
  }
  public void setHighRiskCountry(String highRiskCountry) {
    this.highRiskCountry = highRiskCountry;
  }

  /**
   **/
  public AccountInfoMaxMindResponse queriesRemaining(String queriesRemaining) {
    this.queriesRemaining = queriesRemaining;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("queriesRemaining")
  @NotNull
  public String getQueriesRemaining() {
    return queriesRemaining;
  }
  public void setQueriesRemaining(String queriesRemaining) {
    this.queriesRemaining = queriesRemaining;
  }

  /**
   **/
  public AccountInfoMaxMindResponse cityPostalMatch(String cityPostalMatch) {
    this.cityPostalMatch = cityPostalMatch;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("cityPostalMatch")
  @NotNull
  public String getCityPostalMatch() {
    return cityPostalMatch;
  }
  public void setCityPostalMatch(String cityPostalMatch) {
    this.cityPostalMatch = cityPostalMatch;
  }

  /**
   **/
  public AccountInfoMaxMindResponse shipCityPostalMatch(String shipCityPostalMatch) {
    this.shipCityPostalMatch = shipCityPostalMatch;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("shipCityPostalMatch")
  @NotNull
  public String getShipCityPostalMatch() {
    return shipCityPostalMatch;
  }
  public void setShipCityPostalMatch(String shipCityPostalMatch) {
    this.shipCityPostalMatch = shipCityPostalMatch;
  }

  /**
   **/
  public AccountInfoMaxMindResponse maxmindID(String maxmindID) {
    this.maxmindID = maxmindID;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("maxmindID")
  @NotNull
  public String getMaxmindID() {
    return maxmindID;
  }
  public void setMaxmindID(String maxmindID) {
    this.maxmindID = maxmindID;
  }

  /**
   **/
  public AccountInfoMaxMindResponse ipAsnum(String ipAsnum) {
    this.ipAsnum = ipAsnum;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("ip_asnum")
  @NotNull
  public String getIpAsnum() {
    return ipAsnum;
  }
  public void setIpAsnum(String ipAsnum) {
    this.ipAsnum = ipAsnum;
  }

  /**
   **/
  public AccountInfoMaxMindResponse ipUserType(String ipUserType) {
    this.ipUserType = ipUserType;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("ip_userType")
  @NotNull
  public String getIpUserType() {
    return ipUserType;
  }
  public void setIpUserType(String ipUserType) {
    this.ipUserType = ipUserType;
  }

  /**
   **/
  public AccountInfoMaxMindResponse ipCountryConf(String ipCountryConf) {
    this.ipCountryConf = ipCountryConf;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("ip_countryConf")
  @NotNull
  public String getIpCountryConf() {
    return ipCountryConf;
  }
  public void setIpCountryConf(String ipCountryConf) {
    this.ipCountryConf = ipCountryConf;
  }

  /**
   **/
  public AccountInfoMaxMindResponse ipRegionConf(String ipRegionConf) {
    this.ipRegionConf = ipRegionConf;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("ip_regionConf")
  @NotNull
  public String getIpRegionConf() {
    return ipRegionConf;
  }
  public void setIpRegionConf(String ipRegionConf) {
    this.ipRegionConf = ipRegionConf;
  }

  /**
   **/
  public AccountInfoMaxMindResponse ipCityConf(String ipCityConf) {
    this.ipCityConf = ipCityConf;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("ip_cityConf")
  @NotNull
  public String getIpCityConf() {
    return ipCityConf;
  }
  public void setIpCityConf(String ipCityConf) {
    this.ipCityConf = ipCityConf;
  }

  /**
   **/
  public AccountInfoMaxMindResponse ipPostalCode(String ipPostalCode) {
    this.ipPostalCode = ipPostalCode;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("ip_postalCode")
  @NotNull
  public String getIpPostalCode() {
    return ipPostalCode;
  }
  public void setIpPostalCode(String ipPostalCode) {
    this.ipPostalCode = ipPostalCode;
  }

  /**
   **/
  public AccountInfoMaxMindResponse ipPostalConf(String ipPostalConf) {
    this.ipPostalConf = ipPostalConf;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("ip_postalConf")
  @NotNull
  public String getIpPostalConf() {
    return ipPostalConf;
  }
  public void setIpPostalConf(String ipPostalConf) {
    this.ipPostalConf = ipPostalConf;
  }

  /**
   **/
  public AccountInfoMaxMindResponse ipAccuracyRadius(String ipAccuracyRadius) {
    this.ipAccuracyRadius = ipAccuracyRadius;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("ip_accuracyRadius")
  @NotNull
  public String getIpAccuracyRadius() {
    return ipAccuracyRadius;
  }
  public void setIpAccuracyRadius(String ipAccuracyRadius) {
    this.ipAccuracyRadius = ipAccuracyRadius;
  }

  /**
   **/
  public AccountInfoMaxMindResponse ipNetSpeedCell(String ipNetSpeedCell) {
    this.ipNetSpeedCell = ipNetSpeedCell;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("ip_netSpeedCell")
  @NotNull
  public String getIpNetSpeedCell() {
    return ipNetSpeedCell;
  }
  public void setIpNetSpeedCell(String ipNetSpeedCell) {
    this.ipNetSpeedCell = ipNetSpeedCell;
  }

  /**
   **/
  public AccountInfoMaxMindResponse ipMetroCode(String ipMetroCode) {
    this.ipMetroCode = ipMetroCode;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("ip_metroCode")
  @NotNull
  public String getIpMetroCode() {
    return ipMetroCode;
  }
  public void setIpMetroCode(String ipMetroCode) {
    this.ipMetroCode = ipMetroCode;
  }

  /**
   **/
  public AccountInfoMaxMindResponse ipAreaCode(String ipAreaCode) {
    this.ipAreaCode = ipAreaCode;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("ip_areaCode")
  @NotNull
  public String getIpAreaCode() {
    return ipAreaCode;
  }
  public void setIpAreaCode(String ipAreaCode) {
    this.ipAreaCode = ipAreaCode;
  }

  /**
   **/
  public AccountInfoMaxMindResponse ipTimeZone(String ipTimeZone) {
    this.ipTimeZone = ipTimeZone;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("ip_timeZone")
  @NotNull
  public String getIpTimeZone() {
    return ipTimeZone;
  }
  public void setIpTimeZone(String ipTimeZone) {
    this.ipTimeZone = ipTimeZone;
  }

  /**
   **/
  public AccountInfoMaxMindResponse ipRegionName(String ipRegionName) {
    this.ipRegionName = ipRegionName;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("ip_regionName")
  @NotNull
  public String getIpRegionName() {
    return ipRegionName;
  }
  public void setIpRegionName(String ipRegionName) {
    this.ipRegionName = ipRegionName;
  }

  /**
   **/
  public AccountInfoMaxMindResponse ipDomain(String ipDomain) {
    this.ipDomain = ipDomain;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("ip_domain")
  @NotNull
  public String getIpDomain() {
    return ipDomain;
  }
  public void setIpDomain(String ipDomain) {
    this.ipDomain = ipDomain;
  }

  /**
   **/
  public AccountInfoMaxMindResponse ipCountryName(String ipCountryName) {
    this.ipCountryName = ipCountryName;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("ip_countryName")
  @NotNull
  public String getIpCountryName() {
    return ipCountryName;
  }
  public void setIpCountryName(String ipCountryName) {
    this.ipCountryName = ipCountryName;
  }

  /**
   **/
  public AccountInfoMaxMindResponse ipContinentCode(String ipContinentCode) {
    this.ipContinentCode = ipContinentCode;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("ip_continentCode")
  @NotNull
  public String getIpContinentCode() {
    return ipContinentCode;
  }
  public void setIpContinentCode(String ipContinentCode) {
    this.ipContinentCode = ipContinentCode;
  }

  /**
   **/
  public AccountInfoMaxMindResponse ipCorporateProxy(String ipCorporateProxy) {
    this.ipCorporateProxy = ipCorporateProxy;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("ip_corporateProxy")
  @NotNull
  public String getIpCorporateProxy() {
    return ipCorporateProxy;
  }
  public void setIpCorporateProxy(String ipCorporateProxy) {
    this.ipCorporateProxy = ipCorporateProxy;
  }

  /**
   **/
  public AccountInfoMaxMindResponse carderEmail(String carderEmail) {
    this.carderEmail = carderEmail;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("carderEmail")
  @NotNull
  public String getCarderEmail() {
    return carderEmail;
  }
  public void setCarderEmail(String carderEmail) {
    this.carderEmail = carderEmail;
  }

  /**
   **/
  public AccountInfoMaxMindResponse highRiskUsername(String highRiskUsername) {
    this.highRiskUsername = highRiskUsername;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("highRiskUsername")
  @NotNull
  public String getHighRiskUsername() {
    return highRiskUsername;
  }
  public void setHighRiskUsername(String highRiskUsername) {
    this.highRiskUsername = highRiskUsername;
  }

  /**
   **/
  public AccountInfoMaxMindResponse highRiskPassword(String highRiskPassword) {
    this.highRiskPassword = highRiskPassword;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("highRiskPassword")
  @NotNull
  public String getHighRiskPassword() {
    return highRiskPassword;
  }
  public void setHighRiskPassword(String highRiskPassword) {
    this.highRiskPassword = highRiskPassword;
  }

  /**
   **/
  public AccountInfoMaxMindResponse riskScore(OneOfAccountInfoMaxMindResponseRiskScore riskScore) {
    this.riskScore = riskScore;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("riskScore")
  @NotNull
  public OneOfAccountInfoMaxMindResponseRiskScore getRiskScore() {
    return riskScore;
  }
  public void setRiskScore(OneOfAccountInfoMaxMindResponseRiskScore riskScore) {
    this.riskScore = riskScore;
  }

  /**
   **/
  public AccountInfoMaxMindResponse isTransProxy(String isTransProxy) {
    this.isTransProxy = isTransProxy;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("isTransProxy")
  @NotNull
  public String getIsTransProxy() {
    return isTransProxy;
  }
  public void setIsTransProxy(String isTransProxy) {
    this.isTransProxy = isTransProxy;
  }

  /**
   **/
  public AccountInfoMaxMindResponse prepaid(String prepaid) {
    this.prepaid = prepaid;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("prepaid")
  @NotNull
  public String getPrepaid() {
    return prepaid;
  }
  public void setPrepaid(String prepaid) {
    this.prepaid = prepaid;
  }

  /**
   **/
  public AccountInfoMaxMindResponse minfraudVersion(String minfraudVersion) {
    this.minfraudVersion = minfraudVersion;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("minfraud_version")
  @NotNull
  public String getMinfraudVersion() {
    return minfraudVersion;
  }
  public void setMinfraudVersion(String minfraudVersion) {
    this.minfraudVersion = minfraudVersion;
  }

  /**
   **/
  public AccountInfoMaxMindResponse serviceLevel(String serviceLevel) {
    this.serviceLevel = serviceLevel;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("service_level")
  @NotNull
  public String getServiceLevel() {
    return serviceLevel;
  }
  public void setServiceLevel(String serviceLevel) {
    this.serviceLevel = serviceLevel;
  }

  /**
   **/
  public AccountInfoMaxMindResponse explanation(String explanation) {
    this.explanation = explanation;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("explanation")
  @NotNull
  public String getExplanation() {
    return explanation;
  }
  public void setExplanation(String explanation) {
    this.explanation = explanation;
  }

  /**
   **/
  public AccountInfoMaxMindResponse femaleName(String femaleName) {
    this.femaleName = femaleName;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("female_name")
  @NotNull
  public String getFemaleName() {
    return femaleName;
  }
  public void setFemaleName(String femaleName) {
    this.femaleName = femaleName;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AccountInfoMaxMindResponse accountInfoMaxMindResponse = (AccountInfoMaxMindResponse) o;
    return Objects.equals(distance, accountInfoMaxMindResponse.distance) &&
        Objects.equals(countryMatch, accountInfoMaxMindResponse.countryMatch) &&
        Objects.equals(countryCode, accountInfoMaxMindResponse.countryCode) &&
        Objects.equals(freeMail, accountInfoMaxMindResponse.freeMail) &&
        Objects.equals(anonymousProxy, accountInfoMaxMindResponse.anonymousProxy) &&
        Objects.equals(score, accountInfoMaxMindResponse.score) &&
        Objects.equals(binMatch, accountInfoMaxMindResponse.binMatch) &&
        Objects.equals(binCountry, accountInfoMaxMindResponse.binCountry) &&
        Objects.equals(err, accountInfoMaxMindResponse.err) &&
        Objects.equals(proxyScore, accountInfoMaxMindResponse.proxyScore) &&
        Objects.equals(ipRegion, accountInfoMaxMindResponse.ipRegion) &&
        Objects.equals(ipCity, accountInfoMaxMindResponse.ipCity) &&
        Objects.equals(ipLatitude, accountInfoMaxMindResponse.ipLatitude) &&
        Objects.equals(ipLongitude, accountInfoMaxMindResponse.ipLongitude) &&
        Objects.equals(binName, accountInfoMaxMindResponse.binName) &&
        Objects.equals(ipIsp, accountInfoMaxMindResponse.ipIsp) &&
        Objects.equals(ipOrg, accountInfoMaxMindResponse.ipOrg) &&
        Objects.equals(binNameMatch, accountInfoMaxMindResponse.binNameMatch) &&
        Objects.equals(binPhoneMatch, accountInfoMaxMindResponse.binPhoneMatch) &&
        Objects.equals(binPhone, accountInfoMaxMindResponse.binPhone) &&
        Objects.equals(custPhoneInBillingLoc, accountInfoMaxMindResponse.custPhoneInBillingLoc) &&
        Objects.equals(highRiskCountry, accountInfoMaxMindResponse.highRiskCountry) &&
        Objects.equals(queriesRemaining, accountInfoMaxMindResponse.queriesRemaining) &&
        Objects.equals(cityPostalMatch, accountInfoMaxMindResponse.cityPostalMatch) &&
        Objects.equals(shipCityPostalMatch, accountInfoMaxMindResponse.shipCityPostalMatch) &&
        Objects.equals(maxmindID, accountInfoMaxMindResponse.maxmindID) &&
        Objects.equals(ipAsnum, accountInfoMaxMindResponse.ipAsnum) &&
        Objects.equals(ipUserType, accountInfoMaxMindResponse.ipUserType) &&
        Objects.equals(ipCountryConf, accountInfoMaxMindResponse.ipCountryConf) &&
        Objects.equals(ipRegionConf, accountInfoMaxMindResponse.ipRegionConf) &&
        Objects.equals(ipCityConf, accountInfoMaxMindResponse.ipCityConf) &&
        Objects.equals(ipPostalCode, accountInfoMaxMindResponse.ipPostalCode) &&
        Objects.equals(ipPostalConf, accountInfoMaxMindResponse.ipPostalConf) &&
        Objects.equals(ipAccuracyRadius, accountInfoMaxMindResponse.ipAccuracyRadius) &&
        Objects.equals(ipNetSpeedCell, accountInfoMaxMindResponse.ipNetSpeedCell) &&
        Objects.equals(ipMetroCode, accountInfoMaxMindResponse.ipMetroCode) &&
        Objects.equals(ipAreaCode, accountInfoMaxMindResponse.ipAreaCode) &&
        Objects.equals(ipTimeZone, accountInfoMaxMindResponse.ipTimeZone) &&
        Objects.equals(ipRegionName, accountInfoMaxMindResponse.ipRegionName) &&
        Objects.equals(ipDomain, accountInfoMaxMindResponse.ipDomain) &&
        Objects.equals(ipCountryName, accountInfoMaxMindResponse.ipCountryName) &&
        Objects.equals(ipContinentCode, accountInfoMaxMindResponse.ipContinentCode) &&
        Objects.equals(ipCorporateProxy, accountInfoMaxMindResponse.ipCorporateProxy) &&
        Objects.equals(carderEmail, accountInfoMaxMindResponse.carderEmail) &&
        Objects.equals(highRiskUsername, accountInfoMaxMindResponse.highRiskUsername) &&
        Objects.equals(highRiskPassword, accountInfoMaxMindResponse.highRiskPassword) &&
        Objects.equals(riskScore, accountInfoMaxMindResponse.riskScore) &&
        Objects.equals(isTransProxy, accountInfoMaxMindResponse.isTransProxy) &&
        Objects.equals(prepaid, accountInfoMaxMindResponse.prepaid) &&
        Objects.equals(minfraudVersion, accountInfoMaxMindResponse.minfraudVersion) &&
        Objects.equals(serviceLevel, accountInfoMaxMindResponse.serviceLevel) &&
        Objects.equals(explanation, accountInfoMaxMindResponse.explanation) &&
        Objects.equals(femaleName, accountInfoMaxMindResponse.femaleName);
  }

  @Override
  public int hashCode() {
    return Objects.hash(distance, countryMatch, countryCode, freeMail, anonymousProxy, score, binMatch, binCountry, err, proxyScore, ipRegion, ipCity, ipLatitude, ipLongitude, binName, ipIsp, ipOrg, binNameMatch, binPhoneMatch, binPhone, custPhoneInBillingLoc, highRiskCountry, queriesRemaining, cityPostalMatch, shipCityPostalMatch, maxmindID, ipAsnum, ipUserType, ipCountryConf, ipRegionConf, ipCityConf, ipPostalCode, ipPostalConf, ipAccuracyRadius, ipNetSpeedCell, ipMetroCode, ipAreaCode, ipTimeZone, ipRegionName, ipDomain, ipCountryName, ipContinentCode, ipCorporateProxy, carderEmail, highRiskUsername, highRiskPassword, riskScore, isTransProxy, prepaid, minfraudVersion, serviceLevel, explanation, femaleName);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AccountInfoMaxMindResponse {\n");
    
    sb.append("    distance: ").append(toIndentedString(distance)).append("\n");
    sb.append("    countryMatch: ").append(toIndentedString(countryMatch)).append("\n");
    sb.append("    countryCode: ").append(toIndentedString(countryCode)).append("\n");
    sb.append("    freeMail: ").append(toIndentedString(freeMail)).append("\n");
    sb.append("    anonymousProxy: ").append(toIndentedString(anonymousProxy)).append("\n");
    sb.append("    score: ").append(toIndentedString(score)).append("\n");
    sb.append("    binMatch: ").append(toIndentedString(binMatch)).append("\n");
    sb.append("    binCountry: ").append(toIndentedString(binCountry)).append("\n");
    sb.append("    err: ").append(toIndentedString(err)).append("\n");
    sb.append("    proxyScore: ").append(toIndentedString(proxyScore)).append("\n");
    sb.append("    ipRegion: ").append(toIndentedString(ipRegion)).append("\n");
    sb.append("    ipCity: ").append(toIndentedString(ipCity)).append("\n");
    sb.append("    ipLatitude: ").append(toIndentedString(ipLatitude)).append("\n");
    sb.append("    ipLongitude: ").append(toIndentedString(ipLongitude)).append("\n");
    sb.append("    binName: ").append(toIndentedString(binName)).append("\n");
    sb.append("    ipIsp: ").append(toIndentedString(ipIsp)).append("\n");
    sb.append("    ipOrg: ").append(toIndentedString(ipOrg)).append("\n");
    sb.append("    binNameMatch: ").append(toIndentedString(binNameMatch)).append("\n");
    sb.append("    binPhoneMatch: ").append(toIndentedString(binPhoneMatch)).append("\n");
    sb.append("    binPhone: ").append(toIndentedString(binPhone)).append("\n");
    sb.append("    custPhoneInBillingLoc: ").append(toIndentedString(custPhoneInBillingLoc)).append("\n");
    sb.append("    highRiskCountry: ").append(toIndentedString(highRiskCountry)).append("\n");
    sb.append("    queriesRemaining: ").append(toIndentedString(queriesRemaining)).append("\n");
    sb.append("    cityPostalMatch: ").append(toIndentedString(cityPostalMatch)).append("\n");
    sb.append("    shipCityPostalMatch: ").append(toIndentedString(shipCityPostalMatch)).append("\n");
    sb.append("    maxmindID: ").append(toIndentedString(maxmindID)).append("\n");
    sb.append("    ipAsnum: ").append(toIndentedString(ipAsnum)).append("\n");
    sb.append("    ipUserType: ").append(toIndentedString(ipUserType)).append("\n");
    sb.append("    ipCountryConf: ").append(toIndentedString(ipCountryConf)).append("\n");
    sb.append("    ipRegionConf: ").append(toIndentedString(ipRegionConf)).append("\n");
    sb.append("    ipCityConf: ").append(toIndentedString(ipCityConf)).append("\n");
    sb.append("    ipPostalCode: ").append(toIndentedString(ipPostalCode)).append("\n");
    sb.append("    ipPostalConf: ").append(toIndentedString(ipPostalConf)).append("\n");
    sb.append("    ipAccuracyRadius: ").append(toIndentedString(ipAccuracyRadius)).append("\n");
    sb.append("    ipNetSpeedCell: ").append(toIndentedString(ipNetSpeedCell)).append("\n");
    sb.append("    ipMetroCode: ").append(toIndentedString(ipMetroCode)).append("\n");
    sb.append("    ipAreaCode: ").append(toIndentedString(ipAreaCode)).append("\n");
    sb.append("    ipTimeZone: ").append(toIndentedString(ipTimeZone)).append("\n");
    sb.append("    ipRegionName: ").append(toIndentedString(ipRegionName)).append("\n");
    sb.append("    ipDomain: ").append(toIndentedString(ipDomain)).append("\n");
    sb.append("    ipCountryName: ").append(toIndentedString(ipCountryName)).append("\n");
    sb.append("    ipContinentCode: ").append(toIndentedString(ipContinentCode)).append("\n");
    sb.append("    ipCorporateProxy: ").append(toIndentedString(ipCorporateProxy)).append("\n");
    sb.append("    carderEmail: ").append(toIndentedString(carderEmail)).append("\n");
    sb.append("    highRiskUsername: ").append(toIndentedString(highRiskUsername)).append("\n");
    sb.append("    highRiskPassword: ").append(toIndentedString(highRiskPassword)).append("\n");
    sb.append("    riskScore: ").append(toIndentedString(riskScore)).append("\n");
    sb.append("    isTransProxy: ").append(toIndentedString(isTransProxy)).append("\n");
    sb.append("    prepaid: ").append(toIndentedString(prepaid)).append("\n");
    sb.append("    minfraudVersion: ").append(toIndentedString(minfraudVersion)).append("\n");
    sb.append("    serviceLevel: ").append(toIndentedString(serviceLevel)).append("\n");
    sb.append("    explanation: ").append(toIndentedString(explanation)).append("\n");
    sb.append("    femaleName: ").append(toIndentedString(femaleName)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

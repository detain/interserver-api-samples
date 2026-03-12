package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * MaxMind fraud detection scoring data for a credit card transaction.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "MaxMind fraud detection scoring data for a credit card transaction.")

public class AccountInfoMaxMindResponse   {

  private @Valid String distance = null;

  private @Valid String countryMatch = null;

  private @Valid String countryCode = null;

  private @Valid String freeMail = null;

  private @Valid String anonymousProxy = null;

  private @Valid String score = null;

  private @Valid String binMatch = null;

  private @Valid String binCountry = null;

  private @Valid String err = null;

  private @Valid String proxyScore = null;

  private @Valid String ipRegion = null;

  private @Valid String ipCity = null;

  private @Valid String ipLatitude = null;

  private @Valid String ipLongitude = null;

  private @Valid String binName = null;

  private @Valid String ipIsp = null;

  private @Valid String ipOrg = null;

  private @Valid String binNameMatch = null;

  private @Valid String binPhoneMatch = null;

  private @Valid String binPhone = null;

  private @Valid String custPhoneInBillingLoc = null;

  private @Valid String highRiskCountry = null;

  private @Valid String queriesRemaining = null;

  private @Valid String cityPostalMatch = null;

  private @Valid String shipCityPostalMatch = null;

  private @Valid String maxmindID = null;

  private @Valid String ipAsnum = null;

  private @Valid String ipUserType = null;

  private @Valid String ipCountryConf = null;

  private @Valid String ipRegionConf = null;

  private @Valid String ipCityConf = null;

  private @Valid String ipPostalCode = null;

  private @Valid String ipPostalConf = null;

  private @Valid String ipAccuracyRadius = null;

  private @Valid String ipNetSpeedCell = null;

  private @Valid String ipMetroCode = null;

  private @Valid String ipAreaCode = null;

  private @Valid String ipTimeZone = null;

  private @Valid String ipRegionName = null;

  private @Valid String ipDomain = null;

  private @Valid String ipCountryName = null;

  private @Valid String ipContinentCode = null;

  private @Valid String ipCorporateProxy = null;

  private @Valid String carderEmail = null;

  private @Valid String highRiskUsername = null;

  private @Valid String highRiskPassword = null;

  private @Valid OneOfAccountInfoMaxMindResponseRiskScore riskScore = null;

  private @Valid String isTransProxy = null;

  private @Valid String prepaid = null;

  private @Valid String minfraudVersion = null;

  private @Valid String serviceLevel = null;

  private @Valid String explanation = null;

  private @Valid String femaleName = null;

  /**
   **/
  public AccountInfoMaxMindResponse distance(String distance) {
    this.distance = distance;
    return this;
  }

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

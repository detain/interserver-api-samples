package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonCreator;

/**
  * MaxMind fraud detection scoring data for a credit card transaction.
 **/
@Schema(description="MaxMind fraud detection scoring data for a credit card transaction.")
public class AccountInfoMaxMindResponse   {
  
  @Schema(description = "")
  private String distance = null;
  
  @Schema(description = "")
  private String countryMatch = null;
  
  @Schema(description = "")
  private String countryCode = null;
  
  @Schema(description = "")
  private String freeMail = null;
  
  @Schema(description = "")
  private String anonymousProxy = null;
  
  @Schema(description = "")
  private String score = null;
  
  @Schema(description = "")
  private String binMatch = null;
  
  @Schema(description = "")
  private String binCountry = null;
  
  @Schema(description = "")
  private String err = null;
  
  @Schema(description = "")
  private String proxyScore = null;
  
  @Schema(description = "")
  private String ipRegion = null;
  
  @Schema(description = "")
  private String ipCity = null;
  
  @Schema(description = "")
  private String ipLatitude = null;
  
  @Schema(description = "")
  private String ipLongitude = null;
  
  @Schema(description = "")
  private String binName = null;
  
  @Schema(description = "")
  private String ipIsp = null;
  
  @Schema(description = "")
  private String ipOrg = null;
  
  @Schema(description = "")
  private String binNameMatch = null;
  
  @Schema(description = "")
  private String binPhoneMatch = null;
  
  @Schema(description = "")
  private String binPhone = null;
  
  @Schema(description = "")
  private String custPhoneInBillingLoc = null;
  
  @Schema(description = "")
  private String highRiskCountry = null;
  
  @Schema(description = "")
  private String queriesRemaining = null;
  
  @Schema(description = "")
  private String cityPostalMatch = null;
  
  @Schema(description = "")
  private String shipCityPostalMatch = null;
  
  @Schema(description = "")
  private String maxmindID = null;
  
  @Schema(description = "")
  private String ipAsnum = null;
  
  @Schema(description = "")
  private String ipUserType = null;
  
  @Schema(description = "")
  private String ipCountryConf = null;
  
  @Schema(description = "")
  private String ipRegionConf = null;
  
  @Schema(description = "")
  private String ipCityConf = null;
  
  @Schema(description = "")
  private String ipPostalCode = null;
  
  @Schema(description = "")
  private String ipPostalConf = null;
  
  @Schema(description = "")
  private String ipAccuracyRadius = null;
  
  @Schema(description = "")
  private String ipNetSpeedCell = null;
  
  @Schema(description = "")
  private String ipMetroCode = null;
  
  @Schema(description = "")
  private String ipAreaCode = null;
  
  @Schema(description = "")
  private String ipTimeZone = null;
  
  @Schema(description = "")
  private String ipRegionName = null;
  
  @Schema(description = "")
  private String ipDomain = null;
  
  @Schema(description = "")
  private String ipCountryName = null;
  
  @Schema(description = "")
  private String ipContinentCode = null;
  
  @Schema(description = "")
  private String ipCorporateProxy = null;
  
  @Schema(description = "")
  private String carderEmail = null;
  
  @Schema(description = "")
  private String highRiskUsername = null;
  
  @Schema(description = "")
  private String highRiskPassword = null;
  
  @Schema(description = "")
  private OneOfAccountInfoMaxMindResponseRiskScore riskScore = null;
  
  @Schema(description = "")
  private String isTransProxy = null;
  
  @Schema(description = "")
  private String prepaid = null;
  
  @Schema(description = "")
  private String minfraudVersion = null;
  
  @Schema(description = "")
  private String serviceLevel = null;
  
  @Schema(description = "")
  private String explanation = null;
  
  @Schema(description = "")
  private String femaleName = null;
 /**
   * Get distance
   * @return distance
  **/
  @JsonProperty("distance")
  @NotNull
  public String getDistance() {
    return distance;
  }

  public void setDistance(String distance) {
    this.distance = distance;
  }

  public AccountInfoMaxMindResponse distance(String distance) {
    this.distance = distance;
    return this;
  }

 /**
   * Get countryMatch
   * @return countryMatch
  **/
  @JsonProperty("countryMatch")
  @NotNull
  public String getCountryMatch() {
    return countryMatch;
  }

  public void setCountryMatch(String countryMatch) {
    this.countryMatch = countryMatch;
  }

  public AccountInfoMaxMindResponse countryMatch(String countryMatch) {
    this.countryMatch = countryMatch;
    return this;
  }

 /**
   * Get countryCode
   * @return countryCode
  **/
  @JsonProperty("countryCode")
  @NotNull
  public String getCountryCode() {
    return countryCode;
  }

  public void setCountryCode(String countryCode) {
    this.countryCode = countryCode;
  }

  public AccountInfoMaxMindResponse countryCode(String countryCode) {
    this.countryCode = countryCode;
    return this;
  }

 /**
   * Get freeMail
   * @return freeMail
  **/
  @JsonProperty("freeMail")
  @NotNull
  public String getFreeMail() {
    return freeMail;
  }

  public void setFreeMail(String freeMail) {
    this.freeMail = freeMail;
  }

  public AccountInfoMaxMindResponse freeMail(String freeMail) {
    this.freeMail = freeMail;
    return this;
  }

 /**
   * Get anonymousProxy
   * @return anonymousProxy
  **/
  @JsonProperty("anonymousProxy")
  @NotNull
  public String getAnonymousProxy() {
    return anonymousProxy;
  }

  public void setAnonymousProxy(String anonymousProxy) {
    this.anonymousProxy = anonymousProxy;
  }

  public AccountInfoMaxMindResponse anonymousProxy(String anonymousProxy) {
    this.anonymousProxy = anonymousProxy;
    return this;
  }

 /**
   * Get score
   * @return score
  **/
  @JsonProperty("score")
  @NotNull
  public String getScore() {
    return score;
  }

  public void setScore(String score) {
    this.score = score;
  }

  public AccountInfoMaxMindResponse score(String score) {
    this.score = score;
    return this;
  }

 /**
   * Get binMatch
   * @return binMatch
  **/
  @JsonProperty("binMatch")
  @NotNull
  public String getBinMatch() {
    return binMatch;
  }

  public void setBinMatch(String binMatch) {
    this.binMatch = binMatch;
  }

  public AccountInfoMaxMindResponse binMatch(String binMatch) {
    this.binMatch = binMatch;
    return this;
  }

 /**
   * Get binCountry
   * @return binCountry
  **/
  @JsonProperty("binCountry")
  @NotNull
  public String getBinCountry() {
    return binCountry;
  }

  public void setBinCountry(String binCountry) {
    this.binCountry = binCountry;
  }

  public AccountInfoMaxMindResponse binCountry(String binCountry) {
    this.binCountry = binCountry;
    return this;
  }

 /**
   * Get err
   * @return err
  **/
  @JsonProperty("err")
  @NotNull
  public String getErr() {
    return err;
  }

  public void setErr(String err) {
    this.err = err;
  }

  public AccountInfoMaxMindResponse err(String err) {
    this.err = err;
    return this;
  }

 /**
   * Get proxyScore
   * @return proxyScore
  **/
  @JsonProperty("proxyScore")
  @NotNull
  public String getProxyScore() {
    return proxyScore;
  }

  public void setProxyScore(String proxyScore) {
    this.proxyScore = proxyScore;
  }

  public AccountInfoMaxMindResponse proxyScore(String proxyScore) {
    this.proxyScore = proxyScore;
    return this;
  }

 /**
   * Get ipRegion
   * @return ipRegion
  **/
  @JsonProperty("ip_region")
  @NotNull
  public String getIpRegion() {
    return ipRegion;
  }

  public void setIpRegion(String ipRegion) {
    this.ipRegion = ipRegion;
  }

  public AccountInfoMaxMindResponse ipRegion(String ipRegion) {
    this.ipRegion = ipRegion;
    return this;
  }

 /**
   * Get ipCity
   * @return ipCity
  **/
  @JsonProperty("ip_city")
  @NotNull
  public String getIpCity() {
    return ipCity;
  }

  public void setIpCity(String ipCity) {
    this.ipCity = ipCity;
  }

  public AccountInfoMaxMindResponse ipCity(String ipCity) {
    this.ipCity = ipCity;
    return this;
  }

 /**
   * Get ipLatitude
   * @return ipLatitude
  **/
  @JsonProperty("ip_latitude")
  @NotNull
  public String getIpLatitude() {
    return ipLatitude;
  }

  public void setIpLatitude(String ipLatitude) {
    this.ipLatitude = ipLatitude;
  }

  public AccountInfoMaxMindResponse ipLatitude(String ipLatitude) {
    this.ipLatitude = ipLatitude;
    return this;
  }

 /**
   * Get ipLongitude
   * @return ipLongitude
  **/
  @JsonProperty("ip_longitude")
  @NotNull
  public String getIpLongitude() {
    return ipLongitude;
  }

  public void setIpLongitude(String ipLongitude) {
    this.ipLongitude = ipLongitude;
  }

  public AccountInfoMaxMindResponse ipLongitude(String ipLongitude) {
    this.ipLongitude = ipLongitude;
    return this;
  }

 /**
   * Get binName
   * @return binName
  **/
  @JsonProperty("binName")
  @NotNull
  public String getBinName() {
    return binName;
  }

  public void setBinName(String binName) {
    this.binName = binName;
  }

  public AccountInfoMaxMindResponse binName(String binName) {
    this.binName = binName;
    return this;
  }

 /**
   * Get ipIsp
   * @return ipIsp
  **/
  @JsonProperty("ip_isp")
  @NotNull
  public String getIpIsp() {
    return ipIsp;
  }

  public void setIpIsp(String ipIsp) {
    this.ipIsp = ipIsp;
  }

  public AccountInfoMaxMindResponse ipIsp(String ipIsp) {
    this.ipIsp = ipIsp;
    return this;
  }

 /**
   * Get ipOrg
   * @return ipOrg
  **/
  @JsonProperty("ip_org")
  @NotNull
  public String getIpOrg() {
    return ipOrg;
  }

  public void setIpOrg(String ipOrg) {
    this.ipOrg = ipOrg;
  }

  public AccountInfoMaxMindResponse ipOrg(String ipOrg) {
    this.ipOrg = ipOrg;
    return this;
  }

 /**
   * Get binNameMatch
   * @return binNameMatch
  **/
  @JsonProperty("binNameMatch")
  @NotNull
  public String getBinNameMatch() {
    return binNameMatch;
  }

  public void setBinNameMatch(String binNameMatch) {
    this.binNameMatch = binNameMatch;
  }

  public AccountInfoMaxMindResponse binNameMatch(String binNameMatch) {
    this.binNameMatch = binNameMatch;
    return this;
  }

 /**
   * Get binPhoneMatch
   * @return binPhoneMatch
  **/
  @JsonProperty("binPhoneMatch")
  @NotNull
  public String getBinPhoneMatch() {
    return binPhoneMatch;
  }

  public void setBinPhoneMatch(String binPhoneMatch) {
    this.binPhoneMatch = binPhoneMatch;
  }

  public AccountInfoMaxMindResponse binPhoneMatch(String binPhoneMatch) {
    this.binPhoneMatch = binPhoneMatch;
    return this;
  }

 /**
   * Get binPhone
   * @return binPhone
  **/
  @JsonProperty("binPhone")
  @NotNull
  public String getBinPhone() {
    return binPhone;
  }

  public void setBinPhone(String binPhone) {
    this.binPhone = binPhone;
  }

  public AccountInfoMaxMindResponse binPhone(String binPhone) {
    this.binPhone = binPhone;
    return this;
  }

 /**
   * Get custPhoneInBillingLoc
   * @return custPhoneInBillingLoc
  **/
  @JsonProperty("custPhoneInBillingLoc")
  @NotNull
  public String getCustPhoneInBillingLoc() {
    return custPhoneInBillingLoc;
  }

  public void setCustPhoneInBillingLoc(String custPhoneInBillingLoc) {
    this.custPhoneInBillingLoc = custPhoneInBillingLoc;
  }

  public AccountInfoMaxMindResponse custPhoneInBillingLoc(String custPhoneInBillingLoc) {
    this.custPhoneInBillingLoc = custPhoneInBillingLoc;
    return this;
  }

 /**
   * Get highRiskCountry
   * @return highRiskCountry
  **/
  @JsonProperty("highRiskCountry")
  @NotNull
  public String getHighRiskCountry() {
    return highRiskCountry;
  }

  public void setHighRiskCountry(String highRiskCountry) {
    this.highRiskCountry = highRiskCountry;
  }

  public AccountInfoMaxMindResponse highRiskCountry(String highRiskCountry) {
    this.highRiskCountry = highRiskCountry;
    return this;
  }

 /**
   * Get queriesRemaining
   * @return queriesRemaining
  **/
  @JsonProperty("queriesRemaining")
  @NotNull
  public String getQueriesRemaining() {
    return queriesRemaining;
  }

  public void setQueriesRemaining(String queriesRemaining) {
    this.queriesRemaining = queriesRemaining;
  }

  public AccountInfoMaxMindResponse queriesRemaining(String queriesRemaining) {
    this.queriesRemaining = queriesRemaining;
    return this;
  }

 /**
   * Get cityPostalMatch
   * @return cityPostalMatch
  **/
  @JsonProperty("cityPostalMatch")
  @NotNull
  public String getCityPostalMatch() {
    return cityPostalMatch;
  }

  public void setCityPostalMatch(String cityPostalMatch) {
    this.cityPostalMatch = cityPostalMatch;
  }

  public AccountInfoMaxMindResponse cityPostalMatch(String cityPostalMatch) {
    this.cityPostalMatch = cityPostalMatch;
    return this;
  }

 /**
   * Get shipCityPostalMatch
   * @return shipCityPostalMatch
  **/
  @JsonProperty("shipCityPostalMatch")
  @NotNull
  public String getShipCityPostalMatch() {
    return shipCityPostalMatch;
  }

  public void setShipCityPostalMatch(String shipCityPostalMatch) {
    this.shipCityPostalMatch = shipCityPostalMatch;
  }

  public AccountInfoMaxMindResponse shipCityPostalMatch(String shipCityPostalMatch) {
    this.shipCityPostalMatch = shipCityPostalMatch;
    return this;
  }

 /**
   * Get maxmindID
   * @return maxmindID
  **/
  @JsonProperty("maxmindID")
  @NotNull
  public String getMaxmindID() {
    return maxmindID;
  }

  public void setMaxmindID(String maxmindID) {
    this.maxmindID = maxmindID;
  }

  public AccountInfoMaxMindResponse maxmindID(String maxmindID) {
    this.maxmindID = maxmindID;
    return this;
  }

 /**
   * Get ipAsnum
   * @return ipAsnum
  **/
  @JsonProperty("ip_asnum")
  @NotNull
  public String getIpAsnum() {
    return ipAsnum;
  }

  public void setIpAsnum(String ipAsnum) {
    this.ipAsnum = ipAsnum;
  }

  public AccountInfoMaxMindResponse ipAsnum(String ipAsnum) {
    this.ipAsnum = ipAsnum;
    return this;
  }

 /**
   * Get ipUserType
   * @return ipUserType
  **/
  @JsonProperty("ip_userType")
  @NotNull
  public String getIpUserType() {
    return ipUserType;
  }

  public void setIpUserType(String ipUserType) {
    this.ipUserType = ipUserType;
  }

  public AccountInfoMaxMindResponse ipUserType(String ipUserType) {
    this.ipUserType = ipUserType;
    return this;
  }

 /**
   * Get ipCountryConf
   * @return ipCountryConf
  **/
  @JsonProperty("ip_countryConf")
  @NotNull
  public String getIpCountryConf() {
    return ipCountryConf;
  }

  public void setIpCountryConf(String ipCountryConf) {
    this.ipCountryConf = ipCountryConf;
  }

  public AccountInfoMaxMindResponse ipCountryConf(String ipCountryConf) {
    this.ipCountryConf = ipCountryConf;
    return this;
  }

 /**
   * Get ipRegionConf
   * @return ipRegionConf
  **/
  @JsonProperty("ip_regionConf")
  @NotNull
  public String getIpRegionConf() {
    return ipRegionConf;
  }

  public void setIpRegionConf(String ipRegionConf) {
    this.ipRegionConf = ipRegionConf;
  }

  public AccountInfoMaxMindResponse ipRegionConf(String ipRegionConf) {
    this.ipRegionConf = ipRegionConf;
    return this;
  }

 /**
   * Get ipCityConf
   * @return ipCityConf
  **/
  @JsonProperty("ip_cityConf")
  @NotNull
  public String getIpCityConf() {
    return ipCityConf;
  }

  public void setIpCityConf(String ipCityConf) {
    this.ipCityConf = ipCityConf;
  }

  public AccountInfoMaxMindResponse ipCityConf(String ipCityConf) {
    this.ipCityConf = ipCityConf;
    return this;
  }

 /**
   * Get ipPostalCode
   * @return ipPostalCode
  **/
  @JsonProperty("ip_postalCode")
  @NotNull
  public String getIpPostalCode() {
    return ipPostalCode;
  }

  public void setIpPostalCode(String ipPostalCode) {
    this.ipPostalCode = ipPostalCode;
  }

  public AccountInfoMaxMindResponse ipPostalCode(String ipPostalCode) {
    this.ipPostalCode = ipPostalCode;
    return this;
  }

 /**
   * Get ipPostalConf
   * @return ipPostalConf
  **/
  @JsonProperty("ip_postalConf")
  @NotNull
  public String getIpPostalConf() {
    return ipPostalConf;
  }

  public void setIpPostalConf(String ipPostalConf) {
    this.ipPostalConf = ipPostalConf;
  }

  public AccountInfoMaxMindResponse ipPostalConf(String ipPostalConf) {
    this.ipPostalConf = ipPostalConf;
    return this;
  }

 /**
   * Get ipAccuracyRadius
   * @return ipAccuracyRadius
  **/
  @JsonProperty("ip_accuracyRadius")
  @NotNull
  public String getIpAccuracyRadius() {
    return ipAccuracyRadius;
  }

  public void setIpAccuracyRadius(String ipAccuracyRadius) {
    this.ipAccuracyRadius = ipAccuracyRadius;
  }

  public AccountInfoMaxMindResponse ipAccuracyRadius(String ipAccuracyRadius) {
    this.ipAccuracyRadius = ipAccuracyRadius;
    return this;
  }

 /**
   * Get ipNetSpeedCell
   * @return ipNetSpeedCell
  **/
  @JsonProperty("ip_netSpeedCell")
  @NotNull
  public String getIpNetSpeedCell() {
    return ipNetSpeedCell;
  }

  public void setIpNetSpeedCell(String ipNetSpeedCell) {
    this.ipNetSpeedCell = ipNetSpeedCell;
  }

  public AccountInfoMaxMindResponse ipNetSpeedCell(String ipNetSpeedCell) {
    this.ipNetSpeedCell = ipNetSpeedCell;
    return this;
  }

 /**
   * Get ipMetroCode
   * @return ipMetroCode
  **/
  @JsonProperty("ip_metroCode")
  @NotNull
  public String getIpMetroCode() {
    return ipMetroCode;
  }

  public void setIpMetroCode(String ipMetroCode) {
    this.ipMetroCode = ipMetroCode;
  }

  public AccountInfoMaxMindResponse ipMetroCode(String ipMetroCode) {
    this.ipMetroCode = ipMetroCode;
    return this;
  }

 /**
   * Get ipAreaCode
   * @return ipAreaCode
  **/
  @JsonProperty("ip_areaCode")
  @NotNull
  public String getIpAreaCode() {
    return ipAreaCode;
  }

  public void setIpAreaCode(String ipAreaCode) {
    this.ipAreaCode = ipAreaCode;
  }

  public AccountInfoMaxMindResponse ipAreaCode(String ipAreaCode) {
    this.ipAreaCode = ipAreaCode;
    return this;
  }

 /**
   * Get ipTimeZone
   * @return ipTimeZone
  **/
  @JsonProperty("ip_timeZone")
  @NotNull
  public String getIpTimeZone() {
    return ipTimeZone;
  }

  public void setIpTimeZone(String ipTimeZone) {
    this.ipTimeZone = ipTimeZone;
  }

  public AccountInfoMaxMindResponse ipTimeZone(String ipTimeZone) {
    this.ipTimeZone = ipTimeZone;
    return this;
  }

 /**
   * Get ipRegionName
   * @return ipRegionName
  **/
  @JsonProperty("ip_regionName")
  @NotNull
  public String getIpRegionName() {
    return ipRegionName;
  }

  public void setIpRegionName(String ipRegionName) {
    this.ipRegionName = ipRegionName;
  }

  public AccountInfoMaxMindResponse ipRegionName(String ipRegionName) {
    this.ipRegionName = ipRegionName;
    return this;
  }

 /**
   * Get ipDomain
   * @return ipDomain
  **/
  @JsonProperty("ip_domain")
  @NotNull
  public String getIpDomain() {
    return ipDomain;
  }

  public void setIpDomain(String ipDomain) {
    this.ipDomain = ipDomain;
  }

  public AccountInfoMaxMindResponse ipDomain(String ipDomain) {
    this.ipDomain = ipDomain;
    return this;
  }

 /**
   * Get ipCountryName
   * @return ipCountryName
  **/
  @JsonProperty("ip_countryName")
  @NotNull
  public String getIpCountryName() {
    return ipCountryName;
  }

  public void setIpCountryName(String ipCountryName) {
    this.ipCountryName = ipCountryName;
  }

  public AccountInfoMaxMindResponse ipCountryName(String ipCountryName) {
    this.ipCountryName = ipCountryName;
    return this;
  }

 /**
   * Get ipContinentCode
   * @return ipContinentCode
  **/
  @JsonProperty("ip_continentCode")
  @NotNull
  public String getIpContinentCode() {
    return ipContinentCode;
  }

  public void setIpContinentCode(String ipContinentCode) {
    this.ipContinentCode = ipContinentCode;
  }

  public AccountInfoMaxMindResponse ipContinentCode(String ipContinentCode) {
    this.ipContinentCode = ipContinentCode;
    return this;
  }

 /**
   * Get ipCorporateProxy
   * @return ipCorporateProxy
  **/
  @JsonProperty("ip_corporateProxy")
  @NotNull
  public String getIpCorporateProxy() {
    return ipCorporateProxy;
  }

  public void setIpCorporateProxy(String ipCorporateProxy) {
    this.ipCorporateProxy = ipCorporateProxy;
  }

  public AccountInfoMaxMindResponse ipCorporateProxy(String ipCorporateProxy) {
    this.ipCorporateProxy = ipCorporateProxy;
    return this;
  }

 /**
   * Get carderEmail
   * @return carderEmail
  **/
  @JsonProperty("carderEmail")
  @NotNull
  public String getCarderEmail() {
    return carderEmail;
  }

  public void setCarderEmail(String carderEmail) {
    this.carderEmail = carderEmail;
  }

  public AccountInfoMaxMindResponse carderEmail(String carderEmail) {
    this.carderEmail = carderEmail;
    return this;
  }

 /**
   * Get highRiskUsername
   * @return highRiskUsername
  **/
  @JsonProperty("highRiskUsername")
  @NotNull
  public String getHighRiskUsername() {
    return highRiskUsername;
  }

  public void setHighRiskUsername(String highRiskUsername) {
    this.highRiskUsername = highRiskUsername;
  }

  public AccountInfoMaxMindResponse highRiskUsername(String highRiskUsername) {
    this.highRiskUsername = highRiskUsername;
    return this;
  }

 /**
   * Get highRiskPassword
   * @return highRiskPassword
  **/
  @JsonProperty("highRiskPassword")
  @NotNull
  public String getHighRiskPassword() {
    return highRiskPassword;
  }

  public void setHighRiskPassword(String highRiskPassword) {
    this.highRiskPassword = highRiskPassword;
  }

  public AccountInfoMaxMindResponse highRiskPassword(String highRiskPassword) {
    this.highRiskPassword = highRiskPassword;
    return this;
  }

 /**
   * Get riskScore
   * @return riskScore
  **/
  @JsonProperty("riskScore")
  @NotNull
  public OneOfAccountInfoMaxMindResponseRiskScore getRiskScore() {
    return riskScore;
  }

  public void setRiskScore(OneOfAccountInfoMaxMindResponseRiskScore riskScore) {
    this.riskScore = riskScore;
  }

  public AccountInfoMaxMindResponse riskScore(OneOfAccountInfoMaxMindResponseRiskScore riskScore) {
    this.riskScore = riskScore;
    return this;
  }

 /**
   * Get isTransProxy
   * @return isTransProxy
  **/
  @JsonProperty("isTransProxy")
  @NotNull
  public String getIsTransProxy() {
    return isTransProxy;
  }

  public void setIsTransProxy(String isTransProxy) {
    this.isTransProxy = isTransProxy;
  }

  public AccountInfoMaxMindResponse isTransProxy(String isTransProxy) {
    this.isTransProxy = isTransProxy;
    return this;
  }

 /**
   * Get prepaid
   * @return prepaid
  **/
  @JsonProperty("prepaid")
  @NotNull
  public String getPrepaid() {
    return prepaid;
  }

  public void setPrepaid(String prepaid) {
    this.prepaid = prepaid;
  }

  public AccountInfoMaxMindResponse prepaid(String prepaid) {
    this.prepaid = prepaid;
    return this;
  }

 /**
   * Get minfraudVersion
   * @return minfraudVersion
  **/
  @JsonProperty("minfraud_version")
  @NotNull
  public String getMinfraudVersion() {
    return minfraudVersion;
  }

  public void setMinfraudVersion(String minfraudVersion) {
    this.minfraudVersion = minfraudVersion;
  }

  public AccountInfoMaxMindResponse minfraudVersion(String minfraudVersion) {
    this.minfraudVersion = minfraudVersion;
    return this;
  }

 /**
   * Get serviceLevel
   * @return serviceLevel
  **/
  @JsonProperty("service_level")
  @NotNull
  public String getServiceLevel() {
    return serviceLevel;
  }

  public void setServiceLevel(String serviceLevel) {
    this.serviceLevel = serviceLevel;
  }

  public AccountInfoMaxMindResponse serviceLevel(String serviceLevel) {
    this.serviceLevel = serviceLevel;
    return this;
  }

 /**
   * Get explanation
   * @return explanation
  **/
  @JsonProperty("explanation")
  @NotNull
  public String getExplanation() {
    return explanation;
  }

  public void setExplanation(String explanation) {
    this.explanation = explanation;
  }

  public AccountInfoMaxMindResponse explanation(String explanation) {
    this.explanation = explanation;
    return this;
  }

 /**
   * Get femaleName
   * @return femaleName
  **/
  @JsonProperty("female_name")
  @NotNull
  public String getFemaleName() {
    return femaleName;
  }

  public void setFemaleName(String femaleName) {
    this.femaleName = femaleName;
  }

  public AccountInfoMaxMindResponse femaleName(String femaleName) {
    this.femaleName = femaleName;
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

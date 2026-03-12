using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// MaxMind fraud detection scoring data for a credit card transaction.
  /// </summary>
  [DataContract]
  public class AccountInfoMaxMindResponse {
    /// <summary>
    /// Gets or Sets Distance
    /// </summary>
    [DataMember(Name="distance", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "distance")]
    public string Distance { get; set; }

    /// <summary>
    /// Gets or Sets CountryMatch
    /// </summary>
    [DataMember(Name="countryMatch", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "countryMatch")]
    public string CountryMatch { get; set; }

    /// <summary>
    /// Gets or Sets CountryCode
    /// </summary>
    [DataMember(Name="countryCode", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "countryCode")]
    public string CountryCode { get; set; }

    /// <summary>
    /// Gets or Sets FreeMail
    /// </summary>
    [DataMember(Name="freeMail", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "freeMail")]
    public string FreeMail { get; set; }

    /// <summary>
    /// Gets or Sets AnonymousProxy
    /// </summary>
    [DataMember(Name="anonymousProxy", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "anonymousProxy")]
    public string AnonymousProxy { get; set; }

    /// <summary>
    /// Gets or Sets Score
    /// </summary>
    [DataMember(Name="score", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "score")]
    public string Score { get; set; }

    /// <summary>
    /// Gets or Sets BinMatch
    /// </summary>
    [DataMember(Name="binMatch", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "binMatch")]
    public string BinMatch { get; set; }

    /// <summary>
    /// Gets or Sets BinCountry
    /// </summary>
    [DataMember(Name="binCountry", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "binCountry")]
    public string BinCountry { get; set; }

    /// <summary>
    /// Gets or Sets Err
    /// </summary>
    [DataMember(Name="err", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "err")]
    public string Err { get; set; }

    /// <summary>
    /// Gets or Sets ProxyScore
    /// </summary>
    [DataMember(Name="proxyScore", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "proxyScore")]
    public string ProxyScore { get; set; }

    /// <summary>
    /// Gets or Sets IpRegion
    /// </summary>
    [DataMember(Name="ip_region", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ip_region")]
    public string IpRegion { get; set; }

    /// <summary>
    /// Gets or Sets IpCity
    /// </summary>
    [DataMember(Name="ip_city", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ip_city")]
    public string IpCity { get; set; }

    /// <summary>
    /// Gets or Sets IpLatitude
    /// </summary>
    [DataMember(Name="ip_latitude", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ip_latitude")]
    public string IpLatitude { get; set; }

    /// <summary>
    /// Gets or Sets IpLongitude
    /// </summary>
    [DataMember(Name="ip_longitude", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ip_longitude")]
    public string IpLongitude { get; set; }

    /// <summary>
    /// Gets or Sets BinName
    /// </summary>
    [DataMember(Name="binName", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "binName")]
    public string BinName { get; set; }

    /// <summary>
    /// Gets or Sets IpIsp
    /// </summary>
    [DataMember(Name="ip_isp", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ip_isp")]
    public string IpIsp { get; set; }

    /// <summary>
    /// Gets or Sets IpOrg
    /// </summary>
    [DataMember(Name="ip_org", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ip_org")]
    public string IpOrg { get; set; }

    /// <summary>
    /// Gets or Sets BinNameMatch
    /// </summary>
    [DataMember(Name="binNameMatch", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "binNameMatch")]
    public string BinNameMatch { get; set; }

    /// <summary>
    /// Gets or Sets BinPhoneMatch
    /// </summary>
    [DataMember(Name="binPhoneMatch", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "binPhoneMatch")]
    public string BinPhoneMatch { get; set; }

    /// <summary>
    /// Gets or Sets BinPhone
    /// </summary>
    [DataMember(Name="binPhone", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "binPhone")]
    public string BinPhone { get; set; }

    /// <summary>
    /// Gets or Sets CustPhoneInBillingLoc
    /// </summary>
    [DataMember(Name="custPhoneInBillingLoc", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "custPhoneInBillingLoc")]
    public string CustPhoneInBillingLoc { get; set; }

    /// <summary>
    /// Gets or Sets HighRiskCountry
    /// </summary>
    [DataMember(Name="highRiskCountry", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "highRiskCountry")]
    public string HighRiskCountry { get; set; }

    /// <summary>
    /// Gets or Sets QueriesRemaining
    /// </summary>
    [DataMember(Name="queriesRemaining", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "queriesRemaining")]
    public string QueriesRemaining { get; set; }

    /// <summary>
    /// Gets or Sets CityPostalMatch
    /// </summary>
    [DataMember(Name="cityPostalMatch", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cityPostalMatch")]
    public string CityPostalMatch { get; set; }

    /// <summary>
    /// Gets or Sets ShipCityPostalMatch
    /// </summary>
    [DataMember(Name="shipCityPostalMatch", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "shipCityPostalMatch")]
    public string ShipCityPostalMatch { get; set; }

    /// <summary>
    /// Gets or Sets MaxmindID
    /// </summary>
    [DataMember(Name="maxmindID", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "maxmindID")]
    public string MaxmindID { get; set; }

    /// <summary>
    /// Gets or Sets IpAsnum
    /// </summary>
    [DataMember(Name="ip_asnum", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ip_asnum")]
    public string IpAsnum { get; set; }

    /// <summary>
    /// Gets or Sets IpUserType
    /// </summary>
    [DataMember(Name="ip_userType", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ip_userType")]
    public string IpUserType { get; set; }

    /// <summary>
    /// Gets or Sets IpCountryConf
    /// </summary>
    [DataMember(Name="ip_countryConf", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ip_countryConf")]
    public string IpCountryConf { get; set; }

    /// <summary>
    /// Gets or Sets IpRegionConf
    /// </summary>
    [DataMember(Name="ip_regionConf", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ip_regionConf")]
    public string IpRegionConf { get; set; }

    /// <summary>
    /// Gets or Sets IpCityConf
    /// </summary>
    [DataMember(Name="ip_cityConf", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ip_cityConf")]
    public string IpCityConf { get; set; }

    /// <summary>
    /// Gets or Sets IpPostalCode
    /// </summary>
    [DataMember(Name="ip_postalCode", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ip_postalCode")]
    public string IpPostalCode { get; set; }

    /// <summary>
    /// Gets or Sets IpPostalConf
    /// </summary>
    [DataMember(Name="ip_postalConf", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ip_postalConf")]
    public string IpPostalConf { get; set; }

    /// <summary>
    /// Gets or Sets IpAccuracyRadius
    /// </summary>
    [DataMember(Name="ip_accuracyRadius", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ip_accuracyRadius")]
    public string IpAccuracyRadius { get; set; }

    /// <summary>
    /// Gets or Sets IpNetSpeedCell
    /// </summary>
    [DataMember(Name="ip_netSpeedCell", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ip_netSpeedCell")]
    public string IpNetSpeedCell { get; set; }

    /// <summary>
    /// Gets or Sets IpMetroCode
    /// </summary>
    [DataMember(Name="ip_metroCode", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ip_metroCode")]
    public string IpMetroCode { get; set; }

    /// <summary>
    /// Gets or Sets IpAreaCode
    /// </summary>
    [DataMember(Name="ip_areaCode", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ip_areaCode")]
    public string IpAreaCode { get; set; }

    /// <summary>
    /// Gets or Sets IpTimeZone
    /// </summary>
    [DataMember(Name="ip_timeZone", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ip_timeZone")]
    public string IpTimeZone { get; set; }

    /// <summary>
    /// Gets or Sets IpRegionName
    /// </summary>
    [DataMember(Name="ip_regionName", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ip_regionName")]
    public string IpRegionName { get; set; }

    /// <summary>
    /// Gets or Sets IpDomain
    /// </summary>
    [DataMember(Name="ip_domain", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ip_domain")]
    public string IpDomain { get; set; }

    /// <summary>
    /// Gets or Sets IpCountryName
    /// </summary>
    [DataMember(Name="ip_countryName", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ip_countryName")]
    public string IpCountryName { get; set; }

    /// <summary>
    /// Gets or Sets IpContinentCode
    /// </summary>
    [DataMember(Name="ip_continentCode", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ip_continentCode")]
    public string IpContinentCode { get; set; }

    /// <summary>
    /// Gets or Sets IpCorporateProxy
    /// </summary>
    [DataMember(Name="ip_corporateProxy", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ip_corporateProxy")]
    public string IpCorporateProxy { get; set; }

    /// <summary>
    /// Gets or Sets CarderEmail
    /// </summary>
    [DataMember(Name="carderEmail", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "carderEmail")]
    public string CarderEmail { get; set; }

    /// <summary>
    /// Gets or Sets HighRiskUsername
    /// </summary>
    [DataMember(Name="highRiskUsername", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "highRiskUsername")]
    public string HighRiskUsername { get; set; }

    /// <summary>
    /// Gets or Sets HighRiskPassword
    /// </summary>
    [DataMember(Name="highRiskPassword", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "highRiskPassword")]
    public string HighRiskPassword { get; set; }

    /// <summary>
    /// Gets or Sets RiskScore
    /// </summary>
    [DataMember(Name="riskScore", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "riskScore")]
    public OneOfAccountInfoMaxMindResponseRiskScore RiskScore { get; set; }

    /// <summary>
    /// Gets or Sets IsTransProxy
    /// </summary>
    [DataMember(Name="isTransProxy", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "isTransProxy")]
    public string IsTransProxy { get; set; }

    /// <summary>
    /// Gets or Sets Prepaid
    /// </summary>
    [DataMember(Name="prepaid", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "prepaid")]
    public string Prepaid { get; set; }

    /// <summary>
    /// Gets or Sets MinfraudVersion
    /// </summary>
    [DataMember(Name="minfraud_version", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "minfraud_version")]
    public string MinfraudVersion { get; set; }

    /// <summary>
    /// Gets or Sets ServiceLevel
    /// </summary>
    [DataMember(Name="service_level", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_level")]
    public string ServiceLevel { get; set; }

    /// <summary>
    /// Gets or Sets Explanation
    /// </summary>
    [DataMember(Name="explanation", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "explanation")]
    public string Explanation { get; set; }

    /// <summary>
    /// Gets or Sets FemaleName
    /// </summary>
    [DataMember(Name="female_name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "female_name")]
    public string FemaleName { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class AccountInfoMaxMindResponse {\n");
      sb.Append("  Distance: ").Append(Distance).Append("\n");
      sb.Append("  CountryMatch: ").Append(CountryMatch).Append("\n");
      sb.Append("  CountryCode: ").Append(CountryCode).Append("\n");
      sb.Append("  FreeMail: ").Append(FreeMail).Append("\n");
      sb.Append("  AnonymousProxy: ").Append(AnonymousProxy).Append("\n");
      sb.Append("  Score: ").Append(Score).Append("\n");
      sb.Append("  BinMatch: ").Append(BinMatch).Append("\n");
      sb.Append("  BinCountry: ").Append(BinCountry).Append("\n");
      sb.Append("  Err: ").Append(Err).Append("\n");
      sb.Append("  ProxyScore: ").Append(ProxyScore).Append("\n");
      sb.Append("  IpRegion: ").Append(IpRegion).Append("\n");
      sb.Append("  IpCity: ").Append(IpCity).Append("\n");
      sb.Append("  IpLatitude: ").Append(IpLatitude).Append("\n");
      sb.Append("  IpLongitude: ").Append(IpLongitude).Append("\n");
      sb.Append("  BinName: ").Append(BinName).Append("\n");
      sb.Append("  IpIsp: ").Append(IpIsp).Append("\n");
      sb.Append("  IpOrg: ").Append(IpOrg).Append("\n");
      sb.Append("  BinNameMatch: ").Append(BinNameMatch).Append("\n");
      sb.Append("  BinPhoneMatch: ").Append(BinPhoneMatch).Append("\n");
      sb.Append("  BinPhone: ").Append(BinPhone).Append("\n");
      sb.Append("  CustPhoneInBillingLoc: ").Append(CustPhoneInBillingLoc).Append("\n");
      sb.Append("  HighRiskCountry: ").Append(HighRiskCountry).Append("\n");
      sb.Append("  QueriesRemaining: ").Append(QueriesRemaining).Append("\n");
      sb.Append("  CityPostalMatch: ").Append(CityPostalMatch).Append("\n");
      sb.Append("  ShipCityPostalMatch: ").Append(ShipCityPostalMatch).Append("\n");
      sb.Append("  MaxmindID: ").Append(MaxmindID).Append("\n");
      sb.Append("  IpAsnum: ").Append(IpAsnum).Append("\n");
      sb.Append("  IpUserType: ").Append(IpUserType).Append("\n");
      sb.Append("  IpCountryConf: ").Append(IpCountryConf).Append("\n");
      sb.Append("  IpRegionConf: ").Append(IpRegionConf).Append("\n");
      sb.Append("  IpCityConf: ").Append(IpCityConf).Append("\n");
      sb.Append("  IpPostalCode: ").Append(IpPostalCode).Append("\n");
      sb.Append("  IpPostalConf: ").Append(IpPostalConf).Append("\n");
      sb.Append("  IpAccuracyRadius: ").Append(IpAccuracyRadius).Append("\n");
      sb.Append("  IpNetSpeedCell: ").Append(IpNetSpeedCell).Append("\n");
      sb.Append("  IpMetroCode: ").Append(IpMetroCode).Append("\n");
      sb.Append("  IpAreaCode: ").Append(IpAreaCode).Append("\n");
      sb.Append("  IpTimeZone: ").Append(IpTimeZone).Append("\n");
      sb.Append("  IpRegionName: ").Append(IpRegionName).Append("\n");
      sb.Append("  IpDomain: ").Append(IpDomain).Append("\n");
      sb.Append("  IpCountryName: ").Append(IpCountryName).Append("\n");
      sb.Append("  IpContinentCode: ").Append(IpContinentCode).Append("\n");
      sb.Append("  IpCorporateProxy: ").Append(IpCorporateProxy).Append("\n");
      sb.Append("  CarderEmail: ").Append(CarderEmail).Append("\n");
      sb.Append("  HighRiskUsername: ").Append(HighRiskUsername).Append("\n");
      sb.Append("  HighRiskPassword: ").Append(HighRiskPassword).Append("\n");
      sb.Append("  RiskScore: ").Append(RiskScore).Append("\n");
      sb.Append("  IsTransProxy: ").Append(IsTransProxy).Append("\n");
      sb.Append("  Prepaid: ").Append(Prepaid).Append("\n");
      sb.Append("  MinfraudVersion: ").Append(MinfraudVersion).Append("\n");
      sb.Append("  ServiceLevel: ").Append(ServiceLevel).Append("\n");
      sb.Append("  Explanation: ").Append(Explanation).Append("\n");
      sb.Append("  FemaleName: ").Append(FemaleName).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }

    /// <summary>
    /// Get the JSON string presentation of the object
    /// </summary>
    /// <returns>JSON string presentation of the object</returns>
    public string ToJson() {
      return JsonConvert.SerializeObject(this, Formatting.Indented);
    }

}
}

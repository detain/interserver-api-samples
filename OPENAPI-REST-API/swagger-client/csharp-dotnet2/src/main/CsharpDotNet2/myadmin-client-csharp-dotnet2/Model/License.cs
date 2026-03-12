using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// 
  /// </summary>
  [DataContract]
  public class License {
    /// <summary>
    /// Gets or Sets ServiceInfo
    /// </summary>
    [DataMember(Name="serviceInfo", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "serviceInfo")]
    public LicenseServiceInfo ServiceInfo { get; set; }

    /// <summary>
    /// Gets or Sets ClientLinks
    /// </summary>
    [DataMember(Name="client_links", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "client_links")]
    public List<LicenseClientLink> ClientLinks { get; set; }

    /// <summary>
    /// Gets or Sets BillingDetails
    /// </summary>
    [DataMember(Name="billingDetails", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "billingDetails")]
    public LicenseBillingDetails BillingDetails { get; set; }

    /// <summary>
    /// Customer's currency
    /// </summary>
    /// <value>Customer's currency</value>
    [DataMember(Name="custCurrency", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "custCurrency")]
    public string CustCurrency { get; set; }

    /// <summary>
    /// Currency symbol for customer
    /// </summary>
    /// <value>Currency symbol for customer</value>
    [DataMember(Name="custCurrencySymbol", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "custCurrencySymbol")]
    public string CustCurrencySymbol { get; set; }

    /// <summary>
    /// Package name
    /// </summary>
    /// <value>Package name</value>
    [DataMember(Name="package", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "package")]
    public string Package { get; set; }

    /// <summary>
    /// Extra service information
    /// </summary>
    /// <value>Extra service information</value>
    [DataMember(Name="serviceExtra", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "serviceExtra")]
    public List<string> ServiceExtra { get; set; }

    /// <summary>
    /// Gets or Sets ExtraInfoTables
    /// </summary>
    [DataMember(Name="extraInfoTables", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "extraInfoTables")]
    public LicenseExtraInfoTables ExtraInfoTables { get; set; }

    /// <summary>
    /// Extra service overview information
    /// </summary>
    /// <value>Extra service overview information</value>
    [DataMember(Name="service_overview_extra", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_overview_extra")]
    public string ServiceOverviewExtra { get; set; }

    /// <summary>
    /// Gets or Sets ServiceType
    /// </summary>
    [DataMember(Name="serviceType", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "serviceType")]
    public LicenseServiceType ServiceType { get; set; }

    /// <summary>
    /// License key
    /// </summary>
    /// <value>License key</value>
    [DataMember(Name="license_key", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "license_key")]
    public string LicenseKey { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class License {\n");
      sb.Append("  ServiceInfo: ").Append(ServiceInfo).Append("\n");
      sb.Append("  ClientLinks: ").Append(ClientLinks).Append("\n");
      sb.Append("  BillingDetails: ").Append(BillingDetails).Append("\n");
      sb.Append("  CustCurrency: ").Append(CustCurrency).Append("\n");
      sb.Append("  CustCurrencySymbol: ").Append(CustCurrencySymbol).Append("\n");
      sb.Append("  Package: ").Append(Package).Append("\n");
      sb.Append("  ServiceExtra: ").Append(ServiceExtra).Append("\n");
      sb.Append("  ExtraInfoTables: ").Append(ExtraInfoTables).Append("\n");
      sb.Append("  ServiceOverviewExtra: ").Append(ServiceOverviewExtra).Append("\n");
      sb.Append("  ServiceType: ").Append(ServiceType).Append("\n");
      sb.Append("  LicenseKey: ").Append(LicenseKey).Append("\n");
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

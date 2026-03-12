using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Full detail view of a backup service including billing, service info, and configuration.
  /// </summary>
  [DataContract]
  public class Backup {
    /// <summary>
    /// Gets or Sets ServiceInfo
    /// </summary>
    [DataMember(Name="serviceInfo", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "serviceInfo")]
    public BackupServiceInfo ServiceInfo { get; set; }

    /// <summary>
    /// Gets or Sets ClientLinks
    /// </summary>
    [DataMember(Name="client_links", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "client_links")]
    public List<BackupClientLink> ClientLinks { get; set; }

    /// <summary>
    /// Gets or Sets BillingDetails
    /// </summary>
    [DataMember(Name="billingDetails", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "billingDetails")]
    public BackupBillingDetails BillingDetails { get; set; }

    /// <summary>
    /// Customer's currency.
    /// </summary>
    /// <value>Customer's currency.</value>
    [DataMember(Name="custCurrency", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "custCurrency")]
    public string CustCurrency { get; set; }

    /// <summary>
    /// Customer's currency symbol.
    /// </summary>
    /// <value>Customer's currency symbol.</value>
    [DataMember(Name="custCurrencySymbol", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "custCurrencySymbol")]
    public string CustCurrencySymbol { get; set; }

    /// <summary>
    /// Gets or Sets ServiceMaster
    /// </summary>
    [DataMember(Name="serviceMaster", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "serviceMaster")]
    public BackupServiceMaster ServiceMaster { get; set; }

    /// <summary>
    /// Package information.
    /// </summary>
    /// <value>Package information.</value>
    [DataMember(Name="package", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "package")]
    public string Package { get; set; }

    /// <summary>
    /// Gets or Sets ServiceExtra
    /// </summary>
    [DataMember(Name="serviceExtra", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "serviceExtra")]
    public string ServiceExtra { get; set; }

    /// <summary>
    /// Gets or Sets ExtraInfoTables
    /// </summary>
    [DataMember(Name="extraInfoTables", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "extraInfoTables")]
    public BackupExtraInfoTables ExtraInfoTables { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Backup {\n");
      sb.Append("  ServiceInfo: ").Append(ServiceInfo).Append("\n");
      sb.Append("  ClientLinks: ").Append(ClientLinks).Append("\n");
      sb.Append("  BillingDetails: ").Append(BillingDetails).Append("\n");
      sb.Append("  CustCurrency: ").Append(CustCurrency).Append("\n");
      sb.Append("  CustCurrencySymbol: ").Append(CustCurrencySymbol).Append("\n");
      sb.Append("  ServiceMaster: ").Append(ServiceMaster).Append("\n");
      sb.Append("  Package: ").Append(Package).Append("\n");
      sb.Append("  ServiceExtra: ").Append(ServiceExtra).Append("\n");
      sb.Append("  ExtraInfoTables: ").Append(ExtraInfoTables).Append("\n");
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

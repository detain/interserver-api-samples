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
  public class Vps {
    /// <summary>
    /// Gets or Sets ServiceInfo
    /// </summary>
    [DataMember(Name="serviceInfo", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "serviceInfo")]
    public VpsServiceInfo ServiceInfo { get; set; }

    /// <summary>
    /// Gets or Sets ClientLinks
    /// </summary>
    [DataMember(Name="client_links", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "client_links")]
    public List<VpsClientLink> ClientLinks { get; set; }

    /// <summary>
    /// Gets or Sets BillingDetails
    /// </summary>
    [DataMember(Name="billingDetails", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "billingDetails")]
    public VpsBillingDetails BillingDetails { get; set; }

    /// <summary>
    /// Gets or Sets CustCurrency
    /// </summary>
    [DataMember(Name="custCurrency", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "custCurrency")]
    public string CustCurrency { get; set; }

    /// <summary>
    /// Gets or Sets CustCurrencySymbol
    /// </summary>
    [DataMember(Name="custCurrencySymbol", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "custCurrencySymbol")]
    public string CustCurrencySymbol { get; set; }

    /// <summary>
    /// Gets or Sets ServiceMaster
    /// </summary>
    [DataMember(Name="serviceMaster", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "serviceMaster")]
    public VpsServiceMaster ServiceMaster { get; set; }

    /// <summary>
    /// Gets or Sets Package
    /// </summary>
    [DataMember(Name="package", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "package")]
    public string Package { get; set; }

    /// <summary>
    /// Gets or Sets OsTemplate
    /// </summary>
    [DataMember(Name="os_template", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "os_template")]
    public string OsTemplate { get; set; }

    /// <summary>
    /// Gets or Sets ServiceExtra
    /// </summary>
    [DataMember(Name="serviceExtra", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "serviceExtra")]
    public VpsServiceExtra ServiceExtra { get; set; }

    /// <summary>
    /// Gets or Sets ExtraInfoTables
    /// </summary>
    [DataMember(Name="extraInfoTables", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "extraInfoTables")]
    public VpsExtraInfoTables ExtraInfoTables { get; set; }

    /// <summary>
    /// Gets or Sets CpuGraphData
    /// </summary>
    [DataMember(Name="cpu_graph_data", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cpu_graph_data")]
    public Object CpuGraphData { get; set; }

    /// <summary>
    /// Gets or Sets Module
    /// </summary>
    [DataMember(Name="module", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "module")]
    public string Module { get; set; }

    /// <summary>
    /// Gets or Sets Token
    /// </summary>
    [DataMember(Name="token", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "token")]
    public string Token { get; set; }

    /// <summary>
    /// Gets or Sets DaLink
    /// </summary>
    [DataMember(Name="da_link", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "da_link")]
    public int? DaLink { get; set; }

    /// <summary>
    /// Gets or Sets SrLink
    /// </summary>
    [DataMember(Name="sr_link", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "sr_link")]
    public int? SrLink { get; set; }

    /// <summary>
    /// Gets or Sets CpData
    /// </summary>
    [DataMember(Name="cp_data", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cp_data")]
    public VpsCPData CpData { get; set; }

    /// <summary>
    /// Gets or Sets DaData
    /// </summary>
    [DataMember(Name="da_data", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "da_data")]
    public VpsDAData DaData { get; set; }

    /// <summary>
    /// Gets or Sets Plesk12Data
    /// </summary>
    [DataMember(Name="plesk12_data", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "plesk12_data")]
    public VpsPlesk12Data Plesk12Data { get; set; }

    /// <summary>
    /// Gets or Sets ServiceAddons
    /// </summary>
    [DataMember(Name="serviceAddons", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "serviceAddons")]
    public VpsServiceAddons ServiceAddons { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Vps {\n");
      sb.Append("  ServiceInfo: ").Append(ServiceInfo).Append("\n");
      sb.Append("  ClientLinks: ").Append(ClientLinks).Append("\n");
      sb.Append("  BillingDetails: ").Append(BillingDetails).Append("\n");
      sb.Append("  CustCurrency: ").Append(CustCurrency).Append("\n");
      sb.Append("  CustCurrencySymbol: ").Append(CustCurrencySymbol).Append("\n");
      sb.Append("  ServiceMaster: ").Append(ServiceMaster).Append("\n");
      sb.Append("  Package: ").Append(Package).Append("\n");
      sb.Append("  OsTemplate: ").Append(OsTemplate).Append("\n");
      sb.Append("  ServiceExtra: ").Append(ServiceExtra).Append("\n");
      sb.Append("  ExtraInfoTables: ").Append(ExtraInfoTables).Append("\n");
      sb.Append("  CpuGraphData: ").Append(CpuGraphData).Append("\n");
      sb.Append("  Module: ").Append(Module).Append("\n");
      sb.Append("  Token: ").Append(Token).Append("\n");
      sb.Append("  DaLink: ").Append(DaLink).Append("\n");
      sb.Append("  SrLink: ").Append(SrLink).Append("\n");
      sb.Append("  CpData: ").Append(CpData).Append("\n");
      sb.Append("  DaData: ").Append(DaData).Append("\n");
      sb.Append("  Plesk12Data: ").Append(Plesk12Data).Append("\n");
      sb.Append("  ServiceAddons: ").Append(ServiceAddons).Append("\n");
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

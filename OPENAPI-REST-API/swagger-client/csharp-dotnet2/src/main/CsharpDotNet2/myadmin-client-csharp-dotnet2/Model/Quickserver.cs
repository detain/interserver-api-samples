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
  public class Quickserver {
    /// <summary>
    /// Gets or Sets ServiceInfo
    /// </summary>
    [DataMember(Name="serviceInfo", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "serviceInfo")]
    public QuickserverServiceInfo ServiceInfo { get; set; }

    /// <summary>
    /// Gets or Sets ClientLinks
    /// </summary>
    [DataMember(Name="client_links", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "client_links")]
    public List<QuickserverClientLink> ClientLinks { get; set; }

    /// <summary>
    /// Gets or Sets BillingDetails
    /// </summary>
    [DataMember(Name="billingDetails", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "billingDetails")]
    public QuickserverBillingDetails BillingDetails { get; set; }

    /// <summary>
    /// Currency of the customer
    /// </summary>
    /// <value>Currency of the customer</value>
    [DataMember(Name="custCurrency", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "custCurrency")]
    public string CustCurrency { get; set; }

    /// <summary>
    /// Currency symbol of the customer
    /// </summary>
    /// <value>Currency symbol of the customer</value>
    [DataMember(Name="custCurrencySymbol", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "custCurrencySymbol")]
    public string CustCurrencySymbol { get; set; }

    /// <summary>
    /// Gets or Sets ServiceMaster
    /// </summary>
    [DataMember(Name="serviceMaster", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "serviceMaster")]
    public QuickserverServiceMaster ServiceMaster { get; set; }

    /// <summary>
    /// Package name
    /// </summary>
    /// <value>Package name</value>
    [DataMember(Name="package", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "package")]
    public string Package { get; set; }

    /// <summary>
    /// Operating system template
    /// </summary>
    /// <value>Operating system template</value>
    [DataMember(Name="os_template", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "os_template")]
    public string OsTemplate { get; set; }

    /// <summary>
    /// Gets or Sets ServiceExtra
    /// </summary>
    [DataMember(Name="serviceExtra", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "serviceExtra")]
    public QuickserverServiceExtra ServiceExtra { get; set; }

    /// <summary>
    /// Gets or Sets ExtraInfoTables
    /// </summary>
    [DataMember(Name="extraInfoTables", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "extraInfoTables")]
    public QuickserverExtraInfoTables ExtraInfoTables { get; set; }

    /// <summary>
    /// CPU graph data
    /// </summary>
    /// <value>CPU graph data</value>
    [DataMember(Name="cpu_graph_data", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cpu_graph_data")]
    public string CpuGraphData { get; set; }

    /// <summary>
    /// Bandwidth x-axis data
    /// </summary>
    /// <value>Bandwidth x-axis data</value>
    [DataMember(Name="bandwidth_xaxis", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "bandwidth_xaxis")]
    public string BandwidthXaxis { get; set; }

    /// <summary>
    /// Bandwidth y-axis data
    /// </summary>
    /// <value>Bandwidth y-axis data</value>
    [DataMember(Name="bandwidth_yaxis", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "bandwidth_yaxis")]
    public string BandwidthYaxis { get; set; }

    /// <summary>
    /// Module information
    /// </summary>
    /// <value>Module information</value>
    [DataMember(Name="module", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "module")]
    public string Module { get; set; }

    /// <summary>
    /// Authentication token
    /// </summary>
    /// <value>Authentication token</value>
    [DataMember(Name="token", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "token")]
    public string Token { get; set; }

    /// <summary>
    /// Used disk space
    /// </summary>
    /// <value>Used disk space</value>
    [DataMember(Name="service_disk_used", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_disk_used")]
    public string ServiceDiskUsed { get; set; }

    /// <summary>
    /// Total disk space
    /// </summary>
    /// <value>Total disk space</value>
    [DataMember(Name="service_disk_total", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_disk_total")]
    public string ServiceDiskTotal { get; set; }

    /// <summary>
    /// Disk usage percentage
    /// </summary>
    /// <value>Disk usage percentage</value>
    [DataMember(Name="disk_percentage", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "disk_percentage")]
    public decimal? DiskPercentage { get; set; }

    /// <summary>
    /// Memory information
    /// </summary>
    /// <value>Memory information</value>
    [DataMember(Name="memory", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "memory")]
    public string Memory { get; set; }

    /// <summary>
    /// HDD information
    /// </summary>
    /// <value>HDD information</value>
    [DataMember(Name="hdd", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "hdd")]
    public string Hdd { get; set; }

    /// <summary>
    /// Gets or Sets ServiceOverviewExtra
    /// </summary>
    [DataMember(Name="service_overview_extra", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_overview_extra")]
    public List<string> ServiceOverviewExtra { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Quickserver {\n");
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
      sb.Append("  BandwidthXaxis: ").Append(BandwidthXaxis).Append("\n");
      sb.Append("  BandwidthYaxis: ").Append(BandwidthYaxis).Append("\n");
      sb.Append("  Module: ").Append(Module).Append("\n");
      sb.Append("  Token: ").Append(Token).Append("\n");
      sb.Append("  ServiceDiskUsed: ").Append(ServiceDiskUsed).Append("\n");
      sb.Append("  ServiceDiskTotal: ").Append(ServiceDiskTotal).Append("\n");
      sb.Append("  DiskPercentage: ").Append(DiskPercentage).Append("\n");
      sb.Append("  Memory: ").Append(Memory).Append("\n");
      sb.Append("  Hdd: ").Append(Hdd).Append("\n");
      sb.Append("  ServiceOverviewExtra: ").Append(ServiceOverviewExtra).Append("\n");
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

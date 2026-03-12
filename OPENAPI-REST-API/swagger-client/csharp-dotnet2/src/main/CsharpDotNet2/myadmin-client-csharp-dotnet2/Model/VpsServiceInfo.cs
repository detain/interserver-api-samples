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
  public class VpsServiceInfo {
    /// <summary>
    /// VPS ID
    /// </summary>
    /// <value>VPS ID</value>
    [DataMember(Name="vps_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_id")]
    public string VpsId { get; set; }

    /// <summary>
    /// Customer ID
    /// </summary>
    /// <value>Customer ID</value>
    [DataMember(Name="vps_custid", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_custid")]
    public string VpsCustid { get; set; }

    /// <summary>
    /// Server ID
    /// </summary>
    /// <value>Server ID</value>
    [DataMember(Name="vps_server", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_server")]
    public string VpsServer { get; set; }

    /// <summary>
    /// IP address of the VPS
    /// </summary>
    /// <value>IP address of the VPS</value>
    [DataMember(Name="vps_ip", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_ip")]
    public string VpsIp { get; set; }

    /// <summary>
    /// IPv6 address of the VPS
    /// </summary>
    /// <value>IPv6 address of the VPS</value>
    [DataMember(Name="vps_ipv6", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_ipv6")]
    public Object VpsIpv6 { get; set; }

    /// <summary>
    /// VPS Virtuozzo ID
    /// </summary>
    /// <value>VPS Virtuozzo ID</value>
    [DataMember(Name="vps_vzid", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_vzid")]
    public string VpsVzid { get; set; }

    /// <summary>
    /// Currency used for billing
    /// </summary>
    /// <value>Currency used for billing</value>
    [DataMember(Name="vps_currency", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_currency")]
    public string VpsCurrency { get; set; }

    /// <summary>
    /// VPS type
    /// </summary>
    /// <value>VPS type</value>
    [DataMember(Name="vps_type", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_type")]
    public string VpsType { get; set; }

    /// <summary>
    /// Date of VPS order
    /// </summary>
    /// <value>Date of VPS order</value>
    [DataMember(Name="vps_order_date", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_order_date")]
    public string VpsOrderDate { get; set; }

    /// <summary>
    /// VPS status
    /// </summary>
    /// <value>VPS status</value>
    [DataMember(Name="vps_status", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_status")]
    public string VpsStatus { get; set; }

    /// <summary>
    /// VPS invoice number
    /// </summary>
    /// <value>VPS invoice number</value>
    [DataMember(Name="vps_invoice", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_invoice")]
    public string VpsInvoice { get; set; }

    /// <summary>
    /// VPS coupon code
    /// </summary>
    /// <value>VPS coupon code</value>
    [DataMember(Name="vps_coupon", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_coupon")]
    public string VpsCoupon { get; set; }

    /// <summary>
    /// Additional information about the VPS
    /// </summary>
    /// <value>Additional information about the VPS</value>
    [DataMember(Name="vps_extra", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_extra")]
    public string VpsExtra { get; set; }

    /// <summary>
    /// VPS hostname
    /// </summary>
    /// <value>VPS hostname</value>
    [DataMember(Name="vps_hostname", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_hostname")]
    public string VpsHostname { get; set; }

    /// <summary>
    /// Status of the VPS server
    /// </summary>
    /// <value>Status of the VPS server</value>
    [DataMember(Name="vps_server_status", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_server_status")]
    public string VpsServerStatus { get; set; }

    /// <summary>
    /// Comment associated with the VPS
    /// </summary>
    /// <value>Comment associated with the VPS</value>
    [DataMember(Name="vps_comment", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_comment")]
    public string VpsComment { get; set; }

    /// <summary>
    /// Number of VPS slices
    /// </summary>
    /// <value>Number of VPS slices</value>
    [DataMember(Name="vps_slices", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_slices")]
    public string VpsSlices { get; set; }

    /// <summary>
    /// VNC address
    /// </summary>
    /// <value>VNC address</value>
    [DataMember(Name="vps_vnc", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_vnc")]
    public string VpsVnc { get; set; }

    /// <summary>
    /// VNC port
    /// </summary>
    /// <value>VNC port</value>
    [DataMember(Name="vps_vnc_port", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_vnc_port")]
    public string VpsVncPort { get; set; }

    /// <summary>
    /// Root password of the VPS
    /// </summary>
    /// <value>Root password of the VPS</value>
    [DataMember(Name="vps_rootpass", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_rootpass")]
    public string VpsRootpass { get; set; }

    /// <summary>
    /// MAC address of the VPS
    /// </summary>
    /// <value>MAC address of the VPS</value>
    [DataMember(Name="vps_mac", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_mac")]
    public string VpsMac { get; set; }

    /// <summary>
    /// Operating system of the VPS
    /// </summary>
    /// <value>Operating system of the VPS</value>
    [DataMember(Name="vps_os", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_os")]
    public string VpsOs { get; set; }

    /// <summary>
    /// Version of the operating system
    /// </summary>
    /// <value>Version of the operating system</value>
    [DataMember(Name="vps_version", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_version")]
    public string VpsVersion { get; set; }

    /// <summary>
    /// Location of the VPS
    /// </summary>
    /// <value>Location of the VPS</value>
    [DataMember(Name="vps_location", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_location")]
    public string VpsLocation { get; set; }

    /// <summary>
    /// Virtualization platform
    /// </summary>
    /// <value>Virtualization platform</value>
    [DataMember(Name="vps_platform", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_platform")]
    public string VpsPlatform { get; set; }

    /// <summary>
    /// Amount of disk space used
    /// </summary>
    /// <value>Amount of disk space used</value>
    [DataMember(Name="vps_diskused", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_diskused")]
    public string VpsDiskused { get; set; }

    /// <summary>
    /// Maximum disk space available
    /// </summary>
    /// <value>Maximum disk space available</value>
    [DataMember(Name="vps_diskmax", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_diskmax")]
    public string VpsDiskmax { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class VpsServiceInfo {\n");
      sb.Append("  VpsId: ").Append(VpsId).Append("\n");
      sb.Append("  VpsCustid: ").Append(VpsCustid).Append("\n");
      sb.Append("  VpsServer: ").Append(VpsServer).Append("\n");
      sb.Append("  VpsIp: ").Append(VpsIp).Append("\n");
      sb.Append("  VpsIpv6: ").Append(VpsIpv6).Append("\n");
      sb.Append("  VpsVzid: ").Append(VpsVzid).Append("\n");
      sb.Append("  VpsCurrency: ").Append(VpsCurrency).Append("\n");
      sb.Append("  VpsType: ").Append(VpsType).Append("\n");
      sb.Append("  VpsOrderDate: ").Append(VpsOrderDate).Append("\n");
      sb.Append("  VpsStatus: ").Append(VpsStatus).Append("\n");
      sb.Append("  VpsInvoice: ").Append(VpsInvoice).Append("\n");
      sb.Append("  VpsCoupon: ").Append(VpsCoupon).Append("\n");
      sb.Append("  VpsExtra: ").Append(VpsExtra).Append("\n");
      sb.Append("  VpsHostname: ").Append(VpsHostname).Append("\n");
      sb.Append("  VpsServerStatus: ").Append(VpsServerStatus).Append("\n");
      sb.Append("  VpsComment: ").Append(VpsComment).Append("\n");
      sb.Append("  VpsSlices: ").Append(VpsSlices).Append("\n");
      sb.Append("  VpsVnc: ").Append(VpsVnc).Append("\n");
      sb.Append("  VpsVncPort: ").Append(VpsVncPort).Append("\n");
      sb.Append("  VpsRootpass: ").Append(VpsRootpass).Append("\n");
      sb.Append("  VpsMac: ").Append(VpsMac).Append("\n");
      sb.Append("  VpsOs: ").Append(VpsOs).Append("\n");
      sb.Append("  VpsVersion: ").Append(VpsVersion).Append("\n");
      sb.Append("  VpsLocation: ").Append(VpsLocation).Append("\n");
      sb.Append("  VpsPlatform: ").Append(VpsPlatform).Append("\n");
      sb.Append("  VpsDiskused: ").Append(VpsDiskused).Append("\n");
      sb.Append("  VpsDiskmax: ").Append(VpsDiskmax).Append("\n");
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

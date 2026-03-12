using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Core service record for a QuickServer including ID, status, IP, OS, and billing details.
  /// </summary>
  [DataContract]
  public class QuickserverServiceInfo {
    /// <summary>
    /// Quickserver ID
    /// </summary>
    /// <value>Quickserver ID</value>
    [DataMember(Name="qs_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_id")]
    public string QsId { get; set; }

    /// <summary>
    /// Customer ID
    /// </summary>
    /// <value>Customer ID</value>
    [DataMember(Name="qs_custid", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_custid")]
    public string QsCustid { get; set; }

    /// <summary>
    /// Server information
    /// </summary>
    /// <value>Server information</value>
    [DataMember(Name="qs_server", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_server")]
    public string QsServer { get; set; }

    /// <summary>
    /// IP address
    /// </summary>
    /// <value>IP address</value>
    [DataMember(Name="qs_ip", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_ip")]
    public string QsIp { get; set; }

    /// <summary>
    /// IPv6 address (null)
    /// </summary>
    /// <value>IPv6 address (null)</value>
    [DataMember(Name="qs_ipv6", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_ipv6")]
    public Object QsIpv6 { get; set; }

    /// <summary>
    /// VZ ID
    /// </summary>
    /// <value>VZ ID</value>
    [DataMember(Name="qs_vzid", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_vzid")]
    public string QsVzid { get; set; }

    /// <summary>
    /// Currency
    /// </summary>
    /// <value>Currency</value>
    [DataMember(Name="qs_currency", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_currency")]
    public string QsCurrency { get; set; }

    /// <summary>
    /// Type
    /// </summary>
    /// <value>Type</value>
    [DataMember(Name="qs_type", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_type")]
    public string QsType { get; set; }

    /// <summary>
    /// Order date
    /// </summary>
    /// <value>Order date</value>
    [DataMember(Name="qs_order_date", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_order_date")]
    public string QsOrderDate { get; set; }

    /// <summary>
    /// Status
    /// </summary>
    /// <value>Status</value>
    [DataMember(Name="qs_status", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_status")]
    public string QsStatus { get; set; }

    /// <summary>
    /// Invoice number
    /// </summary>
    /// <value>Invoice number</value>
    [DataMember(Name="qs_invoice", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_invoice")]
    public string QsInvoice { get; set; }

    /// <summary>
    /// Coupon information
    /// </summary>
    /// <value>Coupon information</value>
    [DataMember(Name="qs_coupon", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_coupon")]
    public string QsCoupon { get; set; }

    /// <summary>
    /// Extra information
    /// </summary>
    /// <value>Extra information</value>
    [DataMember(Name="qs_extra", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_extra")]
    public string QsExtra { get; set; }

    /// <summary>
    /// Hostname
    /// </summary>
    /// <value>Hostname</value>
    [DataMember(Name="qs_hostname", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_hostname")]
    public string QsHostname { get; set; }

    /// <summary>
    /// Server status
    /// </summary>
    /// <value>Server status</value>
    [DataMember(Name="qs_server_status", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_server_status")]
    public string QsServerStatus { get; set; }

    /// <summary>
    /// Comment
    /// </summary>
    /// <value>Comment</value>
    [DataMember(Name="qs_comment", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_comment")]
    public string QsComment { get; set; }

    /// <summary>
    /// Slices information
    /// </summary>
    /// <value>Slices information</value>
    [DataMember(Name="qs_slices", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_slices")]
    public string QsSlices { get; set; }

    /// <summary>
    /// VNC information
    /// </summary>
    /// <value>VNC information</value>
    [DataMember(Name="qs_vnc", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_vnc")]
    public string QsVnc { get; set; }

    /// <summary>
    /// VNC port (null)
    /// </summary>
    /// <value>VNC port (null)</value>
    [DataMember(Name="qs_vnc_port", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_vnc_port")]
    public Object QsVncPort { get; set; }

    /// <summary>
    /// Root password
    /// </summary>
    /// <value>Root password</value>
    [DataMember(Name="qs_rootpass", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_rootpass")]
    public string QsRootpass { get; set; }

    /// <summary>
    /// MAC address
    /// </summary>
    /// <value>MAC address</value>
    [DataMember(Name="qs_mac", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_mac")]
    public string QsMac { get; set; }

    /// <summary>
    /// Operating system
    /// </summary>
    /// <value>Operating system</value>
    [DataMember(Name="qs_os", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_os")]
    public string QsOs { get; set; }

    /// <summary>
    /// OS version
    /// </summary>
    /// <value>OS version</value>
    [DataMember(Name="qs_version", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_version")]
    public string QsVersion { get; set; }

    /// <summary>
    /// Location
    /// </summary>
    /// <value>Location</value>
    [DataMember(Name="qs_location", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_location")]
    public string QsLocation { get; set; }

    /// <summary>
    /// Platform (null)
    /// </summary>
    /// <value>Platform (null)</value>
    [DataMember(Name="qs_platform", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_platform")]
    public Object QsPlatform { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class QuickserverServiceInfo {\n");
      sb.Append("  QsId: ").Append(QsId).Append("\n");
      sb.Append("  QsCustid: ").Append(QsCustid).Append("\n");
      sb.Append("  QsServer: ").Append(QsServer).Append("\n");
      sb.Append("  QsIp: ").Append(QsIp).Append("\n");
      sb.Append("  QsIpv6: ").Append(QsIpv6).Append("\n");
      sb.Append("  QsVzid: ").Append(QsVzid).Append("\n");
      sb.Append("  QsCurrency: ").Append(QsCurrency).Append("\n");
      sb.Append("  QsType: ").Append(QsType).Append("\n");
      sb.Append("  QsOrderDate: ").Append(QsOrderDate).Append("\n");
      sb.Append("  QsStatus: ").Append(QsStatus).Append("\n");
      sb.Append("  QsInvoice: ").Append(QsInvoice).Append("\n");
      sb.Append("  QsCoupon: ").Append(QsCoupon).Append("\n");
      sb.Append("  QsExtra: ").Append(QsExtra).Append("\n");
      sb.Append("  QsHostname: ").Append(QsHostname).Append("\n");
      sb.Append("  QsServerStatus: ").Append(QsServerStatus).Append("\n");
      sb.Append("  QsComment: ").Append(QsComment).Append("\n");
      sb.Append("  QsSlices: ").Append(QsSlices).Append("\n");
      sb.Append("  QsVnc: ").Append(QsVnc).Append("\n");
      sb.Append("  QsVncPort: ").Append(QsVncPort).Append("\n");
      sb.Append("  QsRootpass: ").Append(QsRootpass).Append("\n");
      sb.Append("  QsMac: ").Append(QsMac).Append("\n");
      sb.Append("  QsOs: ").Append(QsOs).Append("\n");
      sb.Append("  QsVersion: ").Append(QsVersion).Append("\n");
      sb.Append("  QsLocation: ").Append(QsLocation).Append("\n");
      sb.Append("  QsPlatform: ").Append(QsPlatform).Append("\n");
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

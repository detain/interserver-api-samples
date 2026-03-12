using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Add-on services and IP address information for a VPS, including control panel licenses and extra IP assignments.
  /// </summary>
  [DataContract]
  public class VpsServiceAddons {
    /// <summary>
    /// Whether a cPanel license is active on this VPS.
    /// </summary>
    /// <value>Whether a cPanel license is active on this VPS.</value>
    [DataMember(Name="has_cpanel", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "has_cpanel")]
    public bool? HasCpanel { get; set; }

    /// <summary>
    /// Whether a DirectAdmin license is active on this VPS.
    /// </summary>
    /// <value>Whether a DirectAdmin license is active on this VPS.</value>
    [DataMember(Name="has_directadmin", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "has_directadmin")]
    public bool? HasDirectadmin { get; set; }

    /// <summary>
    /// Whether a Fantastico license is active on this VPS.
    /// </summary>
    /// <value>Whether a Fantastico license is active on this VPS.</value>
    [DataMember(Name="has_fantastico", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "has_fantastico")]
    public bool? HasFantastico { get; set; }

    /// <summary>
    /// Whether a Softaculous license is active on this VPS.
    /// </summary>
    /// <value>Whether a Softaculous license is active on this VPS.</value>
    [DataMember(Name="has_softaculous", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "has_softaculous")]
    public bool? HasSoftaculous { get; set; }

    /// <summary>
    /// Whether extra disk space has been added to this VPS.
    /// </summary>
    /// <value>Whether extra disk space has been added to this VPS.</value>
    [DataMember(Name="has_hdspace", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "has_hdspace")]
    public bool? HasHdspace { get; set; }

    /// <summary>
    /// Whether a dedicated IP address is assigned to this VPS.
    /// </summary>
    /// <value>Whether a dedicated IP address is assigned to this VPS.</value>
    [DataMember(Name="dedicated_ip", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "dedicated_ip")]
    public bool? DedicatedIp { get; set; }

    /// <summary>
    /// List of additional IPv4 addresses assigned to this VPS.
    /// </summary>
    /// <value>List of additional IPv4 addresses assigned to this VPS.</value>
    [DataMember(Name="extra_ips", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "extra_ips")]
    public List<string> ExtraIps { get; set; }

    /// <summary>
    /// List of additional IPv6 addresses assigned to this VPS.
    /// </summary>
    /// <value>List of additional IPv6 addresses assigned to this VPS.</value>
    [DataMember(Name="extra_ips6", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "extra_ips6")]
    public List<string> ExtraIps6 { get; set; }

    /// <summary>
    /// List of IP addresses that have unpaid charges.
    /// </summary>
    /// <value>List of IP addresses that have unpaid charges.</value>
    [DataMember(Name="unpaid_ips", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "unpaid_ips")]
    public List<string> UnpaidIps { get; set; }

    /// <summary>
    /// All IPv4 addresses assigned to this VPS.
    /// </summary>
    /// <value>All IPv4 addresses assigned to this VPS.</value>
    [DataMember(Name="ips", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ips")]
    public List<string> Ips { get; set; }

    /// <summary>
    /// All IPv6 addresses assigned to this VPS.
    /// </summary>
    /// <value>All IPv6 addresses assigned to this VPS.</value>
    [DataMember(Name="ips6", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ips6")]
    public List<string> Ips6 { get; set; }

    /// <summary>
    /// The add-on service ID for the cPanel license.
    /// </summary>
    /// <value>The add-on service ID for the cPanel license.</value>
    [DataMember(Name="cpanel_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cpanel_id")]
    public int? CpanelId { get; set; }

    /// <summary>
    /// Total monthly add-on cost in cents.
    /// </summary>
    /// <value>Total monthly add-on cost in cents.</value>
    [DataMember(Name="cost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cost")]
    public int? Cost { get; set; }

    /// <summary>
    /// List of add-on service IDs active on this VPS.
    /// </summary>
    /// <value>List of add-on service IDs active on this VPS.</value>
    [DataMember(Name="ids", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ids")]
    public List<string> Ids { get; set; }

    /// <summary>
    /// Raw add-on data entries.
    /// </summary>
    /// <value>Raw add-on data entries.</value>
    [DataMember(Name="rdata", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "rdata")]
    public List<string> Rdata { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class VpsServiceAddons {\n");
      sb.Append("  HasCpanel: ").Append(HasCpanel).Append("\n");
      sb.Append("  HasDirectadmin: ").Append(HasDirectadmin).Append("\n");
      sb.Append("  HasFantastico: ").Append(HasFantastico).Append("\n");
      sb.Append("  HasSoftaculous: ").Append(HasSoftaculous).Append("\n");
      sb.Append("  HasHdspace: ").Append(HasHdspace).Append("\n");
      sb.Append("  DedicatedIp: ").Append(DedicatedIp).Append("\n");
      sb.Append("  ExtraIps: ").Append(ExtraIps).Append("\n");
      sb.Append("  ExtraIps6: ").Append(ExtraIps6).Append("\n");
      sb.Append("  UnpaidIps: ").Append(UnpaidIps).Append("\n");
      sb.Append("  Ips: ").Append(Ips).Append("\n");
      sb.Append("  Ips6: ").Append(Ips6).Append("\n");
      sb.Append("  CpanelId: ").Append(CpanelId).Append("\n");
      sb.Append("  Cost: ").Append(Cost).Append("\n");
      sb.Append("  Ids: ").Append(Ids).Append("\n");
      sb.Append("  Rdata: ").Append(Rdata).Append("\n");
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

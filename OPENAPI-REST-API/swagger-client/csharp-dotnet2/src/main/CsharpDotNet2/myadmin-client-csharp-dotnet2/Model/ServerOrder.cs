using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Object representing a server order.
  /// </summary>
  [DataContract]
  public class ServerOrder {
    /// <summary>
    /// Gets or Sets FormValues
    /// </summary>
    [DataMember(Name="form_values", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "form_values")]
    public ServerOrderFormValues FormValues { get; set; }

    /// <summary>
    /// Gets or Sets ConfigIds
    /// </summary>
    [DataMember(Name="config_ids", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "config_ids")]
    public ServerOrderConfigIds ConfigIds { get; set; }

    /// <summary>
    /// Number of CPUs for the server order.
    /// </summary>
    /// <value>Number of CPUs for the server order.</value>
    [DataMember(Name="cpu", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cpu")]
    public int? Cpu { get; set; }

    /// <summary>
    /// Gets or Sets FieldLabel
    /// </summary>
    [DataMember(Name="field_label", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "field_label")]
    public ServerOrderFieldLabels FieldLabel { get; set; }

    /// <summary>
    /// Gets or Sets CpuLi
    /// </summary>
    [DataMember(Name="cpu_li", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cpu_li")]
    public ServerOrderCpuLi CpuLi { get; set; }

    /// <summary>
    /// Gets or Sets MemoryLi
    /// </summary>
    [DataMember(Name="memory_li", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "memory_li")]
    public ServerOrderMemoryLi MemoryLi { get; set; }

    /// <summary>
    /// Gets or Sets BandwidthLi
    /// </summary>
    [DataMember(Name="bandwidth_li", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "bandwidth_li")]
    public ServerOrderBandwidthLi BandwidthLi { get; set; }

    /// <summary>
    /// Gets or Sets IpsLi
    /// </summary>
    [DataMember(Name="ips_li", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ips_li")]
    public ServerOrderIpsLi IpsLi { get; set; }

    /// <summary>
    /// Gets or Sets OsLi
    /// </summary>
    [DataMember(Name="os_li", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "os_li")]
    public ServerOrderOsLi OsLi { get; set; }

    /// <summary>
    /// Gets or Sets CpLi
    /// </summary>
    [DataMember(Name="cp_li", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cp_li")]
    public ServerOrderCpLi CpLi { get; set; }

    /// <summary>
    /// RAID options for the server order.
    /// </summary>
    /// <value>RAID options for the server order.</value>
    [DataMember(Name="raid_li", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "raid_li")]
    public List<ServerOrderRAID> RaidLi { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ServerOrder {\n");
      sb.Append("  FormValues: ").Append(FormValues).Append("\n");
      sb.Append("  ConfigIds: ").Append(ConfigIds).Append("\n");
      sb.Append("  Cpu: ").Append(Cpu).Append("\n");
      sb.Append("  FieldLabel: ").Append(FieldLabel).Append("\n");
      sb.Append("  CpuLi: ").Append(CpuLi).Append("\n");
      sb.Append("  MemoryLi: ").Append(MemoryLi).Append("\n");
      sb.Append("  BandwidthLi: ").Append(BandwidthLi).Append("\n");
      sb.Append("  IpsLi: ").Append(IpsLi).Append("\n");
      sb.Append("  OsLi: ").Append(OsLi).Append("\n");
      sb.Append("  CpLi: ").Append(CpLi).Append("\n");
      sb.Append("  RaidLi: ").Append(RaidLi).Append("\n");
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

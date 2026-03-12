using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// All available configuration options (CPU, memory, storage, bandwidth, OS, control panel, RAID) for building a dedicated server order.
  /// </summary>
  [DataContract]
  public class ConfigLists {
    /// <summary>
    /// Gets or Sets CpuLi
    /// </summary>
    [DataMember(Name="cpu_li", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cpu_li")]
    public Dictionary<string, Cpu> CpuLi { get; set; }

    /// <summary>
    /// Gets or Sets MemoryLi
    /// </summary>
    [DataMember(Name="memory_li", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "memory_li")]
    public Dictionary<string, Dictionary<string, MemoryOption>> MemoryLi { get; set; }

    /// <summary>
    /// Gets or Sets HdLi
    /// </summary>
    [DataMember(Name="hd_li", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "hd_li")]
    public Dictionary<string, Dictionary<string, HardDrive>> HdLi { get; set; }

    /// <summary>
    /// Gets or Sets BandwidthLi
    /// </summary>
    [DataMember(Name="bandwidth_li", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "bandwidth_li")]
    public Dictionary<string, Bandwidth> BandwidthLi { get; set; }

    /// <summary>
    /// Gets or Sets IpsLi
    /// </summary>
    [DataMember(Name="ips_li", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ips_li")]
    public Dictionary<string, IpBlock> IpsLi { get; set; }

    /// <summary>
    /// Gets or Sets OsLi
    /// </summary>
    [DataMember(Name="os_li", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "os_li")]
    public Dictionary<string, OperatingSystem> OsLi { get; set; }

    /// <summary>
    /// Gets or Sets CpLi
    /// </summary>
    [DataMember(Name="cp_li", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cp_li")]
    public Dictionary<string, ControlPanel> CpLi { get; set; }

    /// <summary>
    /// Gets or Sets RaidLi
    /// </summary>
    [DataMember(Name="raid_li", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "raid_li")]
    public List<RaidOption> RaidLi { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ConfigLists {\n");
      sb.Append("  CpuLi: ").Append(CpuLi).Append("\n");
      sb.Append("  MemoryLi: ").Append(MemoryLi).Append("\n");
      sb.Append("  HdLi: ").Append(HdLi).Append("\n");
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

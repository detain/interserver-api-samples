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
  public class ScrubIpsLogRowSchema {
    /// <summary>
    /// Gets or Sets Date
    /// </summary>
    [DataMember(Name="date", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "date")]
    public string Date { get; set; }

    /// <summary>
    /// Gets or Sets Filter
    /// </summary>
    [DataMember(Name="filter", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "filter")]
    public string Filter { get; set; }

    /// <summary>
    /// Gets or Sets BlockedIp
    /// </summary>
    [DataMember(Name="blocked_ip", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "blocked_ip")]
    public string BlockedIp { get; set; }

    /// <summary>
    /// Gets or Sets TargetIp
    /// </summary>
    [DataMember(Name="target_ip", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "target_ip")]
    public string TargetIp { get; set; }

    /// <summary>
    /// Gets or Sets TargetPort
    /// </summary>
    [DataMember(Name="target_port", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "target_port")]
    public decimal? TargetPort { get; set; }

    /// <summary>
    /// Gets or Sets Protocol
    /// </summary>
    [DataMember(Name="protocol", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "protocol")]
    public string Protocol { get; set; }

    /// <summary>
    /// Gets or Sets ByteCount
    /// </summary>
    [DataMember(Name="byte_count", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "byte_count")]
    public decimal? ByteCount { get; set; }

    /// <summary>
    /// Gets or Sets XdpAction
    /// </summary>
    [DataMember(Name="xdp_action", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "xdp_action")]
    public string XdpAction { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ScrubIpsLogRowSchema {\n");
      sb.Append("  Date: ").Append(Date).Append("\n");
      sb.Append("  Filter: ").Append(Filter).Append("\n");
      sb.Append("  BlockedIp: ").Append(BlockedIp).Append("\n");
      sb.Append("  TargetIp: ").Append(TargetIp).Append("\n");
      sb.Append("  TargetPort: ").Append(TargetPort).Append("\n");
      sb.Append("  Protocol: ").Append(Protocol).Append("\n");
      sb.Append("  ByteCount: ").Append(ByteCount).Append("\n");
      sb.Append("  XdpAction: ").Append(XdpAction).Append("\n");
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

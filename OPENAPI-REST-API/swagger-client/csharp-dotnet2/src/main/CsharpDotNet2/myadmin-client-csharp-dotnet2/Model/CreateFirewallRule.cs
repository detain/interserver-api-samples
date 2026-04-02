using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Create firewall rule for your ip
  /// </summary>
  [DataContract]
  public class CreateFirewallRule {
    /// <summary>
    /// Gets or Sets DestinationPort
    /// </summary>
    [DataMember(Name="destination_port", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "destination_port")]
    public int? DestinationPort { get; set; }

    /// <summary>
    /// Source IP address to match. Use '0.0.0.0' to match any source.
    /// </summary>
    /// <value>Source IP address to match. Use '0.0.0.0' to match any source.</value>
    [DataMember(Name="source_ip", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "source_ip")]
    public string SourceIp { get; set; }

    /// <summary>
    /// Gets or Sets SourcePort
    /// </summary>
    [DataMember(Name="source_port", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "source_port")]
    public int? SourcePort { get; set; }

    /// <summary>
    /// 1 = TCP, 2 = UDP
    /// </summary>
    /// <value>1 = TCP, 2 = UDP</value>
    [DataMember(Name="protocol_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "protocol_id")]
    public int? ProtocolId { get; set; }

    /// <summary>
    /// 1 = Block,  0 = Whitelist
    /// </summary>
    /// <value>1 = Block,  0 = Whitelist</value>
    [DataMember(Name="xdp_action", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "xdp_action")]
    public int? XdpAction { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class CreateFirewallRule {\n");
      sb.Append("  DestinationPort: ").Append(DestinationPort).Append("\n");
      sb.Append("  SourceIp: ").Append(SourceIp).Append("\n");
      sb.Append("  SourcePort: ").Append(SourcePort).Append("\n");
      sb.Append("  ProtocolId: ").Append(ProtocolId).Append("\n");
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

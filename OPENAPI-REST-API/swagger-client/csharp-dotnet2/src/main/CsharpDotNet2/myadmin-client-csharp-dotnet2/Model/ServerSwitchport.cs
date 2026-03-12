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
  public class ServerSwitchport {
    /// <summary>
    /// Unique identifier for the switchport.
    /// </summary>
    /// <value>Unique identifier for the switchport.</value>
    [DataMember(Name="switchport_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "switchport_id")]
    public int? SwitchportId { get; set; }

    /// <summary>
    /// Unique identifier for the switch associated with the switchport.
    /// </summary>
    /// <value>Unique identifier for the switch associated with the switchport.</value>
    [DataMember(Name="switch_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "switch_id")]
    public string SwitchId { get; set; }

    /// <summary>
    /// Name of the switch associated with the switchport.
    /// </summary>
    /// <value>Name of the switch associated with the switchport.</value>
    [DataMember(Name="switch", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "switch")]
    public string _Switch { get; set; }

    /// <summary>
    /// Port name on the switch.
    /// </summary>
    /// <value>Port name on the switch.</value>
    [DataMember(Name="port", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "port")]
    public string Port { get; set; }

    /// <summary>
    /// Blade name associated with the port.
    /// </summary>
    /// <value>Blade name associated with the port.</value>
    [DataMember(Name="blade", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "blade")]
    public string Blade { get; set; }

    /// <summary>
    /// Port identifier.
    /// </summary>
    /// <value>Port identifier.</value>
    [DataMember(Name="justport", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "justport")]
    public string Justport { get; set; }

    /// <summary>
    /// Identifier for the graph associated with the switchport.
    /// </summary>
    /// <value>Identifier for the graph associated with the switchport.</value>
    [DataMember(Name="graph_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "graph_id")]
    public string GraphId { get; set; }

    /// <summary>
    /// List of VLANs associated with the switchport.
    /// </summary>
    /// <value>List of VLANs associated with the switchport.</value>
    [DataMember(Name="vlans", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vlans")]
    public List<string> Vlans { get; set; }

    /// <summary>
    /// List of IPv6 VLANs associated with the switchport.
    /// </summary>
    /// <value>List of IPv6 VLANs associated with the switchport.</value>
    [DataMember(Name="vlans6", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vlans6")]
    public List<string> Vlans6 { get; set; }

    /// <summary>
    /// Unique identifier of the asset associated with the switchport.
    /// </summary>
    /// <value>Unique identifier of the asset associated with the switchport.</value>
    [DataMember(Name="asset_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "asset_id")]
    public int? AssetId { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ServerSwitchport {\n");
      sb.Append("  SwitchportId: ").Append(SwitchportId).Append("\n");
      sb.Append("  SwitchId: ").Append(SwitchId).Append("\n");
      sb.Append("  _Switch: ").Append(_Switch).Append("\n");
      sb.Append("  Port: ").Append(Port).Append("\n");
      sb.Append("  Blade: ").Append(Blade).Append("\n");
      sb.Append("  Justport: ").Append(Justport).Append("\n");
      sb.Append("  GraphId: ").Append(GraphId).Append("\n");
      sb.Append("  Vlans: ").Append(Vlans).Append("\n");
      sb.Append("  Vlans6: ").Append(Vlans6).Append("\n");
      sb.Append("  AssetId: ").Append(AssetId).Append("\n");
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

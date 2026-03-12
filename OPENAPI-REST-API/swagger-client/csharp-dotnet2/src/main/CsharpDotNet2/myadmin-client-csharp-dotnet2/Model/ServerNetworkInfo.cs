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
  public class ServerNetworkInfo {
    /// <summary>
    /// List of VLANs.
    /// </summary>
    /// <value>List of VLANs.</value>
    [DataMember(Name="vlans", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vlans")]
    public List<string> Vlans { get; set; }

    /// <summary>
    /// List of IPv6 VLANs.
    /// </summary>
    /// <value>List of IPv6 VLANs.</value>
    [DataMember(Name="vlans6", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vlans6")]
    public List<string> Vlans6 { get; set; }

    /// <summary>
    /// Gets or Sets Assets
    /// </summary>
    [DataMember(Name="assets", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "assets")]
    public ServerNetworkInfoAssets Assets { get; set; }

    /// <summary>
    /// Gets or Sets Switchports
    /// </summary>
    [DataMember(Name="switchports", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "switchports")]
    public ServerNetworkInfoSwitchports Switchports { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ServerNetworkInfo {\n");
      sb.Append("  Vlans: ").Append(Vlans).Append("\n");
      sb.Append("  Vlans6: ").Append(Vlans6).Append("\n");
      sb.Append("  Assets: ").Append(Assets).Append("\n");
      sb.Append("  Switchports: ").Append(Switchports).Append("\n");
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

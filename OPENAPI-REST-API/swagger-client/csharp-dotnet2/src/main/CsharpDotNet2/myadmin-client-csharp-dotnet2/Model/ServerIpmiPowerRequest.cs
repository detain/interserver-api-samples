using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// IPMI Power command for servers
  /// </summary>
  [DataContract]
  public class ServerIpmiPowerRequest {
    /// <summary>
    /// The Asset ID
    /// </summary>
    /// <value>The Asset ID</value>
    [DataMember(Name="asset", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "asset")]
    public int? Asset { get; set; }

    /// <summary>
    /// The power action to send to the ipmi controller.
    /// </summary>
    /// <value>The power action to send to the ipmi controller.</value>
    [DataMember(Name="action", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "action")]
    public string Action { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ServerIpmiPowerRequest {\n");
      sb.Append("  Asset: ").Append(Asset).Append("\n");
      sb.Append("  Action: ").Append(Action).Append("\n");
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

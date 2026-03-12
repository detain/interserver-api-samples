using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Object containing switchport information.
  /// </summary>
  [DataContract]
  public class ServerNetworkInfoSwitchports {
    /// <summary>
    /// Gets or Sets _10414
    /// </summary>
    [DataMember(Name="10414", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "10414")]
    public ServerSwitchport _10414 { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ServerNetworkInfoSwitchports {\n");
      sb.Append("  _10414: ").Append(_10414).Append("\n");
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

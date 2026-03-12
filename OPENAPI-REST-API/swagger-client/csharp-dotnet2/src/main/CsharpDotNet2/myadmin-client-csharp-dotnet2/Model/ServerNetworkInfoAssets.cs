using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Object containing asset information.
  /// </summary>
  [DataContract]
  public class ServerNetworkInfoAssets {
    /// <summary>
    /// Gets or Sets _3497
    /// </summary>
    [DataMember(Name="3497", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "3497")]
    public ServerAsset _3497 { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ServerNetworkInfoAssets {\n");
      sb.Append("  _3497: ").Append(_3497).Append("\n");
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

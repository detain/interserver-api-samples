using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Bandwidth options for the server order.
  /// </summary>
  [DataContract]
  public class ServerOrderBandwidthLi {
    /// <summary>
    /// Gets or Sets _15
    /// </summary>
    [DataMember(Name="15", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "15")]
    public ServerOrderBandwidth _15 { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ServerOrderBandwidthLi {\n");
      sb.Append("  _15: ").Append(_15).Append("\n");
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

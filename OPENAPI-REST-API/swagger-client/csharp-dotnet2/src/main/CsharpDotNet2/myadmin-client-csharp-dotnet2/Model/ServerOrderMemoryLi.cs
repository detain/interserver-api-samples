using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Memory options for the server order.
  /// </summary>
  [DataContract]
  public class ServerOrderMemoryLi {
    /// <summary>
    /// Gets or Sets _254
    /// </summary>
    [DataMember(Name="254", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "254")]
    public ServerOrderMemoryLi254 _254 { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ServerOrderMemoryLi {\n");
      sb.Append("  _254: ").Append(_254).Append("\n");
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

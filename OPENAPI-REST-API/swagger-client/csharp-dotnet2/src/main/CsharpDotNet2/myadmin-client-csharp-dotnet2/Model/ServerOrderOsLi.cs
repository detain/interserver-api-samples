using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Operating System options for the server order.
  /// </summary>
  [DataContract]
  public class ServerOrderOsLi {
    /// <summary>
    /// Gets or Sets _51
    /// </summary>
    [DataMember(Name="51", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "51")]
    public ServerOrderOS _51 { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ServerOrderOsLi {\n");
      sb.Append("  _51: ").Append(_51).Append("\n");
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

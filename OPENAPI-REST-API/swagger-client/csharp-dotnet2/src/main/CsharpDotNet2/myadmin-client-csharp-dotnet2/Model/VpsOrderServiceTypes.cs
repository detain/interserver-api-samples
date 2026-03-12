using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Service Types
  /// </summary>
  [DataContract]
  public class VpsOrderServiceTypes {
    /// <summary>
    /// Gets or Sets _32
    /// </summary>
    [DataMember(Name="32", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "32")]
    public VpsOrderServiceTypes32 _32 { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class VpsOrderServiceTypes {\n");
      sb.Append("  _32: ").Append(_32).Append("\n");
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

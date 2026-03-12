using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Location Names
  /// </summary>
  [DataContract]
  public class VpsOrderLocationNames {
    /// <summary>
    /// Gets or Sets _3
    /// </summary>
    [DataMember(Name="3", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "3")]
    public string _3 { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class VpsOrderLocationNames {\n");
      sb.Append("  _3: ").Append(_3).Append("\n");
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

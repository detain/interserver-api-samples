using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// OS Names
  /// </summary>
  [DataContract]
  public class VpsOrderOsNames {
    /// <summary>
    /// Gets or Sets Opensuse
    /// </summary>
    [DataMember(Name="opensuse", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "opensuse")]
    public string Opensuse { get; set; }

    /// <summary>
    /// Gets or Sets Ubuntu
    /// </summary>
    [DataMember(Name="ubuntu", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ubuntu")]
    public string Ubuntu { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class VpsOrderOsNames {\n");
      sb.Append("  Opensuse: ").Append(Opensuse).Append("\n");
      sb.Append("  Ubuntu: ").Append(Ubuntu).Append("\n");
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

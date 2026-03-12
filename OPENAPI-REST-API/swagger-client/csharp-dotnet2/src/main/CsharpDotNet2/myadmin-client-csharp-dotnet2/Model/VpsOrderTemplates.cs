using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Templates
  /// </summary>
  [DataContract]
  public class VpsOrderTemplates {
    /// <summary>
    /// Gets or Sets Hyperv
    /// </summary>
    [DataMember(Name="hyperv", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "hyperv")]
    public VpsOrderTemplatesHyperv Hyperv { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class VpsOrderTemplates {\n");
      sb.Append("  Hyperv: ").Append(Hyperv).Append("\n");
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

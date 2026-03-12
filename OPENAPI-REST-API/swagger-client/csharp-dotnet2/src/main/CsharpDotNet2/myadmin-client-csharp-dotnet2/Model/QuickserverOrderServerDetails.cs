using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Server details.
  /// </summary>
  [DataContract]
  public class QuickserverOrderServerDetails {
    /// <summary>
    /// Gets or Sets _381
    /// </summary>
    [DataMember(Name="381", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "381")]
    public QuickserverOrderServerDetails381 _381 { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class QuickserverOrderServerDetails {\n");
      sb.Append("  _381: ").Append(_381).Append("\n");
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

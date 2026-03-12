using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Distribution selection.
  /// </summary>
  [DataContract]
  public class QuickserverOrderDistroSel {
    /// <summary>
    /// Gets or Sets Ubuntu
    /// </summary>
    [DataMember(Name="Ubuntu", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "Ubuntu")]
    public QuickserverOrderDistroSelUbuntu Ubuntu { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class QuickserverOrderDistroSel {\n");
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

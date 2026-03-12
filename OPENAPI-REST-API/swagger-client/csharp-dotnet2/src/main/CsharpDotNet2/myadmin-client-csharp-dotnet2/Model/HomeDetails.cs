using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Users details.
  /// </summary>
  [DataContract]
  public class HomeDetails {
    /// <summary>
    /// Gets or Sets Modules
    /// </summary>
    [DataMember(Name="modules", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "modules")]
    public HomeDetailsModules Modules { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class HomeDetails {\n");
      sb.Append("  Modules: ").Append(Modules).Append("\n");
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

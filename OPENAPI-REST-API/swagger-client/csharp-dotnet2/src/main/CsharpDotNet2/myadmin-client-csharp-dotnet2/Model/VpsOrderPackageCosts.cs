using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Package Costs
  /// </summary>
  [DataContract]
  public class VpsOrderPackageCosts {
    /// <summary>
    /// Gets or Sets _57
    /// </summary>
    [DataMember(Name="57", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "57")]
    public decimal? _57 { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class VpsOrderPackageCosts {\n");
      sb.Append("  _57: ").Append(_57).Append("\n");
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

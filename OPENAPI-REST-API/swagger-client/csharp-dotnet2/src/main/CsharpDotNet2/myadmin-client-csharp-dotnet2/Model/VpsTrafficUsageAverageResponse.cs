using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// VPS Traffic Usage Average Section
  /// </summary>
  [DataContract]
  public class VpsTrafficUsageAverageResponse {
    /// <summary>
    /// Gets or Sets _In
    /// </summary>
    [DataMember(Name="in", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "in")]
    public VpsTrafficUsageAverageSectionResponse _In { get; set; }

    /// <summary>
    /// Gets or Sets _Out
    /// </summary>
    [DataMember(Name="out", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "out")]
    public VpsTrafficUsageAverageSectionResponse _Out { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class VpsTrafficUsageAverageResponse {\n");
      sb.Append("  _In: ").Append(_In).Append("\n");
      sb.Append("  _Out: ").Append(_Out).Append("\n");
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

using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// VPS Traffic Usage Section
  /// </summary>
  [DataContract]
  public class VpsTrafficUsageResponse {
    /// <summary>
    /// Gets or Sets Current
    /// </summary>
    [DataMember(Name="current", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "current")]
    public VpsTrafficTotalsSectionResponse Current { get; set; }

    /// <summary>
    /// Gets or Sets Peak
    /// </summary>
    [DataMember(Name="peak", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "peak")]
    public VpsTrafficTotalsSectionResponse Peak { get; set; }

    /// <summary>
    /// Gets or Sets Average
    /// </summary>
    [DataMember(Name="average", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "average")]
    public VpsTrafficUsageAverageResponse Average { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class VpsTrafficUsageResponse {\n");
      sb.Append("  Current: ").Append(Current).Append("\n");
      sb.Append("  Peak: ").Append(Peak).Append("\n");
      sb.Append("  Average: ").Append(Average).Append("\n");
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

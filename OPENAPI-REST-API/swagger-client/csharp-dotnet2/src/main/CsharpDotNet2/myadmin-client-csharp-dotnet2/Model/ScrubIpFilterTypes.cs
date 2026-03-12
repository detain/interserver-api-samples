using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Available scrub filter types for building firewall rules.
  /// </summary>
  [DataContract]
  public class ScrubIpFilterTypes {
    /// <summary>
    /// Gets or Sets Success
    /// </summary>
    [DataMember(Name="success", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "success")]
    public bool? Success { get; set; }

    /// <summary>
    /// Gets or Sets Filters
    /// </summary>
    [DataMember(Name="filters", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "filters")]
    public Dictionary<string, ScrubIpFilterTypesFilters> Filters { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ScrubIpFilterTypes {\n");
      sb.Append("  Success: ").Append(Success).Append("\n");
      sb.Append("  Filters: ").Append(Filters).Append("\n");
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

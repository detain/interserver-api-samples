using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// VPS Traffic Data History Section
  /// </summary>
  [DataContract]
  public class VpsTrafficHistoryResponse {
    /// <summary>
    /// Gets or Sets Hour
    /// </summary>
    [DataMember(Name="hour", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "hour")]
    public VpsTrafficHistorySectionResponse Hour { get; set; }

    /// <summary>
    /// Gets or Sets Day
    /// </summary>
    [DataMember(Name="day", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "day")]
    public VpsTrafficHistorySectionResponse Day { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class VpsTrafficHistoryResponse {\n");
      sb.Append("  Hour: ").Append(Hour).Append("\n");
      sb.Append("  Day: ").Append(Day).Append("\n");
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

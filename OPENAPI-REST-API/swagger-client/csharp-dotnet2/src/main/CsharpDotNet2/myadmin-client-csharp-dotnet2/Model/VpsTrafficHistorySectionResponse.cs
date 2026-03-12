using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// VPS Traffic History Hour and Day Sections
  /// </summary>
  [DataContract]
  public class VpsTrafficHistorySectionResponse {
    /// <summary>
    /// Gets or Sets Data
    /// </summary>
    [DataMember(Name="data", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "data")]
    public List<VpsTrafficHistorySectionDataResponse> Data { get; set; }

    /// <summary>
    /// Gets or Sets Times
    /// </summary>
    [DataMember(Name="times", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "times")]
    public List<DateTime?> Times { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class VpsTrafficHistorySectionResponse {\n");
      sb.Append("  Data: ").Append(Data).Append("\n");
      sb.Append("  Times: ").Append(Times).Append("\n");
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

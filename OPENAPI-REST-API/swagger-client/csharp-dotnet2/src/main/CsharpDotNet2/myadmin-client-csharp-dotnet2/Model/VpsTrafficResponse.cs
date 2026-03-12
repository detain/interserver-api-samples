using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// VPS Traffic Information
  /// </summary>
  [DataContract]
  public class VpsTrafficResponse {
    /// <summary>
    /// Gets or Sets Name
    /// </summary>
    [DataMember(Name="name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "name")]
    public string Name { get; set; }

    /// <summary>
    /// Gets or Sets Target
    /// </summary>
    [DataMember(Name="target", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "target")]
    public string Target { get; set; }

    /// <summary>
    /// Gets or Sets Interval
    /// </summary>
    [DataMember(Name="interval", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "interval")]
    public int? Interval { get; set; }

    /// <summary>
    /// Gets or Sets History
    /// </summary>
    [DataMember(Name="history", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "history")]
    public VpsTrafficHistoryResponse History { get; set; }

    /// <summary>
    /// Gets or Sets Last
    /// </summary>
    [DataMember(Name="last", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "last")]
    public DateTime? Last { get; set; }

    /// <summary>
    /// Gets or Sets Times
    /// </summary>
    [DataMember(Name="times", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "times")]
    public List<DateTime?> Times { get; set; }

    /// <summary>
    /// Gets or Sets Totals
    /// </summary>
    [DataMember(Name="totals", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "totals")]
    public VpsTrafficTotalsResposne Totals { get; set; }

    /// <summary>
    /// Gets or Sets Usage
    /// </summary>
    [DataMember(Name="usage", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "usage")]
    public VpsTrafficUsageResponse Usage { get; set; }

    /// <summary>
    /// Gets or Sets Data
    /// </summary>
    [DataMember(Name="data", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "data")]
    public List<VpsTrafficDataSectionResponse> Data { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class VpsTrafficResponse {\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("  Target: ").Append(Target).Append("\n");
      sb.Append("  Interval: ").Append(Interval).Append("\n");
      sb.Append("  History: ").Append(History).Append("\n");
      sb.Append("  Last: ").Append(Last).Append("\n");
      sb.Append("  Times: ").Append(Times).Append("\n");
      sb.Append("  Totals: ").Append(Totals).Append("\n");
      sb.Append("  Usage: ").Append(Usage).Append("\n");
      sb.Append("  Data: ").Append(Data).Append("\n");
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

using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// VPS Traffic Totals Section
  /// </summary>
  [DataContract]
  public class VpsTrafficTotalsResposne {
    /// <summary>
    /// Gets or Sets Day
    /// </summary>
    [DataMember(Name="day", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "day")]
    public VpsTrafficTotalsSectionResponse Day { get; set; }

    /// <summary>
    /// Gets or Sets Month
    /// </summary>
    [DataMember(Name="month", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "month")]
    public VpsTrafficTotalsSectionResponse Month { get; set; }

    /// <summary>
    /// Gets or Sets Year
    /// </summary>
    [DataMember(Name="year", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "year")]
    public VpsTrafficTotalsSectionResponse Year { get; set; }

    /// <summary>
    /// Gets or Sets All
    /// </summary>
    [DataMember(Name="all", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "all")]
    public VpsTrafficTotalsSectionResponse All { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class VpsTrafficTotalsResposne {\n");
      sb.Append("  Day: ").Append(Day).Append("\n");
      sb.Append("  Month: ").Append(Month).Append("\n");
      sb.Append("  Year: ").Append(Year).Append("\n");
      sb.Append("  All: ").Append(All).Append("\n");
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

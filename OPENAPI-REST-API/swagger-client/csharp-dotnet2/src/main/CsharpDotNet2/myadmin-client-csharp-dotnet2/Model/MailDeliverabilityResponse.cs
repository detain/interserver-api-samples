using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Deliverability statistics for a mail service.
  /// </summary>
  [DataContract]
  public class MailDeliverabilityResponse {
    /// <summary>
    /// Delivered and bounced counts.
    /// </summary>
    /// <value>Delivered and bounced counts.</value>
    [DataMember(Name="stat", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "stat")]
    public Object Stat { get; set; }

    /// <summary>
    /// Bounce percentage.
    /// </summary>
    /// <value>Bounce percentage.</value>
    [DataMember(Name="percent", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "percent")]
    public decimal? Percent { get; set; }

    /// <summary>
    /// Detailed deliverability breakdown by sender or domain.
    /// </summary>
    /// <value>Detailed deliverability breakdown by sender or domain.</value>
    [DataMember(Name="table_data", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "table_data")]
    public List<List<string>> TableData { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class MailDeliverabilityResponse {\n");
      sb.Append("  Stat: ").Append(Stat).Append("\n");
      sb.Append("  Percent: ").Append(Percent).Append("\n");
      sb.Append("  TableData: ").Append(TableData).Append("\n");
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

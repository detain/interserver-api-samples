using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Monthly mail delivery status breakdown, showing counts per status category.
  /// </summary>
  [DataContract]
  public class StatusMonthlyBreakdown {
    /// <summary>
    /// Gets or Sets _Default
    /// </summary>
    [DataMember(Name="default", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "default")]
    public MonthlyCounts _Default { get; set; }

    /// <summary>
    /// Gets or Sets Failed
    /// </summary>
    [DataMember(Name="failed", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "failed")]
    public MonthlyCounts Failed { get; set; }

    /// <summary>
    /// Gets or Sets Rejected
    /// </summary>
    [DataMember(Name="rejected", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "rejected")]
    public MonthlyCounts Rejected { get; set; }

    /// <summary>
    /// Gets or Sets Pending
    /// </summary>
    [DataMember(Name="pending", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "pending")]
    public MonthlyCounts Pending { get; set; }

    /// <summary>
    /// Gets or Sets Locked
    /// </summary>
    [DataMember(Name="locked", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "locked")]
    public MonthlyCounts Locked { get; set; }

    /// <summary>
    /// Gets or Sets Paid
    /// </summary>
    [DataMember(Name="paid", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "paid")]
    public MonthlyCounts Paid { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class StatusMonthlyBreakdown {\n");
      sb.Append("  _Default: ").Append(_Default).Append("\n");
      sb.Append("  Failed: ").Append(Failed).Append("\n");
      sb.Append("  Rejected: ").Append(Rejected).Append("\n");
      sb.Append("  Pending: ").Append(Pending).Append("\n");
      sb.Append("  Locked: ").Append(Locked).Append("\n");
      sb.Append("  Paid: ").Append(Paid).Append("\n");
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

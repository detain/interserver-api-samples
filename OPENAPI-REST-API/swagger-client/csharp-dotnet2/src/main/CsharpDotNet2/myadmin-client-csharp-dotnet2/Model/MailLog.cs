using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Paginated mail log response.  Contains the full matched count (&#x60;total&#x60;) plus a page of &#x60;MailLogEntry&#x60; records.  The &#x60;total&#x60; reflects the grouping mode: with &#x60;groupby&#x3D;recipient&#x60; it counts delivery attempts, with &#x60;groupby&#x3D;message&#x60; it counts unique messages.
  /// </summary>
  [DataContract]
  public class MailLog {
    /// <summary>
    /// Total number of log entries that match the supplied filters, regardless of `skip` and `limit`.  Reflects the `groupby` mode.
    /// </summary>
    /// <value>Total number of log entries that match the supplied filters, regardless of `skip` and `limit`.  Reflects the `groupby` mode.</value>
    [DataMember(Name="total", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "total")]
    public int? Total { get; set; }

    /// <summary>
    /// The `skip` value used for this page (echoed from the request).
    /// </summary>
    /// <value>The `skip` value used for this page (echoed from the request).</value>
    [DataMember(Name="skip", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "skip")]
    public int? Skip { get; set; }

    /// <summary>
    /// The `limit` value used for this page (echoed from the request).
    /// </summary>
    /// <value>The `limit` value used for this page (echoed from the request).</value>
    [DataMember(Name="limit", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "limit")]
    public int? Limit { get; set; }

    /// <summary>
    /// Gets or Sets Emails
    /// </summary>
    [DataMember(Name="emails", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "emails")]
    public List<MailLogEntry> Emails { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class MailLog {\n");
      sb.Append("  Total: ").Append(Total).Append("\n");
      sb.Append("  Skip: ").Append(Skip).Append("\n");
      sb.Append("  Limit: ").Append(Limit).Append("\n");
      sb.Append("  Emails: ").Append(Emails).Append("\n");
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

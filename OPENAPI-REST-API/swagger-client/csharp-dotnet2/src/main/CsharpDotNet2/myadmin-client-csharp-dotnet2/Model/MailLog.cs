using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Mail log records
  /// </summary>
  [DataContract]
  public class MailLog {
    /// <summary>
    /// total number of mail log entries
    /// </summary>
    /// <value>total number of mail log entries</value>
    [DataMember(Name="total", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "total")]
    public int? Total { get; set; }

    /// <summary>
    /// number of emails skipped in listing
    /// </summary>
    /// <value>number of emails skipped in listing</value>
    [DataMember(Name="skip", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "skip")]
    public int? Skip { get; set; }

    /// <summary>
    /// number of emails to return
    /// </summary>
    /// <value>number of emails to return</value>
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

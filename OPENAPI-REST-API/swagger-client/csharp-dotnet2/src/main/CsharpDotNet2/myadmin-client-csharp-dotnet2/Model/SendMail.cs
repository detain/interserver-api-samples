using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Details for an Email
  /// </summary>
  [DataContract]
  public class SendMail {
    /// <summary>
    /// The Contact whom is the primary recipient of this email.
    /// </summary>
    /// <value>The Contact whom is the primary recipient of this email.</value>
    [DataMember(Name="to", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "to")]
    public string To { get; set; }

    /// <summary>
    /// The contact whom is the this email is from.
    /// </summary>
    /// <value>The contact whom is the this email is from.</value>
    [DataMember(Name="from", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "from")]
    public string From { get; set; }

    /// <summary>
    /// The subject or title of the email
    /// </summary>
    /// <value>The subject or title of the email</value>
    [DataMember(Name="subject", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "subject")]
    public string Subject { get; set; }

    /// <summary>
    /// The main email contents.
    /// </summary>
    /// <value>The main email contents.</value>
    [DataMember(Name="body", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "body")]
    public string Body { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class SendMail {\n");
      sb.Append("  To: ").Append(To).Append("\n");
      sb.Append("  From: ").Append(From).Append("\n");
      sb.Append("  Subject: ").Append(Subject).Append("\n");
      sb.Append("  Body: ").Append(Body).Append("\n");
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

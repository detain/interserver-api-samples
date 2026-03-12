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
  public class SendMailAdv {
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
    /// Gets or Sets From
    /// </summary>
    [DataMember(Name="from", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "from")]
    public EmailAddressName From { get; set; }

    /// <summary>
    /// A list of destionation email addresses to send this to
    /// </summary>
    /// <value>A list of destionation email addresses to send this to</value>
    [DataMember(Name="to", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "to")]
    public List<EmailAddressName> To { get; set; }

    /// <summary>
    /// (optional) A list of email addresses that specify where replies to the email should be sent instead of the _from_ address.
    /// </summary>
    /// <value>(optional) A list of email addresses that specify where replies to the email should be sent instead of the _from_ address.</value>
    [DataMember(Name="replyto", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "replyto")]
    public List<EmailAddressName> Replyto { get; set; }

    /// <summary>
    /// (optional) A list of email addresses to carbon copy this message to.  They are listed on the email and anyone getting the email can see this full list of Contacts who received the email as well.
    /// </summary>
    /// <value>(optional) A list of email addresses to carbon copy this message to.  They are listed on the email and anyone getting the email can see this full list of Contacts who received the email as well.</value>
    [DataMember(Name="cc", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cc")]
    public List<EmailAddressName> Cc { get; set; }

    /// <summary>
    /// (optional) list of email addresses that should receive copies of the email.  They are hidden on the email and anyone gettitng the email would not see the other people getting the email in this list.
    /// </summary>
    /// <value>(optional) list of email addresses that should receive copies of the email.  They are hidden on the email and anyone gettitng the email would not see the other people getting the email in this list.</value>
    [DataMember(Name="bcc", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "bcc")]
    public List<EmailAddressName> Bcc { get; set; }

    /// <summary>
    /// (optional) File attachments to include in the email.  The file contents must be base64 encoded!
    /// </summary>
    /// <value>(optional) File attachments to include in the email.  The file contents must be base64 encoded!</value>
    [DataMember(Name="attachments", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "attachments")]
    public List<MailAttachment> Attachments { get; set; }

    /// <summary>
    /// (optional)  ID of the Mail order within our system to use as the Mail Account.
    /// </summary>
    /// <value>(optional)  ID of the Mail order within our system to use as the Mail Account.</value>
    [DataMember(Name="id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "id")]
    public long? Id { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class SendMailAdv {\n");
      sb.Append("  Subject: ").Append(Subject).Append("\n");
      sb.Append("  Body: ").Append(Body).Append("\n");
      sb.Append("  From: ").Append(From).Append("\n");
      sb.Append("  To: ").Append(To).Append("\n");
      sb.Append("  Replyto: ").Append(Replyto).Append("\n");
      sb.Append("  Cc: ").Append(Cc).Append("\n");
      sb.Append("  Bcc: ").Append(Bcc).Append("\n");
      sb.Append("  Attachments: ").Append(Attachments).Append("\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
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

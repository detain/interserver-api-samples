using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// A result row from the &#x60;Mail&#x60; &#x60;GET&#x60; request.
  /// </summary>
  [DataContract]
  public class MailRow {
    /// <summary>
    /// The id of the mail.
    /// </summary>
    /// <value>The id of the mail.</value>
    [DataMember(Name="mail_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "mail_id")]
    public string MailId { get; set; }

    /// <summary>
    /// The repeat invoices cost of the mail.
    /// </summary>
    /// <value>The repeat invoices cost of the mail.</value>
    [DataMember(Name="repeat_invoices_cost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "repeat_invoices_cost")]
    public string RepeatInvoicesCost { get; set; }

    /// <summary>
    /// The username of the mail.
    /// </summary>
    /// <value>The username of the mail.</value>
    [DataMember(Name="mail_username", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "mail_username")]
    public string MailUsername { get; set; }

    /// <summary>
    /// The status of the mail.
    /// </summary>
    /// <value>The status of the mail.</value>
    [DataMember(Name="mail_status", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "mail_status")]
    public string MailStatus { get; set; }

    /// <summary>
    /// The services name of the mail.
    /// </summary>
    /// <value>The services name of the mail.</value>
    [DataMember(Name="services_name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_name")]
    public string ServicesName { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class MailRow {\n");
      sb.Append("  MailId: ").Append(MailId).Append("\n");
      sb.Append("  RepeatInvoicesCost: ").Append(RepeatInvoicesCost).Append("\n");
      sb.Append("  MailUsername: ").Append(MailUsername).Append("\n");
      sb.Append("  MailStatus: ").Append(MailStatus).Append("\n");
      sb.Append("  ServicesName: ").Append(ServicesName).Append("\n");
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

using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// 
  /// </summary>
  [DataContract]
  public class MailServiceInfo {
    /// <summary>
    /// The ID of the mail service.
    /// </summary>
    /// <value>The ID of the mail service.</value>
    [DataMember(Name="mail_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "mail_id")]
    public string MailId { get; set; }

    /// <summary>
    /// The username associated with the mail service.
    /// </summary>
    /// <value>The username associated with the mail service.</value>
    [DataMember(Name="mail_username", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "mail_username")]
    public string MailUsername { get; set; }

    /// <summary>
    /// The type of mail service.
    /// </summary>
    /// <value>The type of mail service.</value>
    [DataMember(Name="mail_type", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "mail_type")]
    public string MailType { get; set; }

    /// <summary>
    /// The currency of the mail service.
    /// </summary>
    /// <value>The currency of the mail service.</value>
    [DataMember(Name="mail_currency", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "mail_currency")]
    public string MailCurrency { get; set; }

    /// <summary>
    /// The order date of the mail service.
    /// </summary>
    /// <value>The order date of the mail service.</value>
    [DataMember(Name="mail_order_date", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "mail_order_date")]
    public string MailOrderDate { get; set; }

    /// <summary>
    /// The customer ID associated with the mail service.
    /// </summary>
    /// <value>The customer ID associated with the mail service.</value>
    [DataMember(Name="mail_custid", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "mail_custid")]
    public string MailCustid { get; set; }

    /// <summary>
    /// The mail quota for the service.
    /// </summary>
    /// <value>The mail quota for the service.</value>
    [DataMember(Name="mail_quota", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "mail_quota")]
    public string MailQuota { get; set; }

    /// <summary>
    /// The IP address associated with the mail service.
    /// </summary>
    /// <value>The IP address associated with the mail service.</value>
    [DataMember(Name="mail_ip", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "mail_ip")]
    public string MailIp { get; set; }

    /// <summary>
    /// The status of the mail service.
    /// </summary>
    /// <value>The status of the mail service.</value>
    [DataMember(Name="mail_status", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "mail_status")]
    public string MailStatus { get; set; }

    /// <summary>
    /// The invoice ID of the mail service.
    /// </summary>
    /// <value>The invoice ID of the mail service.</value>
    [DataMember(Name="mail_invoice", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "mail_invoice")]
    public string MailInvoice { get; set; }

    /// <summary>
    /// The coupon associated with the mail service.
    /// </summary>
    /// <value>The coupon associated with the mail service.</value>
    [DataMember(Name="mail_coupon", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "mail_coupon")]
    public string MailCoupon { get; set; }

    /// <summary>
    /// Additional information for the mail service.
    /// </summary>
    /// <value>Additional information for the mail service.</value>
    [DataMember(Name="mail_extra", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "mail_extra")]
    public string MailExtra { get; set; }

    /// <summary>
    /// The server status of the mail service.
    /// </summary>
    /// <value>The server status of the mail service.</value>
    [DataMember(Name="mail_server_status", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "mail_server_status")]
    public string MailServerStatus { get; set; }

    /// <summary>
    /// Additional comments for the mail service.
    /// </summary>
    /// <value>Additional comments for the mail service.</value>
    [DataMember(Name="mail_comment", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "mail_comment")]
    public string MailComment { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class MailServiceInfo {\n");
      sb.Append("  MailId: ").Append(MailId).Append("\n");
      sb.Append("  MailUsername: ").Append(MailUsername).Append("\n");
      sb.Append("  MailType: ").Append(MailType).Append("\n");
      sb.Append("  MailCurrency: ").Append(MailCurrency).Append("\n");
      sb.Append("  MailOrderDate: ").Append(MailOrderDate).Append("\n");
      sb.Append("  MailCustid: ").Append(MailCustid).Append("\n");
      sb.Append("  MailQuota: ").Append(MailQuota).Append("\n");
      sb.Append("  MailIp: ").Append(MailIp).Append("\n");
      sb.Append("  MailStatus: ").Append(MailStatus).Append("\n");
      sb.Append("  MailInvoice: ").Append(MailInvoice).Append("\n");
      sb.Append("  MailCoupon: ").Append(MailCoupon).Append("\n");
      sb.Append("  MailExtra: ").Append(MailExtra).Append("\n");
      sb.Append("  MailServerStatus: ").Append(MailServerStatus).Append("\n");
      sb.Append("  MailComment: ").Append(MailComment).Append("\n");
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

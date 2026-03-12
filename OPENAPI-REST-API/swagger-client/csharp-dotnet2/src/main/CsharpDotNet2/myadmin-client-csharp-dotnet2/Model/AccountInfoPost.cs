using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Request to update account information.
  /// </summary>
  [DataContract]
  public class AccountInfoPost {
    /// <summary>
    /// Your name.
    /// </summary>
    /// <value>Your name.</value>
    [DataMember(Name="name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "name")]
    public string Name { get; set; }

    /// <summary>
    /// Your company name.
    /// </summary>
    /// <value>Your company name.</value>
    [DataMember(Name="company", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "company")]
    public string Company { get; set; }

    /// <summary>
    /// Your address.
    /// </summary>
    /// <value>Your address.</value>
    [DataMember(Name="address", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "address")]
    public string Address { get; set; }

    /// <summary>
    /// Additional address information.
    /// </summary>
    /// <value>Additional address information.</value>
    [DataMember(Name="address2", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "address2")]
    public string Address2 { get; set; }

    /// <summary>
    /// Your city.
    /// </summary>
    /// <value>Your city.</value>
    [DataMember(Name="city", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "city")]
    public string City { get; set; }

    /// <summary>
    /// Your state.
    /// </summary>
    /// <value>Your state.</value>
    [DataMember(Name="state", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "state")]
    public string State { get; set; }

    /// <summary>
    /// Your ZIP code.
    /// </summary>
    /// <value>Your ZIP code.</value>
    [DataMember(Name="zip", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "zip")]
    public string Zip { get; set; }

    /// <summary>
    /// Your country.
    /// </summary>
    /// <value>Your country.</value>
    [DataMember(Name="country", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "country")]
    public string Country { get; set; }

    /// <summary>
    /// Your phone number.
    /// </summary>
    /// <value>Your phone number.</value>
    [DataMember(Name="phone", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "phone")]
    public string Phone { get; set; }

    /// <summary>
    /// Your preferred locale.
    /// </summary>
    /// <value>Your preferred locale.</value>
    [DataMember(Name="locale", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "locale")]
    public string Locale { get; set; }

    /// <summary>
    /// Your email for invoice notifications.
    /// </summary>
    /// <value>Your email for invoice notifications.</value>
    [DataMember(Name="email_invoices", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "email_invoices")]
    public string EmailInvoices { get; set; }

    /// <summary>
    /// Your email for abuse notifications.
    /// </summary>
    /// <value>Your email for abuse notifications.</value>
    [DataMember(Name="email_abuse", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "email_abuse")]
    public string EmailAbuse { get; set; }

    /// <summary>
    /// Set to `true` to disable account resets, or `false` to enable them.
    /// </summary>
    /// <value>Set to `true` to disable account resets, or `false` to enable them.</value>
    [DataMember(Name="disable_reset", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "disable_reset")]
    public bool? DisableReset { get; set; }

    /// <summary>
    /// Set to `true` to disable server reinstalls, or `false` to enable them.
    /// </summary>
    /// <value>Set to `true` to disable server reinstalls, or `false` to enable them.</value>
    [DataMember(Name="disable_reinstall", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "disable_reinstall")]
    public bool? DisableReinstall { get; set; }

    /// <summary>
    /// Set to `true` to disable server notifications, or `false` to enable them.
    /// </summary>
    /// <value>Set to `true` to disable server notifications, or `false` to enable them.</value>
    [DataMember(Name="disable_server_notifications", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "disable_server_notifications")]
    public bool? DisableServerNotifications { get; set; }

    /// <summary>
    /// Set to `true` to disable email notifications, or `false` to enable them.
    /// </summary>
    /// <value>Set to `true` to disable email notifications, or `false` to enable them.</value>
    [DataMember(Name="disable_email_notifications", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "disable_email_notifications")]
    public bool? DisableEmailNotifications { get; set; }

    /// <summary>
    /// Your GST identification number (if applicable).
    /// </summary>
    /// <value>Your GST identification number (if applicable).</value>
    [DataMember(Name="gstin", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "gstin")]
    public string Gstin { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class AccountInfoPost {\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("  Company: ").Append(Company).Append("\n");
      sb.Append("  Address: ").Append(Address).Append("\n");
      sb.Append("  Address2: ").Append(Address2).Append("\n");
      sb.Append("  City: ").Append(City).Append("\n");
      sb.Append("  State: ").Append(State).Append("\n");
      sb.Append("  Zip: ").Append(Zip).Append("\n");
      sb.Append("  Country: ").Append(Country).Append("\n");
      sb.Append("  Phone: ").Append(Phone).Append("\n");
      sb.Append("  Locale: ").Append(Locale).Append("\n");
      sb.Append("  EmailInvoices: ").Append(EmailInvoices).Append("\n");
      sb.Append("  EmailAbuse: ").Append(EmailAbuse).Append("\n");
      sb.Append("  DisableReset: ").Append(DisableReset).Append("\n");
      sb.Append("  DisableReinstall: ").Append(DisableReinstall).Append("\n");
      sb.Append("  DisableServerNotifications: ").Append(DisableServerNotifications).Append("\n");
      sb.Append("  DisableEmailNotifications: ").Append(DisableEmailNotifications).Append("\n");
      sb.Append("  Gstin: ").Append(Gstin).Append("\n");
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

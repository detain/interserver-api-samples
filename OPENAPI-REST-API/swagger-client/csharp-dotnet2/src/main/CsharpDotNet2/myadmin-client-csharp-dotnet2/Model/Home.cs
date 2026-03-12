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
  public class Home {
    /// <summary>
    /// Last login IP.
    /// </summary>
    /// <value>Last login IP.</value>
    [DataMember(Name="last_login_ip", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "last_login_ip")]
    public string LastLoginIp { get; set; }

    /// <summary>
    /// Last login time.
    /// </summary>
    /// <value>Last login time.</value>
    [DataMember(Name="last_login", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "last_login")]
    public string LastLogin { get; set; }

    /// <summary>
    /// Currency symbol.
    /// </summary>
    /// <value>Currency symbol.</value>
    [DataMember(Name="currency", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "currency")]
    public string Currency { get; set; }

    /// <summary>
    /// Amount with currency.
    /// </summary>
    /// <value>Amount with currency.</value>
    [DataMember(Name="amount", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "amount")]
    public string Amount { get; set; }

    /// <summary>
    /// Number of invoices.
    /// </summary>
    /// <value>Number of invoices.</value>
    [DataMember(Name="invoice_list", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "invoice_list")]
    public int? InvoiceList { get; set; }

    /// <summary>
    /// Balance with currency.
    /// </summary>
    /// <value>Balance with currency.</value>
    [DataMember(Name="balance", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "balance")]
    public string Balance { get; set; }

    /// <summary>
    /// Users full name.
    /// </summary>
    /// <value>Users full name.</value>
    [DataMember(Name="full_name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "full_name")]
    public string FullName { get; set; }

    /// <summary>
    /// User email address.
    /// </summary>
    /// <value>User email address.</value>
    [DataMember(Name="email", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "email")]
    public string Email { get; set; }

    /// <summary>
    /// List of tickets.
    /// </summary>
    /// <value>List of tickets.</value>
    [DataMember(Name="tickets", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "tickets")]
    public List<string> Tickets { get; set; }

    /// <summary>
    /// Gets or Sets TicketStatus
    /// </summary>
    [DataMember(Name="ticketStatus", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ticketStatus")]
    public HomeTicketStatus TicketStatus { get; set; }

    /// <summary>
    /// Gets or Sets TicketStatusView
    /// </summary>
    [DataMember(Name="ticketStatusView", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ticketStatusView")]
    public HomeTicketStatusView TicketStatusView { get; set; }

    /// <summary>
    /// Gets or Sets Details
    /// </summary>
    [DataMember(Name="details", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "details")]
    public HomeDetails Details { get; set; }

    /// <summary>
    /// Gets or Sets Services
    /// </summary>
    [DataMember(Name="services", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services")]
    public HomeServices Services { get; set; }

    /// <summary>
    /// Affiliate amount with currency.
    /// </summary>
    /// <value>Affiliate amount with currency.</value>
    [DataMember(Name="AFFILIATE_AMOUNT", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "AFFILIATE_AMOUNT")]
    public string AFFILIATE_AMOUNT { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Home {\n");
      sb.Append("  LastLoginIp: ").Append(LastLoginIp).Append("\n");
      sb.Append("  LastLogin: ").Append(LastLogin).Append("\n");
      sb.Append("  Currency: ").Append(Currency).Append("\n");
      sb.Append("  Amount: ").Append(Amount).Append("\n");
      sb.Append("  InvoiceList: ").Append(InvoiceList).Append("\n");
      sb.Append("  Balance: ").Append(Balance).Append("\n");
      sb.Append("  FullName: ").Append(FullName).Append("\n");
      sb.Append("  Email: ").Append(Email).Append("\n");
      sb.Append("  Tickets: ").Append(Tickets).Append("\n");
      sb.Append("  TicketStatus: ").Append(TicketStatus).Append("\n");
      sb.Append("  TicketStatusView: ").Append(TicketStatusView).Append("\n");
      sb.Append("  Details: ").Append(Details).Append("\n");
      sb.Append("  Services: ").Append(Services).Append("\n");
      sb.Append("  AFFILIATE_AMOUNT: ").Append(AFFILIATE_AMOUNT).Append("\n");
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

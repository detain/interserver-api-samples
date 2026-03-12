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
  public class ChargeInvoiceRowsInvoices {
    /// <summary>
    /// Unique invoice ID.
    /// </summary>
    /// <value>Unique invoice ID.</value>
    [DataMember(Name="invoices_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "invoices_id")]
    public decimal? InvoicesId { get; set; }

    /// <summary>
    /// Description of the invoice charge.
    /// </summary>
    /// <value>Description of the invoice charge.</value>
    [DataMember(Name="invoices_description", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "invoices_description")]
    public string InvoicesDescription { get; set; }

    /// <summary>
    /// Invoice amount.
    /// </summary>
    /// <value>Invoice amount.</value>
    [DataMember(Name="invoices_amount", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "invoices_amount")]
    public decimal? InvoicesAmount { get; set; }

    /// <summary>
    /// Invoice date.
    /// </summary>
    /// <value>Invoice date.</value>
    [DataMember(Name="invoices_date", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "invoices_date")]
    public string InvoicesDate { get; set; }

    /// <summary>
    /// Gets or Sets InvoicesPaid
    /// </summary>
    [DataMember(Name="invoices_paid", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "invoices_paid")]
    public decimal? InvoicesPaid { get; set; }

    /// <summary>
    /// Gets or Sets InvoicesDueDate
    /// </summary>
    [DataMember(Name="invoices_due_date", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "invoices_due_date")]
    public string InvoicesDueDate { get; set; }

    /// <summary>
    /// Gets or Sets InvoicesCurrency
    /// </summary>
    [DataMember(Name="invoices_currency", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "invoices_currency")]
    public string InvoicesCurrency { get; set; }

    /// <summary>
    /// Gets or Sets CurrencySymbol
    /// </summary>
    [DataMember(Name="currency_symbol", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "currency_symbol")]
    public string CurrencySymbol { get; set; }

    /// <summary>
    /// Gets or Sets InvoicesDateFormatted
    /// </summary>
    [DataMember(Name="invoices_date_formatted", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "invoices_date_formatted")]
    public string InvoicesDateFormatted { get; set; }

    /// <summary>
    /// This is optional when invoices_paid = 1 this array will show
    /// </summary>
    /// <value>This is optional when invoices_paid = 1 this array will show</value>
    [DataMember(Name="paid_invoices", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "paid_invoices")]
    public Dictionary<string, ChargeInvoiceRowsPaidInvoices> PaidInvoices { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ChargeInvoiceRowsInvoices {\n");
      sb.Append("  InvoicesId: ").Append(InvoicesId).Append("\n");
      sb.Append("  InvoicesDescription: ").Append(InvoicesDescription).Append("\n");
      sb.Append("  InvoicesAmount: ").Append(InvoicesAmount).Append("\n");
      sb.Append("  InvoicesDate: ").Append(InvoicesDate).Append("\n");
      sb.Append("  InvoicesPaid: ").Append(InvoicesPaid).Append("\n");
      sb.Append("  InvoicesDueDate: ").Append(InvoicesDueDate).Append("\n");
      sb.Append("  InvoicesCurrency: ").Append(InvoicesCurrency).Append("\n");
      sb.Append("  CurrencySymbol: ").Append(CurrencySymbol).Append("\n");
      sb.Append("  InvoicesDateFormatted: ").Append(InvoicesDateFormatted).Append("\n");
      sb.Append("  PaidInvoices: ").Append(PaidInvoices).Append("\n");
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

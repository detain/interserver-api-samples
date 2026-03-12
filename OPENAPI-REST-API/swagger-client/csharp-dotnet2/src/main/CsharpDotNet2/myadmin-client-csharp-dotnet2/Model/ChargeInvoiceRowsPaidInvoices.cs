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
  public class ChargeInvoiceRowsPaidInvoices {
    /// <summary>
    /// Gets or Sets InvoicesId
    /// </summary>
    [DataMember(Name="invoices_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "invoices_id")]
    public string InvoicesId { get; set; }

    /// <summary>
    /// Gets or Sets InvoicesDescription
    /// </summary>
    [DataMember(Name="invoices_description", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "invoices_description")]
    public string InvoicesDescription { get; set; }

    /// <summary>
    /// Gets or Sets InvoicesAmount
    /// </summary>
    [DataMember(Name="invoices_amount", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "invoices_amount")]
    public decimal? InvoicesAmount { get; set; }

    /// <summary>
    /// Gets or Sets InvoicesDate
    /// </summary>
    [DataMember(Name="invoices_date", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "invoices_date")]
    public string InvoicesDate { get; set; }

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
    /// Gets or Sets PaymentType
    /// </summary>
    [DataMember(Name="payment_type", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "payment_type")]
    public string PaymentType { get; set; }

    /// <summary>
    /// This is optional when refund is present this will show
    /// </summary>
    /// <value>This is optional when refund is present this will show</value>
    [DataMember(Name="refund_invoices", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "refund_invoices")]
    public Dictionary<string, ChargeInvoiceRowsRefundInvoices> RefundInvoices { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ChargeInvoiceRowsPaidInvoices {\n");
      sb.Append("  InvoicesId: ").Append(InvoicesId).Append("\n");
      sb.Append("  InvoicesDescription: ").Append(InvoicesDescription).Append("\n");
      sb.Append("  InvoicesAmount: ").Append(InvoicesAmount).Append("\n");
      sb.Append("  InvoicesDate: ").Append(InvoicesDate).Append("\n");
      sb.Append("  InvoicesCurrency: ").Append(InvoicesCurrency).Append("\n");
      sb.Append("  CurrencySymbol: ").Append(CurrencySymbol).Append("\n");
      sb.Append("  InvoicesDateFormatted: ").Append(InvoicesDateFormatted).Append("\n");
      sb.Append("  PaymentType: ").Append(PaymentType).Append("\n");
      sb.Append("  RefundInvoices: ").Append(RefundInvoices).Append("\n");
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

using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Billing information for a domain service including payment status, dates, and cost.
  /// </summary>
  [DataContract]
  public class DomainBillingDetails {
    /// <summary>
    /// Date of the last invoice for the domain.
    /// </summary>
    /// <value>Date of the last invoice for the domain.</value>
    [DataMember(Name="service_last_invoice_date", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_last_invoice_date")]
    public string ServiceLastInvoiceDate { get; set; }

    /// <summary>
    /// Current payment status (e.g., Paid, Unpaid).
    /// </summary>
    /// <value>Current payment status (e.g., Paid, Unpaid).</value>
    [DataMember(Name="service_payment_status", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_payment_status")]
    public string ServicePaymentStatus { get; set; }

    /// <summary>
    /// Billing frequency (e.g., Yearly, Monthly).
    /// </summary>
    /// <value>Billing frequency (e.g., Yearly, Monthly).</value>
    [DataMember(Name="service_frequency", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_frequency")]
    public string ServiceFrequency { get; set; }

    /// <summary>
    /// Next billing date (ISO 8601).
    /// </summary>
    /// <value>Next billing date (ISO 8601).</value>
    [DataMember(Name="next_date", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "next_date")]
    public string NextDate { get; set; }

    /// <summary>
    /// Human-readable next invoice date.
    /// </summary>
    /// <value>Human-readable next invoice date.</value>
    [DataMember(Name="service_next_invoice_date", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_next_invoice_date")]
    public string ServiceNextInvoiceDate { get; set; }

    /// <summary>
    /// Billing currency code.
    /// </summary>
    /// <value>Billing currency code.</value>
    [DataMember(Name="service_currency", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_currency")]
    public string ServiceCurrency { get; set; }

    /// <summary>
    /// Billing currency symbol.
    /// </summary>
    /// <value>Billing currency symbol.</value>
    [DataMember(Name="service_currency_symbol", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_currency_symbol")]
    public string ServiceCurrencySymbol { get; set; }

    /// <summary>
    /// Cost breakdown information.
    /// </summary>
    /// <value>Cost breakdown information.</value>
    [DataMember(Name="service_cost_info", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_cost_info")]
    public string ServiceCostInfo { get; set; }

    /// <summary>
    /// Gets or Sets ServiceExtra
    /// </summary>
    [DataMember(Name="service_extra", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_extra")]
    public DomainBillingExtra ServiceExtra { get; set; }

    /// <summary>
    /// Raw JSON string of extra billing data.
    /// </summary>
    /// <value>Raw JSON string of extra billing data.</value>
    [DataMember(Name="service_extra_json", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_extra_json")]
    public string ServiceExtraJson { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class DomainBillingDetails {\n");
      sb.Append("  ServiceLastInvoiceDate: ").Append(ServiceLastInvoiceDate).Append("\n");
      sb.Append("  ServicePaymentStatus: ").Append(ServicePaymentStatus).Append("\n");
      sb.Append("  ServiceFrequency: ").Append(ServiceFrequency).Append("\n");
      sb.Append("  NextDate: ").Append(NextDate).Append("\n");
      sb.Append("  ServiceNextInvoiceDate: ").Append(ServiceNextInvoiceDate).Append("\n");
      sb.Append("  ServiceCurrency: ").Append(ServiceCurrency).Append("\n");
      sb.Append("  ServiceCurrencySymbol: ").Append(ServiceCurrencySymbol).Append("\n");
      sb.Append("  ServiceCostInfo: ").Append(ServiceCostInfo).Append("\n");
      sb.Append("  ServiceExtra: ").Append(ServiceExtra).Append("\n");
      sb.Append("  ServiceExtraJson: ").Append(ServiceExtraJson).Append("\n");
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

using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Billing information for a software license including payment status, billing cycle, and cost.
  /// </summary>
  [DataContract]
  public class LicenseBillingDetails {
    /// <summary>
    /// Last invoice date
    /// </summary>
    /// <value>Last invoice date</value>
    [DataMember(Name="service_last_invoice_date", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_last_invoice_date")]
    public string ServiceLastInvoiceDate { get; set; }

    /// <summary>
    /// Payment status
    /// </summary>
    /// <value>Payment status</value>
    [DataMember(Name="service_payment_status", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_payment_status")]
    public string ServicePaymentStatus { get; set; }

    /// <summary>
    /// Service frequency
    /// </summary>
    /// <value>Service frequency</value>
    [DataMember(Name="service_frequency", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_frequency")]
    public string ServiceFrequency { get; set; }

    /// <summary>
    /// Next date
    /// </summary>
    /// <value>Next date</value>
    [DataMember(Name="next_date", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "next_date")]
    public DateTime? NextDate { get; set; }

    /// <summary>
    /// Next invoice date
    /// </summary>
    /// <value>Next invoice date</value>
    [DataMember(Name="service_next_invoice_date", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_next_invoice_date")]
    public string ServiceNextInvoiceDate { get; set; }

    /// <summary>
    /// Service currency
    /// </summary>
    /// <value>Service currency</value>
    [DataMember(Name="service_currency", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_currency")]
    public string ServiceCurrency { get; set; }

    /// <summary>
    /// Service currency symbol
    /// </summary>
    /// <value>Service currency symbol</value>
    [DataMember(Name="service_currency_symbol", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_currency_symbol")]
    public string ServiceCurrencySymbol { get; set; }

    /// <summary>
    /// Service coupon
    /// </summary>
    /// <value>Service coupon</value>
    [DataMember(Name="service_coupon", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_coupon")]
    public string ServiceCoupon { get; set; }

    /// <summary>
    /// Service cost information
    /// </summary>
    /// <value>Service cost information</value>
    [DataMember(Name="service_cost_info", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_cost_info")]
    public string ServiceCostInfo { get; set; }

    /// <summary>
    /// Additional service information
    /// </summary>
    /// <value>Additional service information</value>
    [DataMember(Name="service_extra", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_extra")]
    public List<string> ServiceExtra { get; set; }

    /// <summary>
    /// Additional service information in JSON format
    /// </summary>
    /// <value>Additional service information in JSON format</value>
    [DataMember(Name="service_extra_json", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_extra_json")]
    public string ServiceExtraJson { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class LicenseBillingDetails {\n");
      sb.Append("  ServiceLastInvoiceDate: ").Append(ServiceLastInvoiceDate).Append("\n");
      sb.Append("  ServicePaymentStatus: ").Append(ServicePaymentStatus).Append("\n");
      sb.Append("  ServiceFrequency: ").Append(ServiceFrequency).Append("\n");
      sb.Append("  NextDate: ").Append(NextDate).Append("\n");
      sb.Append("  ServiceNextInvoiceDate: ").Append(ServiceNextInvoiceDate).Append("\n");
      sb.Append("  ServiceCurrency: ").Append(ServiceCurrency).Append("\n");
      sb.Append("  ServiceCurrencySymbol: ").Append(ServiceCurrencySymbol).Append("\n");
      sb.Append("  ServiceCoupon: ").Append(ServiceCoupon).Append("\n");
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

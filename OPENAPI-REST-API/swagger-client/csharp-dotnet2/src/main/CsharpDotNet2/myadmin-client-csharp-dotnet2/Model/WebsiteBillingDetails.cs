using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Billing information for a webhosting service including payment status, billing cycle, and cost.
  /// </summary>
  [DataContract]
  public class WebsiteBillingDetails {
    /// <summary>
    /// Last invoice date for the service
    /// </summary>
    /// <value>Last invoice date for the service</value>
    [DataMember(Name="service_last_invoice_date", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_last_invoice_date")]
    public string ServiceLastInvoiceDate { get; set; }

    /// <summary>
    /// Payment status for the service
    /// </summary>
    /// <value>Payment status for the service</value>
    [DataMember(Name="service_payment_status", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_payment_status")]
    public string ServicePaymentStatus { get; set; }

    /// <summary>
    /// Frequency of the service
    /// </summary>
    /// <value>Frequency of the service</value>
    [DataMember(Name="service_frequency", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_frequency")]
    public string ServiceFrequency { get; set; }

    /// <summary>
    /// Next date for the service
    /// </summary>
    /// <value>Next date for the service</value>
    [DataMember(Name="next_date", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "next_date")]
    public string NextDate { get; set; }

    /// <summary>
    /// Next invoice date for the service
    /// </summary>
    /// <value>Next invoice date for the service</value>
    [DataMember(Name="service_next_invoice_date", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_next_invoice_date")]
    public string ServiceNextInvoiceDate { get; set; }

    /// <summary>
    /// Currency for the service
    /// </summary>
    /// <value>Currency for the service</value>
    [DataMember(Name="service_currency", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_currency")]
    public string ServiceCurrency { get; set; }

    /// <summary>
    /// Currency symbol for the service
    /// </summary>
    /// <value>Currency symbol for the service</value>
    [DataMember(Name="service_currency_symbol", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_currency_symbol")]
    public string ServiceCurrencySymbol { get; set; }

    /// <summary>
    /// Coupon for the service
    /// </summary>
    /// <value>Coupon for the service</value>
    [DataMember(Name="service_coupon", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_coupon")]
    public string ServiceCoupon { get; set; }

    /// <summary>
    /// Cost information for the service
    /// </summary>
    /// <value>Cost information for the service</value>
    [DataMember(Name="service_cost_info", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_cost_info")]
    public string ServiceCostInfo { get; set; }

    /// <summary>
    /// Gets or Sets ServiceExtra
    /// </summary>
    [DataMember(Name="service_extra", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_extra")]
    public WebsiteServiceExtra ServiceExtra { get; set; }

    /// <summary>
    /// Extra information in JSON format for the service
    /// </summary>
    /// <value>Extra information in JSON format for the service</value>
    [DataMember(Name="service_extra_json", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_extra_json")]
    public string ServiceExtraJson { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class WebsiteBillingDetails {\n");
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

package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.VpsServiceExtra;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * Billing information for a VPS service including payment status, billing cycle, and cost.
 **/
@Schema(description = "Billing information for a VPS service including payment status, billing cycle, and cost.")


public class VpsBillingDetails   {
  @JsonProperty("service_last_invoice_date")
  private String serviceLastInvoiceDate = null;
  @JsonProperty("service_payment_status")
  private String servicePaymentStatus = null;
  @JsonProperty("service_frequency")
  private String serviceFrequency = null;
  @JsonProperty("next_date")
  private String nextDate = null;
  @JsonProperty("service_next_invoice_date")
  private String serviceNextInvoiceDate = null;
  @JsonProperty("service_currency")
  private String serviceCurrency = null;
  @JsonProperty("service_currency_symbol")
  private String serviceCurrencySymbol = null;
  @JsonProperty("service_coupon")
  private String serviceCoupon = null;
  @JsonProperty("service_cost_info")
  private String serviceCostInfo = null;
  @JsonProperty("service_extra")
  private VpsServiceExtra serviceExtra = null;
  @JsonProperty("service_extra_json")
  private String serviceExtraJson = null;
  /**
   * Last invoice date
   **/
  public VpsBillingDetails serviceLastInvoiceDate(String serviceLastInvoiceDate) {
    this.serviceLastInvoiceDate = serviceLastInvoiceDate;
    return this;
  }

  
  @Schema(example = "July 26, 2023", description = "Last invoice date")
  @JsonProperty("service_last_invoice_date")
  public String getServiceLastInvoiceDate() {
    return serviceLastInvoiceDate;
  }
  public void setServiceLastInvoiceDate(String serviceLastInvoiceDate) {
    this.serviceLastInvoiceDate = serviceLastInvoiceDate;
  }

  /**
   * Payment status
   **/
  public VpsBillingDetails servicePaymentStatus(String servicePaymentStatus) {
    this.servicePaymentStatus = servicePaymentStatus;
    return this;
  }

  
  @Schema(example = "Paid", description = "Payment status")
  @JsonProperty("service_payment_status")
  public String getServicePaymentStatus() {
    return servicePaymentStatus;
  }
  public void setServicePaymentStatus(String servicePaymentStatus) {
    this.servicePaymentStatus = servicePaymentStatus;
  }

  /**
   * Billing frequency
   **/
  public VpsBillingDetails serviceFrequency(String serviceFrequency) {
    this.serviceFrequency = serviceFrequency;
    return this;
  }

  
  @Schema(example = "Monthly", description = "Billing frequency")
  @JsonProperty("service_frequency")
  public String getServiceFrequency() {
    return serviceFrequency;
  }
  public void setServiceFrequency(String serviceFrequency) {
    this.serviceFrequency = serviceFrequency;
  }

  /**
   * Next billing date
   **/
  public VpsBillingDetails nextDate(String nextDate) {
    this.nextDate = nextDate;
    return this;
  }

  
  @Schema(example = "2023-08-26T09:41:12.000Z", description = "Next billing date")
  @JsonProperty("next_date")
  public String getNextDate() {
    return nextDate;
  }
  public void setNextDate(String nextDate) {
    this.nextDate = nextDate;
  }

  /**
   * Next invoice date
   **/
  public VpsBillingDetails serviceNextInvoiceDate(String serviceNextInvoiceDate) {
    this.serviceNextInvoiceDate = serviceNextInvoiceDate;
    return this;
  }

  
  @Schema(example = "August 26, 2023", description = "Next invoice date")
  @JsonProperty("service_next_invoice_date")
  public String getServiceNextInvoiceDate() {
    return serviceNextInvoiceDate;
  }
  public void setServiceNextInvoiceDate(String serviceNextInvoiceDate) {
    this.serviceNextInvoiceDate = serviceNextInvoiceDate;
  }

  /**
   * Currency used for billing
   **/
  public VpsBillingDetails serviceCurrency(String serviceCurrency) {
    this.serviceCurrency = serviceCurrency;
    return this;
  }

  
  @Schema(example = "USD", description = "Currency used for billing")
  @JsonProperty("service_currency")
  public String getServiceCurrency() {
    return serviceCurrency;
  }
  public void setServiceCurrency(String serviceCurrency) {
    this.serviceCurrency = serviceCurrency;
  }

  /**
   * Currency symbol
   **/
  public VpsBillingDetails serviceCurrencySymbol(String serviceCurrencySymbol) {
    this.serviceCurrencySymbol = serviceCurrencySymbol;
    return this;
  }

  
  @Schema(example = "$", description = "Currency symbol")
  @JsonProperty("service_currency_symbol")
  public String getServiceCurrencySymbol() {
    return serviceCurrencySymbol;
  }
  public void setServiceCurrencySymbol(String serviceCurrencySymbol) {
    this.serviceCurrencySymbol = serviceCurrencySymbol;
  }

  /**
   * Billing coupon code
   **/
  public VpsBillingDetails serviceCoupon(String serviceCoupon) {
    this.serviceCoupon = serviceCoupon;
    return this;
  }

  
  @Schema(example = "TheCouponIUsed", description = "Billing coupon code")
  @JsonProperty("service_coupon")
  public String getServiceCoupon() {
    return serviceCoupon;
  }
  public void setServiceCoupon(String serviceCoupon) {
    this.serviceCoupon = serviceCoupon;
  }

  /**
   * Cost information
   **/
  public VpsBillingDetails serviceCostInfo(String serviceCostInfo) {
    this.serviceCostInfo = serviceCostInfo;
    return this;
  }

  
  @Schema(example = "0.00", description = "Cost information")
  @JsonProperty("service_cost_info")
  public String getServiceCostInfo() {
    return serviceCostInfo;
  }
  public void setServiceCostInfo(String serviceCostInfo) {
    this.serviceCostInfo = serviceCostInfo;
  }

  /**
   **/
  public VpsBillingDetails serviceExtra(VpsServiceExtra serviceExtra) {
    this.serviceExtra = serviceExtra;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("service_extra")
  public VpsServiceExtra getServiceExtra() {
    return serviceExtra;
  }
  public void setServiceExtra(VpsServiceExtra serviceExtra) {
    this.serviceExtra = serviceExtra;
  }

  /**
   * Additional information in JSON format
   **/
  public VpsBillingDetails serviceExtraJson(String serviceExtraJson) {
    this.serviceExtraJson = serviceExtraJson;
    return this;
  }

  
  @Schema(example = "{\"spice\":5903,\"snapshots\":[{\"name\":\"third\",\"used\":36490445,\"date\":1692095220},{\"name\":\"second\",\"used\":40894464,\"date\":1692181620},{\"name\":\"first\",\"used\":54735668,\"date\":1692268020}]}", description = "Additional information in JSON format")
  @JsonProperty("service_extra_json")
  public String getServiceExtraJson() {
    return serviceExtraJson;
  }
  public void setServiceExtraJson(String serviceExtraJson) {
    this.serviceExtraJson = serviceExtraJson;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsBillingDetails vpsBillingDetails = (VpsBillingDetails) o;
    return Objects.equals(serviceLastInvoiceDate, vpsBillingDetails.serviceLastInvoiceDate) &&
        Objects.equals(servicePaymentStatus, vpsBillingDetails.servicePaymentStatus) &&
        Objects.equals(serviceFrequency, vpsBillingDetails.serviceFrequency) &&
        Objects.equals(nextDate, vpsBillingDetails.nextDate) &&
        Objects.equals(serviceNextInvoiceDate, vpsBillingDetails.serviceNextInvoiceDate) &&
        Objects.equals(serviceCurrency, vpsBillingDetails.serviceCurrency) &&
        Objects.equals(serviceCurrencySymbol, vpsBillingDetails.serviceCurrencySymbol) &&
        Objects.equals(serviceCoupon, vpsBillingDetails.serviceCoupon) &&
        Objects.equals(serviceCostInfo, vpsBillingDetails.serviceCostInfo) &&
        Objects.equals(serviceExtra, vpsBillingDetails.serviceExtra) &&
        Objects.equals(serviceExtraJson, vpsBillingDetails.serviceExtraJson);
  }

  @Override
  public int hashCode() {
    return Objects.hash(serviceLastInvoiceDate, servicePaymentStatus, serviceFrequency, nextDate, serviceNextInvoiceDate, serviceCurrency, serviceCurrencySymbol, serviceCoupon, serviceCostInfo, serviceExtra, serviceExtraJson);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsBillingDetails {\n");
    sb.append("    serviceLastInvoiceDate: ").append(toIndentedString(serviceLastInvoiceDate)).append("\n");
    sb.append("    servicePaymentStatus: ").append(toIndentedString(servicePaymentStatus)).append("\n");
    sb.append("    serviceFrequency: ").append(toIndentedString(serviceFrequency)).append("\n");
    sb.append("    nextDate: ").append(toIndentedString(nextDate)).append("\n");
    sb.append("    serviceNextInvoiceDate: ").append(toIndentedString(serviceNextInvoiceDate)).append("\n");
    sb.append("    serviceCurrency: ").append(toIndentedString(serviceCurrency)).append("\n");
    sb.append("    serviceCurrencySymbol: ").append(toIndentedString(serviceCurrencySymbol)).append("\n");
    sb.append("    serviceCoupon: ").append(toIndentedString(serviceCoupon)).append("\n");
    sb.append("    serviceCostInfo: ").append(toIndentedString(serviceCostInfo)).append("\n");
    sb.append("    serviceExtra: ").append(toIndentedString(serviceExtra)).append("\n");
    sb.append("    serviceExtraJson: ").append(toIndentedString(serviceExtraJson)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

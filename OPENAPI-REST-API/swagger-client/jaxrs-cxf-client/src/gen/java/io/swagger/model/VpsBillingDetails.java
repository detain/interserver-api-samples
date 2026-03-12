package io.swagger.model;

import io.swagger.model.VpsServiceExtra;
import io.swagger.v3.oas.annotations.media.Schema;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonCreator;

/**
  * Billing information for a VPS service including payment status, billing cycle, and cost.
 **/
@Schema(description="Billing information for a VPS service including payment status, billing cycle, and cost.")
public class VpsBillingDetails   {
  
  @Schema(example = "July 26, 2023", description = "Last invoice date")
 /**
   * Last invoice date  
  **/
  private String serviceLastInvoiceDate = null;
  
  @Schema(example = "Paid", description = "Payment status")
 /**
   * Payment status  
  **/
  private String servicePaymentStatus = null;
  
  @Schema(example = "Monthly", description = "Billing frequency")
 /**
   * Billing frequency  
  **/
  private String serviceFrequency = null;
  
  @Schema(example = "2023-08-26T09:41:12.000Z", description = "Next billing date")
 /**
   * Next billing date  
  **/
  private String nextDate = null;
  
  @Schema(example = "August 26, 2023", description = "Next invoice date")
 /**
   * Next invoice date  
  **/
  private String serviceNextInvoiceDate = null;
  
  @Schema(example = "USD", description = "Currency used for billing")
 /**
   * Currency used for billing  
  **/
  private String serviceCurrency = null;
  
  @Schema(example = "$", description = "Currency symbol")
 /**
   * Currency symbol  
  **/
  private String serviceCurrencySymbol = null;
  
  @Schema(example = "TheCouponIUsed", description = "Billing coupon code")
 /**
   * Billing coupon code  
  **/
  private String serviceCoupon = null;
  
  @Schema(example = "0.00", description = "Cost information")
 /**
   * Cost information  
  **/
  private String serviceCostInfo = null;
  
  @Schema(description = "")
  private VpsServiceExtra serviceExtra = null;
  
  @Schema(example = "{\"spice\":5903,\"snapshots\":[{\"name\":\"third\",\"used\":36490445,\"date\":1692095220},{\"name\":\"second\",\"used\":40894464,\"date\":1692181620},{\"name\":\"first\",\"used\":54735668,\"date\":1692268020}]}", description = "Additional information in JSON format")
 /**
   * Additional information in JSON format  
  **/
  private String serviceExtraJson = null;
 /**
   * Last invoice date
   * @return serviceLastInvoiceDate
  **/
  @JsonProperty("service_last_invoice_date")
  public String getServiceLastInvoiceDate() {
    return serviceLastInvoiceDate;
  }

  public void setServiceLastInvoiceDate(String serviceLastInvoiceDate) {
    this.serviceLastInvoiceDate = serviceLastInvoiceDate;
  }

  public VpsBillingDetails serviceLastInvoiceDate(String serviceLastInvoiceDate) {
    this.serviceLastInvoiceDate = serviceLastInvoiceDate;
    return this;
  }

 /**
   * Payment status
   * @return servicePaymentStatus
  **/
  @JsonProperty("service_payment_status")
  public String getServicePaymentStatus() {
    return servicePaymentStatus;
  }

  public void setServicePaymentStatus(String servicePaymentStatus) {
    this.servicePaymentStatus = servicePaymentStatus;
  }

  public VpsBillingDetails servicePaymentStatus(String servicePaymentStatus) {
    this.servicePaymentStatus = servicePaymentStatus;
    return this;
  }

 /**
   * Billing frequency
   * @return serviceFrequency
  **/
  @JsonProperty("service_frequency")
  public String getServiceFrequency() {
    return serviceFrequency;
  }

  public void setServiceFrequency(String serviceFrequency) {
    this.serviceFrequency = serviceFrequency;
  }

  public VpsBillingDetails serviceFrequency(String serviceFrequency) {
    this.serviceFrequency = serviceFrequency;
    return this;
  }

 /**
   * Next billing date
   * @return nextDate
  **/
  @JsonProperty("next_date")
  public String getNextDate() {
    return nextDate;
  }

  public void setNextDate(String nextDate) {
    this.nextDate = nextDate;
  }

  public VpsBillingDetails nextDate(String nextDate) {
    this.nextDate = nextDate;
    return this;
  }

 /**
   * Next invoice date
   * @return serviceNextInvoiceDate
  **/
  @JsonProperty("service_next_invoice_date")
  public String getServiceNextInvoiceDate() {
    return serviceNextInvoiceDate;
  }

  public void setServiceNextInvoiceDate(String serviceNextInvoiceDate) {
    this.serviceNextInvoiceDate = serviceNextInvoiceDate;
  }

  public VpsBillingDetails serviceNextInvoiceDate(String serviceNextInvoiceDate) {
    this.serviceNextInvoiceDate = serviceNextInvoiceDate;
    return this;
  }

 /**
   * Currency used for billing
   * @return serviceCurrency
  **/
  @JsonProperty("service_currency")
  public String getServiceCurrency() {
    return serviceCurrency;
  }

  public void setServiceCurrency(String serviceCurrency) {
    this.serviceCurrency = serviceCurrency;
  }

  public VpsBillingDetails serviceCurrency(String serviceCurrency) {
    this.serviceCurrency = serviceCurrency;
    return this;
  }

 /**
   * Currency symbol
   * @return serviceCurrencySymbol
  **/
  @JsonProperty("service_currency_symbol")
  public String getServiceCurrencySymbol() {
    return serviceCurrencySymbol;
  }

  public void setServiceCurrencySymbol(String serviceCurrencySymbol) {
    this.serviceCurrencySymbol = serviceCurrencySymbol;
  }

  public VpsBillingDetails serviceCurrencySymbol(String serviceCurrencySymbol) {
    this.serviceCurrencySymbol = serviceCurrencySymbol;
    return this;
  }

 /**
   * Billing coupon code
   * @return serviceCoupon
  **/
  @JsonProperty("service_coupon")
  public String getServiceCoupon() {
    return serviceCoupon;
  }

  public void setServiceCoupon(String serviceCoupon) {
    this.serviceCoupon = serviceCoupon;
  }

  public VpsBillingDetails serviceCoupon(String serviceCoupon) {
    this.serviceCoupon = serviceCoupon;
    return this;
  }

 /**
   * Cost information
   * @return serviceCostInfo
  **/
  @JsonProperty("service_cost_info")
  public String getServiceCostInfo() {
    return serviceCostInfo;
  }

  public void setServiceCostInfo(String serviceCostInfo) {
    this.serviceCostInfo = serviceCostInfo;
  }

  public VpsBillingDetails serviceCostInfo(String serviceCostInfo) {
    this.serviceCostInfo = serviceCostInfo;
    return this;
  }

 /**
   * Get serviceExtra
   * @return serviceExtra
  **/
  @JsonProperty("service_extra")
  public VpsServiceExtra getServiceExtra() {
    return serviceExtra;
  }

  public void setServiceExtra(VpsServiceExtra serviceExtra) {
    this.serviceExtra = serviceExtra;
  }

  public VpsBillingDetails serviceExtra(VpsServiceExtra serviceExtra) {
    this.serviceExtra = serviceExtra;
    return this;
  }

 /**
   * Additional information in JSON format
   * @return serviceExtraJson
  **/
  @JsonProperty("service_extra_json")
  public String getServiceExtraJson() {
    return serviceExtraJson;
  }

  public void setServiceExtraJson(String serviceExtraJson) {
    this.serviceExtraJson = serviceExtraJson;
  }

  public VpsBillingDetails serviceExtraJson(String serviceExtraJson) {
    this.serviceExtraJson = serviceExtraJson;
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

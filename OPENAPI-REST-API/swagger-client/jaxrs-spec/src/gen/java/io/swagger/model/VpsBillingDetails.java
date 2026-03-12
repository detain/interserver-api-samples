package io.swagger.model;

import io.swagger.model.VpsServiceExtra;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Billing information for a VPS service including payment status, billing cycle, and cost.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Billing information for a VPS service including payment status, billing cycle, and cost.")

public class VpsBillingDetails   {

  private @Valid String serviceLastInvoiceDate = null;

  private @Valid String servicePaymentStatus = null;

  private @Valid String serviceFrequency = null;

  private @Valid String nextDate = null;

  private @Valid String serviceNextInvoiceDate = null;

  private @Valid String serviceCurrency = null;

  private @Valid String serviceCurrencySymbol = null;

  private @Valid String serviceCoupon = null;

  private @Valid String serviceCostInfo = null;

  private @Valid VpsServiceExtra serviceExtra = null;

  private @Valid String serviceExtraJson = null;

  /**
   * Last invoice date
   **/
  public VpsBillingDetails serviceLastInvoiceDate(String serviceLastInvoiceDate) {
    this.serviceLastInvoiceDate = serviceLastInvoiceDate;
    return this;
  }

  
  @ApiModelProperty(example = "July 26, 2023", value = "Last invoice date")
  @JsonProperty("service_last_invoice_date")
  @NotNull

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

  
  @ApiModelProperty(example = "Paid", value = "Payment status")
  @JsonProperty("service_payment_status")
  @NotNull

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

  
  @ApiModelProperty(example = "Monthly", value = "Billing frequency")
  @JsonProperty("service_frequency")
  @NotNull

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

  
  @ApiModelProperty(example = "2023-08-26T09:41:12.000Z", value = "Next billing date")
  @JsonProperty("next_date")
  @NotNull

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

  
  @ApiModelProperty(example = "August 26, 2023", value = "Next invoice date")
  @JsonProperty("service_next_invoice_date")
  @NotNull

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

  
  @ApiModelProperty(example = "USD", value = "Currency used for billing")
  @JsonProperty("service_currency")
  @NotNull

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

  
  @ApiModelProperty(example = "$", value = "Currency symbol")
  @JsonProperty("service_currency_symbol")
  @NotNull

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

  
  @ApiModelProperty(example = "TheCouponIUsed", value = "Billing coupon code")
  @JsonProperty("service_coupon")
  @NotNull

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

  
  @ApiModelProperty(example = "0.00", value = "Cost information")
  @JsonProperty("service_cost_info")
  @NotNull

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

  
  @ApiModelProperty(value = "")
  @JsonProperty("service_extra")
  @NotNull

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

  
  @ApiModelProperty(example = "{\"spice\":5903,\"snapshots\":[{\"name\":\"third\",\"used\":36490445,\"date\":1692095220},{\"name\":\"second\",\"used\":40894464,\"date\":1692181620},{\"name\":\"first\",\"used\":54735668,\"date\":1692268020}]}", value = "Additional information in JSON format")
  @JsonProperty("service_extra_json")
  @NotNull

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

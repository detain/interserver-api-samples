package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.WebsiteServiceExtra;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.Valid;
import javax.validation.constraints.*;
/**
 * Billing information for a webhosting service including payment status, billing cycle, and cost.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "Billing information for a webhosting service including payment status, billing cycle, and cost.")

public class WebsiteBillingDetails   {
  private String serviceLastInvoiceDate = null;
  private String servicePaymentStatus = null;
  private String serviceFrequency = null;
  private String nextDate = null;
  private String serviceNextInvoiceDate = null;
  private String serviceCurrency = null;
  private String serviceCurrencySymbol = null;
  private String serviceCoupon = null;
  private String serviceCostInfo = null;
  private WebsiteServiceExtra serviceExtra = null;
  private String serviceExtraJson = null;

  /**
   * Last invoice date for the service
   **/
  public WebsiteBillingDetails serviceLastInvoiceDate(String serviceLastInvoiceDate) {
    this.serviceLastInvoiceDate = serviceLastInvoiceDate;
    return this;
  }

  
  
  @Schema(description = "Last invoice date for the service")
  @JsonProperty("service_last_invoice_date")
  @NotNull
  public String getServiceLastInvoiceDate() {
    return serviceLastInvoiceDate;
  }
  public void setServiceLastInvoiceDate(String serviceLastInvoiceDate) {
    this.serviceLastInvoiceDate = serviceLastInvoiceDate;
  }

  /**
   * Payment status for the service
   **/
  public WebsiteBillingDetails servicePaymentStatus(String servicePaymentStatus) {
    this.servicePaymentStatus = servicePaymentStatus;
    return this;
  }

  
  
  @Schema(description = "Payment status for the service")
  @JsonProperty("service_payment_status")
  @NotNull
  public String getServicePaymentStatus() {
    return servicePaymentStatus;
  }
  public void setServicePaymentStatus(String servicePaymentStatus) {
    this.servicePaymentStatus = servicePaymentStatus;
  }

  /**
   * Frequency of the service
   **/
  public WebsiteBillingDetails serviceFrequency(String serviceFrequency) {
    this.serviceFrequency = serviceFrequency;
    return this;
  }

  
  
  @Schema(description = "Frequency of the service")
  @JsonProperty("service_frequency")
  @NotNull
  public String getServiceFrequency() {
    return serviceFrequency;
  }
  public void setServiceFrequency(String serviceFrequency) {
    this.serviceFrequency = serviceFrequency;
  }

  /**
   * Next date for the service
   **/
  public WebsiteBillingDetails nextDate(String nextDate) {
    this.nextDate = nextDate;
    return this;
  }

  
  
  @Schema(description = "Next date for the service")
  @JsonProperty("next_date")
  @NotNull
  public String getNextDate() {
    return nextDate;
  }
  public void setNextDate(String nextDate) {
    this.nextDate = nextDate;
  }

  /**
   * Next invoice date for the service
   **/
  public WebsiteBillingDetails serviceNextInvoiceDate(String serviceNextInvoiceDate) {
    this.serviceNextInvoiceDate = serviceNextInvoiceDate;
    return this;
  }

  
  
  @Schema(description = "Next invoice date for the service")
  @JsonProperty("service_next_invoice_date")
  @NotNull
  public String getServiceNextInvoiceDate() {
    return serviceNextInvoiceDate;
  }
  public void setServiceNextInvoiceDate(String serviceNextInvoiceDate) {
    this.serviceNextInvoiceDate = serviceNextInvoiceDate;
  }

  /**
   * Currency for the service
   **/
  public WebsiteBillingDetails serviceCurrency(String serviceCurrency) {
    this.serviceCurrency = serviceCurrency;
    return this;
  }

  
  
  @Schema(example = "USD", description = "Currency for the service")
  @JsonProperty("service_currency")
  @NotNull
  public String getServiceCurrency() {
    return serviceCurrency;
  }
  public void setServiceCurrency(String serviceCurrency) {
    this.serviceCurrency = serviceCurrency;
  }

  /**
   * Currency symbol for the service
   **/
  public WebsiteBillingDetails serviceCurrencySymbol(String serviceCurrencySymbol) {
    this.serviceCurrencySymbol = serviceCurrencySymbol;
    return this;
  }

  
  
  @Schema(example = "$", description = "Currency symbol for the service")
  @JsonProperty("service_currency_symbol")
  @NotNull
  public String getServiceCurrencySymbol() {
    return serviceCurrencySymbol;
  }
  public void setServiceCurrencySymbol(String serviceCurrencySymbol) {
    this.serviceCurrencySymbol = serviceCurrencySymbol;
  }

  /**
   * Coupon for the service
   **/
  public WebsiteBillingDetails serviceCoupon(String serviceCoupon) {
    this.serviceCoupon = serviceCoupon;
    return this;
  }

  
  
  @Schema(description = "Coupon for the service")
  @JsonProperty("service_coupon")
  @NotNull
  public String getServiceCoupon() {
    return serviceCoupon;
  }
  public void setServiceCoupon(String serviceCoupon) {
    this.serviceCoupon = serviceCoupon;
  }

  /**
   * Cost information for the service
   **/
  public WebsiteBillingDetails serviceCostInfo(String serviceCostInfo) {
    this.serviceCostInfo = serviceCostInfo;
    return this;
  }

  
  
  @Schema(description = "Cost information for the service")
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
  public WebsiteBillingDetails serviceExtra(WebsiteServiceExtra serviceExtra) {
    this.serviceExtra = serviceExtra;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("service_extra")
  @NotNull
  @Valid
  public WebsiteServiceExtra getServiceExtra() {
    return serviceExtra;
  }
  public void setServiceExtra(WebsiteServiceExtra serviceExtra) {
    this.serviceExtra = serviceExtra;
  }

  /**
   * Extra information in JSON format for the service
   **/
  public WebsiteBillingDetails serviceExtraJson(String serviceExtraJson) {
    this.serviceExtraJson = serviceExtraJson;
    return this;
  }

  
  
  @Schema(description = "Extra information in JSON format for the service")
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
    WebsiteBillingDetails websiteBillingDetails = (WebsiteBillingDetails) o;
    return Objects.equals(serviceLastInvoiceDate, websiteBillingDetails.serviceLastInvoiceDate) &&
        Objects.equals(servicePaymentStatus, websiteBillingDetails.servicePaymentStatus) &&
        Objects.equals(serviceFrequency, websiteBillingDetails.serviceFrequency) &&
        Objects.equals(nextDate, websiteBillingDetails.nextDate) &&
        Objects.equals(serviceNextInvoiceDate, websiteBillingDetails.serviceNextInvoiceDate) &&
        Objects.equals(serviceCurrency, websiteBillingDetails.serviceCurrency) &&
        Objects.equals(serviceCurrencySymbol, websiteBillingDetails.serviceCurrencySymbol) &&
        Objects.equals(serviceCoupon, websiteBillingDetails.serviceCoupon) &&
        Objects.equals(serviceCostInfo, websiteBillingDetails.serviceCostInfo) &&
        Objects.equals(serviceExtra, websiteBillingDetails.serviceExtra) &&
        Objects.equals(serviceExtraJson, websiteBillingDetails.serviceExtraJson);
  }

  @Override
  public int hashCode() {
    return Objects.hash(serviceLastInvoiceDate, servicePaymentStatus, serviceFrequency, nextDate, serviceNextInvoiceDate, serviceCurrency, serviceCurrencySymbol, serviceCoupon, serviceCostInfo, serviceExtra, serviceExtraJson);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class WebsiteBillingDetails {\n");
    
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

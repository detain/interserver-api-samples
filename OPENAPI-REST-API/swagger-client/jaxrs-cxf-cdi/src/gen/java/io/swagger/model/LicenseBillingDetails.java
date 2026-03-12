package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import javax.validation.Valid;
import javax.validation.constraints.*;
/**
 * Billing information for a software license including payment status, billing cycle, and cost.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "Billing information for a software license including payment status, billing cycle, and cost.")

public class LicenseBillingDetails   {
  private String serviceLastInvoiceDate = null;
  private String servicePaymentStatus = null;
  private String serviceFrequency = null;
  private java.util.Date nextDate = null;
  private String serviceNextInvoiceDate = null;
  private String serviceCurrency = null;
  private String serviceCurrencySymbol = null;
  private String serviceCoupon = null;
  private String serviceCostInfo = null;
  private List<String> serviceExtra = new ArrayList<String>();
  private String serviceExtraJson = null;

  /**
   * Last invoice date
   **/
  public LicenseBillingDetails serviceLastInvoiceDate(String serviceLastInvoiceDate) {
    this.serviceLastInvoiceDate = serviceLastInvoiceDate;
    return this;
  }

  
  
  @Schema(example = "August 14, 2023", description = "Last invoice date")
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
  public LicenseBillingDetails servicePaymentStatus(String servicePaymentStatus) {
    this.servicePaymentStatus = servicePaymentStatus;
    return this;
  }

  
  
  @Schema(example = "Paid", description = "Payment status")
  @JsonProperty("service_payment_status")
  @NotNull
  public String getServicePaymentStatus() {
    return servicePaymentStatus;
  }
  public void setServicePaymentStatus(String servicePaymentStatus) {
    this.servicePaymentStatus = servicePaymentStatus;
  }

  /**
   * Service frequency
   **/
  public LicenseBillingDetails serviceFrequency(String serviceFrequency) {
    this.serviceFrequency = serviceFrequency;
    return this;
  }

  
  
  @Schema(example = "Monthly", description = "Service frequency")
  @JsonProperty("service_frequency")
  @NotNull
  public String getServiceFrequency() {
    return serviceFrequency;
  }
  public void setServiceFrequency(String serviceFrequency) {
    this.serviceFrequency = serviceFrequency;
  }

  /**
   * Next date
   **/
  public LicenseBillingDetails nextDate(java.util.Date nextDate) {
    this.nextDate = nextDate;
    return this;
  }

  
  
  @Schema(example = "2023-09-14T09:39:46Z", description = "Next date")
  @JsonProperty("next_date")
  @NotNull
  @Valid
  public java.util.Date getNextDate() {
    return nextDate;
  }
  public void setNextDate(java.util.Date nextDate) {
    this.nextDate = nextDate;
  }

  /**
   * Next invoice date
   **/
  public LicenseBillingDetails serviceNextInvoiceDate(String serviceNextInvoiceDate) {
    this.serviceNextInvoiceDate = serviceNextInvoiceDate;
    return this;
  }

  
  
  @Schema(example = "September 14, 2023", description = "Next invoice date")
  @JsonProperty("service_next_invoice_date")
  @NotNull
  public String getServiceNextInvoiceDate() {
    return serviceNextInvoiceDate;
  }
  public void setServiceNextInvoiceDate(String serviceNextInvoiceDate) {
    this.serviceNextInvoiceDate = serviceNextInvoiceDate;
  }

  /**
   * Service currency
   **/
  public LicenseBillingDetails serviceCurrency(String serviceCurrency) {
    this.serviceCurrency = serviceCurrency;
    return this;
  }

  
  
  @Schema(example = "USD", description = "Service currency")
  @JsonProperty("service_currency")
  @NotNull
  public String getServiceCurrency() {
    return serviceCurrency;
  }
  public void setServiceCurrency(String serviceCurrency) {
    this.serviceCurrency = serviceCurrency;
  }

  /**
   * Service currency symbol
   **/
  public LicenseBillingDetails serviceCurrencySymbol(String serviceCurrencySymbol) {
    this.serviceCurrencySymbol = serviceCurrencySymbol;
    return this;
  }

  
  
  @Schema(example = "$", description = "Service currency symbol")
  @JsonProperty("service_currency_symbol")
  @NotNull
  public String getServiceCurrencySymbol() {
    return serviceCurrencySymbol;
  }
  public void setServiceCurrencySymbol(String serviceCurrencySymbol) {
    this.serviceCurrencySymbol = serviceCurrencySymbol;
  }

  /**
   * Service coupon
   **/
  public LicenseBillingDetails serviceCoupon(String serviceCoupon) {
    this.serviceCoupon = serviceCoupon;
    return this;
  }

  
  
  @Schema(example = "ACOUPONFORLICENSES", description = "Service coupon")
  @JsonProperty("service_coupon")
  @NotNull
  public String getServiceCoupon() {
    return serviceCoupon;
  }
  public void setServiceCoupon(String serviceCoupon) {
    this.serviceCoupon = serviceCoupon;
  }

  /**
   * Service cost information
   **/
  public LicenseBillingDetails serviceCostInfo(String serviceCostInfo) {
    this.serviceCostInfo = serviceCostInfo;
    return this;
  }

  
  
  @Schema(example = "0.00", description = "Service cost information")
  @JsonProperty("service_cost_info")
  @NotNull
  public String getServiceCostInfo() {
    return serviceCostInfo;
  }
  public void setServiceCostInfo(String serviceCostInfo) {
    this.serviceCostInfo = serviceCostInfo;
  }

  /**
   * Additional service information
   **/
  public LicenseBillingDetails serviceExtra(List<String> serviceExtra) {
    this.serviceExtra = serviceExtra;
    return this;
  }

  
  
  @Schema(description = "Additional service information")
  @JsonProperty("service_extra")
  @NotNull
  public List<String> getServiceExtra() {
    return serviceExtra;
  }
  public void setServiceExtra(List<String> serviceExtra) {
    this.serviceExtra = serviceExtra;
  }

  /**
   * Additional service information in JSON format
   **/
  public LicenseBillingDetails serviceExtraJson(String serviceExtraJson) {
    this.serviceExtraJson = serviceExtraJson;
    return this;
  }

  
  
  @Schema(example = "[\"\"]", description = "Additional service information in JSON format")
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
    LicenseBillingDetails licenseBillingDetails = (LicenseBillingDetails) o;
    return Objects.equals(serviceLastInvoiceDate, licenseBillingDetails.serviceLastInvoiceDate) &&
        Objects.equals(servicePaymentStatus, licenseBillingDetails.servicePaymentStatus) &&
        Objects.equals(serviceFrequency, licenseBillingDetails.serviceFrequency) &&
        Objects.equals(nextDate, licenseBillingDetails.nextDate) &&
        Objects.equals(serviceNextInvoiceDate, licenseBillingDetails.serviceNextInvoiceDate) &&
        Objects.equals(serviceCurrency, licenseBillingDetails.serviceCurrency) &&
        Objects.equals(serviceCurrencySymbol, licenseBillingDetails.serviceCurrencySymbol) &&
        Objects.equals(serviceCoupon, licenseBillingDetails.serviceCoupon) &&
        Objects.equals(serviceCostInfo, licenseBillingDetails.serviceCostInfo) &&
        Objects.equals(serviceExtra, licenseBillingDetails.serviceExtra) &&
        Objects.equals(serviceExtraJson, licenseBillingDetails.serviceExtraJson);
  }

  @Override
  public int hashCode() {
    return Objects.hash(serviceLastInvoiceDate, servicePaymentStatus, serviceFrequency, nextDate, serviceNextInvoiceDate, serviceCurrency, serviceCurrencySymbol, serviceCoupon, serviceCostInfo, serviceExtra, serviceExtraJson);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class LicenseBillingDetails {\n");
    
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

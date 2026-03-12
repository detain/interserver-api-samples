package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;


/**
 * Billing information for a software license including payment status, billing cycle, and cost.
 **/
@Schema(description = "Billing information for a software license including payment status, billing cycle, and cost.")


public class LicenseBillingDetails   {
  @JsonProperty("service_last_invoice_date")
  private String serviceLastInvoiceDate = null;
  @JsonProperty("service_payment_status")
  private String servicePaymentStatus = null;
  @JsonProperty("service_frequency")
  private String serviceFrequency = null;
  @JsonProperty("next_date")
  private Date nextDate = null;
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
  private List<String> serviceExtra = null;
  @JsonProperty("service_extra_json")
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
  public String getServiceFrequency() {
    return serviceFrequency;
  }
  public void setServiceFrequency(String serviceFrequency) {
    this.serviceFrequency = serviceFrequency;
  }

  /**
   * Next date
   **/
  public LicenseBillingDetails nextDate(Date nextDate) {
    this.nextDate = nextDate;
    return this;
  }

  
  @Schema(example = "2023-09-14T09:39:46Z", description = "Next date")
  @JsonProperty("next_date")
  public Date getNextDate() {
    return nextDate;
  }
  public void setNextDate(Date nextDate) {
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

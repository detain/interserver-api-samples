package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.WebsiteServiceExtra;
import io.swagger.v3.oas.annotations.media.Schema;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * Billing information for a webhosting service including payment status, billing cycle, and cost.
 */
@Schema(description = "Billing information for a webhosting service including payment status, billing cycle, and cost.")
@Validated
@Introspected

public class WebsiteBillingDetails   {
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
  private WebsiteServiceExtra serviceExtra = null;

  @JsonProperty("service_extra_json")
  private String serviceExtraJson = null;

  public WebsiteBillingDetails serviceLastInvoiceDate(String serviceLastInvoiceDate) {
    this.serviceLastInvoiceDate = serviceLastInvoiceDate;
    return this;
  }

  /**
   * Last invoice date for the service
   * @return serviceLastInvoiceDate
  **/
  @Schema(description = "Last invoice date for the service")
  @NotNull

  public String getServiceLastInvoiceDate() {
    return serviceLastInvoiceDate;
  }

  public void setServiceLastInvoiceDate(String serviceLastInvoiceDate) {
    this.serviceLastInvoiceDate = serviceLastInvoiceDate;
  }

  public WebsiteBillingDetails servicePaymentStatus(String servicePaymentStatus) {
    this.servicePaymentStatus = servicePaymentStatus;
    return this;
  }

  /**
   * Payment status for the service
   * @return servicePaymentStatus
  **/
  @Schema(description = "Payment status for the service")
  @NotNull

  public String getServicePaymentStatus() {
    return servicePaymentStatus;
  }

  public void setServicePaymentStatus(String servicePaymentStatus) {
    this.servicePaymentStatus = servicePaymentStatus;
  }

  public WebsiteBillingDetails serviceFrequency(String serviceFrequency) {
    this.serviceFrequency = serviceFrequency;
    return this;
  }

  /**
   * Frequency of the service
   * @return serviceFrequency
  **/
  @Schema(description = "Frequency of the service")
  @NotNull

  public String getServiceFrequency() {
    return serviceFrequency;
  }

  public void setServiceFrequency(String serviceFrequency) {
    this.serviceFrequency = serviceFrequency;
  }

  public WebsiteBillingDetails nextDate(String nextDate) {
    this.nextDate = nextDate;
    return this;
  }

  /**
   * Next date for the service
   * @return nextDate
  **/
  @Schema(description = "Next date for the service")
  @NotNull

  public String getNextDate() {
    return nextDate;
  }

  public void setNextDate(String nextDate) {
    this.nextDate = nextDate;
  }

  public WebsiteBillingDetails serviceNextInvoiceDate(String serviceNextInvoiceDate) {
    this.serviceNextInvoiceDate = serviceNextInvoiceDate;
    return this;
  }

  /**
   * Next invoice date for the service
   * @return serviceNextInvoiceDate
  **/
  @Schema(description = "Next invoice date for the service")
  @NotNull

  public String getServiceNextInvoiceDate() {
    return serviceNextInvoiceDate;
  }

  public void setServiceNextInvoiceDate(String serviceNextInvoiceDate) {
    this.serviceNextInvoiceDate = serviceNextInvoiceDate;
  }

  public WebsiteBillingDetails serviceCurrency(String serviceCurrency) {
    this.serviceCurrency = serviceCurrency;
    return this;
  }

  /**
   * Currency for the service
   * @return serviceCurrency
  **/
  @Schema(example = "USD", description = "Currency for the service")
  @NotNull

  public String getServiceCurrency() {
    return serviceCurrency;
  }

  public void setServiceCurrency(String serviceCurrency) {
    this.serviceCurrency = serviceCurrency;
  }

  public WebsiteBillingDetails serviceCurrencySymbol(String serviceCurrencySymbol) {
    this.serviceCurrencySymbol = serviceCurrencySymbol;
    return this;
  }

  /**
   * Currency symbol for the service
   * @return serviceCurrencySymbol
  **/
  @Schema(example = "$", description = "Currency symbol for the service")
  @NotNull

  public String getServiceCurrencySymbol() {
    return serviceCurrencySymbol;
  }

  public void setServiceCurrencySymbol(String serviceCurrencySymbol) {
    this.serviceCurrencySymbol = serviceCurrencySymbol;
  }

  public WebsiteBillingDetails serviceCoupon(String serviceCoupon) {
    this.serviceCoupon = serviceCoupon;
    return this;
  }

  /**
   * Coupon for the service
   * @return serviceCoupon
  **/
  @Schema(description = "Coupon for the service")
  @NotNull

  public String getServiceCoupon() {
    return serviceCoupon;
  }

  public void setServiceCoupon(String serviceCoupon) {
    this.serviceCoupon = serviceCoupon;
  }

  public WebsiteBillingDetails serviceCostInfo(String serviceCostInfo) {
    this.serviceCostInfo = serviceCostInfo;
    return this;
  }

  /**
   * Cost information for the service
   * @return serviceCostInfo
  **/
  @Schema(description = "Cost information for the service")
  @NotNull

  public String getServiceCostInfo() {
    return serviceCostInfo;
  }

  public void setServiceCostInfo(String serviceCostInfo) {
    this.serviceCostInfo = serviceCostInfo;
  }

  public WebsiteBillingDetails serviceExtra(WebsiteServiceExtra serviceExtra) {
    this.serviceExtra = serviceExtra;
    return this;
  }

  /**
   * Get serviceExtra
   * @return serviceExtra
  **/
  @Schema(description = "")
  @NotNull

  @Valid
  public WebsiteServiceExtra getServiceExtra() {
    return serviceExtra;
  }

  public void setServiceExtra(WebsiteServiceExtra serviceExtra) {
    this.serviceExtra = serviceExtra;
  }

  public WebsiteBillingDetails serviceExtraJson(String serviceExtraJson) {
    this.serviceExtraJson = serviceExtraJson;
    return this;
  }

  /**
   * Extra information in JSON format for the service
   * @return serviceExtraJson
  **/
  @Schema(description = "Extra information in JSON format for the service")
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
    return Objects.equals(this.serviceLastInvoiceDate, websiteBillingDetails.serviceLastInvoiceDate) &&
        Objects.equals(this.servicePaymentStatus, websiteBillingDetails.servicePaymentStatus) &&
        Objects.equals(this.serviceFrequency, websiteBillingDetails.serviceFrequency) &&
        Objects.equals(this.nextDate, websiteBillingDetails.nextDate) &&
        Objects.equals(this.serviceNextInvoiceDate, websiteBillingDetails.serviceNextInvoiceDate) &&
        Objects.equals(this.serviceCurrency, websiteBillingDetails.serviceCurrency) &&
        Objects.equals(this.serviceCurrencySymbol, websiteBillingDetails.serviceCurrencySymbol) &&
        Objects.equals(this.serviceCoupon, websiteBillingDetails.serviceCoupon) &&
        Objects.equals(this.serviceCostInfo, websiteBillingDetails.serviceCostInfo) &&
        Objects.equals(this.serviceExtra, websiteBillingDetails.serviceExtra) &&
        Objects.equals(this.serviceExtraJson, websiteBillingDetails.serviceExtraJson);
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

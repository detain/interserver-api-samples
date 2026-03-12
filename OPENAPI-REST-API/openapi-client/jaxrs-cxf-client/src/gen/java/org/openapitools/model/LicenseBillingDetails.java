package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Date;
import java.util.List;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Billing information for a software license including payment status, billing cycle, and cost.
 */
@ApiModel(description="Billing information for a software license including payment status, billing cycle, and cost.")

public class LicenseBillingDetails  {
  
 /**
  * Last invoice date
  */
  @ApiModelProperty(example = "August 14, 2023", value = "Last invoice date")

  private String serviceLastInvoiceDate;

 /**
  * Payment status
  */
  @ApiModelProperty(example = "Paid", value = "Payment status")

  private String servicePaymentStatus;

 /**
  * Service frequency
  */
  @ApiModelProperty(example = "Monthly", value = "Service frequency")

  private String serviceFrequency;

 /**
  * Next date
  */
  @ApiModelProperty(example = "2023-09-14T09:39:46Z", value = "Next date")

  private Date nextDate;

 /**
  * Next invoice date
  */
  @ApiModelProperty(example = "September 14, 2023", value = "Next invoice date")

  private String serviceNextInvoiceDate;

 /**
  * Service currency
  */
  @ApiModelProperty(example = "USD", value = "Service currency")

  private String serviceCurrency;

 /**
  * Service currency symbol
  */
  @ApiModelProperty(example = "$", value = "Service currency symbol")

  private String serviceCurrencySymbol;

 /**
  * Service coupon
  */
  @ApiModelProperty(example = "ACOUPONFORLICENSES", value = "Service coupon")

  private String serviceCoupon;

 /**
  * Service cost information
  */
  @ApiModelProperty(example = "0.00", value = "Service cost information")

  private String serviceCostInfo;

 /**
  * Additional service information
  */
  @ApiModelProperty(value = "Additional service information")

  private List<String> serviceExtra = new ArrayList<>();

 /**
  * Additional service information in JSON format
  */
  @ApiModelProperty(example = "[\"\"]", value = "Additional service information in JSON format")

  private String serviceExtraJson;
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

  public LicenseBillingDetails serviceLastInvoiceDate(String serviceLastInvoiceDate) {
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

  public LicenseBillingDetails servicePaymentStatus(String servicePaymentStatus) {
    this.servicePaymentStatus = servicePaymentStatus;
    return this;
  }

 /**
   * Service frequency
   * @return serviceFrequency
  **/
  @JsonProperty("service_frequency")
  public String getServiceFrequency() {
    return serviceFrequency;
  }

  public void setServiceFrequency(String serviceFrequency) {
    this.serviceFrequency = serviceFrequency;
  }

  public LicenseBillingDetails serviceFrequency(String serviceFrequency) {
    this.serviceFrequency = serviceFrequency;
    return this;
  }

 /**
   * Next date
   * @return nextDate
  **/
  @JsonProperty("next_date")
  public Date getNextDate() {
    return nextDate;
  }

  public void setNextDate(Date nextDate) {
    this.nextDate = nextDate;
  }

  public LicenseBillingDetails nextDate(Date nextDate) {
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

  public LicenseBillingDetails serviceNextInvoiceDate(String serviceNextInvoiceDate) {
    this.serviceNextInvoiceDate = serviceNextInvoiceDate;
    return this;
  }

 /**
   * Service currency
   * @return serviceCurrency
  **/
  @JsonProperty("service_currency")
  public String getServiceCurrency() {
    return serviceCurrency;
  }

  public void setServiceCurrency(String serviceCurrency) {
    this.serviceCurrency = serviceCurrency;
  }

  public LicenseBillingDetails serviceCurrency(String serviceCurrency) {
    this.serviceCurrency = serviceCurrency;
    return this;
  }

 /**
   * Service currency symbol
   * @return serviceCurrencySymbol
  **/
  @JsonProperty("service_currency_symbol")
  public String getServiceCurrencySymbol() {
    return serviceCurrencySymbol;
  }

  public void setServiceCurrencySymbol(String serviceCurrencySymbol) {
    this.serviceCurrencySymbol = serviceCurrencySymbol;
  }

  public LicenseBillingDetails serviceCurrencySymbol(String serviceCurrencySymbol) {
    this.serviceCurrencySymbol = serviceCurrencySymbol;
    return this;
  }

 /**
   * Service coupon
   * @return serviceCoupon
  **/
  @JsonProperty("service_coupon")
  public String getServiceCoupon() {
    return serviceCoupon;
  }

  public void setServiceCoupon(String serviceCoupon) {
    this.serviceCoupon = serviceCoupon;
  }

  public LicenseBillingDetails serviceCoupon(String serviceCoupon) {
    this.serviceCoupon = serviceCoupon;
    return this;
  }

 /**
   * Service cost information
   * @return serviceCostInfo
  **/
  @JsonProperty("service_cost_info")
  public String getServiceCostInfo() {
    return serviceCostInfo;
  }

  public void setServiceCostInfo(String serviceCostInfo) {
    this.serviceCostInfo = serviceCostInfo;
  }

  public LicenseBillingDetails serviceCostInfo(String serviceCostInfo) {
    this.serviceCostInfo = serviceCostInfo;
    return this;
  }

 /**
   * Additional service information
   * @return serviceExtra
  **/
  @JsonProperty("service_extra")
  public List<String> getServiceExtra() {
    return serviceExtra;
  }

  public void setServiceExtra(List<String> serviceExtra) {
    this.serviceExtra = serviceExtra;
  }

  public LicenseBillingDetails serviceExtra(List<String> serviceExtra) {
    this.serviceExtra = serviceExtra;
    return this;
  }

  public LicenseBillingDetails addServiceExtraItem(String serviceExtraItem) {
    this.serviceExtra.add(serviceExtraItem);
    return this;
  }

 /**
   * Additional service information in JSON format
   * @return serviceExtraJson
  **/
  @JsonProperty("service_extra_json")
  public String getServiceExtraJson() {
    return serviceExtraJson;
  }

  public void setServiceExtraJson(String serviceExtraJson) {
    this.serviceExtraJson = serviceExtraJson;
  }

  public LicenseBillingDetails serviceExtraJson(String serviceExtraJson) {
    this.serviceExtraJson = serviceExtraJson;
    return this;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    LicenseBillingDetails licenseBillingDetails = (LicenseBillingDetails) o;
    return Objects.equals(this.serviceLastInvoiceDate, licenseBillingDetails.serviceLastInvoiceDate) &&
        Objects.equals(this.servicePaymentStatus, licenseBillingDetails.servicePaymentStatus) &&
        Objects.equals(this.serviceFrequency, licenseBillingDetails.serviceFrequency) &&
        Objects.equals(this.nextDate, licenseBillingDetails.nextDate) &&
        Objects.equals(this.serviceNextInvoiceDate, licenseBillingDetails.serviceNextInvoiceDate) &&
        Objects.equals(this.serviceCurrency, licenseBillingDetails.serviceCurrency) &&
        Objects.equals(this.serviceCurrencySymbol, licenseBillingDetails.serviceCurrencySymbol) &&
        Objects.equals(this.serviceCoupon, licenseBillingDetails.serviceCoupon) &&
        Objects.equals(this.serviceCostInfo, licenseBillingDetails.serviceCostInfo) &&
        Objects.equals(this.serviceExtra, licenseBillingDetails.serviceExtra) &&
        Objects.equals(this.serviceExtraJson, licenseBillingDetails.serviceExtraJson);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}


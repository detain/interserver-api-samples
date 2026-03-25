package org.openapitools.model;

import org.openapitools.model.QuickserverServiceExtra;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Billing information for a QuickServer service including payment status, billing cycle, and cost.
 */
@ApiModel(description="Billing information for a QuickServer service including payment status, billing cycle, and cost.")

public class QuickserverBillingDetails  {
  
 /**
  * Last invoice date
  */
  @ApiModelProperty(example = "April 11, 2023", value = "Last invoice date")

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
  @ApiModelProperty(example = "2023-05-11T20:00:06.000Z", value = "Next date")

  private String nextDate;

 /**
  * Next invoice date
  */
  @ApiModelProperty(example = "May 11, 2023", value = "Next invoice date")

  private String serviceNextInvoiceDate;

 /**
  * Currency
  */
  @ApiModelProperty(example = "USD", value = "Currency")

  private String serviceCurrency;

 /**
  * Currency symbol
  */
  @ApiModelProperty(example = "$", value = "Currency symbol")

  private String serviceCurrencySymbol;

 /**
  * Cost information
  */
  @ApiModelProperty(example = "49.00", value = "Cost information")

  private String serviceCostInfo;

  @ApiModelProperty(value = "")

  private QuickserverServiceExtra serviceExtra;

 /**
  * Extra information (JSON format)
  */
  @ApiModelProperty(example = "{\"platform\":\"kvm\"}", value = "Extra information (JSON format)")

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

  public QuickserverBillingDetails serviceLastInvoiceDate(String serviceLastInvoiceDate) {
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

  public QuickserverBillingDetails servicePaymentStatus(String servicePaymentStatus) {
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

  public QuickserverBillingDetails serviceFrequency(String serviceFrequency) {
    this.serviceFrequency = serviceFrequency;
    return this;
  }

 /**
   * Next date
   * @return nextDate
  **/
  @JsonProperty("next_date")
  public String getNextDate() {
    return nextDate;
  }

  public void setNextDate(String nextDate) {
    this.nextDate = nextDate;
  }

  public QuickserverBillingDetails nextDate(String nextDate) {
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

  public QuickserverBillingDetails serviceNextInvoiceDate(String serviceNextInvoiceDate) {
    this.serviceNextInvoiceDate = serviceNextInvoiceDate;
    return this;
  }

 /**
   * Currency
   * @return serviceCurrency
  **/
  @JsonProperty("service_currency")
  public String getServiceCurrency() {
    return serviceCurrency;
  }

  public void setServiceCurrency(String serviceCurrency) {
    this.serviceCurrency = serviceCurrency;
  }

  public QuickserverBillingDetails serviceCurrency(String serviceCurrency) {
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

  public QuickserverBillingDetails serviceCurrencySymbol(String serviceCurrencySymbol) {
    this.serviceCurrencySymbol = serviceCurrencySymbol;
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

  public QuickserverBillingDetails serviceCostInfo(String serviceCostInfo) {
    this.serviceCostInfo = serviceCostInfo;
    return this;
  }

 /**
   * Get serviceExtra
   * @return serviceExtra
  **/
  @JsonProperty("service_extra")
  public QuickserverServiceExtra getServiceExtra() {
    return serviceExtra;
  }

  public void setServiceExtra(QuickserverServiceExtra serviceExtra) {
    this.serviceExtra = serviceExtra;
  }

  public QuickserverBillingDetails serviceExtra(QuickserverServiceExtra serviceExtra) {
    this.serviceExtra = serviceExtra;
    return this;
  }

 /**
   * Extra information (JSON format)
   * @return serviceExtraJson
  **/
  @JsonProperty("service_extra_json")
  public String getServiceExtraJson() {
    return serviceExtraJson;
  }

  public void setServiceExtraJson(String serviceExtraJson) {
    this.serviceExtraJson = serviceExtraJson;
  }

  public QuickserverBillingDetails serviceExtraJson(String serviceExtraJson) {
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
    QuickserverBillingDetails quickserverBillingDetails = (QuickserverBillingDetails) o;
    return Objects.equals(this.serviceLastInvoiceDate, quickserverBillingDetails.serviceLastInvoiceDate) &&
        Objects.equals(this.servicePaymentStatus, quickserverBillingDetails.servicePaymentStatus) &&
        Objects.equals(this.serviceFrequency, quickserverBillingDetails.serviceFrequency) &&
        Objects.equals(this.nextDate, quickserverBillingDetails.nextDate) &&
        Objects.equals(this.serviceNextInvoiceDate, quickserverBillingDetails.serviceNextInvoiceDate) &&
        Objects.equals(this.serviceCurrency, quickserverBillingDetails.serviceCurrency) &&
        Objects.equals(this.serviceCurrencySymbol, quickserverBillingDetails.serviceCurrencySymbol) &&
        Objects.equals(this.serviceCostInfo, quickserverBillingDetails.serviceCostInfo) &&
        Objects.equals(this.serviceExtra, quickserverBillingDetails.serviceExtra) &&
        Objects.equals(this.serviceExtraJson, quickserverBillingDetails.serviceExtraJson);
  }

  @Override
  public int hashCode() {
    return Objects.hash(serviceLastInvoiceDate, servicePaymentStatus, serviceFrequency, nextDate, serviceNextInvoiceDate, serviceCurrency, serviceCurrencySymbol, serviceCostInfo, serviceExtra, serviceExtraJson);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class QuickserverBillingDetails {\n");
    
    sb.append("    serviceLastInvoiceDate: ").append(toIndentedString(serviceLastInvoiceDate)).append("\n");
    sb.append("    servicePaymentStatus: ").append(toIndentedString(servicePaymentStatus)).append("\n");
    sb.append("    serviceFrequency: ").append(toIndentedString(serviceFrequency)).append("\n");
    sb.append("    nextDate: ").append(toIndentedString(nextDate)).append("\n");
    sb.append("    serviceNextInvoiceDate: ").append(toIndentedString(serviceNextInvoiceDate)).append("\n");
    sb.append("    serviceCurrency: ").append(toIndentedString(serviceCurrency)).append("\n");
    sb.append("    serviceCurrencySymbol: ").append(toIndentedString(serviceCurrencySymbol)).append("\n");
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
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}


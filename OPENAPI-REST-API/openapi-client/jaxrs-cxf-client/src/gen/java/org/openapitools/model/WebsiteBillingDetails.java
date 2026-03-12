package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Billing information for a webhosting service including payment status, billing cycle, and cost.
 */
@ApiModel(description="Billing information for a webhosting service including payment status, billing cycle, and cost.")

public class WebsiteBillingDetails  {
  
 /**
  * Last invoice date for the service
  */
  @ApiModelProperty(value = "Last invoice date for the service")

  private String serviceLastInvoiceDate;

 /**
  * Payment status for the service
  */
  @ApiModelProperty(value = "Payment status for the service")

  private String servicePaymentStatus;

 /**
  * Frequency of the service
  */
  @ApiModelProperty(value = "Frequency of the service")

  private String serviceFrequency;

 /**
  * Next date for the service
  */
  @ApiModelProperty(value = "Next date for the service")

  private String nextDate;

 /**
  * Next invoice date for the service
  */
  @ApiModelProperty(value = "Next invoice date for the service")

  private String serviceNextInvoiceDate;

 /**
  * Currency for the service
  */
  @ApiModelProperty(example = "USD", value = "Currency for the service")

  private String serviceCurrency;

 /**
  * Currency symbol for the service
  */
  @ApiModelProperty(example = "$", value = "Currency symbol for the service")

  private String serviceCurrencySymbol;

 /**
  * Coupon for the service
  */
  @ApiModelProperty(value = "Coupon for the service")

  private String serviceCoupon;

 /**
  * Cost information for the service
  */
  @ApiModelProperty(value = "Cost information for the service")

  private String serviceCostInfo;

 /**
  * Extra information for the service
  */
  @ApiModelProperty(value = "Extra information for the service")

  private Object serviceExtra;

 /**
  * Extra information in JSON format for the service
  */
  @ApiModelProperty(value = "Extra information in JSON format for the service")

  private String serviceExtraJson;
 /**
   * Last invoice date for the service
   * @return serviceLastInvoiceDate
  **/
  @JsonProperty("service_last_invoice_date")
  public String getServiceLastInvoiceDate() {
    return serviceLastInvoiceDate;
  }

  public void setServiceLastInvoiceDate(String serviceLastInvoiceDate) {
    this.serviceLastInvoiceDate = serviceLastInvoiceDate;
  }

  public WebsiteBillingDetails serviceLastInvoiceDate(String serviceLastInvoiceDate) {
    this.serviceLastInvoiceDate = serviceLastInvoiceDate;
    return this;
  }

 /**
   * Payment status for the service
   * @return servicePaymentStatus
  **/
  @JsonProperty("service_payment_status")
  public String getServicePaymentStatus() {
    return servicePaymentStatus;
  }

  public void setServicePaymentStatus(String servicePaymentStatus) {
    this.servicePaymentStatus = servicePaymentStatus;
  }

  public WebsiteBillingDetails servicePaymentStatus(String servicePaymentStatus) {
    this.servicePaymentStatus = servicePaymentStatus;
    return this;
  }

 /**
   * Frequency of the service
   * @return serviceFrequency
  **/
  @JsonProperty("service_frequency")
  public String getServiceFrequency() {
    return serviceFrequency;
  }

  public void setServiceFrequency(String serviceFrequency) {
    this.serviceFrequency = serviceFrequency;
  }

  public WebsiteBillingDetails serviceFrequency(String serviceFrequency) {
    this.serviceFrequency = serviceFrequency;
    return this;
  }

 /**
   * Next date for the service
   * @return nextDate
  **/
  @JsonProperty("next_date")
  public String getNextDate() {
    return nextDate;
  }

  public void setNextDate(String nextDate) {
    this.nextDate = nextDate;
  }

  public WebsiteBillingDetails nextDate(String nextDate) {
    this.nextDate = nextDate;
    return this;
  }

 /**
   * Next invoice date for the service
   * @return serviceNextInvoiceDate
  **/
  @JsonProperty("service_next_invoice_date")
  public String getServiceNextInvoiceDate() {
    return serviceNextInvoiceDate;
  }

  public void setServiceNextInvoiceDate(String serviceNextInvoiceDate) {
    this.serviceNextInvoiceDate = serviceNextInvoiceDate;
  }

  public WebsiteBillingDetails serviceNextInvoiceDate(String serviceNextInvoiceDate) {
    this.serviceNextInvoiceDate = serviceNextInvoiceDate;
    return this;
  }

 /**
   * Currency for the service
   * @return serviceCurrency
  **/
  @JsonProperty("service_currency")
  public String getServiceCurrency() {
    return serviceCurrency;
  }

  public void setServiceCurrency(String serviceCurrency) {
    this.serviceCurrency = serviceCurrency;
  }

  public WebsiteBillingDetails serviceCurrency(String serviceCurrency) {
    this.serviceCurrency = serviceCurrency;
    return this;
  }

 /**
   * Currency symbol for the service
   * @return serviceCurrencySymbol
  **/
  @JsonProperty("service_currency_symbol")
  public String getServiceCurrencySymbol() {
    return serviceCurrencySymbol;
  }

  public void setServiceCurrencySymbol(String serviceCurrencySymbol) {
    this.serviceCurrencySymbol = serviceCurrencySymbol;
  }

  public WebsiteBillingDetails serviceCurrencySymbol(String serviceCurrencySymbol) {
    this.serviceCurrencySymbol = serviceCurrencySymbol;
    return this;
  }

 /**
   * Coupon for the service
   * @return serviceCoupon
  **/
  @JsonProperty("service_coupon")
  public String getServiceCoupon() {
    return serviceCoupon;
  }

  public void setServiceCoupon(String serviceCoupon) {
    this.serviceCoupon = serviceCoupon;
  }

  public WebsiteBillingDetails serviceCoupon(String serviceCoupon) {
    this.serviceCoupon = serviceCoupon;
    return this;
  }

 /**
   * Cost information for the service
   * @return serviceCostInfo
  **/
  @JsonProperty("service_cost_info")
  public String getServiceCostInfo() {
    return serviceCostInfo;
  }

  public void setServiceCostInfo(String serviceCostInfo) {
    this.serviceCostInfo = serviceCostInfo;
  }

  public WebsiteBillingDetails serviceCostInfo(String serviceCostInfo) {
    this.serviceCostInfo = serviceCostInfo;
    return this;
  }

 /**
   * Extra information for the service
   * @return serviceExtra
  **/
  @JsonProperty("service_extra")
  public Object getServiceExtra() {
    return serviceExtra;
  }

  public void setServiceExtra(Object serviceExtra) {
    this.serviceExtra = serviceExtra;
  }

  public WebsiteBillingDetails serviceExtra(Object serviceExtra) {
    this.serviceExtra = serviceExtra;
    return this;
  }

 /**
   * Extra information in JSON format for the service
   * @return serviceExtraJson
  **/
  @JsonProperty("service_extra_json")
  public String getServiceExtraJson() {
    return serviceExtraJson;
  }

  public void setServiceExtraJson(String serviceExtraJson) {
    this.serviceExtraJson = serviceExtraJson;
  }

  public WebsiteBillingDetails serviceExtraJson(String serviceExtraJson) {
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}


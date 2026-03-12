package io.swagger.model;

import io.swagger.model.WebsiteServiceExtra;
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
  * Billing information for a webhosting service including payment status, billing cycle, and cost.
 **/
@Schema(description="Billing information for a webhosting service including payment status, billing cycle, and cost.")
public class WebsiteBillingDetails   {
  
  @Schema(description = "Last invoice date for the service")
 /**
   * Last invoice date for the service  
  **/
  private String serviceLastInvoiceDate = null;
  
  @Schema(description = "Payment status for the service")
 /**
   * Payment status for the service  
  **/
  private String servicePaymentStatus = null;
  
  @Schema(description = "Frequency of the service")
 /**
   * Frequency of the service  
  **/
  private String serviceFrequency = null;
  
  @Schema(description = "Next date for the service")
 /**
   * Next date for the service  
  **/
  private String nextDate = null;
  
  @Schema(description = "Next invoice date for the service")
 /**
   * Next invoice date for the service  
  **/
  private String serviceNextInvoiceDate = null;
  
  @Schema(example = "USD", description = "Currency for the service")
 /**
   * Currency for the service  
  **/
  private String serviceCurrency = null;
  
  @Schema(example = "$", description = "Currency symbol for the service")
 /**
   * Currency symbol for the service  
  **/
  private String serviceCurrencySymbol = null;
  
  @Schema(description = "Coupon for the service")
 /**
   * Coupon for the service  
  **/
  private String serviceCoupon = null;
  
  @Schema(description = "Cost information for the service")
 /**
   * Cost information for the service  
  **/
  private String serviceCostInfo = null;
  
  @Schema(description = "")
  private WebsiteServiceExtra serviceExtra = null;
  
  @Schema(description = "Extra information in JSON format for the service")
 /**
   * Extra information in JSON format for the service  
  **/
  private String serviceExtraJson = null;
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
   * Get serviceExtra
   * @return serviceExtra
  **/
  @JsonProperty("service_extra")
  public WebsiteServiceExtra getServiceExtra() {
    return serviceExtra;
  }

  public void setServiceExtra(WebsiteServiceExtra serviceExtra) {
    this.serviceExtra = serviceExtra;
  }

  public WebsiteBillingDetails serviceExtra(WebsiteServiceExtra serviceExtra) {
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

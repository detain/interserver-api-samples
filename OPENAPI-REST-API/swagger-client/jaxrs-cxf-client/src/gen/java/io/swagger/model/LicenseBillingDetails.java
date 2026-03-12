package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;

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
  * Billing information for a software license including payment status, billing cycle, and cost.
 **/
@Schema(description="Billing information for a software license including payment status, billing cycle, and cost.")
public class LicenseBillingDetails   {
  
  @Schema(example = "August 14, 2023", description = "Last invoice date")
 /**
   * Last invoice date  
  **/
  private String serviceLastInvoiceDate = null;
  
  @Schema(example = "Paid", description = "Payment status")
 /**
   * Payment status  
  **/
  private String servicePaymentStatus = null;
  
  @Schema(example = "Monthly", description = "Service frequency")
 /**
   * Service frequency  
  **/
  private String serviceFrequency = null;
  
  @Schema(example = "2023-09-14T09:39:46Z", description = "Next date")
 /**
   * Next date  
  **/
  private Date nextDate = null;
  
  @Schema(example = "September 14, 2023", description = "Next invoice date")
 /**
   * Next invoice date  
  **/
  private String serviceNextInvoiceDate = null;
  
  @Schema(example = "USD", description = "Service currency")
 /**
   * Service currency  
  **/
  private String serviceCurrency = null;
  
  @Schema(example = "$", description = "Service currency symbol")
 /**
   * Service currency symbol  
  **/
  private String serviceCurrencySymbol = null;
  
  @Schema(example = "ACOUPONFORLICENSES", description = "Service coupon")
 /**
   * Service coupon  
  **/
  private String serviceCoupon = null;
  
  @Schema(example = "0.00", description = "Service cost information")
 /**
   * Service cost information  
  **/
  private String serviceCostInfo = null;
  
  @Schema(description = "Additional service information")
 /**
   * Additional service information  
  **/
  private List<String> serviceExtra = null;
  
  @Schema(example = "[\"\"]", description = "Additional service information in JSON format")
 /**
   * Additional service information in JSON format  
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

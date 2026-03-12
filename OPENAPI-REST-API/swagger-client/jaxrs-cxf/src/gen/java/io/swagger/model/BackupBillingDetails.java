package io.swagger.model;

import javax.validation.constraints.*;

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

public class BackupBillingDetails   {
  
  @Schema(example = "December 29, 2021", description = "Last invoice date of the service.")
 /**
   * Last invoice date of the service.  
  **/
  private String serviceLastInvoiceDate = null;
  
  @Schema(example = "Paid", description = "Payment status of the service.")
 /**
   * Payment status of the service.  
  **/
  private String servicePaymentStatus = null;
  
  @Schema(example = "Monthly", description = "Billing frequency of the service.")
 /**
   * Billing frequency of the service.  
  **/
  private String serviceFrequency = null;
  
  @Schema(example = "2022-01-29T14:09:57.000Z", description = "Next billing date of the service.")
 /**
   * Next billing date of the service.  
  **/
  private String nextDate = null;
  
  @Schema(example = "January 29, 2022", description = "Next invoice date of the service.")
 /**
   * Next invoice date of the service.  
  **/
  private String serviceNextInvoiceDate = null;
  
  @Schema(example = "USD", description = "Currency of the service.")
 /**
   * Currency of the service.  
  **/
  private String serviceCurrency = null;
  
  @Schema(example = "$", description = "Currency symbol of the service.")
 /**
   * Currency symbol of the service.  
  **/
  private String serviceCurrencySymbol = null;
  
  @Schema(example = "3", description = "Cost information of the service.")
 /**
   * Cost information of the service.  
  **/
  private String serviceCostInfo = null;
  
  @Schema(example = "[]", description = "Service Extra Info")
 /**
   * Service Extra Info  
  **/
  private String serviceExtra = null;
  
  @Schema(example = "[]", description = "JSON representation of extra service information.")
 /**
   * JSON representation of extra service information.  
  **/
  private String serviceExtraJson = null;
 /**
   * Last invoice date of the service.
   * @return serviceLastInvoiceDate
  **/
  @JsonProperty("service_last_invoice_date")
  @NotNull
  public String getServiceLastInvoiceDate() {
    return serviceLastInvoiceDate;
  }

  public void setServiceLastInvoiceDate(String serviceLastInvoiceDate) {
    this.serviceLastInvoiceDate = serviceLastInvoiceDate;
  }

  public BackupBillingDetails serviceLastInvoiceDate(String serviceLastInvoiceDate) {
    this.serviceLastInvoiceDate = serviceLastInvoiceDate;
    return this;
  }

 /**
   * Payment status of the service.
   * @return servicePaymentStatus
  **/
  @JsonProperty("service_payment_status")
  @NotNull
  public String getServicePaymentStatus() {
    return servicePaymentStatus;
  }

  public void setServicePaymentStatus(String servicePaymentStatus) {
    this.servicePaymentStatus = servicePaymentStatus;
  }

  public BackupBillingDetails servicePaymentStatus(String servicePaymentStatus) {
    this.servicePaymentStatus = servicePaymentStatus;
    return this;
  }

 /**
   * Billing frequency of the service.
   * @return serviceFrequency
  **/
  @JsonProperty("service_frequency")
  @NotNull
  public String getServiceFrequency() {
    return serviceFrequency;
  }

  public void setServiceFrequency(String serviceFrequency) {
    this.serviceFrequency = serviceFrequency;
  }

  public BackupBillingDetails serviceFrequency(String serviceFrequency) {
    this.serviceFrequency = serviceFrequency;
    return this;
  }

 /**
   * Next billing date of the service.
   * @return nextDate
  **/
  @JsonProperty("next_date")
  @NotNull
  public String getNextDate() {
    return nextDate;
  }

  public void setNextDate(String nextDate) {
    this.nextDate = nextDate;
  }

  public BackupBillingDetails nextDate(String nextDate) {
    this.nextDate = nextDate;
    return this;
  }

 /**
   * Next invoice date of the service.
   * @return serviceNextInvoiceDate
  **/
  @JsonProperty("service_next_invoice_date")
  @NotNull
  public String getServiceNextInvoiceDate() {
    return serviceNextInvoiceDate;
  }

  public void setServiceNextInvoiceDate(String serviceNextInvoiceDate) {
    this.serviceNextInvoiceDate = serviceNextInvoiceDate;
  }

  public BackupBillingDetails serviceNextInvoiceDate(String serviceNextInvoiceDate) {
    this.serviceNextInvoiceDate = serviceNextInvoiceDate;
    return this;
  }

 /**
   * Currency of the service.
   * @return serviceCurrency
  **/
  @JsonProperty("service_currency")
  @NotNull
  public String getServiceCurrency() {
    return serviceCurrency;
  }

  public void setServiceCurrency(String serviceCurrency) {
    this.serviceCurrency = serviceCurrency;
  }

  public BackupBillingDetails serviceCurrency(String serviceCurrency) {
    this.serviceCurrency = serviceCurrency;
    return this;
  }

 /**
   * Currency symbol of the service.
   * @return serviceCurrencySymbol
  **/
  @JsonProperty("service_currency_symbol")
  @NotNull
  public String getServiceCurrencySymbol() {
    return serviceCurrencySymbol;
  }

  public void setServiceCurrencySymbol(String serviceCurrencySymbol) {
    this.serviceCurrencySymbol = serviceCurrencySymbol;
  }

  public BackupBillingDetails serviceCurrencySymbol(String serviceCurrencySymbol) {
    this.serviceCurrencySymbol = serviceCurrencySymbol;
    return this;
  }

 /**
   * Cost information of the service.
   * @return serviceCostInfo
  **/
  @JsonProperty("service_cost_info")
  @NotNull
  public String getServiceCostInfo() {
    return serviceCostInfo;
  }

  public void setServiceCostInfo(String serviceCostInfo) {
    this.serviceCostInfo = serviceCostInfo;
  }

  public BackupBillingDetails serviceCostInfo(String serviceCostInfo) {
    this.serviceCostInfo = serviceCostInfo;
    return this;
  }

 /**
   * Service Extra Info
   * @return serviceExtra
  **/
  @JsonProperty("service_extra")
  @NotNull
  public String getServiceExtra() {
    return serviceExtra;
  }

  public void setServiceExtra(String serviceExtra) {
    this.serviceExtra = serviceExtra;
  }

  public BackupBillingDetails serviceExtra(String serviceExtra) {
    this.serviceExtra = serviceExtra;
    return this;
  }

 /**
   * JSON representation of extra service information.
   * @return serviceExtraJson
  **/
  @JsonProperty("service_extra_json")
  @NotNull
  public String getServiceExtraJson() {
    return serviceExtraJson;
  }

  public void setServiceExtraJson(String serviceExtraJson) {
    this.serviceExtraJson = serviceExtraJson;
  }

  public BackupBillingDetails serviceExtraJson(String serviceExtraJson) {
    this.serviceExtraJson = serviceExtraJson;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BackupBillingDetails {\n");
    
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

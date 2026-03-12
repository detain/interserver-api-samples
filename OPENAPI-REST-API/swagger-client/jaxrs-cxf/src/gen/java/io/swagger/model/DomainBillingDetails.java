package io.swagger.model;

import io.swagger.model.DomainBillingExtra;
import io.swagger.v3.oas.annotations.media.Schema;
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

/**
  * Billing information for a domain service including payment status, dates, and cost.
 **/
@Schema(description="Billing information for a domain service including payment status, dates, and cost.")
public class DomainBillingDetails   {
  
  @Schema(description = "Date of the last invoice for the domain.")
 /**
   * Date of the last invoice for the domain.  
  **/
  private String serviceLastInvoiceDate = null;
  
  @Schema(description = "Current payment status (e.g., Paid, Unpaid).")
 /**
   * Current payment status (e.g., Paid, Unpaid).  
  **/
  private String servicePaymentStatus = null;
  
  @Schema(description = "Billing frequency (e.g., Yearly, Monthly).")
 /**
   * Billing frequency (e.g., Yearly, Monthly).  
  **/
  private String serviceFrequency = null;
  
  @Schema(description = "Next billing date (ISO 8601).")
 /**
   * Next billing date (ISO 8601).  
  **/
  private String nextDate = null;
  
  @Schema(description = "Human-readable next invoice date.")
 /**
   * Human-readable next invoice date.  
  **/
  private String serviceNextInvoiceDate = null;
  
  @Schema(description = "Billing currency code.")
 /**
   * Billing currency code.  
  **/
  private String serviceCurrency = null;
  
  @Schema(description = "Billing currency symbol.")
 /**
   * Billing currency symbol.  
  **/
  private String serviceCurrencySymbol = null;
  
  @Schema(description = "Cost breakdown information.")
 /**
   * Cost breakdown information.  
  **/
  private String serviceCostInfo = null;
  
  @Schema(description = "")
  private DomainBillingExtra serviceExtra = null;
  
  @Schema(description = "Raw JSON string of extra billing data.")
 /**
   * Raw JSON string of extra billing data.  
  **/
  private String serviceExtraJson = null;
 /**
   * Date of the last invoice for the domain.
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

  public DomainBillingDetails serviceLastInvoiceDate(String serviceLastInvoiceDate) {
    this.serviceLastInvoiceDate = serviceLastInvoiceDate;
    return this;
  }

 /**
   * Current payment status (e.g., Paid, Unpaid).
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

  public DomainBillingDetails servicePaymentStatus(String servicePaymentStatus) {
    this.servicePaymentStatus = servicePaymentStatus;
    return this;
  }

 /**
   * Billing frequency (e.g., Yearly, Monthly).
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

  public DomainBillingDetails serviceFrequency(String serviceFrequency) {
    this.serviceFrequency = serviceFrequency;
    return this;
  }

 /**
   * Next billing date (ISO 8601).
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

  public DomainBillingDetails nextDate(String nextDate) {
    this.nextDate = nextDate;
    return this;
  }

 /**
   * Human-readable next invoice date.
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

  public DomainBillingDetails serviceNextInvoiceDate(String serviceNextInvoiceDate) {
    this.serviceNextInvoiceDate = serviceNextInvoiceDate;
    return this;
  }

 /**
   * Billing currency code.
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

  public DomainBillingDetails serviceCurrency(String serviceCurrency) {
    this.serviceCurrency = serviceCurrency;
    return this;
  }

 /**
   * Billing currency symbol.
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

  public DomainBillingDetails serviceCurrencySymbol(String serviceCurrencySymbol) {
    this.serviceCurrencySymbol = serviceCurrencySymbol;
    return this;
  }

 /**
   * Cost breakdown information.
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

  public DomainBillingDetails serviceCostInfo(String serviceCostInfo) {
    this.serviceCostInfo = serviceCostInfo;
    return this;
  }

 /**
   * Get serviceExtra
   * @return serviceExtra
  **/
  @JsonProperty("service_extra")
  @NotNull
  public DomainBillingExtra getServiceExtra() {
    return serviceExtra;
  }

  public void setServiceExtra(DomainBillingExtra serviceExtra) {
    this.serviceExtra = serviceExtra;
  }

  public DomainBillingDetails serviceExtra(DomainBillingExtra serviceExtra) {
    this.serviceExtra = serviceExtra;
    return this;
  }

 /**
   * Raw JSON string of extra billing data.
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

  public DomainBillingDetails serviceExtraJson(String serviceExtraJson) {
    this.serviceExtraJson = serviceExtraJson;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DomainBillingDetails {\n");
    
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

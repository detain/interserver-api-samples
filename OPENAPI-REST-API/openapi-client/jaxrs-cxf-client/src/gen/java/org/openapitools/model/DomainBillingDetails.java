package org.openapitools.model;

import org.openapitools.model.DomainBillingExtra;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Billing information for a domain service including payment status, dates, and cost.
 */
@ApiModel(description="Billing information for a domain service including payment status, dates, and cost.")

public class DomainBillingDetails  {
  
 /**
  * Date of the last invoice for the domain.
  */
  @ApiModelProperty(value = "Date of the last invoice for the domain.")

  private String serviceLastInvoiceDate;

 /**
  * Current payment status (e.g., Paid, Unpaid).
  */
  @ApiModelProperty(value = "Current payment status (e.g., Paid, Unpaid).")

  private String servicePaymentStatus;

 /**
  * Billing frequency (e.g., Yearly, Monthly).
  */
  @ApiModelProperty(value = "Billing frequency (e.g., Yearly, Monthly).")

  private String serviceFrequency;

 /**
  * Next billing date (ISO 8601).
  */
  @ApiModelProperty(value = "Next billing date (ISO 8601).")

  private String nextDate;

 /**
  * Human-readable next invoice date.
  */
  @ApiModelProperty(value = "Human-readable next invoice date.")

  private String serviceNextInvoiceDate;

 /**
  * Billing currency code.
  */
  @ApiModelProperty(value = "Billing currency code.")

  private String serviceCurrency;

 /**
  * Billing currency symbol.
  */
  @ApiModelProperty(value = "Billing currency symbol.")

  private String serviceCurrencySymbol;

 /**
  * Cost breakdown information.
  */
  @ApiModelProperty(value = "Cost breakdown information.")

  private String serviceCostInfo;

  @ApiModelProperty(value = "")

  private DomainBillingExtra serviceExtra;

 /**
  * Raw JSON string of extra billing data.
  */
  @ApiModelProperty(value = "Raw JSON string of extra billing data.")

  private String serviceExtraJson;
 /**
   * Date of the last invoice for the domain.
   * @return serviceLastInvoiceDate
  **/
  @JsonProperty("service_last_invoice_date")
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DomainBillingDetails domainBillingDetails = (DomainBillingDetails) o;
    return Objects.equals(this.serviceLastInvoiceDate, domainBillingDetails.serviceLastInvoiceDate) &&
        Objects.equals(this.servicePaymentStatus, domainBillingDetails.servicePaymentStatus) &&
        Objects.equals(this.serviceFrequency, domainBillingDetails.serviceFrequency) &&
        Objects.equals(this.nextDate, domainBillingDetails.nextDate) &&
        Objects.equals(this.serviceNextInvoiceDate, domainBillingDetails.serviceNextInvoiceDate) &&
        Objects.equals(this.serviceCurrency, domainBillingDetails.serviceCurrency) &&
        Objects.equals(this.serviceCurrencySymbol, domainBillingDetails.serviceCurrencySymbol) &&
        Objects.equals(this.serviceCostInfo, domainBillingDetails.serviceCostInfo) &&
        Objects.equals(this.serviceExtra, domainBillingDetails.serviceExtra) &&
        Objects.equals(this.serviceExtraJson, domainBillingDetails.serviceExtraJson);
  }

  @Override
  public int hashCode() {
    return Objects.hash(serviceLastInvoiceDate, servicePaymentStatus, serviceFrequency, nextDate, serviceNextInvoiceDate, serviceCurrency, serviceCurrencySymbol, serviceCostInfo, serviceExtra, serviceExtraJson);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}


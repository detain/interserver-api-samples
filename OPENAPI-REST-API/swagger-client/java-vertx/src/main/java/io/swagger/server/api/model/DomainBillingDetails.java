package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.server.api.model.DomainBillingExtra;
import io.swagger.v3.oas.annotations.media.Schema;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * Billing information for a domain service including payment status, dates, and cost.
 */




public class DomainBillingDetails   {
  private String serviceLastInvoiceDate = null;

  private String servicePaymentStatus = null;

  private String serviceFrequency = null;

  private String nextDate = null;

  private String serviceNextInvoiceDate = null;

  private String serviceCurrency = null;

  private String serviceCurrencySymbol = null;

  private String serviceCostInfo = null;

  private DomainBillingExtra serviceExtra = null;

  private String serviceExtraJson = null;

  public DomainBillingDetails serviceLastInvoiceDate(String serviceLastInvoiceDate) {
    this.serviceLastInvoiceDate = serviceLastInvoiceDate;
    return this;
  }

  /**
   * Date of the last invoice for the domain.
   * @return serviceLastInvoiceDate
   **/
    public String getServiceLastInvoiceDate() {
    return serviceLastInvoiceDate;
  }

  public void setServiceLastInvoiceDate(String serviceLastInvoiceDate) {
    this.serviceLastInvoiceDate = serviceLastInvoiceDate;
  }

  public DomainBillingDetails servicePaymentStatus(String servicePaymentStatus) {
    this.servicePaymentStatus = servicePaymentStatus;
    return this;
  }

  /**
   * Current payment status (e.g., Paid, Unpaid).
   * @return servicePaymentStatus
   **/
    public String getServicePaymentStatus() {
    return servicePaymentStatus;
  }

  public void setServicePaymentStatus(String servicePaymentStatus) {
    this.servicePaymentStatus = servicePaymentStatus;
  }

  public DomainBillingDetails serviceFrequency(String serviceFrequency) {
    this.serviceFrequency = serviceFrequency;
    return this;
  }

  /**
   * Billing frequency (e.g., Yearly, Monthly).
   * @return serviceFrequency
   **/
    public String getServiceFrequency() {
    return serviceFrequency;
  }

  public void setServiceFrequency(String serviceFrequency) {
    this.serviceFrequency = serviceFrequency;
  }

  public DomainBillingDetails nextDate(String nextDate) {
    this.nextDate = nextDate;
    return this;
  }

  /**
   * Next billing date (ISO 8601).
   * @return nextDate
   **/
    public String getNextDate() {
    return nextDate;
  }

  public void setNextDate(String nextDate) {
    this.nextDate = nextDate;
  }

  public DomainBillingDetails serviceNextInvoiceDate(String serviceNextInvoiceDate) {
    this.serviceNextInvoiceDate = serviceNextInvoiceDate;
    return this;
  }

  /**
   * Human-readable next invoice date.
   * @return serviceNextInvoiceDate
   **/
    public String getServiceNextInvoiceDate() {
    return serviceNextInvoiceDate;
  }

  public void setServiceNextInvoiceDate(String serviceNextInvoiceDate) {
    this.serviceNextInvoiceDate = serviceNextInvoiceDate;
  }

  public DomainBillingDetails serviceCurrency(String serviceCurrency) {
    this.serviceCurrency = serviceCurrency;
    return this;
  }

  /**
   * Billing currency code.
   * @return serviceCurrency
   **/
    public String getServiceCurrency() {
    return serviceCurrency;
  }

  public void setServiceCurrency(String serviceCurrency) {
    this.serviceCurrency = serviceCurrency;
  }

  public DomainBillingDetails serviceCurrencySymbol(String serviceCurrencySymbol) {
    this.serviceCurrencySymbol = serviceCurrencySymbol;
    return this;
  }

  /**
   * Billing currency symbol.
   * @return serviceCurrencySymbol
   **/
    public String getServiceCurrencySymbol() {
    return serviceCurrencySymbol;
  }

  public void setServiceCurrencySymbol(String serviceCurrencySymbol) {
    this.serviceCurrencySymbol = serviceCurrencySymbol;
  }

  public DomainBillingDetails serviceCostInfo(String serviceCostInfo) {
    this.serviceCostInfo = serviceCostInfo;
    return this;
  }

  /**
   * Cost breakdown information.
   * @return serviceCostInfo
   **/
    public String getServiceCostInfo() {
    return serviceCostInfo;
  }

  public void setServiceCostInfo(String serviceCostInfo) {
    this.serviceCostInfo = serviceCostInfo;
  }

  public DomainBillingDetails serviceExtra(DomainBillingExtra serviceExtra) {
    this.serviceExtra = serviceExtra;
    return this;
  }

  /**
   * Get serviceExtra
   * @return serviceExtra
   **/
    public DomainBillingExtra getServiceExtra() {
    return serviceExtra;
  }

  public void setServiceExtra(DomainBillingExtra serviceExtra) {
    this.serviceExtra = serviceExtra;
  }

  public DomainBillingDetails serviceExtraJson(String serviceExtraJson) {
    this.serviceExtraJson = serviceExtraJson;
    return this;
  }

  /**
   * Raw JSON string of extra billing data.
   * @return serviceExtraJson
   **/
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

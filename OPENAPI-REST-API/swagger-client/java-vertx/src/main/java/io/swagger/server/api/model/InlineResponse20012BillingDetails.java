package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * InlineResponse20012BillingDetails
 */




public class InlineResponse20012BillingDetails   {
  private String serviceLastInvoiceDate = null;

  private String servicePaymentStatus = null;

  private String serviceFrequency = null;

  private String nextDate = null;

  private String serviceNextInvoiceDate = null;

  private String serviceCurrency = null;

  private String serviceCurrencySymbol = null;

  private String serviceCostInfo = null;

  public InlineResponse20012BillingDetails serviceLastInvoiceDate(String serviceLastInvoiceDate) {
    this.serviceLastInvoiceDate = serviceLastInvoiceDate;
    return this;
  }

  /**
   * Get serviceLastInvoiceDate
   * @return serviceLastInvoiceDate
   **/
    public String getServiceLastInvoiceDate() {
    return serviceLastInvoiceDate;
  }

  public void setServiceLastInvoiceDate(String serviceLastInvoiceDate) {
    this.serviceLastInvoiceDate = serviceLastInvoiceDate;
  }

  public InlineResponse20012BillingDetails servicePaymentStatus(String servicePaymentStatus) {
    this.servicePaymentStatus = servicePaymentStatus;
    return this;
  }

  /**
   * Get servicePaymentStatus
   * @return servicePaymentStatus
   **/
    public String getServicePaymentStatus() {
    return servicePaymentStatus;
  }

  public void setServicePaymentStatus(String servicePaymentStatus) {
    this.servicePaymentStatus = servicePaymentStatus;
  }

  public InlineResponse20012BillingDetails serviceFrequency(String serviceFrequency) {
    this.serviceFrequency = serviceFrequency;
    return this;
  }

  /**
   * Get serviceFrequency
   * @return serviceFrequency
   **/
    public String getServiceFrequency() {
    return serviceFrequency;
  }

  public void setServiceFrequency(String serviceFrequency) {
    this.serviceFrequency = serviceFrequency;
  }

  public InlineResponse20012BillingDetails nextDate(String nextDate) {
    this.nextDate = nextDate;
    return this;
  }

  /**
   * Get nextDate
   * @return nextDate
   **/
    public String getNextDate() {
    return nextDate;
  }

  public void setNextDate(String nextDate) {
    this.nextDate = nextDate;
  }

  public InlineResponse20012BillingDetails serviceNextInvoiceDate(String serviceNextInvoiceDate) {
    this.serviceNextInvoiceDate = serviceNextInvoiceDate;
    return this;
  }

  /**
   * Get serviceNextInvoiceDate
   * @return serviceNextInvoiceDate
   **/
    public String getServiceNextInvoiceDate() {
    return serviceNextInvoiceDate;
  }

  public void setServiceNextInvoiceDate(String serviceNextInvoiceDate) {
    this.serviceNextInvoiceDate = serviceNextInvoiceDate;
  }

  public InlineResponse20012BillingDetails serviceCurrency(String serviceCurrency) {
    this.serviceCurrency = serviceCurrency;
    return this;
  }

  /**
   * Get serviceCurrency
   * @return serviceCurrency
   **/
    public String getServiceCurrency() {
    return serviceCurrency;
  }

  public void setServiceCurrency(String serviceCurrency) {
    this.serviceCurrency = serviceCurrency;
  }

  public InlineResponse20012BillingDetails serviceCurrencySymbol(String serviceCurrencySymbol) {
    this.serviceCurrencySymbol = serviceCurrencySymbol;
    return this;
  }

  /**
   * Get serviceCurrencySymbol
   * @return serviceCurrencySymbol
   **/
    public String getServiceCurrencySymbol() {
    return serviceCurrencySymbol;
  }

  public void setServiceCurrencySymbol(String serviceCurrencySymbol) {
    this.serviceCurrencySymbol = serviceCurrencySymbol;
  }

  public InlineResponse20012BillingDetails serviceCostInfo(String serviceCostInfo) {
    this.serviceCostInfo = serviceCostInfo;
    return this;
  }

  /**
   * Get serviceCostInfo
   * @return serviceCostInfo
   **/
    public String getServiceCostInfo() {
    return serviceCostInfo;
  }

  public void setServiceCostInfo(String serviceCostInfo) {
    this.serviceCostInfo = serviceCostInfo;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InlineResponse20012BillingDetails inlineResponse20012BillingDetails = (InlineResponse20012BillingDetails) o;
    return Objects.equals(this.serviceLastInvoiceDate, inlineResponse20012BillingDetails.serviceLastInvoiceDate) &&
        Objects.equals(this.servicePaymentStatus, inlineResponse20012BillingDetails.servicePaymentStatus) &&
        Objects.equals(this.serviceFrequency, inlineResponse20012BillingDetails.serviceFrequency) &&
        Objects.equals(this.nextDate, inlineResponse20012BillingDetails.nextDate) &&
        Objects.equals(this.serviceNextInvoiceDate, inlineResponse20012BillingDetails.serviceNextInvoiceDate) &&
        Objects.equals(this.serviceCurrency, inlineResponse20012BillingDetails.serviceCurrency) &&
        Objects.equals(this.serviceCurrencySymbol, inlineResponse20012BillingDetails.serviceCurrencySymbol) &&
        Objects.equals(this.serviceCostInfo, inlineResponse20012BillingDetails.serviceCostInfo);
  }

  @Override
  public int hashCode() {
    return Objects.hash(serviceLastInvoiceDate, servicePaymentStatus, serviceFrequency, nextDate, serviceNextInvoiceDate, serviceCurrency, serviceCurrencySymbol, serviceCostInfo);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse20012BillingDetails {\n");
    
    sb.append("    serviceLastInvoiceDate: ").append(toIndentedString(serviceLastInvoiceDate)).append("\n");
    sb.append("    servicePaymentStatus: ").append(toIndentedString(servicePaymentStatus)).append("\n");
    sb.append("    serviceFrequency: ").append(toIndentedString(serviceFrequency)).append("\n");
    sb.append("    nextDate: ").append(toIndentedString(nextDate)).append("\n");
    sb.append("    serviceNextInvoiceDate: ").append(toIndentedString(serviceNextInvoiceDate)).append("\n");
    sb.append("    serviceCurrency: ").append(toIndentedString(serviceCurrency)).append("\n");
    sb.append("    serviceCurrencySymbol: ").append(toIndentedString(serviceCurrencySymbol)).append("\n");
    sb.append("    serviceCostInfo: ").append(toIndentedString(serviceCostInfo)).append("\n");
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

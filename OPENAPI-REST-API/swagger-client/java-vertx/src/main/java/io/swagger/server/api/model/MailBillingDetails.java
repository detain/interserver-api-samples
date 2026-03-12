package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * Billing information for a mail service including payment status, billing cycle, and cost.
 */




public class MailBillingDetails   {
  private String serviceLastInvoiceDate = null;

  private String servicePaymentStatus = null;

  private String serviceFrequency = null;

  private String nextDate = null;

  private String serviceNextInvoiceDate = null;

  private String serviceCurrency = null;

  private String serviceCurrencySymbol = null;

  private String serviceCostInfo = null;

  
  private List<String> serviceExtra = null;

  private String serviceExtraJson = null;

  public MailBillingDetails serviceLastInvoiceDate(String serviceLastInvoiceDate) {
    this.serviceLastInvoiceDate = serviceLastInvoiceDate;
    return this;
  }

  /**
   * The last invoice date of the service.
   * @return serviceLastInvoiceDate
   **/
    public String getServiceLastInvoiceDate() {
    return serviceLastInvoiceDate;
  }

  public void setServiceLastInvoiceDate(String serviceLastInvoiceDate) {
    this.serviceLastInvoiceDate = serviceLastInvoiceDate;
  }

  public MailBillingDetails servicePaymentStatus(String servicePaymentStatus) {
    this.servicePaymentStatus = servicePaymentStatus;
    return this;
  }

  /**
   * The payment status of the service.
   * @return servicePaymentStatus
   **/
    public String getServicePaymentStatus() {
    return servicePaymentStatus;
  }

  public void setServicePaymentStatus(String servicePaymentStatus) {
    this.servicePaymentStatus = servicePaymentStatus;
  }

  public MailBillingDetails serviceFrequency(String serviceFrequency) {
    this.serviceFrequency = serviceFrequency;
    return this;
  }

  /**
   * The frequency of the service payment.
   * @return serviceFrequency
   **/
    public String getServiceFrequency() {
    return serviceFrequency;
  }

  public void setServiceFrequency(String serviceFrequency) {
    this.serviceFrequency = serviceFrequency;
  }

  public MailBillingDetails nextDate(String nextDate) {
    this.nextDate = nextDate;
    return this;
  }

  /**
   * The next payment date of the service.
   * @return nextDate
   **/
    public String getNextDate() {
    return nextDate;
  }

  public void setNextDate(String nextDate) {
    this.nextDate = nextDate;
  }

  public MailBillingDetails serviceNextInvoiceDate(String serviceNextInvoiceDate) {
    this.serviceNextInvoiceDate = serviceNextInvoiceDate;
    return this;
  }

  /**
   * The next invoice date of the service.
   * @return serviceNextInvoiceDate
   **/
    public String getServiceNextInvoiceDate() {
    return serviceNextInvoiceDate;
  }

  public void setServiceNextInvoiceDate(String serviceNextInvoiceDate) {
    this.serviceNextInvoiceDate = serviceNextInvoiceDate;
  }

  public MailBillingDetails serviceCurrency(String serviceCurrency) {
    this.serviceCurrency = serviceCurrency;
    return this;
  }

  /**
   * The currency of the service.
   * @return serviceCurrency
   **/
    public String getServiceCurrency() {
    return serviceCurrency;
  }

  public void setServiceCurrency(String serviceCurrency) {
    this.serviceCurrency = serviceCurrency;
  }

  public MailBillingDetails serviceCurrencySymbol(String serviceCurrencySymbol) {
    this.serviceCurrencySymbol = serviceCurrencySymbol;
    return this;
  }

  /**
   * The currency symbol of the service.
   * @return serviceCurrencySymbol
   **/
    public String getServiceCurrencySymbol() {
    return serviceCurrencySymbol;
  }

  public void setServiceCurrencySymbol(String serviceCurrencySymbol) {
    this.serviceCurrencySymbol = serviceCurrencySymbol;
  }

  public MailBillingDetails serviceCostInfo(String serviceCostInfo) {
    this.serviceCostInfo = serviceCostInfo;
    return this;
  }

  /**
   * The cost information of the service.
   * @return serviceCostInfo
   **/
    public String getServiceCostInfo() {
    return serviceCostInfo;
  }

  public void setServiceCostInfo(String serviceCostInfo) {
    this.serviceCostInfo = serviceCostInfo;
  }

  public MailBillingDetails serviceExtra(List<String> serviceExtra) {
    this.serviceExtra = serviceExtra;
    return this;
  }

  public MailBillingDetails addServiceExtraItem(String serviceExtraItem) {
    if (this.serviceExtra == null) {
      this.serviceExtra = new ArrayList<String>();
    }
    this.serviceExtra.add(serviceExtraItem);
    return this;
  }

  /**
   * Extra information for the service.
   * @return serviceExtra
   **/
    public List<String> getServiceExtra() {
    return serviceExtra;
  }

  public void setServiceExtra(List<String> serviceExtra) {
    this.serviceExtra = serviceExtra;
  }

  public MailBillingDetails serviceExtraJson(String serviceExtraJson) {
    this.serviceExtraJson = serviceExtraJson;
    return this;
  }

  /**
   * Extra JSON information for the service.
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
    MailBillingDetails mailBillingDetails = (MailBillingDetails) o;
    return Objects.equals(this.serviceLastInvoiceDate, mailBillingDetails.serviceLastInvoiceDate) &&
        Objects.equals(this.servicePaymentStatus, mailBillingDetails.servicePaymentStatus) &&
        Objects.equals(this.serviceFrequency, mailBillingDetails.serviceFrequency) &&
        Objects.equals(this.nextDate, mailBillingDetails.nextDate) &&
        Objects.equals(this.serviceNextInvoiceDate, mailBillingDetails.serviceNextInvoiceDate) &&
        Objects.equals(this.serviceCurrency, mailBillingDetails.serviceCurrency) &&
        Objects.equals(this.serviceCurrencySymbol, mailBillingDetails.serviceCurrencySymbol) &&
        Objects.equals(this.serviceCostInfo, mailBillingDetails.serviceCostInfo) &&
        Objects.equals(this.serviceExtra, mailBillingDetails.serviceExtra) &&
        Objects.equals(this.serviceExtraJson, mailBillingDetails.serviceExtraJson);
  }

  @Override
  public int hashCode() {
    return Objects.hash(serviceLastInvoiceDate, servicePaymentStatus, serviceFrequency, nextDate, serviceNextInvoiceDate, serviceCurrency, serviceCurrencySymbol, serviceCostInfo, serviceExtra, serviceExtraJson);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MailBillingDetails {\n");
    
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

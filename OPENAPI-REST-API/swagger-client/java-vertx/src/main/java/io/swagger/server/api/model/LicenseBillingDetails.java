package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import org.threeten.bp.OffsetDateTime;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * Billing information for a software license including payment status, billing cycle, and cost.
 */




public class LicenseBillingDetails   {
  private String serviceLastInvoiceDate = null;

  private String servicePaymentStatus = null;

  private String serviceFrequency = null;

  private OffsetDateTime nextDate = null;

  private String serviceNextInvoiceDate = null;

  private String serviceCurrency = null;

  private String serviceCurrencySymbol = null;

  private String serviceCoupon = null;

  private String serviceCostInfo = null;

  
  private List<String> serviceExtra = null;

  private String serviceExtraJson = null;

  public LicenseBillingDetails serviceLastInvoiceDate(String serviceLastInvoiceDate) {
    this.serviceLastInvoiceDate = serviceLastInvoiceDate;
    return this;
  }

  /**
   * Last invoice date
   * @return serviceLastInvoiceDate
   **/
    public String getServiceLastInvoiceDate() {
    return serviceLastInvoiceDate;
  }

  public void setServiceLastInvoiceDate(String serviceLastInvoiceDate) {
    this.serviceLastInvoiceDate = serviceLastInvoiceDate;
  }

  public LicenseBillingDetails servicePaymentStatus(String servicePaymentStatus) {
    this.servicePaymentStatus = servicePaymentStatus;
    return this;
  }

  /**
   * Payment status
   * @return servicePaymentStatus
   **/
    public String getServicePaymentStatus() {
    return servicePaymentStatus;
  }

  public void setServicePaymentStatus(String servicePaymentStatus) {
    this.servicePaymentStatus = servicePaymentStatus;
  }

  public LicenseBillingDetails serviceFrequency(String serviceFrequency) {
    this.serviceFrequency = serviceFrequency;
    return this;
  }

  /**
   * Service frequency
   * @return serviceFrequency
   **/
    public String getServiceFrequency() {
    return serviceFrequency;
  }

  public void setServiceFrequency(String serviceFrequency) {
    this.serviceFrequency = serviceFrequency;
  }

  public LicenseBillingDetails nextDate(OffsetDateTime nextDate) {
    this.nextDate = nextDate;
    return this;
  }

  /**
   * Next date
   * @return nextDate
   **/
    public OffsetDateTime getNextDate() {
    return nextDate;
  }

  public void setNextDate(OffsetDateTime nextDate) {
    this.nextDate = nextDate;
  }

  public LicenseBillingDetails serviceNextInvoiceDate(String serviceNextInvoiceDate) {
    this.serviceNextInvoiceDate = serviceNextInvoiceDate;
    return this;
  }

  /**
   * Next invoice date
   * @return serviceNextInvoiceDate
   **/
    public String getServiceNextInvoiceDate() {
    return serviceNextInvoiceDate;
  }

  public void setServiceNextInvoiceDate(String serviceNextInvoiceDate) {
    this.serviceNextInvoiceDate = serviceNextInvoiceDate;
  }

  public LicenseBillingDetails serviceCurrency(String serviceCurrency) {
    this.serviceCurrency = serviceCurrency;
    return this;
  }

  /**
   * Service currency
   * @return serviceCurrency
   **/
    public String getServiceCurrency() {
    return serviceCurrency;
  }

  public void setServiceCurrency(String serviceCurrency) {
    this.serviceCurrency = serviceCurrency;
  }

  public LicenseBillingDetails serviceCurrencySymbol(String serviceCurrencySymbol) {
    this.serviceCurrencySymbol = serviceCurrencySymbol;
    return this;
  }

  /**
   * Service currency symbol
   * @return serviceCurrencySymbol
   **/
    public String getServiceCurrencySymbol() {
    return serviceCurrencySymbol;
  }

  public void setServiceCurrencySymbol(String serviceCurrencySymbol) {
    this.serviceCurrencySymbol = serviceCurrencySymbol;
  }

  public LicenseBillingDetails serviceCoupon(String serviceCoupon) {
    this.serviceCoupon = serviceCoupon;
    return this;
  }

  /**
   * Service coupon
   * @return serviceCoupon
   **/
    public String getServiceCoupon() {
    return serviceCoupon;
  }

  public void setServiceCoupon(String serviceCoupon) {
    this.serviceCoupon = serviceCoupon;
  }

  public LicenseBillingDetails serviceCostInfo(String serviceCostInfo) {
    this.serviceCostInfo = serviceCostInfo;
    return this;
  }

  /**
   * Service cost information
   * @return serviceCostInfo
   **/
    public String getServiceCostInfo() {
    return serviceCostInfo;
  }

  public void setServiceCostInfo(String serviceCostInfo) {
    this.serviceCostInfo = serviceCostInfo;
  }

  public LicenseBillingDetails serviceExtra(List<String> serviceExtra) {
    this.serviceExtra = serviceExtra;
    return this;
  }

  public LicenseBillingDetails addServiceExtraItem(String serviceExtraItem) {
    if (this.serviceExtra == null) {
      this.serviceExtra = new ArrayList<String>();
    }
    this.serviceExtra.add(serviceExtraItem);
    return this;
  }

  /**
   * Additional service information
   * @return serviceExtra
   **/
    public List<String> getServiceExtra() {
    return serviceExtra;
  }

  public void setServiceExtra(List<String> serviceExtra) {
    this.serviceExtra = serviceExtra;
  }

  public LicenseBillingDetails serviceExtraJson(String serviceExtraJson) {
    this.serviceExtraJson = serviceExtraJson;
    return this;
  }

  /**
   * Additional service information in JSON format
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
    LicenseBillingDetails licenseBillingDetails = (LicenseBillingDetails) o;
    return Objects.equals(this.serviceLastInvoiceDate, licenseBillingDetails.serviceLastInvoiceDate) &&
        Objects.equals(this.servicePaymentStatus, licenseBillingDetails.servicePaymentStatus) &&
        Objects.equals(this.serviceFrequency, licenseBillingDetails.serviceFrequency) &&
        Objects.equals(this.nextDate, licenseBillingDetails.nextDate) &&
        Objects.equals(this.serviceNextInvoiceDate, licenseBillingDetails.serviceNextInvoiceDate) &&
        Objects.equals(this.serviceCurrency, licenseBillingDetails.serviceCurrency) &&
        Objects.equals(this.serviceCurrencySymbol, licenseBillingDetails.serviceCurrencySymbol) &&
        Objects.equals(this.serviceCoupon, licenseBillingDetails.serviceCoupon) &&
        Objects.equals(this.serviceCostInfo, licenseBillingDetails.serviceCostInfo) &&
        Objects.equals(this.serviceExtra, licenseBillingDetails.serviceExtra) &&
        Objects.equals(this.serviceExtraJson, licenseBillingDetails.serviceExtraJson);
  }

  @Override
  public int hashCode() {
    return Objects.hash(serviceLastInvoiceDate, servicePaymentStatus, serviceFrequency, nextDate, serviceNextInvoiceDate, serviceCurrency, serviceCurrencySymbol, serviceCoupon, serviceCostInfo, serviceExtra, serviceExtraJson);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

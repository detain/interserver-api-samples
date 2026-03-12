package io.swagger.model;

import io.swagger.model.DomainBillingExtra;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Billing information for a domain service including payment status, dates, and cost.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Billing information for a domain service including payment status, dates, and cost.")

public class DomainBillingDetails   {

  private @Valid String serviceLastInvoiceDate = null;

  private @Valid String servicePaymentStatus = null;

  private @Valid String serviceFrequency = null;

  private @Valid String nextDate = null;

  private @Valid String serviceNextInvoiceDate = null;

  private @Valid String serviceCurrency = null;

  private @Valid String serviceCurrencySymbol = null;

  private @Valid String serviceCostInfo = null;

  private @Valid DomainBillingExtra serviceExtra = null;

  private @Valid String serviceExtraJson = null;

  /**
   * Date of the last invoice for the domain.
   **/
  public DomainBillingDetails serviceLastInvoiceDate(String serviceLastInvoiceDate) {
    this.serviceLastInvoiceDate = serviceLastInvoiceDate;
    return this;
  }

  
  @ApiModelProperty(value = "Date of the last invoice for the domain.")
  @JsonProperty("service_last_invoice_date")
  @NotNull

  public String getServiceLastInvoiceDate() {
    return serviceLastInvoiceDate;
  }
  public void setServiceLastInvoiceDate(String serviceLastInvoiceDate) {
    this.serviceLastInvoiceDate = serviceLastInvoiceDate;
  }

  /**
   * Current payment status (e.g., Paid, Unpaid).
   **/
  public DomainBillingDetails servicePaymentStatus(String servicePaymentStatus) {
    this.servicePaymentStatus = servicePaymentStatus;
    return this;
  }

  
  @ApiModelProperty(value = "Current payment status (e.g., Paid, Unpaid).")
  @JsonProperty("service_payment_status")
  @NotNull

  public String getServicePaymentStatus() {
    return servicePaymentStatus;
  }
  public void setServicePaymentStatus(String servicePaymentStatus) {
    this.servicePaymentStatus = servicePaymentStatus;
  }

  /**
   * Billing frequency (e.g., Yearly, Monthly).
   **/
  public DomainBillingDetails serviceFrequency(String serviceFrequency) {
    this.serviceFrequency = serviceFrequency;
    return this;
  }

  
  @ApiModelProperty(value = "Billing frequency (e.g., Yearly, Monthly).")
  @JsonProperty("service_frequency")
  @NotNull

  public String getServiceFrequency() {
    return serviceFrequency;
  }
  public void setServiceFrequency(String serviceFrequency) {
    this.serviceFrequency = serviceFrequency;
  }

  /**
   * Next billing date (ISO 8601).
   **/
  public DomainBillingDetails nextDate(String nextDate) {
    this.nextDate = nextDate;
    return this;
  }

  
  @ApiModelProperty(value = "Next billing date (ISO 8601).")
  @JsonProperty("next_date")
  @NotNull

  public String getNextDate() {
    return nextDate;
  }
  public void setNextDate(String nextDate) {
    this.nextDate = nextDate;
  }

  /**
   * Human-readable next invoice date.
   **/
  public DomainBillingDetails serviceNextInvoiceDate(String serviceNextInvoiceDate) {
    this.serviceNextInvoiceDate = serviceNextInvoiceDate;
    return this;
  }

  
  @ApiModelProperty(value = "Human-readable next invoice date.")
  @JsonProperty("service_next_invoice_date")
  @NotNull

  public String getServiceNextInvoiceDate() {
    return serviceNextInvoiceDate;
  }
  public void setServiceNextInvoiceDate(String serviceNextInvoiceDate) {
    this.serviceNextInvoiceDate = serviceNextInvoiceDate;
  }

  /**
   * Billing currency code.
   **/
  public DomainBillingDetails serviceCurrency(String serviceCurrency) {
    this.serviceCurrency = serviceCurrency;
    return this;
  }

  
  @ApiModelProperty(value = "Billing currency code.")
  @JsonProperty("service_currency")
  @NotNull

  public String getServiceCurrency() {
    return serviceCurrency;
  }
  public void setServiceCurrency(String serviceCurrency) {
    this.serviceCurrency = serviceCurrency;
  }

  /**
   * Billing currency symbol.
   **/
  public DomainBillingDetails serviceCurrencySymbol(String serviceCurrencySymbol) {
    this.serviceCurrencySymbol = serviceCurrencySymbol;
    return this;
  }

  
  @ApiModelProperty(value = "Billing currency symbol.")
  @JsonProperty("service_currency_symbol")
  @NotNull

  public String getServiceCurrencySymbol() {
    return serviceCurrencySymbol;
  }
  public void setServiceCurrencySymbol(String serviceCurrencySymbol) {
    this.serviceCurrencySymbol = serviceCurrencySymbol;
  }

  /**
   * Cost breakdown information.
   **/
  public DomainBillingDetails serviceCostInfo(String serviceCostInfo) {
    this.serviceCostInfo = serviceCostInfo;
    return this;
  }

  
  @ApiModelProperty(value = "Cost breakdown information.")
  @JsonProperty("service_cost_info")
  @NotNull

  public String getServiceCostInfo() {
    return serviceCostInfo;
  }
  public void setServiceCostInfo(String serviceCostInfo) {
    this.serviceCostInfo = serviceCostInfo;
  }

  /**
   **/
  public DomainBillingDetails serviceExtra(DomainBillingExtra serviceExtra) {
    this.serviceExtra = serviceExtra;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("service_extra")
  @NotNull

  public DomainBillingExtra getServiceExtra() {
    return serviceExtra;
  }
  public void setServiceExtra(DomainBillingExtra serviceExtra) {
    this.serviceExtra = serviceExtra;
  }

  /**
   * Raw JSON string of extra billing data.
   **/
  public DomainBillingDetails serviceExtraJson(String serviceExtraJson) {
    this.serviceExtraJson = serviceExtraJson;
    return this;
  }

  
  @ApiModelProperty(value = "Raw JSON string of extra billing data.")
  @JsonProperty("service_extra_json")
  @NotNull

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
    return Objects.equals(serviceLastInvoiceDate, domainBillingDetails.serviceLastInvoiceDate) &&
        Objects.equals(servicePaymentStatus, domainBillingDetails.servicePaymentStatus) &&
        Objects.equals(serviceFrequency, domainBillingDetails.serviceFrequency) &&
        Objects.equals(nextDate, domainBillingDetails.nextDate) &&
        Objects.equals(serviceNextInvoiceDate, domainBillingDetails.serviceNextInvoiceDate) &&
        Objects.equals(serviceCurrency, domainBillingDetails.serviceCurrency) &&
        Objects.equals(serviceCurrencySymbol, domainBillingDetails.serviceCurrencySymbol) &&
        Objects.equals(serviceCostInfo, domainBillingDetails.serviceCostInfo) &&
        Objects.equals(serviceExtra, domainBillingDetails.serviceExtra) &&
        Objects.equals(serviceExtraJson, domainBillingDetails.serviceExtraJson);
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

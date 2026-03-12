package io.swagger.model;

import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class BackupBillingDetails   {

  private @Valid String serviceLastInvoiceDate = null;

  private @Valid String servicePaymentStatus = null;

  private @Valid String serviceFrequency = null;

  private @Valid String nextDate = null;

  private @Valid String serviceNextInvoiceDate = null;

  private @Valid String serviceCurrency = null;

  private @Valid String serviceCurrencySymbol = null;

  private @Valid String serviceCostInfo = null;

  private @Valid String serviceExtra = null;

  private @Valid String serviceExtraJson = null;

  /**
   * Last invoice date of the service.
   **/
  public BackupBillingDetails serviceLastInvoiceDate(String serviceLastInvoiceDate) {
    this.serviceLastInvoiceDate = serviceLastInvoiceDate;
    return this;
  }

  
  @ApiModelProperty(example = "December 29, 2021", value = "Last invoice date of the service.")
  @JsonProperty("service_last_invoice_date")
  @NotNull

  public String getServiceLastInvoiceDate() {
    return serviceLastInvoiceDate;
  }
  public void setServiceLastInvoiceDate(String serviceLastInvoiceDate) {
    this.serviceLastInvoiceDate = serviceLastInvoiceDate;
  }

  /**
   * Payment status of the service.
   **/
  public BackupBillingDetails servicePaymentStatus(String servicePaymentStatus) {
    this.servicePaymentStatus = servicePaymentStatus;
    return this;
  }

  
  @ApiModelProperty(example = "Paid", value = "Payment status of the service.")
  @JsonProperty("service_payment_status")
  @NotNull

  public String getServicePaymentStatus() {
    return servicePaymentStatus;
  }
  public void setServicePaymentStatus(String servicePaymentStatus) {
    this.servicePaymentStatus = servicePaymentStatus;
  }

  /**
   * Billing frequency of the service.
   **/
  public BackupBillingDetails serviceFrequency(String serviceFrequency) {
    this.serviceFrequency = serviceFrequency;
    return this;
  }

  
  @ApiModelProperty(example = "Monthly", value = "Billing frequency of the service.")
  @JsonProperty("service_frequency")
  @NotNull

  public String getServiceFrequency() {
    return serviceFrequency;
  }
  public void setServiceFrequency(String serviceFrequency) {
    this.serviceFrequency = serviceFrequency;
  }

  /**
   * Next billing date of the service.
   **/
  public BackupBillingDetails nextDate(String nextDate) {
    this.nextDate = nextDate;
    return this;
  }

  
  @ApiModelProperty(example = "2022-01-29T14:09:57.000Z", value = "Next billing date of the service.")
  @JsonProperty("next_date")
  @NotNull

  public String getNextDate() {
    return nextDate;
  }
  public void setNextDate(String nextDate) {
    this.nextDate = nextDate;
  }

  /**
   * Next invoice date of the service.
   **/
  public BackupBillingDetails serviceNextInvoiceDate(String serviceNextInvoiceDate) {
    this.serviceNextInvoiceDate = serviceNextInvoiceDate;
    return this;
  }

  
  @ApiModelProperty(example = "January 29, 2022", value = "Next invoice date of the service.")
  @JsonProperty("service_next_invoice_date")
  @NotNull

  public String getServiceNextInvoiceDate() {
    return serviceNextInvoiceDate;
  }
  public void setServiceNextInvoiceDate(String serviceNextInvoiceDate) {
    this.serviceNextInvoiceDate = serviceNextInvoiceDate;
  }

  /**
   * Currency of the service.
   **/
  public BackupBillingDetails serviceCurrency(String serviceCurrency) {
    this.serviceCurrency = serviceCurrency;
    return this;
  }

  
  @ApiModelProperty(example = "USD", value = "Currency of the service.")
  @JsonProperty("service_currency")
  @NotNull

  public String getServiceCurrency() {
    return serviceCurrency;
  }
  public void setServiceCurrency(String serviceCurrency) {
    this.serviceCurrency = serviceCurrency;
  }

  /**
   * Currency symbol of the service.
   **/
  public BackupBillingDetails serviceCurrencySymbol(String serviceCurrencySymbol) {
    this.serviceCurrencySymbol = serviceCurrencySymbol;
    return this;
  }

  
  @ApiModelProperty(example = "$", value = "Currency symbol of the service.")
  @JsonProperty("service_currency_symbol")
  @NotNull

  public String getServiceCurrencySymbol() {
    return serviceCurrencySymbol;
  }
  public void setServiceCurrencySymbol(String serviceCurrencySymbol) {
    this.serviceCurrencySymbol = serviceCurrencySymbol;
  }

  /**
   * Cost information of the service.
   **/
  public BackupBillingDetails serviceCostInfo(String serviceCostInfo) {
    this.serviceCostInfo = serviceCostInfo;
    return this;
  }

  
  @ApiModelProperty(example = "3", value = "Cost information of the service.")
  @JsonProperty("service_cost_info")
  @NotNull

  public String getServiceCostInfo() {
    return serviceCostInfo;
  }
  public void setServiceCostInfo(String serviceCostInfo) {
    this.serviceCostInfo = serviceCostInfo;
  }

  /**
   * Service Extra Info
   **/
  public BackupBillingDetails serviceExtra(String serviceExtra) {
    this.serviceExtra = serviceExtra;
    return this;
  }

  
  @ApiModelProperty(example = "[]", value = "Service Extra Info")
  @JsonProperty("service_extra")
  @NotNull

  public String getServiceExtra() {
    return serviceExtra;
  }
  public void setServiceExtra(String serviceExtra) {
    this.serviceExtra = serviceExtra;
  }

  /**
   * JSON representation of extra service information.
   **/
  public BackupBillingDetails serviceExtraJson(String serviceExtraJson) {
    this.serviceExtraJson = serviceExtraJson;
    return this;
  }

  
  @ApiModelProperty(example = "[]", value = "JSON representation of extra service information.")
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
    BackupBillingDetails backupBillingDetails = (BackupBillingDetails) o;
    return Objects.equals(serviceLastInvoiceDate, backupBillingDetails.serviceLastInvoiceDate) &&
        Objects.equals(servicePaymentStatus, backupBillingDetails.servicePaymentStatus) &&
        Objects.equals(serviceFrequency, backupBillingDetails.serviceFrequency) &&
        Objects.equals(nextDate, backupBillingDetails.nextDate) &&
        Objects.equals(serviceNextInvoiceDate, backupBillingDetails.serviceNextInvoiceDate) &&
        Objects.equals(serviceCurrency, backupBillingDetails.serviceCurrency) &&
        Objects.equals(serviceCurrencySymbol, backupBillingDetails.serviceCurrencySymbol) &&
        Objects.equals(serviceCostInfo, backupBillingDetails.serviceCostInfo) &&
        Objects.equals(serviceExtra, backupBillingDetails.serviceExtra) &&
        Objects.equals(serviceExtraJson, backupBillingDetails.serviceExtraJson);
  }

  @Override
  public int hashCode() {
    return Objects.hash(serviceLastInvoiceDate, servicePaymentStatus, serviceFrequency, nextDate, serviceNextInvoiceDate, serviceCurrency, serviceCurrencySymbol, serviceCostInfo, serviceExtra, serviceExtraJson);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Billing information for a mail service including payment status, billing cycle, and cost.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Billing information for a mail service including payment status, billing cycle, and cost.")

public class MailBillingDetails   {

  private @Valid String serviceLastInvoiceDate = null;

  private @Valid String servicePaymentStatus = null;

  private @Valid String serviceFrequency = null;

  private @Valid String nextDate = null;

  private @Valid String serviceNextInvoiceDate = null;

  private @Valid String serviceCurrency = null;

  private @Valid String serviceCurrencySymbol = null;

  private @Valid String serviceCostInfo = null;

  private @Valid List<String> serviceExtra = new ArrayList<String>();

  private @Valid String serviceExtraJson = null;

  /**
   * The last invoice date of the service.
   **/
  public MailBillingDetails serviceLastInvoiceDate(String serviceLastInvoiceDate) {
    this.serviceLastInvoiceDate = serviceLastInvoiceDate;
    return this;
  }

  
  @ApiModelProperty(example = "July 16, 2023", value = "The last invoice date of the service.")
  @JsonProperty("service_last_invoice_date")
  @NotNull

  public String getServiceLastInvoiceDate() {
    return serviceLastInvoiceDate;
  }
  public void setServiceLastInvoiceDate(String serviceLastInvoiceDate) {
    this.serviceLastInvoiceDate = serviceLastInvoiceDate;
  }

  /**
   * The payment status of the service.
   **/
  public MailBillingDetails servicePaymentStatus(String servicePaymentStatus) {
    this.servicePaymentStatus = servicePaymentStatus;
    return this;
  }

  
  @ApiModelProperty(example = "Unpaid", value = "The payment status of the service.")
  @JsonProperty("service_payment_status")
  @NotNull

  public String getServicePaymentStatus() {
    return servicePaymentStatus;
  }
  public void setServicePaymentStatus(String servicePaymentStatus) {
    this.servicePaymentStatus = servicePaymentStatus;
  }

  /**
   * The frequency of the service payment.
   **/
  public MailBillingDetails serviceFrequency(String serviceFrequency) {
    this.serviceFrequency = serviceFrequency;
    return this;
  }

  
  @ApiModelProperty(example = "Monthly", value = "The frequency of the service payment.")
  @JsonProperty("service_frequency")
  @NotNull

  public String getServiceFrequency() {
    return serviceFrequency;
  }
  public void setServiceFrequency(String serviceFrequency) {
    this.serviceFrequency = serviceFrequency;
  }

  /**
   * The next payment date of the service.
   **/
  public MailBillingDetails nextDate(String nextDate) {
    this.nextDate = nextDate;
    return this;
  }

  
  @ApiModelProperty(example = "2023-08-16T00:55:05.000Z", value = "The next payment date of the service.")
  @JsonProperty("next_date")
  @NotNull

  public String getNextDate() {
    return nextDate;
  }
  public void setNextDate(String nextDate) {
    this.nextDate = nextDate;
  }

  /**
   * The next invoice date of the service.
   **/
  public MailBillingDetails serviceNextInvoiceDate(String serviceNextInvoiceDate) {
    this.serviceNextInvoiceDate = serviceNextInvoiceDate;
    return this;
  }

  
  @ApiModelProperty(example = "August 16, 2023", value = "The next invoice date of the service.")
  @JsonProperty("service_next_invoice_date")
  @NotNull

  public String getServiceNextInvoiceDate() {
    return serviceNextInvoiceDate;
  }
  public void setServiceNextInvoiceDate(String serviceNextInvoiceDate) {
    this.serviceNextInvoiceDate = serviceNextInvoiceDate;
  }

  /**
   * The currency of the service.
   **/
  public MailBillingDetails serviceCurrency(String serviceCurrency) {
    this.serviceCurrency = serviceCurrency;
    return this;
  }

  
  @ApiModelProperty(example = "USD", value = "The currency of the service.")
  @JsonProperty("service_currency")
  @NotNull

  public String getServiceCurrency() {
    return serviceCurrency;
  }
  public void setServiceCurrency(String serviceCurrency) {
    this.serviceCurrency = serviceCurrency;
  }

  /**
   * The currency symbol of the service.
   **/
  public MailBillingDetails serviceCurrencySymbol(String serviceCurrencySymbol) {
    this.serviceCurrencySymbol = serviceCurrencySymbol;
    return this;
  }

  
  @ApiModelProperty(example = "$", value = "The currency symbol of the service.")
  @JsonProperty("service_currency_symbol")
  @NotNull

  public String getServiceCurrencySymbol() {
    return serviceCurrencySymbol;
  }
  public void setServiceCurrencySymbol(String serviceCurrencySymbol) {
    this.serviceCurrencySymbol = serviceCurrencySymbol;
  }

  /**
   * The cost information of the service.
   **/
  public MailBillingDetails serviceCostInfo(String serviceCostInfo) {
    this.serviceCostInfo = serviceCostInfo;
    return this;
  }

  
  @ApiModelProperty(example = "1.00", value = "The cost information of the service.")
  @JsonProperty("service_cost_info")
  @NotNull

  public String getServiceCostInfo() {
    return serviceCostInfo;
  }
  public void setServiceCostInfo(String serviceCostInfo) {
    this.serviceCostInfo = serviceCostInfo;
  }

  /**
   * Extra information for the service.
   **/
  public MailBillingDetails serviceExtra(List<String> serviceExtra) {
    this.serviceExtra = serviceExtra;
    return this;
  }

  
  @ApiModelProperty(example = "[]", value = "Extra information for the service.")
  @JsonProperty("service_extra")
  @NotNull

  public List<String> getServiceExtra() {
    return serviceExtra;
  }
  public void setServiceExtra(List<String> serviceExtra) {
    this.serviceExtra = serviceExtra;
  }

  /**
   * Extra JSON information for the service.
   **/
  public MailBillingDetails serviceExtraJson(String serviceExtraJson) {
    this.serviceExtraJson = serviceExtraJson;
    return this;
  }

  
  @ApiModelProperty(example = "[]", value = "Extra JSON information for the service.")
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
    MailBillingDetails mailBillingDetails = (MailBillingDetails) o;
    return Objects.equals(serviceLastInvoiceDate, mailBillingDetails.serviceLastInvoiceDate) &&
        Objects.equals(servicePaymentStatus, mailBillingDetails.servicePaymentStatus) &&
        Objects.equals(serviceFrequency, mailBillingDetails.serviceFrequency) &&
        Objects.equals(nextDate, mailBillingDetails.nextDate) &&
        Objects.equals(serviceNextInvoiceDate, mailBillingDetails.serviceNextInvoiceDate) &&
        Objects.equals(serviceCurrency, mailBillingDetails.serviceCurrency) &&
        Objects.equals(serviceCurrencySymbol, mailBillingDetails.serviceCurrencySymbol) &&
        Objects.equals(serviceCostInfo, mailBillingDetails.serviceCostInfo) &&
        Objects.equals(serviceExtra, mailBillingDetails.serviceExtra) &&
        Objects.equals(serviceExtraJson, mailBillingDetails.serviceExtraJson);
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

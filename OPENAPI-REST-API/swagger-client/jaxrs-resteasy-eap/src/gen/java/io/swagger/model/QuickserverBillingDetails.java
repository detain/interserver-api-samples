package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.QuickserverServiceExtra;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Billing information for a QuickServer service including payment status, billing cycle, and cost.")

public class QuickserverBillingDetails   {
  private String serviceLastInvoiceDate = null;
  private String servicePaymentStatus = null;
  private String serviceFrequency = null;
  private String nextDate = null;
  private String serviceNextInvoiceDate = null;
  private String serviceCurrency = null;
  private String serviceCurrencySymbol = null;
  private String serviceCostInfo = null;
  private QuickserverServiceExtra serviceExtra = null;
  private String serviceExtraJson = null;

  /**
   * Last invoice date
   **/
  
  @Schema(example = "April 11, 2023", description = "Last invoice date")
  @JsonProperty("service_last_invoice_date")
  @NotNull
  public String getServiceLastInvoiceDate() {
    return serviceLastInvoiceDate;
  }
  public void setServiceLastInvoiceDate(String serviceLastInvoiceDate) {
    this.serviceLastInvoiceDate = serviceLastInvoiceDate;
  }

  /**
   * Payment status
   **/
  
  @Schema(example = "Paid", description = "Payment status")
  @JsonProperty("service_payment_status")
  @NotNull
  public String getServicePaymentStatus() {
    return servicePaymentStatus;
  }
  public void setServicePaymentStatus(String servicePaymentStatus) {
    this.servicePaymentStatus = servicePaymentStatus;
  }

  /**
   * Service frequency
   **/
  
  @Schema(example = "Monthly", description = "Service frequency")
  @JsonProperty("service_frequency")
  @NotNull
  public String getServiceFrequency() {
    return serviceFrequency;
  }
  public void setServiceFrequency(String serviceFrequency) {
    this.serviceFrequency = serviceFrequency;
  }

  /**
   * Next date
   **/
  
  @Schema(example = "2023-05-11T20:00:06.000Z", description = "Next date")
  @JsonProperty("next_date")
  @NotNull
  public String getNextDate() {
    return nextDate;
  }
  public void setNextDate(String nextDate) {
    this.nextDate = nextDate;
  }

  /**
   * Next invoice date
   **/
  
  @Schema(example = "May 11, 2023", description = "Next invoice date")
  @JsonProperty("service_next_invoice_date")
  @NotNull
  public String getServiceNextInvoiceDate() {
    return serviceNextInvoiceDate;
  }
  public void setServiceNextInvoiceDate(String serviceNextInvoiceDate) {
    this.serviceNextInvoiceDate = serviceNextInvoiceDate;
  }

  /**
   * Currency
   **/
  
  @Schema(example = "USD", description = "Currency")
  @JsonProperty("service_currency")
  @NotNull
  public String getServiceCurrency() {
    return serviceCurrency;
  }
  public void setServiceCurrency(String serviceCurrency) {
    this.serviceCurrency = serviceCurrency;
  }

  /**
   * Currency symbol
   **/
  
  @Schema(example = "$", description = "Currency symbol")
  @JsonProperty("service_currency_symbol")
  @NotNull
  public String getServiceCurrencySymbol() {
    return serviceCurrencySymbol;
  }
  public void setServiceCurrencySymbol(String serviceCurrencySymbol) {
    this.serviceCurrencySymbol = serviceCurrencySymbol;
  }

  /**
   * Cost information
   **/
  
  @Schema(example = "49.00", description = "Cost information")
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
  
  @Schema(description = "")
  @JsonProperty("service_extra")
  @NotNull
  public QuickserverServiceExtra getServiceExtra() {
    return serviceExtra;
  }
  public void setServiceExtra(QuickserverServiceExtra serviceExtra) {
    this.serviceExtra = serviceExtra;
  }

  /**
   * Extra information (JSON format)
   **/
  
  @Schema(example = "{\"platform\":\"kvm\"}", description = "Extra information (JSON format)")
  @JsonProperty("service_extra_json")
  @NotNull
  public String getServiceExtraJson() {
    return serviceExtraJson;
  }
  public void setServiceExtraJson(String serviceExtraJson) {
    this.serviceExtraJson = serviceExtraJson;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    QuickserverBillingDetails quickserverBillingDetails = (QuickserverBillingDetails) o;
    return Objects.equals(serviceLastInvoiceDate, quickserverBillingDetails.serviceLastInvoiceDate) &&
        Objects.equals(servicePaymentStatus, quickserverBillingDetails.servicePaymentStatus) &&
        Objects.equals(serviceFrequency, quickserverBillingDetails.serviceFrequency) &&
        Objects.equals(nextDate, quickserverBillingDetails.nextDate) &&
        Objects.equals(serviceNextInvoiceDate, quickserverBillingDetails.serviceNextInvoiceDate) &&
        Objects.equals(serviceCurrency, quickserverBillingDetails.serviceCurrency) &&
        Objects.equals(serviceCurrencySymbol, quickserverBillingDetails.serviceCurrencySymbol) &&
        Objects.equals(serviceCostInfo, quickserverBillingDetails.serviceCostInfo) &&
        Objects.equals(serviceExtra, quickserverBillingDetails.serviceExtra) &&
        Objects.equals(serviceExtraJson, quickserverBillingDetails.serviceExtraJson);
  }

  @Override
  public int hashCode() {
    return Objects.hash(serviceLastInvoiceDate, servicePaymentStatus, serviceFrequency, nextDate, serviceNextInvoiceDate, serviceCurrency, serviceCurrencySymbol, serviceCostInfo, serviceExtra, serviceExtraJson);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class QuickserverBillingDetails {\n");
    
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

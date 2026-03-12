package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;


/**
 * Billing information for a mail service including payment status, billing cycle, and cost.
 **/
@Schema(description = "Billing information for a mail service including payment status, billing cycle, and cost.")


public class MailBillingDetails   {
  @JsonProperty("service_last_invoice_date")
  private String serviceLastInvoiceDate = null;
  @JsonProperty("service_payment_status")
  private String servicePaymentStatus = null;
  @JsonProperty("service_frequency")
  private String serviceFrequency = null;
  @JsonProperty("next_date")
  private String nextDate = null;
  @JsonProperty("service_next_invoice_date")
  private String serviceNextInvoiceDate = null;
  @JsonProperty("service_currency")
  private String serviceCurrency = null;
  @JsonProperty("service_currency_symbol")
  private String serviceCurrencySymbol = null;
  @JsonProperty("service_cost_info")
  private String serviceCostInfo = null;
  @JsonProperty("service_extra")
  private List<String> serviceExtra = null;
  @JsonProperty("service_extra_json")
  private String serviceExtraJson = null;
  /**
   * The last invoice date of the service.
   **/
  public MailBillingDetails serviceLastInvoiceDate(String serviceLastInvoiceDate) {
    this.serviceLastInvoiceDate = serviceLastInvoiceDate;
    return this;
  }

  
  @Schema(example = "July 16, 2023", description = "The last invoice date of the service.")
  @JsonProperty("service_last_invoice_date")
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

  
  @Schema(example = "Unpaid", description = "The payment status of the service.")
  @JsonProperty("service_payment_status")
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

  
  @Schema(example = "Monthly", description = "The frequency of the service payment.")
  @JsonProperty("service_frequency")
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

  
  @Schema(example = "2023-08-16T00:55:05.000Z", description = "The next payment date of the service.")
  @JsonProperty("next_date")
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

  
  @Schema(example = "August 16, 2023", description = "The next invoice date of the service.")
  @JsonProperty("service_next_invoice_date")
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

  
  @Schema(example = "USD", description = "The currency of the service.")
  @JsonProperty("service_currency")
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

  
  @Schema(example = "$", description = "The currency symbol of the service.")
  @JsonProperty("service_currency_symbol")
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

  
  @Schema(example = "1.00", description = "The cost information of the service.")
  @JsonProperty("service_cost_info")
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

  
  @Schema(example = "[]", description = "Extra information for the service.")
  @JsonProperty("service_extra")
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

  
  @Schema(example = "[]", description = "Extra JSON information for the service.")
  @JsonProperty("service_extra_json")
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

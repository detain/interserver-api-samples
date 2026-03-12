package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class BackupBillingDetails  {
  
 /**
  * Last invoice date of the service.
  */
  @ApiModelProperty(example = "December 29, 2021", value = "Last invoice date of the service.")

  private String serviceLastInvoiceDate;

 /**
  * Payment status of the service.
  */
  @ApiModelProperty(example = "Paid", value = "Payment status of the service.")

  private String servicePaymentStatus;

 /**
  * Billing frequency of the service.
  */
  @ApiModelProperty(example = "Monthly", value = "Billing frequency of the service.")

  private String serviceFrequency;

 /**
  * Next billing date of the service.
  */
  @ApiModelProperty(example = "2022-01-29T14:09:57.000Z", value = "Next billing date of the service.")

  private String nextDate;

 /**
  * Next invoice date of the service.
  */
  @ApiModelProperty(example = "January 29, 2022", value = "Next invoice date of the service.")

  private String serviceNextInvoiceDate;

 /**
  * Currency of the service.
  */
  @ApiModelProperty(example = "USD", value = "Currency of the service.")

  private String serviceCurrency;

 /**
  * Currency symbol of the service.
  */
  @ApiModelProperty(example = "$", value = "Currency symbol of the service.")

  private String serviceCurrencySymbol;

 /**
  * Cost information of the service.
  */
  @ApiModelProperty(example = "3", value = "Cost information of the service.")

  private String serviceCostInfo;

 /**
  * Service Extra Info
  */
  @ApiModelProperty(example = "[]", value = "Service Extra Info")

  private String serviceExtra;

 /**
  * JSON representation of extra service information.
  */
  @ApiModelProperty(example = "[]", value = "JSON representation of extra service information.")

  private String serviceExtraJson;
 /**
   * Last invoice date of the service.
   * @return serviceLastInvoiceDate
  **/
  @JsonProperty("service_last_invoice_date")
  public String getServiceLastInvoiceDate() {
    return serviceLastInvoiceDate;
  }

  public void setServiceLastInvoiceDate(String serviceLastInvoiceDate) {
    this.serviceLastInvoiceDate = serviceLastInvoiceDate;
  }

  public BackupBillingDetails serviceLastInvoiceDate(String serviceLastInvoiceDate) {
    this.serviceLastInvoiceDate = serviceLastInvoiceDate;
    return this;
  }

 /**
   * Payment status of the service.
   * @return servicePaymentStatus
  **/
  @JsonProperty("service_payment_status")
  public String getServicePaymentStatus() {
    return servicePaymentStatus;
  }

  public void setServicePaymentStatus(String servicePaymentStatus) {
    this.servicePaymentStatus = servicePaymentStatus;
  }

  public BackupBillingDetails servicePaymentStatus(String servicePaymentStatus) {
    this.servicePaymentStatus = servicePaymentStatus;
    return this;
  }

 /**
   * Billing frequency of the service.
   * @return serviceFrequency
  **/
  @JsonProperty("service_frequency")
  public String getServiceFrequency() {
    return serviceFrequency;
  }

  public void setServiceFrequency(String serviceFrequency) {
    this.serviceFrequency = serviceFrequency;
  }

  public BackupBillingDetails serviceFrequency(String serviceFrequency) {
    this.serviceFrequency = serviceFrequency;
    return this;
  }

 /**
   * Next billing date of the service.
   * @return nextDate
  **/
  @JsonProperty("next_date")
  public String getNextDate() {
    return nextDate;
  }

  public void setNextDate(String nextDate) {
    this.nextDate = nextDate;
  }

  public BackupBillingDetails nextDate(String nextDate) {
    this.nextDate = nextDate;
    return this;
  }

 /**
   * Next invoice date of the service.
   * @return serviceNextInvoiceDate
  **/
  @JsonProperty("service_next_invoice_date")
  public String getServiceNextInvoiceDate() {
    return serviceNextInvoiceDate;
  }

  public void setServiceNextInvoiceDate(String serviceNextInvoiceDate) {
    this.serviceNextInvoiceDate = serviceNextInvoiceDate;
  }

  public BackupBillingDetails serviceNextInvoiceDate(String serviceNextInvoiceDate) {
    this.serviceNextInvoiceDate = serviceNextInvoiceDate;
    return this;
  }

 /**
   * Currency of the service.
   * @return serviceCurrency
  **/
  @JsonProperty("service_currency")
  public String getServiceCurrency() {
    return serviceCurrency;
  }

  public void setServiceCurrency(String serviceCurrency) {
    this.serviceCurrency = serviceCurrency;
  }

  public BackupBillingDetails serviceCurrency(String serviceCurrency) {
    this.serviceCurrency = serviceCurrency;
    return this;
  }

 /**
   * Currency symbol of the service.
   * @return serviceCurrencySymbol
  **/
  @JsonProperty("service_currency_symbol")
  public String getServiceCurrencySymbol() {
    return serviceCurrencySymbol;
  }

  public void setServiceCurrencySymbol(String serviceCurrencySymbol) {
    this.serviceCurrencySymbol = serviceCurrencySymbol;
  }

  public BackupBillingDetails serviceCurrencySymbol(String serviceCurrencySymbol) {
    this.serviceCurrencySymbol = serviceCurrencySymbol;
    return this;
  }

 /**
   * Cost information of the service.
   * @return serviceCostInfo
  **/
  @JsonProperty("service_cost_info")
  public String getServiceCostInfo() {
    return serviceCostInfo;
  }

  public void setServiceCostInfo(String serviceCostInfo) {
    this.serviceCostInfo = serviceCostInfo;
  }

  public BackupBillingDetails serviceCostInfo(String serviceCostInfo) {
    this.serviceCostInfo = serviceCostInfo;
    return this;
  }

 /**
   * Service Extra Info
   * @return serviceExtra
  **/
  @JsonProperty("service_extra")
  public String getServiceExtra() {
    return serviceExtra;
  }

  public void setServiceExtra(String serviceExtra) {
    this.serviceExtra = serviceExtra;
  }

  public BackupBillingDetails serviceExtra(String serviceExtra) {
    this.serviceExtra = serviceExtra;
    return this;
  }

 /**
   * JSON representation of extra service information.
   * @return serviceExtraJson
  **/
  @JsonProperty("service_extra_json")
  public String getServiceExtraJson() {
    return serviceExtraJson;
  }

  public void setServiceExtraJson(String serviceExtraJson) {
    this.serviceExtraJson = serviceExtraJson;
  }

  public BackupBillingDetails serviceExtraJson(String serviceExtraJson) {
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
    BackupBillingDetails backupBillingDetails = (BackupBillingDetails) o;
    return Objects.equals(this.serviceLastInvoiceDate, backupBillingDetails.serviceLastInvoiceDate) &&
        Objects.equals(this.servicePaymentStatus, backupBillingDetails.servicePaymentStatus) &&
        Objects.equals(this.serviceFrequency, backupBillingDetails.serviceFrequency) &&
        Objects.equals(this.nextDate, backupBillingDetails.nextDate) &&
        Objects.equals(this.serviceNextInvoiceDate, backupBillingDetails.serviceNextInvoiceDate) &&
        Objects.equals(this.serviceCurrency, backupBillingDetails.serviceCurrency) &&
        Objects.equals(this.serviceCurrencySymbol, backupBillingDetails.serviceCurrencySymbol) &&
        Objects.equals(this.serviceCostInfo, backupBillingDetails.serviceCostInfo) &&
        Objects.equals(this.serviceExtra, backupBillingDetails.serviceExtra) &&
        Objects.equals(this.serviceExtraJson, backupBillingDetails.serviceExtraJson);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}


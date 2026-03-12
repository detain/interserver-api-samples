package org.openapitools.model;

import java.math.BigDecimal;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class ChargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue  {
  
  @ApiModelProperty(value = "")

  private BigDecimal invoicesId;

  @ApiModelProperty(value = "")

  private String invoicesDescription;

  @ApiModelProperty(value = "")

  private BigDecimal invoicesAmount;

  @ApiModelProperty(value = "")

  private String invoicesDate;

  @ApiModelProperty(value = "")

  private String invoicesCurrency;

  @ApiModelProperty(value = "")

  private String currencySymbol;

  @ApiModelProperty(value = "")

  private String invoicesDateFormatted;
 /**
   * Get invoicesId
   * @return invoicesId
  **/
  @JsonProperty("invoices_id")
  public BigDecimal getInvoicesId() {
    return invoicesId;
  }

  public void setInvoicesId(BigDecimal invoicesId) {
    this.invoicesId = invoicesId;
  }

  public ChargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue invoicesId(BigDecimal invoicesId) {
    this.invoicesId = invoicesId;
    return this;
  }

 /**
   * Get invoicesDescription
   * @return invoicesDescription
  **/
  @JsonProperty("invoices_description")
  public String getInvoicesDescription() {
    return invoicesDescription;
  }

  public void setInvoicesDescription(String invoicesDescription) {
    this.invoicesDescription = invoicesDescription;
  }

  public ChargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue invoicesDescription(String invoicesDescription) {
    this.invoicesDescription = invoicesDescription;
    return this;
  }

 /**
   * Get invoicesAmount
   * @return invoicesAmount
  **/
  @JsonProperty("invoices_amount")
  public BigDecimal getInvoicesAmount() {
    return invoicesAmount;
  }

  public void setInvoicesAmount(BigDecimal invoicesAmount) {
    this.invoicesAmount = invoicesAmount;
  }

  public ChargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue invoicesAmount(BigDecimal invoicesAmount) {
    this.invoicesAmount = invoicesAmount;
    return this;
  }

 /**
   * Get invoicesDate
   * @return invoicesDate
  **/
  @JsonProperty("invoices_date")
  public String getInvoicesDate() {
    return invoicesDate;
  }

  public void setInvoicesDate(String invoicesDate) {
    this.invoicesDate = invoicesDate;
  }

  public ChargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue invoicesDate(String invoicesDate) {
    this.invoicesDate = invoicesDate;
    return this;
  }

 /**
   * Get invoicesCurrency
   * @return invoicesCurrency
  **/
  @JsonProperty("invoices_currency")
  public String getInvoicesCurrency() {
    return invoicesCurrency;
  }

  public void setInvoicesCurrency(String invoicesCurrency) {
    this.invoicesCurrency = invoicesCurrency;
  }

  public ChargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue invoicesCurrency(String invoicesCurrency) {
    this.invoicesCurrency = invoicesCurrency;
    return this;
  }

 /**
   * Get currencySymbol
   * @return currencySymbol
  **/
  @JsonProperty("currency_symbol")
  public String getCurrencySymbol() {
    return currencySymbol;
  }

  public void setCurrencySymbol(String currencySymbol) {
    this.currencySymbol = currencySymbol;
  }

  public ChargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue currencySymbol(String currencySymbol) {
    this.currencySymbol = currencySymbol;
    return this;
  }

 /**
   * Get invoicesDateFormatted
   * @return invoicesDateFormatted
  **/
  @JsonProperty("invoices_date_formatted")
  public String getInvoicesDateFormatted() {
    return invoicesDateFormatted;
  }

  public void setInvoicesDateFormatted(String invoicesDateFormatted) {
    this.invoicesDateFormatted = invoicesDateFormatted;
  }

  public ChargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue invoicesDateFormatted(String invoicesDateFormatted) {
    this.invoicesDateFormatted = invoicesDateFormatted;
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
    ChargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue chargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue = (ChargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue) o;
    return Objects.equals(this.invoicesId, chargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue.invoicesId) &&
        Objects.equals(this.invoicesDescription, chargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue.invoicesDescription) &&
        Objects.equals(this.invoicesAmount, chargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue.invoicesAmount) &&
        Objects.equals(this.invoicesDate, chargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue.invoicesDate) &&
        Objects.equals(this.invoicesCurrency, chargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue.invoicesCurrency) &&
        Objects.equals(this.currencySymbol, chargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue.currencySymbol) &&
        Objects.equals(this.invoicesDateFormatted, chargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue.invoicesDateFormatted);
  }

  @Override
  public int hashCode() {
    return Objects.hash(invoicesId, invoicesDescription, invoicesAmount, invoicesDate, invoicesCurrency, currencySymbol, invoicesDateFormatted);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ChargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue {\n");
    
    sb.append("    invoicesId: ").append(toIndentedString(invoicesId)).append("\n");
    sb.append("    invoicesDescription: ").append(toIndentedString(invoicesDescription)).append("\n");
    sb.append("    invoicesAmount: ").append(toIndentedString(invoicesAmount)).append("\n");
    sb.append("    invoicesDate: ").append(toIndentedString(invoicesDate)).append("\n");
    sb.append("    invoicesCurrency: ").append(toIndentedString(invoicesCurrency)).append("\n");
    sb.append("    currencySymbol: ").append(toIndentedString(currencySymbol)).append("\n");
    sb.append("    invoicesDateFormatted: ").append(toIndentedString(invoicesDateFormatted)).append("\n");
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


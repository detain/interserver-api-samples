package org.openapitools.model;

import java.math.BigDecimal;
import java.util.HashMap;
import java.util.Map;
import org.openapitools.model.ChargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class ChargeInvoiceRowsInvoicesValuePaidInvoicesValue  {
  
  @ApiModelProperty(value = "")

  private String invoicesId;

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

  @ApiModelProperty(value = "")

  private String paymentType;

 /**
  * This is optional when refund is present this will show
  */
  @ApiModelProperty(value = "This is optional when refund is present this will show")

  private Map<String, ChargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue> refundInvoices = new HashMap<>();
 /**
   * Get invoicesId
   * @return invoicesId
  **/
  @JsonProperty("invoices_id")
  public String getInvoicesId() {
    return invoicesId;
  }

  public void setInvoicesId(String invoicesId) {
    this.invoicesId = invoicesId;
  }

  public ChargeInvoiceRowsInvoicesValuePaidInvoicesValue invoicesId(String invoicesId) {
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

  public ChargeInvoiceRowsInvoicesValuePaidInvoicesValue invoicesDescription(String invoicesDescription) {
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

  public ChargeInvoiceRowsInvoicesValuePaidInvoicesValue invoicesAmount(BigDecimal invoicesAmount) {
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

  public ChargeInvoiceRowsInvoicesValuePaidInvoicesValue invoicesDate(String invoicesDate) {
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

  public ChargeInvoiceRowsInvoicesValuePaidInvoicesValue invoicesCurrency(String invoicesCurrency) {
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

  public ChargeInvoiceRowsInvoicesValuePaidInvoicesValue currencySymbol(String currencySymbol) {
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

  public ChargeInvoiceRowsInvoicesValuePaidInvoicesValue invoicesDateFormatted(String invoicesDateFormatted) {
    this.invoicesDateFormatted = invoicesDateFormatted;
    return this;
  }

 /**
   * Get paymentType
   * @return paymentType
  **/
  @JsonProperty("payment_type")
  public String getPaymentType() {
    return paymentType;
  }

  public void setPaymentType(String paymentType) {
    this.paymentType = paymentType;
  }

  public ChargeInvoiceRowsInvoicesValuePaidInvoicesValue paymentType(String paymentType) {
    this.paymentType = paymentType;
    return this;
  }

 /**
   * This is optional when refund is present this will show
   * @return refundInvoices
  **/
  @JsonProperty("refund_invoices")
  public Map<String, ChargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue> getRefundInvoices() {
    return refundInvoices;
  }

  public void setRefundInvoices(Map<String, ChargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue> refundInvoices) {
    this.refundInvoices = refundInvoices;
  }

  public ChargeInvoiceRowsInvoicesValuePaidInvoicesValue refundInvoices(Map<String, ChargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue> refundInvoices) {
    this.refundInvoices = refundInvoices;
    return this;
  }

  public ChargeInvoiceRowsInvoicesValuePaidInvoicesValue putRefundInvoicesItem(String key, ChargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue refundInvoicesItem) {
    this.refundInvoices.put(key, refundInvoicesItem);
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
    ChargeInvoiceRowsInvoicesValuePaidInvoicesValue chargeInvoiceRowsInvoicesValuePaidInvoicesValue = (ChargeInvoiceRowsInvoicesValuePaidInvoicesValue) o;
    return Objects.equals(this.invoicesId, chargeInvoiceRowsInvoicesValuePaidInvoicesValue.invoicesId) &&
        Objects.equals(this.invoicesDescription, chargeInvoiceRowsInvoicesValuePaidInvoicesValue.invoicesDescription) &&
        Objects.equals(this.invoicesAmount, chargeInvoiceRowsInvoicesValuePaidInvoicesValue.invoicesAmount) &&
        Objects.equals(this.invoicesDate, chargeInvoiceRowsInvoicesValuePaidInvoicesValue.invoicesDate) &&
        Objects.equals(this.invoicesCurrency, chargeInvoiceRowsInvoicesValuePaidInvoicesValue.invoicesCurrency) &&
        Objects.equals(this.currencySymbol, chargeInvoiceRowsInvoicesValuePaidInvoicesValue.currencySymbol) &&
        Objects.equals(this.invoicesDateFormatted, chargeInvoiceRowsInvoicesValuePaidInvoicesValue.invoicesDateFormatted) &&
        Objects.equals(this.paymentType, chargeInvoiceRowsInvoicesValuePaidInvoicesValue.paymentType) &&
        Objects.equals(this.refundInvoices, chargeInvoiceRowsInvoicesValuePaidInvoicesValue.refundInvoices);
  }

  @Override
  public int hashCode() {
    return Objects.hash(invoicesId, invoicesDescription, invoicesAmount, invoicesDate, invoicesCurrency, currencySymbol, invoicesDateFormatted, paymentType, refundInvoices);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ChargeInvoiceRowsInvoicesValuePaidInvoicesValue {\n");
    
    sb.append("    invoicesId: ").append(toIndentedString(invoicesId)).append("\n");
    sb.append("    invoicesDescription: ").append(toIndentedString(invoicesDescription)).append("\n");
    sb.append("    invoicesAmount: ").append(toIndentedString(invoicesAmount)).append("\n");
    sb.append("    invoicesDate: ").append(toIndentedString(invoicesDate)).append("\n");
    sb.append("    invoicesCurrency: ").append(toIndentedString(invoicesCurrency)).append("\n");
    sb.append("    currencySymbol: ").append(toIndentedString(currencySymbol)).append("\n");
    sb.append("    invoicesDateFormatted: ").append(toIndentedString(invoicesDateFormatted)).append("\n");
    sb.append("    paymentType: ").append(toIndentedString(paymentType)).append("\n");
    sb.append("    refundInvoices: ").append(toIndentedString(refundInvoices)).append("\n");
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


package io.swagger.model;

import io.swagger.model.ChargeInvoiceRowsRefundInvoices;
import java.math.BigDecimal;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonCreator;

public class ChargeInvoiceRowsPaidInvoices   {
  
  @Schema(description = "")
  private String invoicesId = null;
  
  @Schema(description = "")
  private String invoicesDescription = null;
  
  @Schema(description = "")
  private BigDecimal invoicesAmount = null;
  
  @Schema(description = "")
  private String invoicesDate = null;
  
  @Schema(description = "")
  private String invoicesCurrency = null;
  
  @Schema(description = "")
  private String currencySymbol = null;
  
  @Schema(description = "")
  private String invoicesDateFormatted = null;
  
  @Schema(description = "")
  private String paymentType = null;
  
  @Schema(description = "This is optional when refund is present this will show")
 /**
   * This is optional when refund is present this will show  
  **/
  private Map<String, ChargeInvoiceRowsRefundInvoices> refundInvoices = null;
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

  public ChargeInvoiceRowsPaidInvoices invoicesId(String invoicesId) {
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

  public ChargeInvoiceRowsPaidInvoices invoicesDescription(String invoicesDescription) {
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

  public ChargeInvoiceRowsPaidInvoices invoicesAmount(BigDecimal invoicesAmount) {
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

  public ChargeInvoiceRowsPaidInvoices invoicesDate(String invoicesDate) {
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

  public ChargeInvoiceRowsPaidInvoices invoicesCurrency(String invoicesCurrency) {
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

  public ChargeInvoiceRowsPaidInvoices currencySymbol(String currencySymbol) {
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

  public ChargeInvoiceRowsPaidInvoices invoicesDateFormatted(String invoicesDateFormatted) {
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

  public ChargeInvoiceRowsPaidInvoices paymentType(String paymentType) {
    this.paymentType = paymentType;
    return this;
  }

 /**
   * This is optional when refund is present this will show
   * @return refundInvoices
  **/
  @JsonProperty("refund_invoices")
  public Map<String, ChargeInvoiceRowsRefundInvoices> getRefundInvoices() {
    return refundInvoices;
  }

  public void setRefundInvoices(Map<String, ChargeInvoiceRowsRefundInvoices> refundInvoices) {
    this.refundInvoices = refundInvoices;
  }

  public ChargeInvoiceRowsPaidInvoices refundInvoices(Map<String, ChargeInvoiceRowsRefundInvoices> refundInvoices) {
    this.refundInvoices = refundInvoices;
    return this;
  }

  public ChargeInvoiceRowsPaidInvoices putRefundInvoicesItem(String key, ChargeInvoiceRowsRefundInvoices refundInvoicesItem) {
    this.refundInvoices.put(key, refundInvoicesItem);
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ChargeInvoiceRowsPaidInvoices {\n");
    
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

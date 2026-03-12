package io.swagger.model;

import java.math.BigDecimal;
import javax.validation.constraints.*;

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

public class ChargeInvoiceRowsRefundInvoices   {
  
  @Schema(description = "")
  private BigDecimal invoicesId = null;
  
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
 /**
   * Get invoicesId
   * @return invoicesId
  **/
  @JsonProperty("invoices_id")
  @NotNull
  public BigDecimal getInvoicesId() {
    return invoicesId;
  }

  public void setInvoicesId(BigDecimal invoicesId) {
    this.invoicesId = invoicesId;
  }

  public ChargeInvoiceRowsRefundInvoices invoicesId(BigDecimal invoicesId) {
    this.invoicesId = invoicesId;
    return this;
  }

 /**
   * Get invoicesDescription
   * @return invoicesDescription
  **/
  @JsonProperty("invoices_description")
  @NotNull
  public String getInvoicesDescription() {
    return invoicesDescription;
  }

  public void setInvoicesDescription(String invoicesDescription) {
    this.invoicesDescription = invoicesDescription;
  }

  public ChargeInvoiceRowsRefundInvoices invoicesDescription(String invoicesDescription) {
    this.invoicesDescription = invoicesDescription;
    return this;
  }

 /**
   * Get invoicesAmount
   * @return invoicesAmount
  **/
  @JsonProperty("invoices_amount")
  @NotNull
  public BigDecimal getInvoicesAmount() {
    return invoicesAmount;
  }

  public void setInvoicesAmount(BigDecimal invoicesAmount) {
    this.invoicesAmount = invoicesAmount;
  }

  public ChargeInvoiceRowsRefundInvoices invoicesAmount(BigDecimal invoicesAmount) {
    this.invoicesAmount = invoicesAmount;
    return this;
  }

 /**
   * Get invoicesDate
   * @return invoicesDate
  **/
  @JsonProperty("invoices_date")
  @NotNull
  public String getInvoicesDate() {
    return invoicesDate;
  }

  public void setInvoicesDate(String invoicesDate) {
    this.invoicesDate = invoicesDate;
  }

  public ChargeInvoiceRowsRefundInvoices invoicesDate(String invoicesDate) {
    this.invoicesDate = invoicesDate;
    return this;
  }

 /**
   * Get invoicesCurrency
   * @return invoicesCurrency
  **/
  @JsonProperty("invoices_currency")
  @NotNull
  public String getInvoicesCurrency() {
    return invoicesCurrency;
  }

  public void setInvoicesCurrency(String invoicesCurrency) {
    this.invoicesCurrency = invoicesCurrency;
  }

  public ChargeInvoiceRowsRefundInvoices invoicesCurrency(String invoicesCurrency) {
    this.invoicesCurrency = invoicesCurrency;
    return this;
  }

 /**
   * Get currencySymbol
   * @return currencySymbol
  **/
  @JsonProperty("currency_symbol")
  @NotNull
  public String getCurrencySymbol() {
    return currencySymbol;
  }

  public void setCurrencySymbol(String currencySymbol) {
    this.currencySymbol = currencySymbol;
  }

  public ChargeInvoiceRowsRefundInvoices currencySymbol(String currencySymbol) {
    this.currencySymbol = currencySymbol;
    return this;
  }

 /**
   * Get invoicesDateFormatted
   * @return invoicesDateFormatted
  **/
  @JsonProperty("invoices_date_formatted")
  @NotNull
  public String getInvoicesDateFormatted() {
    return invoicesDateFormatted;
  }

  public void setInvoicesDateFormatted(String invoicesDateFormatted) {
    this.invoicesDateFormatted = invoicesDateFormatted;
  }

  public ChargeInvoiceRowsRefundInvoices invoicesDateFormatted(String invoicesDateFormatted) {
    this.invoicesDateFormatted = invoicesDateFormatted;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ChargeInvoiceRowsRefundInvoices {\n");
    
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

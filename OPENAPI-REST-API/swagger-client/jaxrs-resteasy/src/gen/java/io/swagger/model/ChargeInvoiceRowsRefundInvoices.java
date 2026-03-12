package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import java.math.BigDecimal;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;



public class ChargeInvoiceRowsRefundInvoices   {
  private BigDecimal invoicesId = null;  private String invoicesDescription = null;  private BigDecimal invoicesAmount = null;  private String invoicesDate = null;  private String invoicesCurrency = null;  private String currencySymbol = null;  private String invoicesDateFormatted = null;

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("invoices_id")
  @NotNull
  public BigDecimal getInvoicesId() {
    return invoicesId;
  }
  public void setInvoicesId(BigDecimal invoicesId) {
    this.invoicesId = invoicesId;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("invoices_description")
  @NotNull
  public String getInvoicesDescription() {
    return invoicesDescription;
  }
  public void setInvoicesDescription(String invoicesDescription) {
    this.invoicesDescription = invoicesDescription;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("invoices_amount")
  @NotNull
  public BigDecimal getInvoicesAmount() {
    return invoicesAmount;
  }
  public void setInvoicesAmount(BigDecimal invoicesAmount) {
    this.invoicesAmount = invoicesAmount;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("invoices_date")
  @NotNull
  public String getInvoicesDate() {
    return invoicesDate;
  }
  public void setInvoicesDate(String invoicesDate) {
    this.invoicesDate = invoicesDate;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("invoices_currency")
  @NotNull
  public String getInvoicesCurrency() {
    return invoicesCurrency;
  }
  public void setInvoicesCurrency(String invoicesCurrency) {
    this.invoicesCurrency = invoicesCurrency;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("currency_symbol")
  @NotNull
  public String getCurrencySymbol() {
    return currencySymbol;
  }
  public void setCurrencySymbol(String currencySymbol) {
    this.currencySymbol = currencySymbol;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("invoices_date_formatted")
  @NotNull
  public String getInvoicesDateFormatted() {
    return invoicesDateFormatted;
  }
  public void setInvoicesDateFormatted(String invoicesDateFormatted) {
    this.invoicesDateFormatted = invoicesDateFormatted;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ChargeInvoiceRowsRefundInvoices chargeInvoiceRowsRefundInvoices = (ChargeInvoiceRowsRefundInvoices) o;
    return Objects.equals(invoicesId, chargeInvoiceRowsRefundInvoices.invoicesId) &&
        Objects.equals(invoicesDescription, chargeInvoiceRowsRefundInvoices.invoicesDescription) &&
        Objects.equals(invoicesAmount, chargeInvoiceRowsRefundInvoices.invoicesAmount) &&
        Objects.equals(invoicesDate, chargeInvoiceRowsRefundInvoices.invoicesDate) &&
        Objects.equals(invoicesCurrency, chargeInvoiceRowsRefundInvoices.invoicesCurrency) &&
        Objects.equals(currencySymbol, chargeInvoiceRowsRefundInvoices.currencySymbol) &&
        Objects.equals(invoicesDateFormatted, chargeInvoiceRowsRefundInvoices.invoicesDateFormatted);
  }

  @Override
  public int hashCode() {
    return Objects.hash(invoicesId, invoicesDescription, invoicesAmount, invoicesDate, invoicesCurrency, currencySymbol, invoicesDateFormatted);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

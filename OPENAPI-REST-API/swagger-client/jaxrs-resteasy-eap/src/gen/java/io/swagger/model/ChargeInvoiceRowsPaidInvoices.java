package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.ChargeInvoiceRowsRefundInvoices;
import java.math.BigDecimal;
import java.util.List;
import java.util.Map;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;



public class ChargeInvoiceRowsPaidInvoices   {
  private String invoicesId = null;
  private String invoicesDescription = null;
  private BigDecimal invoicesAmount = null;
  private String invoicesDate = null;
  private String invoicesCurrency = null;
  private String currencySymbol = null;
  private String invoicesDateFormatted = null;
  private String paymentType = null;
  private Map<String, ChargeInvoiceRowsRefundInvoices> refundInvoices = new HashMap<String, ChargeInvoiceRowsRefundInvoices>();

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("invoices_id")
  @NotNull
  public String getInvoicesId() {
    return invoicesId;
  }
  public void setInvoicesId(String invoicesId) {
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

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("payment_type")
  @NotNull
  public String getPaymentType() {
    return paymentType;
  }
  public void setPaymentType(String paymentType) {
    this.paymentType = paymentType;
  }

  /**
   * This is optional when refund is present this will show
   **/
  
  @Schema(description = "This is optional when refund is present this will show")
  @JsonProperty("refund_invoices")
  @NotNull
  public Map<String, ChargeInvoiceRowsRefundInvoices> getRefundInvoices() {
    return refundInvoices;
  }
  public void setRefundInvoices(Map<String, ChargeInvoiceRowsRefundInvoices> refundInvoices) {
    this.refundInvoices = refundInvoices;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ChargeInvoiceRowsPaidInvoices chargeInvoiceRowsPaidInvoices = (ChargeInvoiceRowsPaidInvoices) o;
    return Objects.equals(invoicesId, chargeInvoiceRowsPaidInvoices.invoicesId) &&
        Objects.equals(invoicesDescription, chargeInvoiceRowsPaidInvoices.invoicesDescription) &&
        Objects.equals(invoicesAmount, chargeInvoiceRowsPaidInvoices.invoicesAmount) &&
        Objects.equals(invoicesDate, chargeInvoiceRowsPaidInvoices.invoicesDate) &&
        Objects.equals(invoicesCurrency, chargeInvoiceRowsPaidInvoices.invoicesCurrency) &&
        Objects.equals(currencySymbol, chargeInvoiceRowsPaidInvoices.currencySymbol) &&
        Objects.equals(invoicesDateFormatted, chargeInvoiceRowsPaidInvoices.invoicesDateFormatted) &&
        Objects.equals(paymentType, chargeInvoiceRowsPaidInvoices.paymentType) &&
        Objects.equals(refundInvoices, chargeInvoiceRowsPaidInvoices.refundInvoices);
  }

  @Override
  public int hashCode() {
    return Objects.hash(invoicesId, invoicesDescription, invoicesAmount, invoicesDate, invoicesCurrency, currencySymbol, invoicesDateFormatted, paymentType, refundInvoices);
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

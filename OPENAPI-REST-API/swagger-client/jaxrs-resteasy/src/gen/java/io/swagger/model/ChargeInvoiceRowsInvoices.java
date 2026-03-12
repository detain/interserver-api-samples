package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import io.swagger.model.ChargeInvoiceRowsPaidInvoices;
import java.math.BigDecimal;
import java.util.List;
import java.util.Map;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;



public class ChargeInvoiceRowsInvoices   {
  private BigDecimal invoicesId = null;  private String invoicesDescription = null;  private BigDecimal invoicesAmount = null;  private String invoicesDate = null;  /**
   * Gets or Sets invoicesPaid
   */
  public enum InvoicesPaidEnum {
    NUMBER_0(new BigDecimal(0)),
    NUMBER_1(new BigDecimal(1));
    private BigDecimal value;

    InvoicesPaidEnum(BigDecimal value) {
      this.value = value;
    }

    @Override
    @JsonValue
    public String toString() {
      return String.valueOf(value);
    }
  }
  private InvoicesPaidEnum invoicesPaid = null;  private String invoicesDueDate = null;  private String invoicesCurrency = null;  private String currencySymbol = null;  private String invoicesDateFormatted = null;  private Map<String, ChargeInvoiceRowsPaidInvoices> paidInvoices = new HashMap<String, ChargeInvoiceRowsPaidInvoices>();

  /**
   * Unique invoice ID.
   **/
  
  @Schema(description = "Unique invoice ID.")
  @JsonProperty("invoices_id")
  @NotNull
  public BigDecimal getInvoicesId() {
    return invoicesId;
  }
  public void setInvoicesId(BigDecimal invoicesId) {
    this.invoicesId = invoicesId;
  }

  /**
   * Description of the invoice charge.
   **/
  
  @Schema(description = "Description of the invoice charge.")
  @JsonProperty("invoices_description")
  @NotNull
  public String getInvoicesDescription() {
    return invoicesDescription;
  }
  public void setInvoicesDescription(String invoicesDescription) {
    this.invoicesDescription = invoicesDescription;
  }

  /**
   * Invoice amount.
   **/
  
  @Schema(description = "Invoice amount.")
  @JsonProperty("invoices_amount")
  @NotNull
  public BigDecimal getInvoicesAmount() {
    return invoicesAmount;
  }
  public void setInvoicesAmount(BigDecimal invoicesAmount) {
    this.invoicesAmount = invoicesAmount;
  }

  /**
   * Invoice date.
   **/
  
  @Schema(description = "Invoice date.")
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
  @JsonProperty("invoices_paid")
  @NotNull
  public InvoicesPaidEnum getInvoicesPaid() {
    return invoicesPaid;
  }
  public void setInvoicesPaid(InvoicesPaidEnum invoicesPaid) {
    this.invoicesPaid = invoicesPaid;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("invoices_due_date")
  @NotNull
  public String getInvoicesDueDate() {
    return invoicesDueDate;
  }
  public void setInvoicesDueDate(String invoicesDueDate) {
    this.invoicesDueDate = invoicesDueDate;
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
   * This is optional when invoices_paid &#x3D; 1 this array will show
   **/
  
  @Schema(description = "This is optional when invoices_paid = 1 this array will show")
  @JsonProperty("paid_invoices")
  @NotNull
  public Map<String, ChargeInvoiceRowsPaidInvoices> getPaidInvoices() {
    return paidInvoices;
  }
  public void setPaidInvoices(Map<String, ChargeInvoiceRowsPaidInvoices> paidInvoices) {
    this.paidInvoices = paidInvoices;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ChargeInvoiceRowsInvoices chargeInvoiceRowsInvoices = (ChargeInvoiceRowsInvoices) o;
    return Objects.equals(invoicesId, chargeInvoiceRowsInvoices.invoicesId) &&
        Objects.equals(invoicesDescription, chargeInvoiceRowsInvoices.invoicesDescription) &&
        Objects.equals(invoicesAmount, chargeInvoiceRowsInvoices.invoicesAmount) &&
        Objects.equals(invoicesDate, chargeInvoiceRowsInvoices.invoicesDate) &&
        Objects.equals(invoicesPaid, chargeInvoiceRowsInvoices.invoicesPaid) &&
        Objects.equals(invoicesDueDate, chargeInvoiceRowsInvoices.invoicesDueDate) &&
        Objects.equals(invoicesCurrency, chargeInvoiceRowsInvoices.invoicesCurrency) &&
        Objects.equals(currencySymbol, chargeInvoiceRowsInvoices.currencySymbol) &&
        Objects.equals(invoicesDateFormatted, chargeInvoiceRowsInvoices.invoicesDateFormatted) &&
        Objects.equals(paidInvoices, chargeInvoiceRowsInvoices.paidInvoices);
  }

  @Override
  public int hashCode() {
    return Objects.hash(invoicesId, invoicesDescription, invoicesAmount, invoicesDate, invoicesPaid, invoicesDueDate, invoicesCurrency, currencySymbol, invoicesDateFormatted, paidInvoices);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ChargeInvoiceRowsInvoices {\n");
    
    sb.append("    invoicesId: ").append(toIndentedString(invoicesId)).append("\n");
    sb.append("    invoicesDescription: ").append(toIndentedString(invoicesDescription)).append("\n");
    sb.append("    invoicesAmount: ").append(toIndentedString(invoicesAmount)).append("\n");
    sb.append("    invoicesDate: ").append(toIndentedString(invoicesDate)).append("\n");
    sb.append("    invoicesPaid: ").append(toIndentedString(invoicesPaid)).append("\n");
    sb.append("    invoicesDueDate: ").append(toIndentedString(invoicesDueDate)).append("\n");
    sb.append("    invoicesCurrency: ").append(toIndentedString(invoicesCurrency)).append("\n");
    sb.append("    currencySymbol: ").append(toIndentedString(currencySymbol)).append("\n");
    sb.append("    invoicesDateFormatted: ").append(toIndentedString(invoicesDateFormatted)).append("\n");
    sb.append("    paidInvoices: ").append(toIndentedString(paidInvoices)).append("\n");
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

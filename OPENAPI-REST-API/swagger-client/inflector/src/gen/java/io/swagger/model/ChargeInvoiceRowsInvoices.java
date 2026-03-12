package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import io.swagger.model.ChargeInvoiceRowsPaidInvoices;
import io.swagger.v3.oas.annotations.media.Schema;
import java.math.BigDecimal;
import java.util.HashMap;
import java.util.List;
import java.util.Map;





public class ChargeInvoiceRowsInvoices   {
  @JsonProperty("invoices_id")
  private BigDecimal invoicesId = null;
  @JsonProperty("invoices_description")
  private String invoicesDescription = null;
  @JsonProperty("invoices_amount")
  private BigDecimal invoicesAmount = null;
  @JsonProperty("invoices_date")
  private String invoicesDate = null;
  /**
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

    @JsonCreator
    public static InvoicesPaidEnum fromValue(String text) {
      for (InvoicesPaidEnum b : InvoicesPaidEnum.values()) {
        if (String.valueOf(b.value).equals(text)) {
          return b;
        }
      }
      return null;
    }
  }
  @JsonProperty("invoices_paid")
  private InvoicesPaidEnum invoicesPaid = null;
  @JsonProperty("invoices_due_date")
  private String invoicesDueDate = null;
  @JsonProperty("invoices_currency")
  private String invoicesCurrency = null;
  @JsonProperty("currency_symbol")
  private String currencySymbol = null;
  @JsonProperty("invoices_date_formatted")
  private String invoicesDateFormatted = null;
  @JsonProperty("paid_invoices")
  private Map<String, ChargeInvoiceRowsPaidInvoices> paidInvoices = null;
  /**
   * Unique invoice ID.
   **/
  public ChargeInvoiceRowsInvoices invoicesId(BigDecimal invoicesId) {
    this.invoicesId = invoicesId;
    return this;
  }

  
  @Schema(description = "Unique invoice ID.")
  @JsonProperty("invoices_id")
  public BigDecimal getInvoicesId() {
    return invoicesId;
  }
  public void setInvoicesId(BigDecimal invoicesId) {
    this.invoicesId = invoicesId;
  }

  /**
   * Description of the invoice charge.
   **/
  public ChargeInvoiceRowsInvoices invoicesDescription(String invoicesDescription) {
    this.invoicesDescription = invoicesDescription;
    return this;
  }

  
  @Schema(description = "Description of the invoice charge.")
  @JsonProperty("invoices_description")
  public String getInvoicesDescription() {
    return invoicesDescription;
  }
  public void setInvoicesDescription(String invoicesDescription) {
    this.invoicesDescription = invoicesDescription;
  }

  /**
   * Invoice amount.
   **/
  public ChargeInvoiceRowsInvoices invoicesAmount(BigDecimal invoicesAmount) {
    this.invoicesAmount = invoicesAmount;
    return this;
  }

  
  @Schema(description = "Invoice amount.")
  @JsonProperty("invoices_amount")
  public BigDecimal getInvoicesAmount() {
    return invoicesAmount;
  }
  public void setInvoicesAmount(BigDecimal invoicesAmount) {
    this.invoicesAmount = invoicesAmount;
  }

  /**
   * Invoice date.
   **/
  public ChargeInvoiceRowsInvoices invoicesDate(String invoicesDate) {
    this.invoicesDate = invoicesDate;
    return this;
  }

  
  @Schema(description = "Invoice date.")
  @JsonProperty("invoices_date")
  public String getInvoicesDate() {
    return invoicesDate;
  }
  public void setInvoicesDate(String invoicesDate) {
    this.invoicesDate = invoicesDate;
  }

  /**
   **/
  public ChargeInvoiceRowsInvoices invoicesPaid(InvoicesPaidEnum invoicesPaid) {
    this.invoicesPaid = invoicesPaid;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("invoices_paid")
  public InvoicesPaidEnum getInvoicesPaid() {
    return invoicesPaid;
  }
  public void setInvoicesPaid(InvoicesPaidEnum invoicesPaid) {
    this.invoicesPaid = invoicesPaid;
  }

  /**
   **/
  public ChargeInvoiceRowsInvoices invoicesDueDate(String invoicesDueDate) {
    this.invoicesDueDate = invoicesDueDate;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("invoices_due_date")
  public String getInvoicesDueDate() {
    return invoicesDueDate;
  }
  public void setInvoicesDueDate(String invoicesDueDate) {
    this.invoicesDueDate = invoicesDueDate;
  }

  /**
   **/
  public ChargeInvoiceRowsInvoices invoicesCurrency(String invoicesCurrency) {
    this.invoicesCurrency = invoicesCurrency;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("invoices_currency")
  public String getInvoicesCurrency() {
    return invoicesCurrency;
  }
  public void setInvoicesCurrency(String invoicesCurrency) {
    this.invoicesCurrency = invoicesCurrency;
  }

  /**
   **/
  public ChargeInvoiceRowsInvoices currencySymbol(String currencySymbol) {
    this.currencySymbol = currencySymbol;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("currency_symbol")
  public String getCurrencySymbol() {
    return currencySymbol;
  }
  public void setCurrencySymbol(String currencySymbol) {
    this.currencySymbol = currencySymbol;
  }

  /**
   **/
  public ChargeInvoiceRowsInvoices invoicesDateFormatted(String invoicesDateFormatted) {
    this.invoicesDateFormatted = invoicesDateFormatted;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("invoices_date_formatted")
  public String getInvoicesDateFormatted() {
    return invoicesDateFormatted;
  }
  public void setInvoicesDateFormatted(String invoicesDateFormatted) {
    this.invoicesDateFormatted = invoicesDateFormatted;
  }

  /**
   * This is optional when invoices_paid = 1 this array will show
   **/
  public ChargeInvoiceRowsInvoices paidInvoices(Map<String, ChargeInvoiceRowsPaidInvoices> paidInvoices) {
    this.paidInvoices = paidInvoices;
    return this;
  }

  
  @Schema(description = "This is optional when invoices_paid = 1 this array will show")
  @JsonProperty("paid_invoices")
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

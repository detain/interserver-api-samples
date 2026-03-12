package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import io.swagger.server.api.model.ChargeInvoiceRowsPaidInvoices;
import java.math.BigDecimal;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * ChargeInvoiceRowsInvoices
 */




public class ChargeInvoiceRowsInvoices   {
  private BigDecimal invoicesId = null;

  private String invoicesDescription = null;

  private BigDecimal invoicesAmount = null;

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

    public BigDecimal getValue() {
      return value;
    }

    @Override
    public String toString() {
      return String.valueOf(value);
    }

    public static InvoicesPaidEnum fromValue(BigDecimal value) {
      for (InvoicesPaidEnum b : InvoicesPaidEnum.values()) {
        if (b.value.equals(value)) {
          return b;
        }
      }
      return null;
    }

  }
  private InvoicesPaidEnum invoicesPaid = null;

  private String invoicesDueDate = null;

  private String invoicesCurrency = null;

  private String currencySymbol = null;

  private String invoicesDateFormatted = null;

  
  private Map<String, ChargeInvoiceRowsPaidInvoices> paidInvoices = null;

  public ChargeInvoiceRowsInvoices invoicesId(BigDecimal invoicesId) {
    this.invoicesId = invoicesId;
    return this;
  }

  /**
   * Unique invoice ID.
   * @return invoicesId
   **/
    public BigDecimal getInvoicesId() {
    return invoicesId;
  }

  public void setInvoicesId(BigDecimal invoicesId) {
    this.invoicesId = invoicesId;
  }

  public ChargeInvoiceRowsInvoices invoicesDescription(String invoicesDescription) {
    this.invoicesDescription = invoicesDescription;
    return this;
  }

  /**
   * Description of the invoice charge.
   * @return invoicesDescription
   **/
    public String getInvoicesDescription() {
    return invoicesDescription;
  }

  public void setInvoicesDescription(String invoicesDescription) {
    this.invoicesDescription = invoicesDescription;
  }

  public ChargeInvoiceRowsInvoices invoicesAmount(BigDecimal invoicesAmount) {
    this.invoicesAmount = invoicesAmount;
    return this;
  }

  /**
   * Invoice amount.
   * @return invoicesAmount
   **/
    public BigDecimal getInvoicesAmount() {
    return invoicesAmount;
  }

  public void setInvoicesAmount(BigDecimal invoicesAmount) {
    this.invoicesAmount = invoicesAmount;
  }

  public ChargeInvoiceRowsInvoices invoicesDate(String invoicesDate) {
    this.invoicesDate = invoicesDate;
    return this;
  }

  /**
   * Invoice date.
   * @return invoicesDate
   **/
    public String getInvoicesDate() {
    return invoicesDate;
  }

  public void setInvoicesDate(String invoicesDate) {
    this.invoicesDate = invoicesDate;
  }

  public ChargeInvoiceRowsInvoices invoicesPaid(InvoicesPaidEnum invoicesPaid) {
    this.invoicesPaid = invoicesPaid;
    return this;
  }

  /**
   * Get invoicesPaid
   * @return invoicesPaid
   **/
    public InvoicesPaidEnum getInvoicesPaid() {
    return invoicesPaid;
  }

  public void setInvoicesPaid(InvoicesPaidEnum invoicesPaid) {
    this.invoicesPaid = invoicesPaid;
  }

  public ChargeInvoiceRowsInvoices invoicesDueDate(String invoicesDueDate) {
    this.invoicesDueDate = invoicesDueDate;
    return this;
  }

  /**
   * Get invoicesDueDate
   * @return invoicesDueDate
   **/
    public String getInvoicesDueDate() {
    return invoicesDueDate;
  }

  public void setInvoicesDueDate(String invoicesDueDate) {
    this.invoicesDueDate = invoicesDueDate;
  }

  public ChargeInvoiceRowsInvoices invoicesCurrency(String invoicesCurrency) {
    this.invoicesCurrency = invoicesCurrency;
    return this;
  }

  /**
   * Get invoicesCurrency
   * @return invoicesCurrency
   **/
    public String getInvoicesCurrency() {
    return invoicesCurrency;
  }

  public void setInvoicesCurrency(String invoicesCurrency) {
    this.invoicesCurrency = invoicesCurrency;
  }

  public ChargeInvoiceRowsInvoices currencySymbol(String currencySymbol) {
    this.currencySymbol = currencySymbol;
    return this;
  }

  /**
   * Get currencySymbol
   * @return currencySymbol
   **/
    public String getCurrencySymbol() {
    return currencySymbol;
  }

  public void setCurrencySymbol(String currencySymbol) {
    this.currencySymbol = currencySymbol;
  }

  public ChargeInvoiceRowsInvoices invoicesDateFormatted(String invoicesDateFormatted) {
    this.invoicesDateFormatted = invoicesDateFormatted;
    return this;
  }

  /**
   * Get invoicesDateFormatted
   * @return invoicesDateFormatted
   **/
    public String getInvoicesDateFormatted() {
    return invoicesDateFormatted;
  }

  public void setInvoicesDateFormatted(String invoicesDateFormatted) {
    this.invoicesDateFormatted = invoicesDateFormatted;
  }

  public ChargeInvoiceRowsInvoices paidInvoices(Map<String, ChargeInvoiceRowsPaidInvoices> paidInvoices) {
    this.paidInvoices = paidInvoices;
    return this;
  }

  public ChargeInvoiceRowsInvoices putPaidInvoicesItem(String key, ChargeInvoiceRowsPaidInvoices paidInvoicesItem) {
    if (this.paidInvoices == null) {
      this.paidInvoices = new HashMap<String, ChargeInvoiceRowsPaidInvoices>();
    }
    this.paidInvoices.put(key, paidInvoicesItem);
    return this;
  }

  /**
   * This is optional when invoices_paid = 1 this array will show
   * @return paidInvoices
   **/
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
    return Objects.equals(this.invoicesId, chargeInvoiceRowsInvoices.invoicesId) &&
        Objects.equals(this.invoicesDescription, chargeInvoiceRowsInvoices.invoicesDescription) &&
        Objects.equals(this.invoicesAmount, chargeInvoiceRowsInvoices.invoicesAmount) &&
        Objects.equals(this.invoicesDate, chargeInvoiceRowsInvoices.invoicesDate) &&
        Objects.equals(this.invoicesPaid, chargeInvoiceRowsInvoices.invoicesPaid) &&
        Objects.equals(this.invoicesDueDate, chargeInvoiceRowsInvoices.invoicesDueDate) &&
        Objects.equals(this.invoicesCurrency, chargeInvoiceRowsInvoices.invoicesCurrency) &&
        Objects.equals(this.currencySymbol, chargeInvoiceRowsInvoices.currencySymbol) &&
        Objects.equals(this.invoicesDateFormatted, chargeInvoiceRowsInvoices.invoicesDateFormatted) &&
        Objects.equals(this.paidInvoices, chargeInvoiceRowsInvoices.paidInvoices);
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

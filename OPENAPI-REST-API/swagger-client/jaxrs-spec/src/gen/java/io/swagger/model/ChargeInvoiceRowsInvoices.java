package io.swagger.model;

import io.swagger.model.ChargeInvoiceRowsPaidInvoices;
import java.math.BigDecimal;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class ChargeInvoiceRowsInvoices   {

  private @Valid BigDecimal invoicesId = null;

  private @Valid String invoicesDescription = null;

  private @Valid BigDecimal invoicesAmount = null;

  private @Valid String invoicesDate = null;

public enum InvoicesPaidEnum {

    NUMBER_0(BigDecimal.valueOf(new BigDecimal(0))), NUMBER_1(BigDecimal.valueOf(new BigDecimal(1)));


    private BigDecimal value;

    InvoicesPaidEnum (BigDecimal v) {
        value = v;
    }

    public String value() {
        return value;
    }

    @Override
    @JsonValue
    public String toString() {
        return String.valueOf(value);
    }

    @JsonCreator
    public static InvoicesPaidEnum fromValue(String v) {
        for (InvoicesPaidEnum b : InvoicesPaidEnum.values()) {
            if (String.valueOf(b.value).equals(v)) {
                return b;
            }
        }
        return null;
    }
}
  private @Valid InvoicesPaidEnum invoicesPaid = null;

  private @Valid String invoicesDueDate = null;

  private @Valid String invoicesCurrency = null;

  private @Valid String currencySymbol = null;

  private @Valid String invoicesDateFormatted = null;

  private @Valid Map<String, ChargeInvoiceRowsPaidInvoices> paidInvoices = new HashMap<String, ChargeInvoiceRowsPaidInvoices>();

  /**
   * Unique invoice ID.
   **/
  public ChargeInvoiceRowsInvoices invoicesId(BigDecimal invoicesId) {
    this.invoicesId = invoicesId;
    return this;
  }

  
  @ApiModelProperty(value = "Unique invoice ID.")
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
  public ChargeInvoiceRowsInvoices invoicesDescription(String invoicesDescription) {
    this.invoicesDescription = invoicesDescription;
    return this;
  }

  
  @ApiModelProperty(value = "Description of the invoice charge.")
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
  public ChargeInvoiceRowsInvoices invoicesAmount(BigDecimal invoicesAmount) {
    this.invoicesAmount = invoicesAmount;
    return this;
  }

  
  @ApiModelProperty(value = "Invoice amount.")
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
  public ChargeInvoiceRowsInvoices invoicesDate(String invoicesDate) {
    this.invoicesDate = invoicesDate;
    return this;
  }

  
  @ApiModelProperty(value = "Invoice date.")
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
  public ChargeInvoiceRowsInvoices invoicesPaid(InvoicesPaidEnum invoicesPaid) {
    this.invoicesPaid = invoicesPaid;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public ChargeInvoiceRowsInvoices invoicesDueDate(String invoicesDueDate) {
    this.invoicesDueDate = invoicesDueDate;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public ChargeInvoiceRowsInvoices invoicesCurrency(String invoicesCurrency) {
    this.invoicesCurrency = invoicesCurrency;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public ChargeInvoiceRowsInvoices currencySymbol(String currencySymbol) {
    this.currencySymbol = currencySymbol;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public ChargeInvoiceRowsInvoices invoicesDateFormatted(String invoicesDateFormatted) {
    this.invoicesDateFormatted = invoicesDateFormatted;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public ChargeInvoiceRowsInvoices paidInvoices(Map<String, ChargeInvoiceRowsPaidInvoices> paidInvoices) {
    this.paidInvoices = paidInvoices;
    return this;
  }

  
  @ApiModelProperty(value = "This is optional when invoices_paid = 1 this array will show")
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

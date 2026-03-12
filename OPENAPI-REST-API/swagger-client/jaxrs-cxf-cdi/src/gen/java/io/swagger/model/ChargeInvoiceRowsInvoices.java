package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.ChargeInvoiceRowsPaidInvoices;
import java.math.BigDecimal;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.validation.Valid;
import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;



public class ChargeInvoiceRowsInvoices   {
  private BigDecimal invoicesId = null;
  private String invoicesDescription = null;
  private BigDecimal invoicesAmount = null;
  private String invoicesDate = null;
@XmlType(name="InvoicesPaidEnum")
@XmlEnum(BigDecimal.class)
public enum InvoicesPaidEnum {

    @XmlEnumValue(new BigDecimal(0)) NUMBER_0(BigDecimal.valueOf(new BigDecimal(0))), @XmlEnumValue(new BigDecimal(1)) NUMBER_1(BigDecimal.valueOf(new BigDecimal(1)));


    private BigDecimal value;

    InvoicesPaidEnum (BigDecimal v) {
        value = v;
    }

    public String value() {
        return value;
    }

    @Override
    public String toString() {
        return String.valueOf(value);
    }

    public static InvoicesPaidEnum fromValue(String v) {
        for (InvoicesPaidEnum b : InvoicesPaidEnum.values()) {
            if (String.valueOf(b.value).equals(v)) {
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
  private Map<String, ChargeInvoiceRowsPaidInvoices> paidInvoices = new HashMap<String, ChargeInvoiceRowsPaidInvoices>();

  /**
   * Unique invoice ID.
   **/
  public ChargeInvoiceRowsInvoices invoicesId(BigDecimal invoicesId) {
    this.invoicesId = invoicesId;
    return this;
  }

  
  
  @Schema(description = "Unique invoice ID.")
  @JsonProperty("invoices_id")
  @NotNull
  @Valid
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

  
  
  @Schema(description = "Invoice amount.")
  @JsonProperty("invoices_amount")
  @NotNull
  @Valid
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

  
  
  @Schema(description = "")
  @JsonProperty("invoices_paid")
  @NotNull
  @Valid
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
  public ChargeInvoiceRowsInvoices currencySymbol(String currencySymbol) {
    this.currencySymbol = currencySymbol;
    return this;
  }

  
  
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
  public ChargeInvoiceRowsInvoices invoicesDateFormatted(String invoicesDateFormatted) {
    this.invoicesDateFormatted = invoicesDateFormatted;
    return this;
  }

  
  
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
  public ChargeInvoiceRowsInvoices paidInvoices(Map<String, ChargeInvoiceRowsPaidInvoices> paidInvoices) {
    this.paidInvoices = paidInvoices;
    return this;
  }

  
  
  @Schema(description = "This is optional when invoices_paid = 1 this array will show")
  @JsonProperty("paid_invoices")
  @NotNull
  @Valid
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

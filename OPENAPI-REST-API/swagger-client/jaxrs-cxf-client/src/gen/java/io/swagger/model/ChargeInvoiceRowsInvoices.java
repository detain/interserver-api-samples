package io.swagger.model;

import io.swagger.model.ChargeInvoiceRowsPaidInvoices;
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

public class ChargeInvoiceRowsInvoices   {
  
  @Schema(description = "Unique invoice ID.")
 /**
   * Unique invoice ID.  
  **/
  private BigDecimal invoicesId = null;
  
  @Schema(description = "Description of the invoice charge.")
 /**
   * Description of the invoice charge.  
  **/
  private String invoicesDescription = null;
  
  @Schema(description = "Invoice amount.")
 /**
   * Invoice amount.  
  **/
  private BigDecimal invoicesAmount = null;
  
  @Schema(description = "Invoice date.")
 /**
   * Invoice date.  
  **/
  private String invoicesDate = null;
  public enum InvoicesPaidEnum {
    NUMBER_0(new BigDecimal(0)),
    NUMBER_1(new BigDecimal(1));

    private BigDecimal value;

    InvoicesPaidEnum(BigDecimal value) {
      this.value = value;
    }
    @JsonValue
    public BigDecimal getValue() {
      return value;
    }

    @Override
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
  @Schema(description = "")
  private InvoicesPaidEnum invoicesPaid = null;
  
  @Schema(description = "")
  private String invoicesDueDate = null;
  
  @Schema(description = "")
  private String invoicesCurrency = null;
  
  @Schema(description = "")
  private String currencySymbol = null;
  
  @Schema(description = "")
  private String invoicesDateFormatted = null;
  
  @Schema(description = "This is optional when invoices_paid = 1 this array will show")
 /**
   * This is optional when invoices_paid = 1 this array will show  
  **/
  private Map<String, ChargeInvoiceRowsPaidInvoices> paidInvoices = null;
 /**
   * Unique invoice ID.
   * @return invoicesId
  **/
  @JsonProperty("invoices_id")
  public BigDecimal getInvoicesId() {
    return invoicesId;
  }

  public void setInvoicesId(BigDecimal invoicesId) {
    this.invoicesId = invoicesId;
  }

  public ChargeInvoiceRowsInvoices invoicesId(BigDecimal invoicesId) {
    this.invoicesId = invoicesId;
    return this;
  }

 /**
   * Description of the invoice charge.
   * @return invoicesDescription
  **/
  @JsonProperty("invoices_description")
  public String getInvoicesDescription() {
    return invoicesDescription;
  }

  public void setInvoicesDescription(String invoicesDescription) {
    this.invoicesDescription = invoicesDescription;
  }

  public ChargeInvoiceRowsInvoices invoicesDescription(String invoicesDescription) {
    this.invoicesDescription = invoicesDescription;
    return this;
  }

 /**
   * Invoice amount.
   * @return invoicesAmount
  **/
  @JsonProperty("invoices_amount")
  public BigDecimal getInvoicesAmount() {
    return invoicesAmount;
  }

  public void setInvoicesAmount(BigDecimal invoicesAmount) {
    this.invoicesAmount = invoicesAmount;
  }

  public ChargeInvoiceRowsInvoices invoicesAmount(BigDecimal invoicesAmount) {
    this.invoicesAmount = invoicesAmount;
    return this;
  }

 /**
   * Invoice date.
   * @return invoicesDate
  **/
  @JsonProperty("invoices_date")
  public String getInvoicesDate() {
    return invoicesDate;
  }

  public void setInvoicesDate(String invoicesDate) {
    this.invoicesDate = invoicesDate;
  }

  public ChargeInvoiceRowsInvoices invoicesDate(String invoicesDate) {
    this.invoicesDate = invoicesDate;
    return this;
  }

 /**
   * Get invoicesPaid
   * @return invoicesPaid
  **/
  @JsonProperty("invoices_paid")
  public BigDecimal getInvoicesPaid() {
    if (invoicesPaid == null) {
      return null;
    }
    return invoicesPaid.getValue();
  }

  public void setInvoicesPaid(InvoicesPaidEnum invoicesPaid) {
    this.invoicesPaid = invoicesPaid;
  }

  public ChargeInvoiceRowsInvoices invoicesPaid(InvoicesPaidEnum invoicesPaid) {
    this.invoicesPaid = invoicesPaid;
    return this;
  }

 /**
   * Get invoicesDueDate
   * @return invoicesDueDate
  **/
  @JsonProperty("invoices_due_date")
  public String getInvoicesDueDate() {
    return invoicesDueDate;
  }

  public void setInvoicesDueDate(String invoicesDueDate) {
    this.invoicesDueDate = invoicesDueDate;
  }

  public ChargeInvoiceRowsInvoices invoicesDueDate(String invoicesDueDate) {
    this.invoicesDueDate = invoicesDueDate;
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

  public ChargeInvoiceRowsInvoices invoicesCurrency(String invoicesCurrency) {
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

  public ChargeInvoiceRowsInvoices currencySymbol(String currencySymbol) {
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

  public ChargeInvoiceRowsInvoices invoicesDateFormatted(String invoicesDateFormatted) {
    this.invoicesDateFormatted = invoicesDateFormatted;
    return this;
  }

 /**
   * This is optional when invoices_paid &#x3D; 1 this array will show
   * @return paidInvoices
  **/
  @JsonProperty("paid_invoices")
  public Map<String, ChargeInvoiceRowsPaidInvoices> getPaidInvoices() {
    return paidInvoices;
  }

  public void setPaidInvoices(Map<String, ChargeInvoiceRowsPaidInvoices> paidInvoices) {
    this.paidInvoices = paidInvoices;
  }

  public ChargeInvoiceRowsInvoices paidInvoices(Map<String, ChargeInvoiceRowsPaidInvoices> paidInvoices) {
    this.paidInvoices = paidInvoices;
    return this;
  }

  public ChargeInvoiceRowsInvoices putPaidInvoicesItem(String key, ChargeInvoiceRowsPaidInvoices paidInvoicesItem) {
    this.paidInvoices.put(key, paidInvoicesItem);
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

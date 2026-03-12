package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.ChargeInvoiceRowsRefundInvoices;
import io.swagger.v3.oas.annotations.media.Schema;
import java.math.BigDecimal;
import java.util.HashMap;
import java.util.List;
import java.util.Map;





public class ChargeInvoiceRowsPaidInvoices   {
  @JsonProperty("invoices_id")
  private String invoicesId = null;
  @JsonProperty("invoices_description")
  private String invoicesDescription = null;
  @JsonProperty("invoices_amount")
  private BigDecimal invoicesAmount = null;
  @JsonProperty("invoices_date")
  private String invoicesDate = null;
  @JsonProperty("invoices_currency")
  private String invoicesCurrency = null;
  @JsonProperty("currency_symbol")
  private String currencySymbol = null;
  @JsonProperty("invoices_date_formatted")
  private String invoicesDateFormatted = null;
  @JsonProperty("payment_type")
  private String paymentType = null;
  @JsonProperty("refund_invoices")
  private Map<String, ChargeInvoiceRowsRefundInvoices> refundInvoices = null;
  /**
   **/
  public ChargeInvoiceRowsPaidInvoices invoicesId(String invoicesId) {
    this.invoicesId = invoicesId;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("invoices_id")
  public String getInvoicesId() {
    return invoicesId;
  }
  public void setInvoicesId(String invoicesId) {
    this.invoicesId = invoicesId;
  }

  /**
   **/
  public ChargeInvoiceRowsPaidInvoices invoicesDescription(String invoicesDescription) {
    this.invoicesDescription = invoicesDescription;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("invoices_description")
  public String getInvoicesDescription() {
    return invoicesDescription;
  }
  public void setInvoicesDescription(String invoicesDescription) {
    this.invoicesDescription = invoicesDescription;
  }

  /**
   **/
  public ChargeInvoiceRowsPaidInvoices invoicesAmount(BigDecimal invoicesAmount) {
    this.invoicesAmount = invoicesAmount;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("invoices_amount")
  public BigDecimal getInvoicesAmount() {
    return invoicesAmount;
  }
  public void setInvoicesAmount(BigDecimal invoicesAmount) {
    this.invoicesAmount = invoicesAmount;
  }

  /**
   **/
  public ChargeInvoiceRowsPaidInvoices invoicesDate(String invoicesDate) {
    this.invoicesDate = invoicesDate;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("invoices_date")
  public String getInvoicesDate() {
    return invoicesDate;
  }
  public void setInvoicesDate(String invoicesDate) {
    this.invoicesDate = invoicesDate;
  }

  /**
   **/
  public ChargeInvoiceRowsPaidInvoices invoicesCurrency(String invoicesCurrency) {
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
  public ChargeInvoiceRowsPaidInvoices currencySymbol(String currencySymbol) {
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
  public ChargeInvoiceRowsPaidInvoices invoicesDateFormatted(String invoicesDateFormatted) {
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
   **/
  public ChargeInvoiceRowsPaidInvoices paymentType(String paymentType) {
    this.paymentType = paymentType;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("payment_type")
  public String getPaymentType() {
    return paymentType;
  }
  public void setPaymentType(String paymentType) {
    this.paymentType = paymentType;
  }

  /**
   * This is optional when refund is present this will show
   **/
  public ChargeInvoiceRowsPaidInvoices refundInvoices(Map<String, ChargeInvoiceRowsRefundInvoices> refundInvoices) {
    this.refundInvoices = refundInvoices;
    return this;
  }

  
  @Schema(description = "This is optional when refund is present this will show")
  @JsonProperty("refund_invoices")
  public Map<String, ChargeInvoiceRowsRefundInvoices> getRefundInvoices() {
    return refundInvoices;
  }
  public void setRefundInvoices(Map<String, ChargeInvoiceRowsRefundInvoices> refundInvoices) {
    this.refundInvoices = refundInvoices;
  }


  @Override
  public boolean equals(java.lang.Object o) {
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

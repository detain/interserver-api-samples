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
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * ChargeInvoiceRowsPaidInvoices
 */
@Validated
@Introspected

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
  @Valid
  private Map<String, ChargeInvoiceRowsRefundInvoices> refundInvoices = null;

  public ChargeInvoiceRowsPaidInvoices invoicesId(String invoicesId) {
    this.invoicesId = invoicesId;
    return this;
  }

  /**
   * Get invoicesId
   * @return invoicesId
  **/
  @Schema(description = "")
  @NotNull

  public String getInvoicesId() {
    return invoicesId;
  }

  public void setInvoicesId(String invoicesId) {
    this.invoicesId = invoicesId;
  }

  public ChargeInvoiceRowsPaidInvoices invoicesDescription(String invoicesDescription) {
    this.invoicesDescription = invoicesDescription;
    return this;
  }

  /**
   * Get invoicesDescription
   * @return invoicesDescription
  **/
  @Schema(description = "")
  @NotNull

  public String getInvoicesDescription() {
    return invoicesDescription;
  }

  public void setInvoicesDescription(String invoicesDescription) {
    this.invoicesDescription = invoicesDescription;
  }

  public ChargeInvoiceRowsPaidInvoices invoicesAmount(BigDecimal invoicesAmount) {
    this.invoicesAmount = invoicesAmount;
    return this;
  }

  /**
   * Get invoicesAmount
   * @return invoicesAmount
  **/
  @Schema(description = "")
  @NotNull

  @Valid
  public BigDecimal getInvoicesAmount() {
    return invoicesAmount;
  }

  public void setInvoicesAmount(BigDecimal invoicesAmount) {
    this.invoicesAmount = invoicesAmount;
  }

  public ChargeInvoiceRowsPaidInvoices invoicesDate(String invoicesDate) {
    this.invoicesDate = invoicesDate;
    return this;
  }

  /**
   * Get invoicesDate
   * @return invoicesDate
  **/
  @Schema(description = "")
  @NotNull

  public String getInvoicesDate() {
    return invoicesDate;
  }

  public void setInvoicesDate(String invoicesDate) {
    this.invoicesDate = invoicesDate;
  }

  public ChargeInvoiceRowsPaidInvoices invoicesCurrency(String invoicesCurrency) {
    this.invoicesCurrency = invoicesCurrency;
    return this;
  }

  /**
   * Get invoicesCurrency
   * @return invoicesCurrency
  **/
  @Schema(description = "")
  @NotNull

  public String getInvoicesCurrency() {
    return invoicesCurrency;
  }

  public void setInvoicesCurrency(String invoicesCurrency) {
    this.invoicesCurrency = invoicesCurrency;
  }

  public ChargeInvoiceRowsPaidInvoices currencySymbol(String currencySymbol) {
    this.currencySymbol = currencySymbol;
    return this;
  }

  /**
   * Get currencySymbol
   * @return currencySymbol
  **/
  @Schema(description = "")
  @NotNull

  public String getCurrencySymbol() {
    return currencySymbol;
  }

  public void setCurrencySymbol(String currencySymbol) {
    this.currencySymbol = currencySymbol;
  }

  public ChargeInvoiceRowsPaidInvoices invoicesDateFormatted(String invoicesDateFormatted) {
    this.invoicesDateFormatted = invoicesDateFormatted;
    return this;
  }

  /**
   * Get invoicesDateFormatted
   * @return invoicesDateFormatted
  **/
  @Schema(description = "")
  @NotNull

  public String getInvoicesDateFormatted() {
    return invoicesDateFormatted;
  }

  public void setInvoicesDateFormatted(String invoicesDateFormatted) {
    this.invoicesDateFormatted = invoicesDateFormatted;
  }

  public ChargeInvoiceRowsPaidInvoices paymentType(String paymentType) {
    this.paymentType = paymentType;
    return this;
  }

  /**
   * Get paymentType
   * @return paymentType
  **/
  @Schema(description = "")
  @NotNull

  public String getPaymentType() {
    return paymentType;
  }

  public void setPaymentType(String paymentType) {
    this.paymentType = paymentType;
  }

  public ChargeInvoiceRowsPaidInvoices refundInvoices(Map<String, ChargeInvoiceRowsRefundInvoices> refundInvoices) {
    this.refundInvoices = refundInvoices;
    return this;
  }

  public ChargeInvoiceRowsPaidInvoices putRefundInvoicesItem(String key, ChargeInvoiceRowsRefundInvoices refundInvoicesItem) {
    if (this.refundInvoices == null) {
      this.refundInvoices = new HashMap<String, ChargeInvoiceRowsRefundInvoices>();
    }
    this.refundInvoices.put(key, refundInvoicesItem);
    return this;
  }

  /**
   * This is optional when refund is present this will show
   * @return refundInvoices
  **/
  @Schema(description = "This is optional when refund is present this will show")
  @NotNull
  @Valid
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
    return Objects.equals(this.invoicesId, chargeInvoiceRowsPaidInvoices.invoicesId) &&
        Objects.equals(this.invoicesDescription, chargeInvoiceRowsPaidInvoices.invoicesDescription) &&
        Objects.equals(this.invoicesAmount, chargeInvoiceRowsPaidInvoices.invoicesAmount) &&
        Objects.equals(this.invoicesDate, chargeInvoiceRowsPaidInvoices.invoicesDate) &&
        Objects.equals(this.invoicesCurrency, chargeInvoiceRowsPaidInvoices.invoicesCurrency) &&
        Objects.equals(this.currencySymbol, chargeInvoiceRowsPaidInvoices.currencySymbol) &&
        Objects.equals(this.invoicesDateFormatted, chargeInvoiceRowsPaidInvoices.invoicesDateFormatted) &&
        Objects.equals(this.paymentType, chargeInvoiceRowsPaidInvoices.paymentType) &&
        Objects.equals(this.refundInvoices, chargeInvoiceRowsPaidInvoices.refundInvoices);
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

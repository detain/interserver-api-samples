package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.math.BigDecimal;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * ChargeInvoiceRowsRefundInvoices
 */
@Validated
@Introspected

public class ChargeInvoiceRowsRefundInvoices   {
  @JsonProperty("invoices_id")
  private BigDecimal invoicesId = null;

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

  public ChargeInvoiceRowsRefundInvoices invoicesId(BigDecimal invoicesId) {
    this.invoicesId = invoicesId;
    return this;
  }

  /**
   * Get invoicesId
   * @return invoicesId
  **/
  @Schema(description = "")
  @NotNull

  @Valid
  public BigDecimal getInvoicesId() {
    return invoicesId;
  }

  public void setInvoicesId(BigDecimal invoicesId) {
    this.invoicesId = invoicesId;
  }

  public ChargeInvoiceRowsRefundInvoices invoicesDescription(String invoicesDescription) {
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

  public ChargeInvoiceRowsRefundInvoices invoicesAmount(BigDecimal invoicesAmount) {
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

  public ChargeInvoiceRowsRefundInvoices invoicesDate(String invoicesDate) {
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

  public ChargeInvoiceRowsRefundInvoices invoicesCurrency(String invoicesCurrency) {
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

  public ChargeInvoiceRowsRefundInvoices currencySymbol(String currencySymbol) {
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

  public ChargeInvoiceRowsRefundInvoices invoicesDateFormatted(String invoicesDateFormatted) {
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


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ChargeInvoiceRowsRefundInvoices chargeInvoiceRowsRefundInvoices = (ChargeInvoiceRowsRefundInvoices) o;
    return Objects.equals(this.invoicesId, chargeInvoiceRowsRefundInvoices.invoicesId) &&
        Objects.equals(this.invoicesDescription, chargeInvoiceRowsRefundInvoices.invoicesDescription) &&
        Objects.equals(this.invoicesAmount, chargeInvoiceRowsRefundInvoices.invoicesAmount) &&
        Objects.equals(this.invoicesDate, chargeInvoiceRowsRefundInvoices.invoicesDate) &&
        Objects.equals(this.invoicesCurrency, chargeInvoiceRowsRefundInvoices.invoicesCurrency) &&
        Objects.equals(this.currencySymbol, chargeInvoiceRowsRefundInvoices.currencySymbol) &&
        Objects.equals(this.invoicesDateFormatted, chargeInvoiceRowsRefundInvoices.invoicesDateFormatted);
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

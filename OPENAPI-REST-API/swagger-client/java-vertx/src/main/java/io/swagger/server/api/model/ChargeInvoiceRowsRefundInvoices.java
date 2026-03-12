package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import java.math.BigDecimal;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * ChargeInvoiceRowsRefundInvoices
 */




public class ChargeInvoiceRowsRefundInvoices   {
  private BigDecimal invoicesId = null;

  private String invoicesDescription = null;

  private BigDecimal invoicesAmount = null;

  private String invoicesDate = null;

  private String invoicesCurrency = null;

  private String currencySymbol = null;

  private String invoicesDateFormatted = null;

  public ChargeInvoiceRowsRefundInvoices invoicesId(BigDecimal invoicesId) {
    this.invoicesId = invoicesId;
    return this;
  }

  /**
   * Get invoicesId
   * @return invoicesId
   **/
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

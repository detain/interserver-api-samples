package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * Summary list of invoices for the account.
 */




public class BillingInvoiceList   {
  
  private List<Object> rows = null;

  private Object summary = null;

  public BillingInvoiceList rows(List<Object> rows) {
    this.rows = rows;
    return this;
  }

  public BillingInvoiceList addRowsItem(Object rowsItem) {
    if (this.rows == null) {
      this.rows = new ArrayList<Object>();
    }
    this.rows.add(rowsItem);
    return this;
  }

  /**
   * Invoice rows returned for the account.
   * @return rows
   **/
    public List<Object> getRows() {
    return rows;
  }

  public void setRows(List<Object> rows) {
    this.rows = rows;
  }

  public BillingInvoiceList summary(Object summary) {
    this.summary = summary;
    return this;
  }

  /**
   * Totals and summary data for the invoices list.
   * @return summary
   **/
    public Object getSummary() {
    return summary;
  }

  public void setSummary(Object summary) {
    this.summary = summary;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    BillingInvoiceList billingInvoiceList = (BillingInvoiceList) o;
    return Objects.equals(this.rows, billingInvoiceList.rows) &&
        Objects.equals(this.summary, billingInvoiceList.summary);
  }

  @Override
  public int hashCode() {
    return Objects.hash(rows, summary);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BillingInvoiceList {\n");
    
    sb.append("    rows: ").append(toIndentedString(rows)).append("\n");
    sb.append("    summary: ").append(toIndentedString(summary)).append("\n");
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

package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Summary list of invoices for the account.
 */
@ApiModel(description="Summary list of invoices for the account.")

public class BillingInvoiceList  {
  
 /**
  * Invoice rows returned for the account.
  */
  @ApiModelProperty(value = "Invoice rows returned for the account.")

  private List<Object> rows = new ArrayList<>();

 /**
  * Totals and summary data for the invoices list.
  */
  @ApiModelProperty(value = "Totals and summary data for the invoices list.")

  private Object summary;
 /**
   * Invoice rows returned for the account.
   * @return rows
  **/
  @JsonProperty("rows")
  public List<Object> getRows() {
    return rows;
  }

  public void setRows(List<Object> rows) {
    this.rows = rows;
  }

  public BillingInvoiceList rows(List<Object> rows) {
    this.rows = rows;
    return this;
  }

  public BillingInvoiceList addRowsItem(Object rowsItem) {
    this.rows.add(rowsItem);
    return this;
  }

 /**
   * Totals and summary data for the invoices list.
   * @return summary
  **/
  @JsonProperty("summary")
  public Object getSummary() {
    return summary;
  }

  public void setSummary(Object summary) {
    this.summary = summary;
  }

  public BillingInvoiceList summary(Object summary) {
    this.summary = summary;
    return this;
  }

  @Override
  public boolean equals(Object o) {
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}


package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Summary list of invoices for the account.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Summary list of invoices for the account.")

public class BillingInvoiceList   {

  private @Valid List<Object> rows = new ArrayList<Object>();

  private @Valid Object summary = null;

  /**
   * Invoice rows returned for the account.
   **/
  public BillingInvoiceList rows(List<Object> rows) {
    this.rows = rows;
    return this;
  }

  
  @ApiModelProperty(value = "Invoice rows returned for the account.")
  @JsonProperty("rows")
  @NotNull

  public List<Object> getRows() {
    return rows;
  }
  public void setRows(List<Object> rows) {
    this.rows = rows;
  }

  /**
   * Totals and summary data for the invoices list.
   **/
  public BillingInvoiceList summary(Object summary) {
    this.summary = summary;
    return this;
  }

  
  @ApiModelProperty(value = "Totals and summary data for the invoices list.")
  @JsonProperty("summary")
  @NotNull

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
    return Objects.equals(rows, billingInvoiceList.rows) &&
        Objects.equals(summary, billingInvoiceList.summary);
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

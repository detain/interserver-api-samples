package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.List;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Summary list of invoices for the account.")

public class BillingInvoiceList   {
  private List<Object> rows = new ArrayList<Object>();
  private Object summary = null;

  /**
   * Invoice rows returned for the account.
   **/
  
  @Schema(description = "Invoice rows returned for the account.")
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
  
  @Schema(description = "Totals and summary data for the invoices list.")
  @JsonProperty("summary")
  @NotNull
  public Object getSummary() {
    return summary;
  }
  public void setSummary(Object summary) {
    this.summary = summary;
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

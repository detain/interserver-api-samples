package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import javax.validation.constraints.*;

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

/**
  * Summary list of invoices for the account.
 **/
@Schema(description="Summary list of invoices for the account.")
public class BillingInvoiceList   {
  
  @Schema(description = "Invoice rows returned for the account.")
 /**
   * Invoice rows returned for the account.  
  **/
  private List<Object> rows = null;
  
  @Schema(description = "Totals and summary data for the invoices list.")
 /**
   * Totals and summary data for the invoices list.  
  **/
  private Object summary = null;
 /**
   * Invoice rows returned for the account.
   * @return rows
  **/
  @JsonProperty("rows")
  @NotNull
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
  @NotNull
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

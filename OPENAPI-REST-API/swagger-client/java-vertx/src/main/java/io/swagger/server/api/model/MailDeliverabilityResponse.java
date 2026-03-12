package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.math.BigDecimal;
import java.util.ArrayList;
import java.util.List;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * Deliverability statistics for a mail service.
 */




public class MailDeliverabilityResponse   {
  private Object stat = null;

  private BigDecimal percent = null;

  
  private List<List<String>> tableData = null;

  public MailDeliverabilityResponse stat(Object stat) {
    this.stat = stat;
    return this;
  }

  /**
   * Delivered and bounced counts.
   * @return stat
   **/
    public Object getStat() {
    return stat;
  }

  public void setStat(Object stat) {
    this.stat = stat;
  }

  public MailDeliverabilityResponse percent(BigDecimal percent) {
    this.percent = percent;
    return this;
  }

  /**
   * Bounce percentage.
   * @return percent
   **/
    public BigDecimal getPercent() {
    return percent;
  }

  public void setPercent(BigDecimal percent) {
    this.percent = percent;
  }

  public MailDeliverabilityResponse tableData(List<List<String>> tableData) {
    this.tableData = tableData;
    return this;
  }

  public MailDeliverabilityResponse addTableDataItem(List<String> tableDataItem) {
    if (this.tableData == null) {
      this.tableData = new ArrayList<List<String>>();
    }
    this.tableData.add(tableDataItem);
    return this;
  }

  /**
   * Detailed deliverability breakdown by sender or domain.
   * @return tableData
   **/
    public List<List<String>> getTableData() {
    return tableData;
  }

  public void setTableData(List<List<String>> tableData) {
    this.tableData = tableData;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    MailDeliverabilityResponse mailDeliverabilityResponse = (MailDeliverabilityResponse) o;
    return Objects.equals(this.stat, mailDeliverabilityResponse.stat) &&
        Objects.equals(this.percent, mailDeliverabilityResponse.percent) &&
        Objects.equals(this.tableData, mailDeliverabilityResponse.tableData);
  }

  @Override
  public int hashCode() {
    return Objects.hash(stat, percent, tableData);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MailDeliverabilityResponse {\n");
    
    sb.append("    stat: ").append(toIndentedString(stat)).append("\n");
    sb.append("    percent: ").append(toIndentedString(percent)).append("\n");
    sb.append("    tableData: ").append(toIndentedString(tableData)).append("\n");
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

package org.openapitools.model;

import java.math.BigDecimal;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Deliverability statistics for a mail service.
 */
@ApiModel(description="Deliverability statistics for a mail service.")

public class MailDeliverabilityResponse  {
  
 /**
  * Delivered and bounced counts.
  */
  @ApiModelProperty(value = "Delivered and bounced counts.")

  private Object stat;

 /**
  * Bounce percentage.
  */
  @ApiModelProperty(value = "Bounce percentage.")

  private BigDecimal percent;

 /**
  * Detailed deliverability breakdown by sender or domain.
  */
  @ApiModelProperty(value = "Detailed deliverability breakdown by sender or domain.")

  private List<List<String>> tableData = new ArrayList<>();
 /**
   * Delivered and bounced counts.
   * @return stat
  **/
  @JsonProperty("stat")
  public Object getStat() {
    return stat;
  }

  public void setStat(Object stat) {
    this.stat = stat;
  }

  public MailDeliverabilityResponse stat(Object stat) {
    this.stat = stat;
    return this;
  }

 /**
   * Bounce percentage.
   * @return percent
  **/
  @JsonProperty("percent")
  public BigDecimal getPercent() {
    return percent;
  }

  public void setPercent(BigDecimal percent) {
    this.percent = percent;
  }

  public MailDeliverabilityResponse percent(BigDecimal percent) {
    this.percent = percent;
    return this;
  }

 /**
   * Detailed deliverability breakdown by sender or domain.
   * @return tableData
  **/
  @JsonProperty("table_data")
  public List<List<String>> getTableData() {
    return tableData;
  }

  public void setTableData(List<List<String>> tableData) {
    this.tableData = tableData;
  }

  public MailDeliverabilityResponse tableData(List<List<String>> tableData) {
    this.tableData = tableData;
    return this;
  }

  public MailDeliverabilityResponse addTableDataItem(List<String> tableDataItem) {
    this.tableData.add(tableDataItem);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}


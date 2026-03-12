package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import java.math.BigDecimal;
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
  * Deliverability statistics for a mail service.
 **/
@Schema(description="Deliverability statistics for a mail service.")
public class MailDeliverabilityResponse   {
  
  @Schema(description = "Delivered and bounced counts.")
 /**
   * Delivered and bounced counts.  
  **/
  private Object stat = null;
  
  @Schema(description = "Bounce percentage.")
 /**
   * Bounce percentage.  
  **/
  private BigDecimal percent = null;
  
  @Schema(description = "Detailed deliverability breakdown by sender or domain.")
 /**
   * Detailed deliverability breakdown by sender or domain.  
  **/
  private List<List<String>> tableData = null;
 /**
   * Delivered and bounced counts.
   * @return stat
  **/
  @JsonProperty("stat")
  @NotNull
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
  @NotNull
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
  @NotNull
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

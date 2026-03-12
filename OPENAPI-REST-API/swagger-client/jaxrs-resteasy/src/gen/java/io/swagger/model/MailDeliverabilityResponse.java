package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.math.BigDecimal;
import java.util.List;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Deliverability statistics for a mail service.")

public class MailDeliverabilityResponse   {
  private Object stat = null;  private BigDecimal percent = null;  private List<List<String>> tableData = new ArrayList<List<String>>();

  /**
   * Delivered and bounced counts.
   **/
  
  @Schema(description = "Delivered and bounced counts.")
  @JsonProperty("stat")
  @NotNull
  public Object getStat() {
    return stat;
  }
  public void setStat(Object stat) {
    this.stat = stat;
  }

  /**
   * Bounce percentage.
   **/
  
  @Schema(description = "Bounce percentage.")
  @JsonProperty("percent")
  @NotNull
  public BigDecimal getPercent() {
    return percent;
  }
  public void setPercent(BigDecimal percent) {
    this.percent = percent;
  }

  /**
   * Detailed deliverability breakdown by sender or domain.
   **/
  
  @Schema(description = "Detailed deliverability breakdown by sender or domain.")
  @JsonProperty("table_data")
  @NotNull
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
    return Objects.equals(stat, mailDeliverabilityResponse.stat) &&
        Objects.equals(percent, mailDeliverabilityResponse.percent) &&
        Objects.equals(tableData, mailDeliverabilityResponse.tableData);
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

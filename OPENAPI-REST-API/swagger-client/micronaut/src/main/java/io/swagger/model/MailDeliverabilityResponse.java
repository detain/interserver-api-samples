package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.math.BigDecimal;
import java.util.ArrayList;
import java.util.List;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * Deliverability statistics for a mail service.
 */
@Schema(description = "Deliverability statistics for a mail service.")
@Validated
@Introspected

public class MailDeliverabilityResponse   {
  @JsonProperty("stat")
  private Object stat = null;

  @JsonProperty("percent")
  private BigDecimal percent = null;

  @JsonProperty("table_data")
  @Valid
  private List<List<String>> tableData = null;

  public MailDeliverabilityResponse stat(Object stat) {
    this.stat = stat;
    return this;
  }

  /**
   * Delivered and bounced counts.
   * @return stat
  **/
  @Schema(description = "Delivered and bounced counts.")
  @NotNull

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
  @Schema(description = "Bounce percentage.")
  @NotNull

  @Valid
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
  @Schema(description = "Detailed deliverability breakdown by sender or domain.")
  @NotNull
  @Valid
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

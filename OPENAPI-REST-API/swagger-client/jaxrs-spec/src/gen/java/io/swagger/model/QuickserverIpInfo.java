package io.swagger.model;

import io.swagger.model.QuickserverIpTableRow;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * IP address information table for a QuickServer service.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "IP address information table for a QuickServer service.")

public class QuickserverIpInfo   {

  private @Valid String title = null;

  private @Valid List<QuickserverIpTableRow> rows = new ArrayList<QuickserverIpTableRow>();

  /**
   * Table title
   **/
  public QuickserverIpInfo title(String title) {
    this.title = title;
    return this;
  }

  
  @ApiModelProperty(example = "IP Information", value = "Table title")
  @JsonProperty("title")
  @NotNull

  public String getTitle() {
    return title;
  }
  public void setTitle(String title) {
    this.title = title;
  }

  /**
   **/
  public QuickserverIpInfo rows(List<QuickserverIpTableRow> rows) {
    this.rows = rows;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("rows")
  @NotNull

  public List<QuickserverIpTableRow> getRows() {
    return rows;
  }
  public void setRows(List<QuickserverIpTableRow> rows) {
    this.rows = rows;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    QuickserverIpInfo quickserverIpInfo = (QuickserverIpInfo) o;
    return Objects.equals(title, quickserverIpInfo.title) &&
        Objects.equals(rows, quickserverIpInfo.rows);
  }

  @Override
  public int hashCode() {
    return Objects.hash(title, rows);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class QuickserverIpInfo {\n");
    
    sb.append("    title: ").append(toIndentedString(title)).append("\n");
    sb.append("    rows: ").append(toIndentedString(rows)).append("\n");
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

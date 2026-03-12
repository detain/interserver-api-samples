package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.VpsIPInfoRow;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * IP address information table for a VPS service.
 */
@Schema(description = "IP address information table for a VPS service.")
@Validated
@Introspected

public class VpsIPInfo   {
  @JsonProperty("title")
  private String title = null;

  @JsonProperty("rows")
  @Valid
  private List<VpsIPInfoRow> rows = null;

  public VpsIPInfo title(String title) {
    this.title = title;
    return this;
  }

  /**
   * Title of the table
   * @return title
  **/
  @Schema(example = "IP Information", description = "Title of the table")
  @NotNull

  public String getTitle() {
    return title;
  }

  public void setTitle(String title) {
    this.title = title;
  }

  public VpsIPInfo rows(List<VpsIPInfoRow> rows) {
    this.rows = rows;
    return this;
  }

  public VpsIPInfo addRowsItem(VpsIPInfoRow rowsItem) {
    if (this.rows == null) {
      this.rows = new ArrayList<VpsIPInfoRow>();
    }
    this.rows.add(rowsItem);
    return this;
  }

  /**
   * Get rows
   * @return rows
  **/
  @Schema(description = "")
  @NotNull
  @Valid
  public List<VpsIPInfoRow> getRows() {
    return rows;
  }

  public void setRows(List<VpsIPInfoRow> rows) {
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
    VpsIPInfo vpsIPInfo = (VpsIPInfo) o;
    return Objects.equals(this.title, vpsIPInfo.title) &&
        Objects.equals(this.rows, vpsIPInfo.rows);
  }

  @Override
  public int hashCode() {
    return Objects.hash(title, rows);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsIPInfo {\n");
    
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

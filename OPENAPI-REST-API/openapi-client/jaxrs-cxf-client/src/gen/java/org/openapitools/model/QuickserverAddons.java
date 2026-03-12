package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.QuickserverAddonsRow;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class QuickserverAddons  {
  
 /**
  * Table title
  */
  @ApiModelProperty(example = "Addons", value = "Table title")

  private String title;

  @ApiModelProperty(value = "")

  private List<QuickserverAddonsRow> rows = new ArrayList<>();
 /**
   * Table title
   * @return title
  **/
  @JsonProperty("title")
  public String getTitle() {
    return title;
  }

  public void setTitle(String title) {
    this.title = title;
  }

  public QuickserverAddons title(String title) {
    this.title = title;
    return this;
  }

 /**
   * Get rows
   * @return rows
  **/
  @JsonProperty("rows")
  public List<QuickserverAddonsRow> getRows() {
    return rows;
  }

  public void setRows(List<QuickserverAddonsRow> rows) {
    this.rows = rows;
  }

  public QuickserverAddons rows(List<QuickserverAddonsRow> rows) {
    this.rows = rows;
    return this;
  }

  public QuickserverAddons addRowsItem(QuickserverAddonsRow rowsItem) {
    this.rows.add(rowsItem);
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
    QuickserverAddons quickserverAddons = (QuickserverAddons) o;
    return Objects.equals(this.title, quickserverAddons.title) &&
        Objects.equals(this.rows, quickserverAddons.rows);
  }

  @Override
  public int hashCode() {
    return Objects.hash(title, rows);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class QuickserverAddons {\n");
    
    sb.append("    title: ").append(toIndentedString(title)).append("\n");
    sb.append("    rows: ").append(toIndentedString(rows)).append("\n");
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


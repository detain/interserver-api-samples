package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.WebsiteTableRow;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class WebsiteTable  {
  
 /**
  * Title of the table
  */
  @ApiModelProperty(value = "Title of the table")

  private String title;

  @ApiModelProperty(value = "")

  private List<WebsiteTableRow> rows = new ArrayList<>();
 /**
   * Title of the table
   * @return title
  **/
  @JsonProperty("title")
  public String getTitle() {
    return title;
  }

  public void setTitle(String title) {
    this.title = title;
  }

  public WebsiteTable title(String title) {
    this.title = title;
    return this;
  }

 /**
   * Get rows
   * @return rows
  **/
  @JsonProperty("rows")
  public List<WebsiteTableRow> getRows() {
    return rows;
  }

  public void setRows(List<WebsiteTableRow> rows) {
    this.rows = rows;
  }

  public WebsiteTable rows(List<WebsiteTableRow> rows) {
    this.rows = rows;
    return this;
  }

  public WebsiteTable addRowsItem(WebsiteTableRow rowsItem) {
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
    WebsiteTable websiteTable = (WebsiteTable) o;
    return Objects.equals(this.title, websiteTable.title) &&
        Objects.equals(this.rows, websiteTable.rows);
  }

  @Override
  public int hashCode() {
    return Objects.hash(title, rows);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class WebsiteTable {\n");
    
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


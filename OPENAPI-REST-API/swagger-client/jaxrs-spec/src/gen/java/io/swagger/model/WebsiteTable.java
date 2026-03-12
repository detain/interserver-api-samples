package io.swagger.model;

import io.swagger.model.WebsiteTableRow;
import java.util.ArrayList;
import java.util.List;
import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class WebsiteTable   {

  private @Valid String title = null;

  private @Valid List<WebsiteTableRow> rows = new ArrayList<WebsiteTableRow>();

  /**
   * Title of the table
   **/
  public WebsiteTable title(String title) {
    this.title = title;
    return this;
  }

  
  @ApiModelProperty(value = "Title of the table")
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
  public WebsiteTable rows(List<WebsiteTableRow> rows) {
    this.rows = rows;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("rows")
  @NotNull

  public List<WebsiteTableRow> getRows() {
    return rows;
  }
  public void setRows(List<WebsiteTableRow> rows) {
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
    WebsiteTable websiteTable = (WebsiteTable) o;
    return Objects.equals(title, websiteTable.title) &&
        Objects.equals(rows, websiteTable.rows);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class ServerAssets  {
  
 /**
  * The title of the assets.
  */
  @ApiModelProperty(example = "Assets", value = "The title of the assets.")

  private String title;

 /**
  * The size of the assets.
  */
  @ApiModelProperty(example = "2", value = "The size of the assets.")

  private Integer size;

 /**
  * The type of the assets.
  */
  @ApiModelProperty(example = "table", value = "The type of the assets.")

  private String type;

 /**
  * The header of the assets table.
  */
  @ApiModelProperty(value = "The header of the assets table.")

  private List<String> header = new ArrayList<>();

 /**
  * The rows of the assets table.
  */
  @ApiModelProperty(value = "The rows of the assets table.")

  private List<List<String>> rows = new ArrayList<>();
 /**
   * The title of the assets.
   * @return title
  **/
  @JsonProperty("title")
  public String getTitle() {
    return title;
  }

  public void setTitle(String title) {
    this.title = title;
  }

  public ServerAssets title(String title) {
    this.title = title;
    return this;
  }

 /**
   * The size of the assets.
   * @return size
  **/
  @JsonProperty("size")
  public Integer getSize() {
    return size;
  }

  public void setSize(Integer size) {
    this.size = size;
  }

  public ServerAssets size(Integer size) {
    this.size = size;
    return this;
  }

 /**
   * The type of the assets.
   * @return type
  **/
  @JsonProperty("type")
  public String getType() {
    return type;
  }

  public void setType(String type) {
    this.type = type;
  }

  public ServerAssets type(String type) {
    this.type = type;
    return this;
  }

 /**
   * The header of the assets table.
   * @return header
  **/
  @JsonProperty("header")
  public List<String> getHeader() {
    return header;
  }

  public void setHeader(List<String> header) {
    this.header = header;
  }

  public ServerAssets header(List<String> header) {
    this.header = header;
    return this;
  }

  public ServerAssets addHeaderItem(String headerItem) {
    this.header.add(headerItem);
    return this;
  }

 /**
   * The rows of the assets table.
   * @return rows
  **/
  @JsonProperty("rows")
  public List<List<String>> getRows() {
    return rows;
  }

  public void setRows(List<List<String>> rows) {
    this.rows = rows;
  }

  public ServerAssets rows(List<List<String>> rows) {
    this.rows = rows;
    return this;
  }

  public ServerAssets addRowsItem(List<String> rowsItem) {
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
    ServerAssets serverAssets = (ServerAssets) o;
    return Objects.equals(this.title, serverAssets.title) &&
        Objects.equals(this.size, serverAssets.size) &&
        Objects.equals(this.type, serverAssets.type) &&
        Objects.equals(this.header, serverAssets.header) &&
        Objects.equals(this.rows, serverAssets.rows);
  }

  @Override
  public int hashCode() {
    return Objects.hash(title, size, type, header, rows);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerAssets {\n");
    
    sb.append("    title: ").append(toIndentedString(title)).append("\n");
    sb.append("    size: ").append(toIndentedString(size)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    header: ").append(toIndentedString(header)).append("\n");
    sb.append("    rows: ").append(toIndentedString(rows)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}


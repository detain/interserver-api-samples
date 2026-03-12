package io.swagger.model;

import java.util.ArrayList;
import java.util.List;
import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class ServerAssets   {

  private @Valid String title = null;

  private @Valid Integer size = null;

  private @Valid String type = null;

  private @Valid List<String> header = new ArrayList<String>();

  private @Valid List<List<String>> rows = new ArrayList<List<String>>();

  /**
   * The title of the assets.
   **/
  public ServerAssets title(String title) {
    this.title = title;
    return this;
  }

  
  @ApiModelProperty(example = "Assets", value = "The title of the assets.")
  @JsonProperty("title")
  @NotNull

  public String getTitle() {
    return title;
  }
  public void setTitle(String title) {
    this.title = title;
  }

  /**
   * The size of the assets.
   **/
  public ServerAssets size(Integer size) {
    this.size = size;
    return this;
  }

  
  @ApiModelProperty(example = "2", value = "The size of the assets.")
  @JsonProperty("size")
  @NotNull

  public Integer getSize() {
    return size;
  }
  public void setSize(Integer size) {
    this.size = size;
  }

  /**
   * The type of the assets.
   **/
  public ServerAssets type(String type) {
    this.type = type;
    return this;
  }

  
  @ApiModelProperty(example = "table", value = "The type of the assets.")
  @JsonProperty("type")
  @NotNull

  public String getType() {
    return type;
  }
  public void setType(String type) {
    this.type = type;
  }

  /**
   * The header of the assets table.
   **/
  public ServerAssets header(List<String> header) {
    this.header = header;
    return this;
  }

  
  @ApiModelProperty(value = "The header of the assets table.")
  @JsonProperty("header")
  @NotNull

  public List<String> getHeader() {
    return header;
  }
  public void setHeader(List<String> header) {
    this.header = header;
  }

  /**
   * The rows of the assets table.
   **/
  public ServerAssets rows(List<List<String>> rows) {
    this.rows = rows;
    return this;
  }

  
  @ApiModelProperty(value = "The rows of the assets table.")
  @JsonProperty("rows")
  @NotNull

  public List<List<String>> getRows() {
    return rows;
  }
  public void setRows(List<List<String>> rows) {
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
    ServerAssets serverAssets = (ServerAssets) o;
    return Objects.equals(title, serverAssets.title) &&
        Objects.equals(size, serverAssets.size) &&
        Objects.equals(type, serverAssets.type) &&
        Objects.equals(header, serverAssets.header) &&
        Objects.equals(rows, serverAssets.rows);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

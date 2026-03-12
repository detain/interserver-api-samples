package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import java.util.List;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;



public class ServerAssets   {
  private String title = null;
  private Integer size = null;
  private String type = null;
  private List<String> header = new ArrayList<String>();
  private List<List<String>> rows = new ArrayList<List<String>>();

  /**
   * The title of the assets.
   **/
  
  @Schema(example = "Assets", description = "The title of the assets.")
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
  
  @Schema(example = "2", description = "The size of the assets.")
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
  
  @Schema(example = "table", description = "The type of the assets.")
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
  
  @Schema(description = "The header of the assets table.")
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
  
  @Schema(description = "The rows of the assets table.")
  @JsonProperty("rows")
  @NotNull
  public List<List<String>> getRows() {
    return rows;
  }
  public void setRows(List<List<String>> rows) {
    this.rows = rows;
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

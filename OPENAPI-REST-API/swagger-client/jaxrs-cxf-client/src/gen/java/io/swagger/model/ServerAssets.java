package io.swagger.model;

import java.util.ArrayList;
import java.util.List;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonCreator;

public class ServerAssets   {
  
  @Schema(example = "Assets", description = "The title of the assets.")
 /**
   * The title of the assets.  
  **/
  private String title = null;
  
  @Schema(example = "2", description = "The size of the assets.")
 /**
   * The size of the assets.  
  **/
  private Integer size = null;
  
  @Schema(example = "table", description = "The type of the assets.")
 /**
   * The type of the assets.  
  **/
  private String type = null;
  
  @Schema(description = "The header of the assets table.")
 /**
   * The header of the assets table.  
  **/
  private List<String> header = null;
  
  @Schema(description = "The rows of the assets table.")
 /**
   * The rows of the assets table.  
  **/
  private List<List<String>> rows = null;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

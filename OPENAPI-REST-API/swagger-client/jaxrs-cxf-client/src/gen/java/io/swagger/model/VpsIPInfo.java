package io.swagger.model;

import io.swagger.model.VpsIPInfoRow;
import io.swagger.v3.oas.annotations.media.Schema;
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

/**
  * IP address information table for a VPS service.
 **/
@Schema(description="IP address information table for a VPS service.")
public class VpsIPInfo   {
  
  @Schema(example = "IP Information", description = "Title of the table")
 /**
   * Title of the table  
  **/
  private String title = null;
  
  @Schema(description = "")
  private List<VpsIPInfoRow> rows = null;
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

  public VpsIPInfo title(String title) {
    this.title = title;
    return this;
  }

 /**
   * Get rows
   * @return rows
  **/
  @JsonProperty("rows")
  public List<VpsIPInfoRow> getRows() {
    return rows;
  }

  public void setRows(List<VpsIPInfoRow> rows) {
    this.rows = rows;
  }

  public VpsIPInfo rows(List<VpsIPInfoRow> rows) {
    this.rows = rows;
    return this;
  }

  public VpsIPInfo addRowsItem(VpsIPInfoRow rowsItem) {
    this.rows.add(rowsItem);
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

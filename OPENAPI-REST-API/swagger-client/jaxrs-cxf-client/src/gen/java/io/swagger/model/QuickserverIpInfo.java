package io.swagger.model;

import io.swagger.model.QuickserverIpTableRow;
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
  * IP address information table for a QuickServer service.
 **/
@Schema(description="IP address information table for a QuickServer service.")
public class QuickserverIpInfo   {
  
  @Schema(example = "IP Information", description = "Table title")
 /**
   * Table title  
  **/
  private String title = null;
  
  @Schema(description = "")
  private List<QuickserverIpTableRow> rows = null;
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

  public QuickserverIpInfo title(String title) {
    this.title = title;
    return this;
  }

 /**
   * Get rows
   * @return rows
  **/
  @JsonProperty("rows")
  public List<QuickserverIpTableRow> getRows() {
    return rows;
  }

  public void setRows(List<QuickserverIpTableRow> rows) {
    this.rows = rows;
  }

  public QuickserverIpInfo rows(List<QuickserverIpTableRow> rows) {
    this.rows = rows;
    return this;
  }

  public QuickserverIpInfo addRowsItem(QuickserverIpTableRow rowsItem) {
    this.rows.add(rowsItem);
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

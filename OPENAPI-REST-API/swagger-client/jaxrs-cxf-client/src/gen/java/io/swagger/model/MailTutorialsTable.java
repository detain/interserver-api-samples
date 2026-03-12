package io.swagger.model;

import io.swagger.model.MailTutorialsTableRow;
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
  * A table of tutorial links displayed for a mail service.
 **/
@Schema(description="A table of tutorial links displayed for a mail service.")
public class MailTutorialsTable   {
  
  @Schema(example = "Tutorials", description = "The title of the tutorials table.")
 /**
   * The title of the tutorials table.  
  **/
  private String title = null;
  
  @Schema(description = "The rows of the tutorials table.")
 /**
   * The rows of the tutorials table.  
  **/
  private List<MailTutorialsTableRow> rows = null;
 /**
   * The title of the tutorials table.
   * @return title
  **/
  @JsonProperty("title")
  public String getTitle() {
    return title;
  }

  public void setTitle(String title) {
    this.title = title;
  }

  public MailTutorialsTable title(String title) {
    this.title = title;
    return this;
  }

 /**
   * The rows of the tutorials table.
   * @return rows
  **/
  @JsonProperty("rows")
  public List<MailTutorialsTableRow> getRows() {
    return rows;
  }

  public void setRows(List<MailTutorialsTableRow> rows) {
    this.rows = rows;
  }

  public MailTutorialsTable rows(List<MailTutorialsTableRow> rows) {
    this.rows = rows;
    return this;
  }

  public MailTutorialsTable addRowsItem(MailTutorialsTableRow rowsItem) {
    this.rows.add(rowsItem);
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MailTutorialsTable {\n");
    
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

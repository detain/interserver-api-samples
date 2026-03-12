package io.swagger.model;

import io.swagger.model.MailExtraInfoTableRow;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import javax.validation.constraints.*;

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
  * A supplementary information table for a mail service (e.g., connection details).
 **/
@Schema(description="A supplementary information table for a mail service (e.g., connection details).")
public class MailExtraInfoTable   {
  
  @Schema(example = "Connection Information", description = "The title of the extra info table.")
 /**
   * The title of the extra info table.  
  **/
  private String title = null;
  
  @Schema(description = "The rows of the extra info table.")
 /**
   * The rows of the extra info table.  
  **/
  private List<MailExtraInfoTableRow> rows = null;
 /**
   * The title of the extra info table.
   * @return title
  **/
  @JsonProperty("title")
  @NotNull
  public String getTitle() {
    return title;
  }

  public void setTitle(String title) {
    this.title = title;
  }

  public MailExtraInfoTable title(String title) {
    this.title = title;
    return this;
  }

 /**
   * The rows of the extra info table.
   * @return rows
  **/
  @JsonProperty("rows")
  @NotNull
  public List<MailExtraInfoTableRow> getRows() {
    return rows;
  }

  public void setRows(List<MailExtraInfoTableRow> rows) {
    this.rows = rows;
  }

  public MailExtraInfoTable rows(List<MailExtraInfoTableRow> rows) {
    this.rows = rows;
    return this;
  }

  public MailExtraInfoTable addRowsItem(MailExtraInfoTableRow rowsItem) {
    this.rows.add(rowsItem);
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MailExtraInfoTable {\n");
    
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

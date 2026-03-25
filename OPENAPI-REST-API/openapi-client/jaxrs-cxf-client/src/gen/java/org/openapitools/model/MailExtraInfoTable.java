package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.MailExtraInfoTableRow;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A supplementary information table for a mail service (e.g., connection details).
 */
@ApiModel(description="A supplementary information table for a mail service (e.g., connection details).")

public class MailExtraInfoTable  {
  
 /**
  * The title of the extra info table.
  */
  @ApiModelProperty(example = "Connection Information", value = "The title of the extra info table.")

  private String title;

 /**
  * The rows of the extra info table.
  */
  @ApiModelProperty(value = "The rows of the extra info table.")

  private List<MailExtraInfoTableRow> rows = new ArrayList<>();
 /**
   * The title of the extra info table.
   * @return title
  **/
  @JsonProperty("title")
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    MailExtraInfoTable mailExtraInfoTable = (MailExtraInfoTable) o;
    return Objects.equals(this.title, mailExtraInfoTable.title) &&
        Objects.equals(this.rows, mailExtraInfoTable.rows);
  }

  @Override
  public int hashCode() {
    return Objects.hash(title, rows);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}


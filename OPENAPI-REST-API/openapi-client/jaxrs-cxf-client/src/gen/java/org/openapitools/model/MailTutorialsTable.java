package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.MailTutorialsTableRow;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A table of tutorial links displayed for a mail service.
 */
@ApiModel(description="A table of tutorial links displayed for a mail service.")

public class MailTutorialsTable  {
  
 /**
  * The title of the tutorials table.
  */
  @ApiModelProperty(example = "Tutorials", value = "The title of the tutorials table.")

  private String title;

 /**
  * The rows of the tutorials table.
  */
  @ApiModelProperty(value = "The rows of the tutorials table.")

  private List<MailTutorialsTableRow> rows = new ArrayList<>();
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    MailTutorialsTable mailTutorialsTable = (MailTutorialsTable) o;
    return Objects.equals(this.title, mailTutorialsTable.title) &&
        Objects.equals(this.rows, mailTutorialsTable.rows);
  }

  @Override
  public int hashCode() {
    return Objects.hash(title, rows);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}


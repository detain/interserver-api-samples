package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.MailTutorialsTableRow;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * A table of tutorial links displayed for a mail service.
 */
@Schema(description = "A table of tutorial links displayed for a mail service.")
@Validated
@Introspected

public class MailTutorialsTable   {
  @JsonProperty("title")
  private String title = null;

  @JsonProperty("rows")
  @Valid
  private List<MailTutorialsTableRow> rows = null;

  public MailTutorialsTable title(String title) {
    this.title = title;
    return this;
  }

  /**
   * The title of the tutorials table.
   * @return title
  **/
  @Schema(example = "Tutorials", description = "The title of the tutorials table.")
  @NotNull

  public String getTitle() {
    return title;
  }

  public void setTitle(String title) {
    this.title = title;
  }

  public MailTutorialsTable rows(List<MailTutorialsTableRow> rows) {
    this.rows = rows;
    return this;
  }

  public MailTutorialsTable addRowsItem(MailTutorialsTableRow rowsItem) {
    if (this.rows == null) {
      this.rows = new ArrayList<MailTutorialsTableRow>();
    }
    this.rows.add(rowsItem);
    return this;
  }

  /**
   * The rows of the tutorials table.
   * @return rows
  **/
  @Schema(description = "The rows of the tutorials table.")
  @NotNull
  @Valid
  public List<MailTutorialsTableRow> getRows() {
    return rows;
  }

  public void setRows(List<MailTutorialsTableRow> rows) {
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

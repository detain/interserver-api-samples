package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.MailExtraInfoTableRow;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * A supplementary information table for a mail service (e.g., connection details).
 */
@Schema(description = "A supplementary information table for a mail service (e.g., connection details).")
@Validated
@Introspected

public class MailExtraInfoTable   {
  @JsonProperty("title")
  private String title = null;

  @JsonProperty("rows")
  @Valid
  private List<MailExtraInfoTableRow> rows = null;

  public MailExtraInfoTable title(String title) {
    this.title = title;
    return this;
  }

  /**
   * The title of the extra info table.
   * @return title
  **/
  @Schema(example = "Connection Information", description = "The title of the extra info table.")
  @NotNull

  public String getTitle() {
    return title;
  }

  public void setTitle(String title) {
    this.title = title;
  }

  public MailExtraInfoTable rows(List<MailExtraInfoTableRow> rows) {
    this.rows = rows;
    return this;
  }

  public MailExtraInfoTable addRowsItem(MailExtraInfoTableRow rowsItem) {
    if (this.rows == null) {
      this.rows = new ArrayList<MailExtraInfoTableRow>();
    }
    this.rows.add(rowsItem);
    return this;
  }

  /**
   * The rows of the extra info table.
   * @return rows
  **/
  @Schema(description = "The rows of the extra info table.")
  @NotNull
  @Valid
  public List<MailExtraInfoTableRow> getRows() {
    return rows;
  }

  public void setRows(List<MailExtraInfoTableRow> rows) {
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

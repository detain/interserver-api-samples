package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.MailExtraInfoTableRow;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import javax.validation.Valid;
import javax.validation.constraints.*;
/**
 * A supplementary information table for a mail service (e.g., connection details).
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "A supplementary information table for a mail service (e.g., connection details).")

public class MailExtraInfoTable   {
  private String title = null;
  private List<MailExtraInfoTableRow> rows = new ArrayList<MailExtraInfoTableRow>();

  /**
   * The title of the extra info table.
   **/
  public MailExtraInfoTable title(String title) {
    this.title = title;
    return this;
  }

  
  
  @Schema(example = "Connection Information", description = "The title of the extra info table.")
  @JsonProperty("title")
  @NotNull
  public String getTitle() {
    return title;
  }
  public void setTitle(String title) {
    this.title = title;
  }

  /**
   * The rows of the extra info table.
   **/
  public MailExtraInfoTable rows(List<MailExtraInfoTableRow> rows) {
    this.rows = rows;
    return this;
  }

  
  
  @Schema(description = "The rows of the extra info table.")
  @JsonProperty("rows")
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
    return Objects.equals(title, mailExtraInfoTable.title) &&
        Objects.equals(rows, mailExtraInfoTable.rows);
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

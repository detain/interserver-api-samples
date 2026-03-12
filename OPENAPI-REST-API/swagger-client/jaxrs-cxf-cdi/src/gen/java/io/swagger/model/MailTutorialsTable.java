package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.MailTutorialsTableRow;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import javax.validation.Valid;
import javax.validation.constraints.*;
/**
 * A table of tutorial links displayed for a mail service.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "A table of tutorial links displayed for a mail service.")

public class MailTutorialsTable   {
  private String title = null;
  private List<MailTutorialsTableRow> rows = new ArrayList<MailTutorialsTableRow>();

  /**
   * The title of the tutorials table.
   **/
  public MailTutorialsTable title(String title) {
    this.title = title;
    return this;
  }

  
  
  @Schema(example = "Tutorials", description = "The title of the tutorials table.")
  @JsonProperty("title")
  @NotNull
  public String getTitle() {
    return title;
  }
  public void setTitle(String title) {
    this.title = title;
  }

  /**
   * The rows of the tutorials table.
   **/
  public MailTutorialsTable rows(List<MailTutorialsTableRow> rows) {
    this.rows = rows;
    return this;
  }

  
  
  @Schema(description = "The rows of the tutorials table.")
  @JsonProperty("rows")
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
    return Objects.equals(title, mailTutorialsTable.title) &&
        Objects.equals(rows, mailTutorialsTable.rows);
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

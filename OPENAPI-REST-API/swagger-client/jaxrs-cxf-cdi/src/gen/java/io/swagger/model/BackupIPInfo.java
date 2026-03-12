package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.BackupIPInfoRow;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import javax.validation.Valid;
import javax.validation.constraints.*;
/**
 * IP address information table for a backup service.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "IP address information table for a backup service.")

public class BackupIPInfo   {
  private String title = null;
  private List<BackupIPInfoRow> rows = new ArrayList<BackupIPInfoRow>();

  /**
   * Title of the IP information table.
   **/
  public BackupIPInfo title(String title) {
    this.title = title;
    return this;
  }

  
  
  @Schema(example = "IP Information", description = "Title of the IP information table.")
  @JsonProperty("title")
  @NotNull
  public String getTitle() {
    return title;
  }
  public void setTitle(String title) {
    this.title = title;
  }

  /**
   **/
  public BackupIPInfo rows(List<BackupIPInfoRow> rows) {
    this.rows = rows;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("rows")
  @NotNull
  @Valid
  public List<BackupIPInfoRow> getRows() {
    return rows;
  }
  public void setRows(List<BackupIPInfoRow> rows) {
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
    BackupIPInfo backupIPInfo = (BackupIPInfo) o;
    return Objects.equals(title, backupIPInfo.title) &&
        Objects.equals(rows, backupIPInfo.rows);
  }

  @Override
  public int hashCode() {
    return Objects.hash(title, rows);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BackupIPInfo {\n");
    
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

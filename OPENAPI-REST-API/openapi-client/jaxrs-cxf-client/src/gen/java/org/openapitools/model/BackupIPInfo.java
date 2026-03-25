package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.BackupIPInfoRow;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * IP address information table for a backup service.
 */
@ApiModel(description="IP address information table for a backup service.")

public class BackupIPInfo  {
  
 /**
  * Title of the IP information table.
  */
  @ApiModelProperty(example = "IP Information", value = "Title of the IP information table.")

  private String title;

  @ApiModelProperty(value = "")

  private List<BackupIPInfoRow> rows = new ArrayList<>();
 /**
   * Title of the IP information table.
   * @return title
  **/
  @JsonProperty("title")
  public String getTitle() {
    return title;
  }

  public void setTitle(String title) {
    this.title = title;
  }

  public BackupIPInfo title(String title) {
    this.title = title;
    return this;
  }

 /**
   * Get rows
   * @return rows
  **/
  @JsonProperty("rows")
  public List<BackupIPInfoRow> getRows() {
    return rows;
  }

  public void setRows(List<BackupIPInfoRow> rows) {
    this.rows = rows;
  }

  public BackupIPInfo rows(List<BackupIPInfoRow> rows) {
    this.rows = rows;
    return this;
  }

  public BackupIPInfo addRowsItem(BackupIPInfoRow rowsItem) {
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
    BackupIPInfo backupIPInfo = (BackupIPInfo) o;
    return Objects.equals(this.title, backupIPInfo.title) &&
        Objects.equals(this.rows, backupIPInfo.rows);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}


package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.QuickserverAddonsRow;
import java.util.ArrayList;
import java.util.List;
import javax.validation.Valid;
import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;



public class QuickserverAddons   {
  private String title = null;
  private List<QuickserverAddonsRow> rows = new ArrayList<QuickserverAddonsRow>();

  /**
   * Table title
   **/
  public QuickserverAddons title(String title) {
    this.title = title;
    return this;
  }

  
  
  @Schema(example = "Addons", description = "Table title")
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
  public QuickserverAddons rows(List<QuickserverAddonsRow> rows) {
    this.rows = rows;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("rows")
  @NotNull
  @Valid
  public List<QuickserverAddonsRow> getRows() {
    return rows;
  }
  public void setRows(List<QuickserverAddonsRow> rows) {
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
    QuickserverAddons quickserverAddons = (QuickserverAddons) o;
    return Objects.equals(title, quickserverAddons.title) &&
        Objects.equals(rows, quickserverAddons.rows);
  }

  @Override
  public int hashCode() {
    return Objects.hash(title, rows);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class QuickserverAddons {\n");
    
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

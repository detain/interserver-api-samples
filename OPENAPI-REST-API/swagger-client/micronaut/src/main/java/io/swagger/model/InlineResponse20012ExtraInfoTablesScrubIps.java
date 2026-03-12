package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.InlineResponse20012ExtraInfoTablesScrubIpsRows;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * InlineResponse20012ExtraInfoTablesScrubIps
 */
@Validated
@Introspected

public class InlineResponse20012ExtraInfoTablesScrubIps   {
  @JsonProperty("title")
  private String title = null;

  @JsonProperty("rows")
  @Valid
  private List<InlineResponse20012ExtraInfoTablesScrubIpsRows> rows = null;

  public InlineResponse20012ExtraInfoTablesScrubIps title(String title) {
    this.title = title;
    return this;
  }

  /**
   * Get title
   * @return title
  **/
  @Schema(description = "")
  @NotNull

  public String getTitle() {
    return title;
  }

  public void setTitle(String title) {
    this.title = title;
  }

  public InlineResponse20012ExtraInfoTablesScrubIps rows(List<InlineResponse20012ExtraInfoTablesScrubIpsRows> rows) {
    this.rows = rows;
    return this;
  }

  public InlineResponse20012ExtraInfoTablesScrubIps addRowsItem(InlineResponse20012ExtraInfoTablesScrubIpsRows rowsItem) {
    if (this.rows == null) {
      this.rows = new ArrayList<InlineResponse20012ExtraInfoTablesScrubIpsRows>();
    }
    this.rows.add(rowsItem);
    return this;
  }

  /**
   * Get rows
   * @return rows
  **/
  @Schema(description = "")
  @NotNull
  @Valid
  public List<InlineResponse20012ExtraInfoTablesScrubIpsRows> getRows() {
    return rows;
  }

  public void setRows(List<InlineResponse20012ExtraInfoTablesScrubIpsRows> rows) {
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
    InlineResponse20012ExtraInfoTablesScrubIps inlineResponse20012ExtraInfoTablesScrubIps = (InlineResponse20012ExtraInfoTablesScrubIps) o;
    return Objects.equals(this.title, inlineResponse20012ExtraInfoTablesScrubIps.title) &&
        Objects.equals(this.rows, inlineResponse20012ExtraInfoTablesScrubIps.rows);
  }

  @Override
  public int hashCode() {
    return Objects.hash(title, rows);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse20012ExtraInfoTablesScrubIps {\n");
    
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

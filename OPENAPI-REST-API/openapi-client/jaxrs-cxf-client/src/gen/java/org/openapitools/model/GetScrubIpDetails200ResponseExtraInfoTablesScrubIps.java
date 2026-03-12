package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class GetScrubIpDetails200ResponseExtraInfoTablesScrubIps  {
  
  @ApiModelProperty(value = "")

  private String title;

  @ApiModelProperty(value = "")

  private List<GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner> rows = new ArrayList<>();
 /**
   * Get title
   * @return title
  **/
  @JsonProperty("title")
  public String getTitle() {
    return title;
  }

  public void setTitle(String title) {
    this.title = title;
  }

  public GetScrubIpDetails200ResponseExtraInfoTablesScrubIps title(String title) {
    this.title = title;
    return this;
  }

 /**
   * Get rows
   * @return rows
  **/
  @JsonProperty("rows")
  public List<GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner> getRows() {
    return rows;
  }

  public void setRows(List<GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner> rows) {
    this.rows = rows;
  }

  public GetScrubIpDetails200ResponseExtraInfoTablesScrubIps rows(List<GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner> rows) {
    this.rows = rows;
    return this;
  }

  public GetScrubIpDetails200ResponseExtraInfoTablesScrubIps addRowsItem(GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner rowsItem) {
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
    GetScrubIpDetails200ResponseExtraInfoTablesScrubIps getScrubIpDetails200ResponseExtraInfoTablesScrubIps = (GetScrubIpDetails200ResponseExtraInfoTablesScrubIps) o;
    return Objects.equals(this.title, getScrubIpDetails200ResponseExtraInfoTablesScrubIps.title) &&
        Objects.equals(this.rows, getScrubIpDetails200ResponseExtraInfoTablesScrubIps.rows);
  }

  @Override
  public int hashCode() {
    return Objects.hash(title, rows);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class GetScrubIpDetails200ResponseExtraInfoTablesScrubIps {\n");
    
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


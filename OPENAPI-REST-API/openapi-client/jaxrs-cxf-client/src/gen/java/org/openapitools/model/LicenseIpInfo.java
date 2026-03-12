package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.LicenseIpInfoRow;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * IP address information table for a software license service.
 */
@ApiModel(description="IP address information table for a software license service.")

public class LicenseIpInfo  {
  
 /**
  * Table title
  */
  @ApiModelProperty(example = "IP Information", value = "Table title")

  private String title;

  @ApiModelProperty(value = "")

  private List<LicenseIpInfoRow> rows = new ArrayList<>();
 /**
   * Table title
   * @return title
  **/
  @JsonProperty("title")
  public String getTitle() {
    return title;
  }

  public void setTitle(String title) {
    this.title = title;
  }

  public LicenseIpInfo title(String title) {
    this.title = title;
    return this;
  }

 /**
   * Get rows
   * @return rows
  **/
  @JsonProperty("rows")
  public List<LicenseIpInfoRow> getRows() {
    return rows;
  }

  public void setRows(List<LicenseIpInfoRow> rows) {
    this.rows = rows;
  }

  public LicenseIpInfo rows(List<LicenseIpInfoRow> rows) {
    this.rows = rows;
    return this;
  }

  public LicenseIpInfo addRowsItem(LicenseIpInfoRow rowsItem) {
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
    LicenseIpInfo licenseIpInfo = (LicenseIpInfo) o;
    return Objects.equals(this.title, licenseIpInfo.title) &&
        Objects.equals(this.rows, licenseIpInfo.rows);
  }

  @Override
  public int hashCode() {
    return Objects.hash(title, rows);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class LicenseIpInfo {\n");
    
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


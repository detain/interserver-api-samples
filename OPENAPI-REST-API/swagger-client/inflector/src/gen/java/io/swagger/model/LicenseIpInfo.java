package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.LicenseIpInfoRow;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;


/**
 * IP address information table for a software license service.
 **/
@Schema(description = "IP address information table for a software license service.")


public class LicenseIpInfo   {
  @JsonProperty("title")
  private String title = null;
  @JsonProperty("rows")
  private List<LicenseIpInfoRow> rows = null;
  /**
   * Table title
   **/
  public LicenseIpInfo title(String title) {
    this.title = title;
    return this;
  }

  
  @Schema(example = "IP Information", description = "Table title")
  @JsonProperty("title")
  public String getTitle() {
    return title;
  }
  public void setTitle(String title) {
    this.title = title;
  }

  /**
   **/
  public LicenseIpInfo rows(List<LicenseIpInfoRow> rows) {
    this.rows = rows;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("rows")
  public List<LicenseIpInfoRow> getRows() {
    return rows;
  }
  public void setRows(List<LicenseIpInfoRow> rows) {
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
    LicenseIpInfo licenseIpInfo = (LicenseIpInfo) o;
    return Objects.equals(title, licenseIpInfo.title) &&
        Objects.equals(rows, licenseIpInfo.rows);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

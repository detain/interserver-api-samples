package org.openapitools.model;

import org.openapitools.model.LicenseIpInfo;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class LicenseExtraInfoTables  {
  
  @ApiModelProperty(value = "")

  private LicenseIpInfo ipInfo;
 /**
   * Get ipInfo
   * @return ipInfo
  **/
  @JsonProperty("ip_info")
  public LicenseIpInfo getIpInfo() {
    return ipInfo;
  }

  public void setIpInfo(LicenseIpInfo ipInfo) {
    this.ipInfo = ipInfo;
  }

  public LicenseExtraInfoTables ipInfo(LicenseIpInfo ipInfo) {
    this.ipInfo = ipInfo;
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
    LicenseExtraInfoTables licenseExtraInfoTables = (LicenseExtraInfoTables) o;
    return Objects.equals(this.ipInfo, licenseExtraInfoTables.ipInfo);
  }

  @Override
  public int hashCode() {
    return Objects.hash(ipInfo);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class LicenseExtraInfoTables {\n");
    
    sb.append("    ipInfo: ").append(toIndentedString(ipInfo)).append("\n");
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


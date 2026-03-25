package org.openapitools.model;

import org.openapitools.model.VpsIPInfo;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Additional informational tables displayed for a VPS service.
 */
@ApiModel(description="Additional informational tables displayed for a VPS service.")

public class VpsExtraInfoTables  {
  
  @ApiModelProperty(value = "")

  private VpsIPInfo ipInfo;
 /**
   * Get ipInfo
   * @return ipInfo
  **/
  @JsonProperty("ip_info")
  public VpsIPInfo getIpInfo() {
    return ipInfo;
  }

  public void setIpInfo(VpsIPInfo ipInfo) {
    this.ipInfo = ipInfo;
  }

  public VpsExtraInfoTables ipInfo(VpsIPInfo ipInfo) {
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
    VpsExtraInfoTables vpsExtraInfoTables = (VpsExtraInfoTables) o;
    return Objects.equals(this.ipInfo, vpsExtraInfoTables.ipInfo);
  }

  @Override
  public int hashCode() {
    return Objects.hash(ipInfo);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsExtraInfoTables {\n");
    
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


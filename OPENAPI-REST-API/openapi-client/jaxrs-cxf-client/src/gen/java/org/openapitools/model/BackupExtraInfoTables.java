package org.openapitools.model;

import org.openapitools.model.BackupIPInfo;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Supplementary information tables for a backup service (IP info, etc.).
 */
@ApiModel(description="Supplementary information tables for a backup service (IP info, etc.).")

public class BackupExtraInfoTables  {
  
  @ApiModelProperty(value = "")

  private BackupIPInfo ipInfo;
 /**
   * Get ipInfo
   * @return ipInfo
  **/
  @JsonProperty("ip_info")
  public BackupIPInfo getIpInfo() {
    return ipInfo;
  }

  public void setIpInfo(BackupIPInfo ipInfo) {
    this.ipInfo = ipInfo;
  }

  public BackupExtraInfoTables ipInfo(BackupIPInfo ipInfo) {
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
    BackupExtraInfoTables backupExtraInfoTables = (BackupExtraInfoTables) o;
    return Objects.equals(this.ipInfo, backupExtraInfoTables.ipInfo);
  }

  @Override
  public int hashCode() {
    return Objects.hash(ipInfo);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BackupExtraInfoTables {\n");
    
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


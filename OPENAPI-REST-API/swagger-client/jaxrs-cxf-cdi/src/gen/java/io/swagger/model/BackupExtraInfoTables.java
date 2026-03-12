package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.BackupIPInfo;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.Valid;
import javax.validation.constraints.*;
/**
 * Supplementary information tables for a backup service (IP info, etc.).
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "Supplementary information tables for a backup service (IP info, etc.).")

public class BackupExtraInfoTables   {
  private BackupIPInfo ipInfo = null;

  /**
   **/
  public BackupExtraInfoTables ipInfo(BackupIPInfo ipInfo) {
    this.ipInfo = ipInfo;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("ip_info")
  @NotNull
  @Valid
  public BackupIPInfo getIpInfo() {
    return ipInfo;
  }
  public void setIpInfo(BackupIPInfo ipInfo) {
    this.ipInfo = ipInfo;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    BackupExtraInfoTables backupExtraInfoTables = (BackupExtraInfoTables) o;
    return Objects.equals(ipInfo, backupExtraInfoTables.ipInfo);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

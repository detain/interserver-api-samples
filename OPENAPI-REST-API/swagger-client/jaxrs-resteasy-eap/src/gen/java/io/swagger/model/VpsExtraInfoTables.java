package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.VpsIPInfo;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Additional informational tables displayed for a VPS service.")

public class VpsExtraInfoTables   {
  private VpsIPInfo ipInfo = null;

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("ip_info")
  @NotNull
  public VpsIPInfo getIpInfo() {
    return ipInfo;
  }
  public void setIpInfo(VpsIPInfo ipInfo) {
    this.ipInfo = ipInfo;
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
    return Objects.equals(ipInfo, vpsExtraInfoTables.ipInfo);
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

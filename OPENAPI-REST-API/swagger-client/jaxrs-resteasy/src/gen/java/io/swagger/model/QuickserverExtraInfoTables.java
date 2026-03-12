package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.QuickserverAddons;
import io.swagger.model.QuickserverIpInfo;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;



public class QuickserverExtraInfoTables   {
  private QuickserverIpInfo ipInfo = null;  private QuickserverAddons addons = null;

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("ip_info")
  @NotNull
  public QuickserverIpInfo getIpInfo() {
    return ipInfo;
  }
  public void setIpInfo(QuickserverIpInfo ipInfo) {
    this.ipInfo = ipInfo;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("addons")
  @NotNull
  public QuickserverAddons getAddons() {
    return addons;
  }
  public void setAddons(QuickserverAddons addons) {
    this.addons = addons;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    QuickserverExtraInfoTables quickserverExtraInfoTables = (QuickserverExtraInfoTables) o;
    return Objects.equals(ipInfo, quickserverExtraInfoTables.ipInfo) &&
        Objects.equals(addons, quickserverExtraInfoTables.addons);
  }

  @Override
  public int hashCode() {
    return Objects.hash(ipInfo, addons);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class QuickserverExtraInfoTables {\n");
    
    sb.append("    ipInfo: ").append(toIndentedString(ipInfo)).append("\n");
    sb.append("    addons: ").append(toIndentedString(addons)).append("\n");
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

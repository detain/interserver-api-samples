package org.openapitools.model;

import org.openapitools.model.QuickserverAddons;
import org.openapitools.model.QuickserverIpInfo;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class QuickserverExtraInfoTables  {
  
  @ApiModelProperty(value = "")

  private QuickserverIpInfo ipInfo;

  @ApiModelProperty(value = "")

  private QuickserverAddons addons;
 /**
   * Get ipInfo
   * @return ipInfo
  **/
  @JsonProperty("ip_info")
  public QuickserverIpInfo getIpInfo() {
    return ipInfo;
  }

  public void setIpInfo(QuickserverIpInfo ipInfo) {
    this.ipInfo = ipInfo;
  }

  public QuickserverExtraInfoTables ipInfo(QuickserverIpInfo ipInfo) {
    this.ipInfo = ipInfo;
    return this;
  }

 /**
   * Get addons
   * @return addons
  **/
  @JsonProperty("addons")
  public QuickserverAddons getAddons() {
    return addons;
  }

  public void setAddons(QuickserverAddons addons) {
    this.addons = addons;
  }

  public QuickserverExtraInfoTables addons(QuickserverAddons addons) {
    this.addons = addons;
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
    QuickserverExtraInfoTables quickserverExtraInfoTables = (QuickserverExtraInfoTables) o;
    return Objects.equals(this.ipInfo, quickserverExtraInfoTables.ipInfo) &&
        Objects.equals(this.addons, quickserverExtraInfoTables.addons);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}


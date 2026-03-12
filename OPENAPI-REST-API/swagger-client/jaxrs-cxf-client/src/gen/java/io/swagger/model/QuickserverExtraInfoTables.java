package io.swagger.model;

import io.swagger.model.QuickserverAddons;
import io.swagger.model.QuickserverIpInfo;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonCreator;

public class QuickserverExtraInfoTables   {
  
  @Schema(description = "")
  private QuickserverIpInfo ipInfo = null;
  
  @Schema(description = "")
  private QuickserverAddons addons = null;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

package io.swagger.model;

import io.swagger.model.VpsIPInfo;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;

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

/**
  * Additional informational tables displayed for a VPS service.
 **/
@Schema(description="Additional informational tables displayed for a VPS service.")
public class VpsExtraInfoTables   {
  
  @Schema(description = "")
  private VpsIPInfo ipInfo = null;
 /**
   * Get ipInfo
   * @return ipInfo
  **/
  @JsonProperty("ip_info")
  @NotNull
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

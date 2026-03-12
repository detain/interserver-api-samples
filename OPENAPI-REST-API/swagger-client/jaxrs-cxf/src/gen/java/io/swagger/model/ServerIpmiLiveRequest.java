package io.swagger.model;

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
  * Request body to setup an IPMI Live connection.
 **/
@Schema(description="Request body to setup an IPMI Live connection.")
public class ServerIpmiLiveRequest   {
  
  @Schema(example = "5431", description = "Asset ID")
 /**
   * Asset ID  
  **/
  private Integer asset = null;
  
  @Schema(example = "1.2.3.4", required = true, description = "Your IP Address you wish to connect to the IPMI system from.")
 /**
   * Your IP Address you wish to connect to the IPMI system from.  
  **/
  private String ip = null;
 /**
   * Asset ID
   * @return asset
  **/
  @JsonProperty("asset")
  @NotNull
  public Integer getAsset() {
    return asset;
  }

  public void setAsset(Integer asset) {
    this.asset = asset;
  }

  public ServerIpmiLiveRequest asset(Integer asset) {
    this.asset = asset;
    return this;
  }

 /**
   * Your IP Address you wish to connect to the IPMI system from.
   * @return ip
  **/
  @JsonProperty("ip")
  @NotNull
  public String getIp() {
    return ip;
  }

  public void setIp(String ip) {
    this.ip = ip;
  }

  public ServerIpmiLiveRequest ip(String ip) {
    this.ip = ip;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerIpmiLiveRequest {\n");
    
    sb.append("    asset: ").append(toIndentedString(asset)).append("\n");
    sb.append("    ip: ").append(toIndentedString(ip)).append("\n");
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

package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Request body to setup an IPMI Live connection.
 */
@ApiModel(description="Request body to setup an IPMI Live connection.")

public class ServerIpmiLiveRequest  {
  
 /**
  * Your IP Address you wish to connect to the IPMI system from.
  */
  @ApiModelProperty(example = "1.2.3.4", required = true, value = "Your IP Address you wish to connect to the IPMI system from.")

  private String ip;

 /**
  * Asset ID
  */
  @ApiModelProperty(example = "5431", value = "Asset ID")

  private Integer asset;
 /**
   * Your IP Address you wish to connect to the IPMI system from.
   * @return ip
  **/
  @JsonProperty("ip")
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

 /**
   * Asset ID
   * @return asset
  **/
  @JsonProperty("asset")
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

  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServerIpmiLiveRequest serverIpmiLiveRequest = (ServerIpmiLiveRequest) o;
    return Objects.equals(this.ip, serverIpmiLiveRequest.ip) &&
        Objects.equals(this.asset, serverIpmiLiveRequest.asset);
  }

  @Override
  public int hashCode() {
    return Objects.hash(ip, asset);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerIpmiLiveRequest {\n");
    
    sb.append("    ip: ").append(toIndentedString(ip)).append("\n");
    sb.append("    asset: ").append(toIndentedString(asset)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}


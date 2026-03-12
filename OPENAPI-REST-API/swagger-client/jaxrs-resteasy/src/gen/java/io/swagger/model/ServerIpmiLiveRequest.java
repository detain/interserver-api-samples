package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Request body to setup an IPMI Live connection.")

public class ServerIpmiLiveRequest   {
  private Integer asset = null;  private String ip = null;

  /**
   * Asset ID
   **/
  
  @Schema(example = "5431", description = "Asset ID")
  @JsonProperty("asset")
  @NotNull
  public Integer getAsset() {
    return asset;
  }
  public void setAsset(Integer asset) {
    this.asset = asset;
  }

  /**
   * Your IP Address you wish to connect to the IPMI system from.
   **/
  
  @Schema(example = "1.2.3.4", required = true, description = "Your IP Address you wish to connect to the IPMI system from.")
  @JsonProperty("ip")
  @NotNull
  public String getIp() {
    return ip;
  }
  public void setIp(String ip) {
    this.ip = ip;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServerIpmiLiveRequest serverIpmiLiveRequest = (ServerIpmiLiveRequest) o;
    return Objects.equals(asset, serverIpmiLiveRequest.asset) &&
        Objects.equals(ip, serverIpmiLiveRequest.ip);
  }

  @Override
  public int hashCode() {
    return Objects.hash(asset, ip);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

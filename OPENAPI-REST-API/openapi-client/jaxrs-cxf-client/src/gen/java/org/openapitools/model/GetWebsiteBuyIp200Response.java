package org.openapitools.model;

import java.util.HashMap;
import java.util.Map;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class GetWebsiteBuyIp200Response  {
  
 /**
  * A map of IP addresses to their current reverse DNS hostnames.
  */
  @ApiModelProperty(value = "A map of IP addresses to their current reverse DNS hostnames.")

  private Map<String, String> ips = new HashMap<>();
 /**
   * A map of IP addresses to their current reverse DNS hostnames.
   * @return ips
  **/
  @JsonProperty("ips")
  public Map<String, String> getIps() {
    return ips;
  }

  public void setIps(Map<String, String> ips) {
    this.ips = ips;
  }

  public GetWebsiteBuyIp200Response ips(Map<String, String> ips) {
    this.ips = ips;
    return this;
  }

  public GetWebsiteBuyIp200Response putIpsItem(String key, String ipsItem) {
    this.ips.put(key, ipsItem);
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
    GetWebsiteBuyIp200Response getWebsiteBuyIp200Response = (GetWebsiteBuyIp200Response) o;
    return Objects.equals(this.ips, getWebsiteBuyIp200Response.ips);
  }

  @Override
  public int hashCode() {
    return Objects.hash(ips);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class GetWebsiteBuyIp200Response {\n");
    
    sb.append("    ips: ").append(toIndentedString(ips)).append("\n");
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


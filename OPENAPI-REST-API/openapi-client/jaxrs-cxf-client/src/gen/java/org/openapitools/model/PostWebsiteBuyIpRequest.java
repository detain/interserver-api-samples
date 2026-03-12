package org.openapitools.model;

import java.util.HashMap;
import java.util.Map;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class PostWebsiteBuyIpRequest  {
  
 /**
  * A map of IP addresses to their desired reverse DNS hostnames.
  */
  @ApiModelProperty(value = "A map of IP addresses to their desired reverse DNS hostnames.")

  private Map<String, String> ips = new HashMap<>();
 /**
   * A map of IP addresses to their desired reverse DNS hostnames.
   * @return ips
  **/
  @JsonProperty("ips")
  public Map<String, String> getIps() {
    return ips;
  }

  public void setIps(Map<String, String> ips) {
    this.ips = ips;
  }

  public PostWebsiteBuyIpRequest ips(Map<String, String> ips) {
    this.ips = ips;
    return this;
  }

  public PostWebsiteBuyIpRequest putIpsItem(String key, String ipsItem) {
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
    PostWebsiteBuyIpRequest postWebsiteBuyIpRequest = (PostWebsiteBuyIpRequest) o;
    return Objects.equals(this.ips, postWebsiteBuyIpRequest.ips);
  }

  @Override
  public int hashCode() {
    return Objects.hash(ips);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class PostWebsiteBuyIpRequest {\n");
    
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


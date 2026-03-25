package org.openapitools.model;

import java.util.HashMap;
import java.util.Map;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * The Reverse DNS entries.
 */
@ApiModel(description="The Reverse DNS entries.")

public class ReverseDnsEntries  {
  
 /**
  * The IPs you have access to and their current reverse dns mapping.
  */
  @ApiModelProperty(value = "The IPs you have access to and their current reverse dns mapping.")

  private Map<String, Object> ips = new HashMap<>();
 /**
   * The IPs you have access to and their current reverse dns mapping.
   * @return ips
  **/
  @JsonProperty("ips")
  public Map<String, Object> getIps() {
    return ips;
  }

  public void setIps(Map<String, Object> ips) {
    this.ips = ips;
  }

  public ReverseDnsEntries ips(Map<String, Object> ips) {
    this.ips = ips;
    return this;
  }

  public ReverseDnsEntries putIpsItem(String key, Object ipsItem) {
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
    ReverseDnsEntries reverseDnsEntries = (ReverseDnsEntries) o;
    return Objects.equals(this.ips, reverseDnsEntries.ips);
  }

  @Override
  public int hashCode() {
    return Objects.hash(ips);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ReverseDnsEntries {\n");
    
    sb.append("    ips: ").append(toIndentedString(ips)).append("\n");
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


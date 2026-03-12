package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Payload for adding a registered nameserver (glue record).
 */
@ApiModel(description="Payload for adding a registered nameserver (glue record).")

public class DomainNameserverPostRequest  {
  
  @ApiModelProperty(example = "ns1.host.com", required = true, value = "")

  private String name;

  @ApiModelProperty(example = "1.2.3.4Get", required = true, value = "")

  private String ipAddress;
 /**
   * Get name
   * @return name
  **/
  @JsonProperty("name")
  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public DomainNameserverPostRequest name(String name) {
    this.name = name;
    return this;
  }

 /**
   * Get ipAddress
   * @return ipAddress
  **/
  @JsonProperty("ipAddress")
  public String getIpAddress() {
    return ipAddress;
  }

  public void setIpAddress(String ipAddress) {
    this.ipAddress = ipAddress;
  }

  public DomainNameserverPostRequest ipAddress(String ipAddress) {
    this.ipAddress = ipAddress;
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
    DomainNameserverPostRequest domainNameserverPostRequest = (DomainNameserverPostRequest) o;
    return Objects.equals(this.name, domainNameserverPostRequest.name) &&
        Objects.equals(this.ipAddress, domainNameserverPostRequest.ipAddress);
  }

  @Override
  public int hashCode() {
    return Objects.hash(name, ipAddress);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DomainNameserverPostRequest {\n");
    
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    ipAddress: ").append(toIndentedString(ipAddress)).append("\n");
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


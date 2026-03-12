package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * The request for a new domain to be managed by the dns servers.
 */
@ApiModel(description="The request for a new domain to be managed by the dns servers.")

public class DnsNewDomain  {
  
 /**
  * The domain name.
  */
  @ApiModelProperty(example = "mydomain.com", required = true, value = "The domain name.")

  private String domain;

 /**
  * IP Address to point the domain to.
  */
  @ApiModelProperty(example = "1.2.3.4", required = true, value = "IP Address to point the domain to.")

  private String ip;
 /**
   * The domain name.
   * @return domain
  **/
  @JsonProperty("domain")
  public String getDomain() {
    return domain;
  }

  public void setDomain(String domain) {
    this.domain = domain;
  }

  public DnsNewDomain domain(String domain) {
    this.domain = domain;
    return this;
  }

 /**
   * IP Address to point the domain to.
   * @return ip
  **/
  @JsonProperty("ip")
  public String getIp() {
    return ip;
  }

  public void setIp(String ip) {
    this.ip = ip;
  }

  public DnsNewDomain ip(String ip) {
    this.ip = ip;
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
    DnsNewDomain dnsNewDomain = (DnsNewDomain) o;
    return Objects.equals(this.domain, dnsNewDomain.domain) &&
        Objects.equals(this.ip, dnsNewDomain.ip);
  }

  @Override
  public int hashCode() {
    return Objects.hash(domain, ip);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DnsNewDomain {\n");
    
    sb.append("    domain: ").append(toIndentedString(domain)).append("\n");
    sb.append("    ip: ").append(toIndentedString(ip)).append("\n");
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


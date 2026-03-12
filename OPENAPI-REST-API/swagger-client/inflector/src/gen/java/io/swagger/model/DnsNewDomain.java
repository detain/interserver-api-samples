package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * The request for a new domain to be managed by the dns servers.
 **/
@Schema(description = "The request for a new domain to be managed by the dns servers.")


public class DnsNewDomain   {
  @JsonProperty("domain")
  private String domain = null;
  @JsonProperty("ip")
  private String ip = null;
  /**
   * The domain name.
   **/
  public DnsNewDomain domain(String domain) {
    this.domain = domain;
    return this;
  }

  
  @Schema(example = "mydomain.com", required = true, description = "The domain name.")
  @JsonProperty("domain")
  public String getDomain() {
    return domain;
  }
  public void setDomain(String domain) {
    this.domain = domain;
  }

  /**
   * IP Address to point the domain to.
   **/
  public DnsNewDomain ip(String ip) {
    this.ip = ip;
    return this;
  }

  
  @Schema(example = "1.2.3.4", required = true, description = "IP Address to point the domain to.")
  @JsonProperty("ip")
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
    DnsNewDomain dnsNewDomain = (DnsNewDomain) o;
    return Objects.equals(domain, dnsNewDomain.domain) &&
        Objects.equals(ip, dnsNewDomain.ip);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

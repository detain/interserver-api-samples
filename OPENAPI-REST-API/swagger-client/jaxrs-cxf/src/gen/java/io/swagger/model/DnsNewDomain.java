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
  * The request for a new domain to be managed by the dns servers.
 **/
@Schema(description="The request for a new domain to be managed by the dns servers.")
public class DnsNewDomain   {
  
  @Schema(example = "mydomain.com", required = true, description = "The domain name.")
 /**
   * The domain name.  
  **/
  private String domain = null;
  
  @Schema(example = "1.2.3.4", required = true, description = "IP Address to point the domain to.")
 /**
   * IP Address to point the domain to.  
  **/
  private String ip = null;
 /**
   * The domain name.
   * @return domain
  **/
  @JsonProperty("domain")
  @NotNull
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
  @NotNull
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

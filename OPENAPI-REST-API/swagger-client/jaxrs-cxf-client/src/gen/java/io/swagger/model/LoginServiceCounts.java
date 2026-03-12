package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;

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
  * Order counts per module.
 **/
@Schema(description="Order counts per module.")
public class LoginServiceCounts   {
  
  @Schema(example = "205172", required = true, description = "The number of total VPS orders that have been placed in our billing system.")
 /**
   * The number of total VPS orders that have been placed in our billing system.  
  **/
  private Integer vps = null;
  
  @Schema(example = "205172", required = true, description = "The number of total website orders that have been placed in our billing system.")
 /**
   * The number of total website orders that have been placed in our billing system.  
  **/
  private Integer websites = null;
  
  @Schema(example = "205172", required = true, description = "The number of total server orders that have been placed in our billing system.")
 /**
   * The number of total server orders that have been placed in our billing system.  
  **/
  private Integer servers = null;
 /**
   * The number of total VPS orders that have been placed in our billing system.
   * @return vps
  **/
  @JsonProperty("vps")
  public Integer getVps() {
    return vps;
  }

  public void setVps(Integer vps) {
    this.vps = vps;
  }

  public LoginServiceCounts vps(Integer vps) {
    this.vps = vps;
    return this;
  }

 /**
   * The number of total website orders that have been placed in our billing system.
   * @return websites
  **/
  @JsonProperty("websites")
  public Integer getWebsites() {
    return websites;
  }

  public void setWebsites(Integer websites) {
    this.websites = websites;
  }

  public LoginServiceCounts websites(Integer websites) {
    this.websites = websites;
    return this;
  }

 /**
   * The number of total server orders that have been placed in our billing system.
   * @return servers
  **/
  @JsonProperty("servers")
  public Integer getServers() {
    return servers;
  }

  public void setServers(Integer servers) {
    this.servers = servers;
  }

  public LoginServiceCounts servers(Integer servers) {
    this.servers = servers;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class LoginServiceCounts {\n");
    
    sb.append("    vps: ").append(toIndentedString(vps)).append("\n");
    sb.append("    websites: ").append(toIndentedString(websites)).append("\n");
    sb.append("    servers: ").append(toIndentedString(servers)).append("\n");
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

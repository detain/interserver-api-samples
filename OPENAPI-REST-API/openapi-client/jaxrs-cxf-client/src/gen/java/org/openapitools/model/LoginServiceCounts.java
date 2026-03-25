package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Order counts per module.
 */
@ApiModel(description="Order counts per module.")

public class LoginServiceCounts  {
  
 /**
  * The number of total VPS orders that have been placed in our billing system.
  */
  @ApiModelProperty(example = "205172", required = true, value = "The number of total VPS orders that have been placed in our billing system.")

  private Integer vps;

 /**
  * The number of total website orders that have been placed in our billing system.
  */
  @ApiModelProperty(example = "205172", required = true, value = "The number of total website orders that have been placed in our billing system.")

  private Integer websites;

 /**
  * The number of total server orders that have been placed in our billing system.
  */
  @ApiModelProperty(example = "205172", required = true, value = "The number of total server orders that have been placed in our billing system.")

  private Integer servers;
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    LoginServiceCounts loginServiceCounts = (LoginServiceCounts) o;
    return Objects.equals(this.vps, loginServiceCounts.vps) &&
        Objects.equals(this.websites, loginServiceCounts.websites) &&
        Objects.equals(this.servers, loginServiceCounts.servers);
  }

  @Override
  public int hashCode() {
    return Objects.hash(vps, websites, servers);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}


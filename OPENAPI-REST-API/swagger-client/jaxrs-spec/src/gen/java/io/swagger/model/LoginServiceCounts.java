package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Order counts per module.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Order counts per module.")

public class LoginServiceCounts   {

  private @Valid Integer vps = null;

  private @Valid Integer websites = null;

  private @Valid Integer servers = null;

  /**
   * The number of total VPS orders that have been placed in our billing system.
   **/
  public LoginServiceCounts vps(Integer vps) {
    this.vps = vps;
    return this;
  }

  
  @ApiModelProperty(example = "205172", required = true, value = "The number of total VPS orders that have been placed in our billing system.")
  @JsonProperty("vps")
  @NotNull

  public Integer getVps() {
    return vps;
  }
  public void setVps(Integer vps) {
    this.vps = vps;
  }

  /**
   * The number of total website orders that have been placed in our billing system.
   **/
  public LoginServiceCounts websites(Integer websites) {
    this.websites = websites;
    return this;
  }

  
  @ApiModelProperty(example = "205172", required = true, value = "The number of total website orders that have been placed in our billing system.")
  @JsonProperty("websites")
  @NotNull

  public Integer getWebsites() {
    return websites;
  }
  public void setWebsites(Integer websites) {
    this.websites = websites;
  }

  /**
   * The number of total server orders that have been placed in our billing system.
   **/
  public LoginServiceCounts servers(Integer servers) {
    this.servers = servers;
    return this;
  }

  
  @ApiModelProperty(example = "205172", required = true, value = "The number of total server orders that have been placed in our billing system.")
  @JsonProperty("servers")
  @NotNull

  public Integer getServers() {
    return servers;
  }
  public void setServers(Integer servers) {
    this.servers = servers;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    LoginServiceCounts loginServiceCounts = (LoginServiceCounts) o;
    return Objects.equals(vps, loginServiceCounts.vps) &&
        Objects.equals(websites, loginServiceCounts.websites) &&
        Objects.equals(servers, loginServiceCounts.servers);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Order counts per module.")

public class LoginServiceCounts   {
  private Integer vps = null;
  private Integer websites = null;
  private Integer servers = null;

  /**
   * The number of total VPS orders that have been placed in our billing system.
   **/
  
  @Schema(example = "205172", required = true, description = "The number of total VPS orders that have been placed in our billing system.")
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
  
  @Schema(example = "205172", required = true, description = "The number of total website orders that have been placed in our billing system.")
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
  
  @Schema(example = "205172", required = true, description = "The number of total server orders that have been placed in our billing system.")
  @JsonProperty("servers")
  @NotNull
  public Integer getServers() {
    return servers;
  }
  public void setServers(Integer servers) {
    this.servers = servers;
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.HomeServicesBackups;
import io.swagger.model.HomeServicesDomains;
import io.swagger.model.HomeServicesLicenses;
import io.swagger.model.HomeServicesServers;
import io.swagger.model.HomeServicesVps;
import io.swagger.model.HomeServicesWebhosting;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Users services.")

public class HomeServices   {
  private HomeServicesDomains domains = null;  private HomeServicesWebhosting webhosting = null;  private HomeServicesVps vps = null;  private HomeServicesLicenses licenses = null;  private HomeServicesServers servers = null;  private HomeServicesBackups backups = null;

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("domains")
  @NotNull
  public HomeServicesDomains getDomains() {
    return domains;
  }
  public void setDomains(HomeServicesDomains domains) {
    this.domains = domains;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("webhosting")
  @NotNull
  public HomeServicesWebhosting getWebhosting() {
    return webhosting;
  }
  public void setWebhosting(HomeServicesWebhosting webhosting) {
    this.webhosting = webhosting;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("vps")
  @NotNull
  public HomeServicesVps getVps() {
    return vps;
  }
  public void setVps(HomeServicesVps vps) {
    this.vps = vps;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("licenses")
  @NotNull
  public HomeServicesLicenses getLicenses() {
    return licenses;
  }
  public void setLicenses(HomeServicesLicenses licenses) {
    this.licenses = licenses;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("servers")
  @NotNull
  public HomeServicesServers getServers() {
    return servers;
  }
  public void setServers(HomeServicesServers servers) {
    this.servers = servers;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("backups")
  @NotNull
  public HomeServicesBackups getBackups() {
    return backups;
  }
  public void setBackups(HomeServicesBackups backups) {
    this.backups = backups;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    HomeServices homeServices = (HomeServices) o;
    return Objects.equals(domains, homeServices.domains) &&
        Objects.equals(webhosting, homeServices.webhosting) &&
        Objects.equals(vps, homeServices.vps) &&
        Objects.equals(licenses, homeServices.licenses) &&
        Objects.equals(servers, homeServices.servers) &&
        Objects.equals(backups, homeServices.backups);
  }

  @Override
  public int hashCode() {
    return Objects.hash(domains, webhosting, vps, licenses, servers, backups);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HomeServices {\n");
    
    sb.append("    domains: ").append(toIndentedString(domains)).append("\n");
    sb.append("    webhosting: ").append(toIndentedString(webhosting)).append("\n");
    sb.append("    vps: ").append(toIndentedString(vps)).append("\n");
    sb.append("    licenses: ").append(toIndentedString(licenses)).append("\n");
    sb.append("    servers: ").append(toIndentedString(servers)).append("\n");
    sb.append("    backups: ").append(toIndentedString(backups)).append("\n");
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

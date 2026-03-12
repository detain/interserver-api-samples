package io.swagger.model;

import io.swagger.model.HomeServicesBackups;
import io.swagger.model.HomeServicesDomains;
import io.swagger.model.HomeServicesLicenses;
import io.swagger.model.HomeServicesServers;
import io.swagger.model.HomeServicesVps;
import io.swagger.model.HomeServicesWebhosting;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Users services.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Users services.")

public class HomeServices   {

  private @Valid HomeServicesDomains domains = null;

  private @Valid HomeServicesWebhosting webhosting = null;

  private @Valid HomeServicesVps vps = null;

  private @Valid HomeServicesLicenses licenses = null;

  private @Valid HomeServicesServers servers = null;

  private @Valid HomeServicesBackups backups = null;

  /**
   **/
  public HomeServices domains(HomeServicesDomains domains) {
    this.domains = domains;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public HomeServices webhosting(HomeServicesWebhosting webhosting) {
    this.webhosting = webhosting;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public HomeServices vps(HomeServicesVps vps) {
    this.vps = vps;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public HomeServices licenses(HomeServicesLicenses licenses) {
    this.licenses = licenses;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public HomeServices servers(HomeServicesServers servers) {
    this.servers = servers;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public HomeServices backups(HomeServicesBackups backups) {
    this.backups = backups;
    return this;
  }

  
  @ApiModelProperty(value = "")
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

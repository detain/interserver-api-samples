package org.openapitools.model;

import org.openapitools.model.HomeServicesBackups;
import org.openapitools.model.HomeServicesDomains;
import org.openapitools.model.HomeServicesLicenses;
import org.openapitools.model.HomeServicesServers;
import org.openapitools.model.HomeServicesVps;
import org.openapitools.model.HomeServicesWebhosting;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Users services.
 */
@ApiModel(description="Users services.")

public class HomeServices  {
  
  @ApiModelProperty(value = "")

  private HomeServicesDomains domains;

  @ApiModelProperty(value = "")

  private HomeServicesWebhosting webhosting;

  @ApiModelProperty(value = "")

  private HomeServicesVps vps;

  @ApiModelProperty(value = "")

  private HomeServicesLicenses licenses;

  @ApiModelProperty(value = "")

  private HomeServicesServers servers;

  @ApiModelProperty(value = "")

  private HomeServicesBackups backups;
 /**
   * Get domains
   * @return domains
  **/
  @JsonProperty("domains")
  public HomeServicesDomains getDomains() {
    return domains;
  }

  public void setDomains(HomeServicesDomains domains) {
    this.domains = domains;
  }

  public HomeServices domains(HomeServicesDomains domains) {
    this.domains = domains;
    return this;
  }

 /**
   * Get webhosting
   * @return webhosting
  **/
  @JsonProperty("webhosting")
  public HomeServicesWebhosting getWebhosting() {
    return webhosting;
  }

  public void setWebhosting(HomeServicesWebhosting webhosting) {
    this.webhosting = webhosting;
  }

  public HomeServices webhosting(HomeServicesWebhosting webhosting) {
    this.webhosting = webhosting;
    return this;
  }

 /**
   * Get vps
   * @return vps
  **/
  @JsonProperty("vps")
  public HomeServicesVps getVps() {
    return vps;
  }

  public void setVps(HomeServicesVps vps) {
    this.vps = vps;
  }

  public HomeServices vps(HomeServicesVps vps) {
    this.vps = vps;
    return this;
  }

 /**
   * Get licenses
   * @return licenses
  **/
  @JsonProperty("licenses")
  public HomeServicesLicenses getLicenses() {
    return licenses;
  }

  public void setLicenses(HomeServicesLicenses licenses) {
    this.licenses = licenses;
  }

  public HomeServices licenses(HomeServicesLicenses licenses) {
    this.licenses = licenses;
    return this;
  }

 /**
   * Get servers
   * @return servers
  **/
  @JsonProperty("servers")
  public HomeServicesServers getServers() {
    return servers;
  }

  public void setServers(HomeServicesServers servers) {
    this.servers = servers;
  }

  public HomeServices servers(HomeServicesServers servers) {
    this.servers = servers;
    return this;
  }

 /**
   * Get backups
   * @return backups
  **/
  @JsonProperty("backups")
  public HomeServicesBackups getBackups() {
    return backups;
  }

  public void setBackups(HomeServicesBackups backups) {
    this.backups = backups;
  }

  public HomeServices backups(HomeServicesBackups backups) {
    this.backups = backups;
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
    HomeServices homeServices = (HomeServices) o;
    return Objects.equals(this.domains, homeServices.domains) &&
        Objects.equals(this.webhosting, homeServices.webhosting) &&
        Objects.equals(this.vps, homeServices.vps) &&
        Objects.equals(this.licenses, homeServices.licenses) &&
        Objects.equals(this.servers, homeServices.servers) &&
        Objects.equals(this.backups, homeServices.backups);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}


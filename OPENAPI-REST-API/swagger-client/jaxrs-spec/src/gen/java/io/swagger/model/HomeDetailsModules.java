package io.swagger.model;

import io.swagger.model.HomeDetailsModulesBackups;
import io.swagger.model.HomeDetailsModulesDomains;
import io.swagger.model.HomeDetailsModulesLicenses;
import io.swagger.model.HomeDetailsModulesQuickservers;
import io.swagger.model.HomeDetailsModulesServers;
import io.swagger.model.HomeDetailsModulesVps;
import io.swagger.model.HomeDetailsModulesWebhosting;
import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class HomeDetailsModules   {

  private @Valid HomeDetailsModulesDomains domains = null;

  private @Valid HomeDetailsModulesWebhosting webhosting = null;

  private @Valid HomeDetailsModulesVps vps = null;

  private @Valid HomeDetailsModulesLicenses licenses = null;

  private @Valid HomeDetailsModulesBackups backups = null;

  private @Valid HomeDetailsModulesServers servers = null;

  private @Valid HomeDetailsModulesQuickservers quickservers = null;

  /**
   **/
  public HomeDetailsModules domains(HomeDetailsModulesDomains domains) {
    this.domains = domains;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("domains")
  @NotNull

  public HomeDetailsModulesDomains getDomains() {
    return domains;
  }
  public void setDomains(HomeDetailsModulesDomains domains) {
    this.domains = domains;
  }

  /**
   **/
  public HomeDetailsModules webhosting(HomeDetailsModulesWebhosting webhosting) {
    this.webhosting = webhosting;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("webhosting")
  @NotNull

  public HomeDetailsModulesWebhosting getWebhosting() {
    return webhosting;
  }
  public void setWebhosting(HomeDetailsModulesWebhosting webhosting) {
    this.webhosting = webhosting;
  }

  /**
   **/
  public HomeDetailsModules vps(HomeDetailsModulesVps vps) {
    this.vps = vps;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("vps")
  @NotNull

  public HomeDetailsModulesVps getVps() {
    return vps;
  }
  public void setVps(HomeDetailsModulesVps vps) {
    this.vps = vps;
  }

  /**
   **/
  public HomeDetailsModules licenses(HomeDetailsModulesLicenses licenses) {
    this.licenses = licenses;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("licenses")
  @NotNull

  public HomeDetailsModulesLicenses getLicenses() {
    return licenses;
  }
  public void setLicenses(HomeDetailsModulesLicenses licenses) {
    this.licenses = licenses;
  }

  /**
   **/
  public HomeDetailsModules backups(HomeDetailsModulesBackups backups) {
    this.backups = backups;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("backups")
  @NotNull

  public HomeDetailsModulesBackups getBackups() {
    return backups;
  }
  public void setBackups(HomeDetailsModulesBackups backups) {
    this.backups = backups;
  }

  /**
   **/
  public HomeDetailsModules servers(HomeDetailsModulesServers servers) {
    this.servers = servers;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("servers")
  @NotNull

  public HomeDetailsModulesServers getServers() {
    return servers;
  }
  public void setServers(HomeDetailsModulesServers servers) {
    this.servers = servers;
  }

  /**
   **/
  public HomeDetailsModules quickservers(HomeDetailsModulesQuickservers quickservers) {
    this.quickservers = quickservers;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("quickservers")
  @NotNull

  public HomeDetailsModulesQuickservers getQuickservers() {
    return quickservers;
  }
  public void setQuickservers(HomeDetailsModulesQuickservers quickservers) {
    this.quickservers = quickservers;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    HomeDetailsModules homeDetailsModules = (HomeDetailsModules) o;
    return Objects.equals(domains, homeDetailsModules.domains) &&
        Objects.equals(webhosting, homeDetailsModules.webhosting) &&
        Objects.equals(vps, homeDetailsModules.vps) &&
        Objects.equals(licenses, homeDetailsModules.licenses) &&
        Objects.equals(backups, homeDetailsModules.backups) &&
        Objects.equals(servers, homeDetailsModules.servers) &&
        Objects.equals(quickservers, homeDetailsModules.quickservers);
  }

  @Override
  public int hashCode() {
    return Objects.hash(domains, webhosting, vps, licenses, backups, servers, quickservers);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HomeDetailsModules {\n");
    
    sb.append("    domains: ").append(toIndentedString(domains)).append("\n");
    sb.append("    webhosting: ").append(toIndentedString(webhosting)).append("\n");
    sb.append("    vps: ").append(toIndentedString(vps)).append("\n");
    sb.append("    licenses: ").append(toIndentedString(licenses)).append("\n");
    sb.append("    backups: ").append(toIndentedString(backups)).append("\n");
    sb.append("    servers: ").append(toIndentedString(servers)).append("\n");
    sb.append("    quickservers: ").append(toIndentedString(quickservers)).append("\n");
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

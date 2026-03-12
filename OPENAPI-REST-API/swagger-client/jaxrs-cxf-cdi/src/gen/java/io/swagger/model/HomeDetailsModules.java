package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.HomeDetailsModulesBackups;
import io.swagger.model.HomeDetailsModulesDomains;
import io.swagger.model.HomeDetailsModulesLicenses;
import io.swagger.model.HomeDetailsModulesQuickservers;
import io.swagger.model.HomeDetailsModulesServers;
import io.swagger.model.HomeDetailsModulesVps;
import io.swagger.model.HomeDetailsModulesWebhosting;
import javax.validation.Valid;
import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;



public class HomeDetailsModules   {
  private HomeDetailsModulesDomains domains = null;
  private HomeDetailsModulesWebhosting webhosting = null;
  private HomeDetailsModulesVps vps = null;
  private HomeDetailsModulesLicenses licenses = null;
  private HomeDetailsModulesBackups backups = null;
  private HomeDetailsModulesServers servers = null;
  private HomeDetailsModulesQuickservers quickservers = null;

  /**
   **/
  public HomeDetailsModules domains(HomeDetailsModulesDomains domains) {
    this.domains = domains;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("domains")
  @NotNull
  @Valid
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

  
  
  @Schema(description = "")
  @JsonProperty("webhosting")
  @NotNull
  @Valid
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

  
  
  @Schema(description = "")
  @JsonProperty("vps")
  @NotNull
  @Valid
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

  
  
  @Schema(description = "")
  @JsonProperty("licenses")
  @NotNull
  @Valid
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

  
  
  @Schema(description = "")
  @JsonProperty("backups")
  @NotNull
  @Valid
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

  
  
  @Schema(description = "")
  @JsonProperty("servers")
  @NotNull
  @Valid
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

  
  
  @Schema(description = "")
  @JsonProperty("quickservers")
  @NotNull
  @Valid
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

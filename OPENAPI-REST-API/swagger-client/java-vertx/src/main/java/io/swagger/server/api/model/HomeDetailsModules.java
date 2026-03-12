package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.server.api.model.HomeDetailsModulesBackups;
import io.swagger.server.api.model.HomeDetailsModulesDomains;
import io.swagger.server.api.model.HomeDetailsModulesLicenses;
import io.swagger.server.api.model.HomeDetailsModulesQuickservers;
import io.swagger.server.api.model.HomeDetailsModulesServers;
import io.swagger.server.api.model.HomeDetailsModulesVps;
import io.swagger.server.api.model.HomeDetailsModulesWebhosting;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * HomeDetailsModules
 */




public class HomeDetailsModules   {
  private HomeDetailsModulesDomains domains = null;

  private HomeDetailsModulesWebhosting webhosting = null;

  private HomeDetailsModulesVps vps = null;

  private HomeDetailsModulesLicenses licenses = null;

  private HomeDetailsModulesBackups backups = null;

  private HomeDetailsModulesServers servers = null;

  private HomeDetailsModulesQuickservers quickservers = null;

  public HomeDetailsModules domains(HomeDetailsModulesDomains domains) {
    this.domains = domains;
    return this;
  }

  /**
   * Get domains
   * @return domains
   **/
    public HomeDetailsModulesDomains getDomains() {
    return domains;
  }

  public void setDomains(HomeDetailsModulesDomains domains) {
    this.domains = domains;
  }

  public HomeDetailsModules webhosting(HomeDetailsModulesWebhosting webhosting) {
    this.webhosting = webhosting;
    return this;
  }

  /**
   * Get webhosting
   * @return webhosting
   **/
    public HomeDetailsModulesWebhosting getWebhosting() {
    return webhosting;
  }

  public void setWebhosting(HomeDetailsModulesWebhosting webhosting) {
    this.webhosting = webhosting;
  }

  public HomeDetailsModules vps(HomeDetailsModulesVps vps) {
    this.vps = vps;
    return this;
  }

  /**
   * Get vps
   * @return vps
   **/
    public HomeDetailsModulesVps getVps() {
    return vps;
  }

  public void setVps(HomeDetailsModulesVps vps) {
    this.vps = vps;
  }

  public HomeDetailsModules licenses(HomeDetailsModulesLicenses licenses) {
    this.licenses = licenses;
    return this;
  }

  /**
   * Get licenses
   * @return licenses
   **/
    public HomeDetailsModulesLicenses getLicenses() {
    return licenses;
  }

  public void setLicenses(HomeDetailsModulesLicenses licenses) {
    this.licenses = licenses;
  }

  public HomeDetailsModules backups(HomeDetailsModulesBackups backups) {
    this.backups = backups;
    return this;
  }

  /**
   * Get backups
   * @return backups
   **/
    public HomeDetailsModulesBackups getBackups() {
    return backups;
  }

  public void setBackups(HomeDetailsModulesBackups backups) {
    this.backups = backups;
  }

  public HomeDetailsModules servers(HomeDetailsModulesServers servers) {
    this.servers = servers;
    return this;
  }

  /**
   * Get servers
   * @return servers
   **/
    public HomeDetailsModulesServers getServers() {
    return servers;
  }

  public void setServers(HomeDetailsModulesServers servers) {
    this.servers = servers;
  }

  public HomeDetailsModules quickservers(HomeDetailsModulesQuickservers quickservers) {
    this.quickservers = quickservers;
    return this;
  }

  /**
   * Get quickservers
   * @return quickservers
   **/
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
    return Objects.equals(this.domains, homeDetailsModules.domains) &&
        Objects.equals(this.webhosting, homeDetailsModules.webhosting) &&
        Objects.equals(this.vps, homeDetailsModules.vps) &&
        Objects.equals(this.licenses, homeDetailsModules.licenses) &&
        Objects.equals(this.backups, homeDetailsModules.backups) &&
        Objects.equals(this.servers, homeDetailsModules.servers) &&
        Objects.equals(this.quickservers, homeDetailsModules.quickservers);
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

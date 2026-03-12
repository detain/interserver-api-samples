package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.HomeDetailsModulesBackups;
import io.swagger.model.HomeDetailsModulesDomains;
import io.swagger.model.HomeDetailsModulesLicenses;
import io.swagger.model.HomeDetailsModulesQuickservers;
import io.swagger.model.HomeDetailsModulesServers;
import io.swagger.model.HomeDetailsModulesVps;
import io.swagger.model.HomeDetailsModulesWebhosting;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;



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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
  @JsonProperty("quickservers")
  @NotNull
  public HomeDetailsModulesQuickservers getQuickservers() {
    return quickservers;
  }
  public void setQuickservers(HomeDetailsModulesQuickservers quickservers) {
    this.quickservers = quickservers;
  }


  @Override
  public boolean equals(Object o) {
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

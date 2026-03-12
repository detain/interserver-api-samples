package io.swagger.model;

import io.swagger.model.HomeDetailsModulesBackups;
import io.swagger.model.HomeDetailsModulesDomains;
import io.swagger.model.HomeDetailsModulesLicenses;
import io.swagger.model.HomeDetailsModulesQuickservers;
import io.swagger.model.HomeDetailsModulesServers;
import io.swagger.model.HomeDetailsModulesVps;
import io.swagger.model.HomeDetailsModulesWebhosting;
import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonCreator;

public class HomeDetailsModules   {
  
  @Schema(description = "")
  private HomeDetailsModulesDomains domains = null;
  
  @Schema(description = "")
  private HomeDetailsModulesWebhosting webhosting = null;
  
  @Schema(description = "")
  private HomeDetailsModulesVps vps = null;
  
  @Schema(description = "")
  private HomeDetailsModulesLicenses licenses = null;
  
  @Schema(description = "")
  private HomeDetailsModulesBackups backups = null;
  
  @Schema(description = "")
  private HomeDetailsModulesServers servers = null;
  
  @Schema(description = "")
  private HomeDetailsModulesQuickservers quickservers = null;
 /**
   * Get domains
   * @return domains
  **/
  @JsonProperty("domains")
  @NotNull
  public HomeDetailsModulesDomains getDomains() {
    return domains;
  }

  public void setDomains(HomeDetailsModulesDomains domains) {
    this.domains = domains;
  }

  public HomeDetailsModules domains(HomeDetailsModulesDomains domains) {
    this.domains = domains;
    return this;
  }

 /**
   * Get webhosting
   * @return webhosting
  **/
  @JsonProperty("webhosting")
  @NotNull
  public HomeDetailsModulesWebhosting getWebhosting() {
    return webhosting;
  }

  public void setWebhosting(HomeDetailsModulesWebhosting webhosting) {
    this.webhosting = webhosting;
  }

  public HomeDetailsModules webhosting(HomeDetailsModulesWebhosting webhosting) {
    this.webhosting = webhosting;
    return this;
  }

 /**
   * Get vps
   * @return vps
  **/
  @JsonProperty("vps")
  @NotNull
  public HomeDetailsModulesVps getVps() {
    return vps;
  }

  public void setVps(HomeDetailsModulesVps vps) {
    this.vps = vps;
  }

  public HomeDetailsModules vps(HomeDetailsModulesVps vps) {
    this.vps = vps;
    return this;
  }

 /**
   * Get licenses
   * @return licenses
  **/
  @JsonProperty("licenses")
  @NotNull
  public HomeDetailsModulesLicenses getLicenses() {
    return licenses;
  }

  public void setLicenses(HomeDetailsModulesLicenses licenses) {
    this.licenses = licenses;
  }

  public HomeDetailsModules licenses(HomeDetailsModulesLicenses licenses) {
    this.licenses = licenses;
    return this;
  }

 /**
   * Get backups
   * @return backups
  **/
  @JsonProperty("backups")
  @NotNull
  public HomeDetailsModulesBackups getBackups() {
    return backups;
  }

  public void setBackups(HomeDetailsModulesBackups backups) {
    this.backups = backups;
  }

  public HomeDetailsModules backups(HomeDetailsModulesBackups backups) {
    this.backups = backups;
    return this;
  }

 /**
   * Get servers
   * @return servers
  **/
  @JsonProperty("servers")
  @NotNull
  public HomeDetailsModulesServers getServers() {
    return servers;
  }

  public void setServers(HomeDetailsModulesServers servers) {
    this.servers = servers;
  }

  public HomeDetailsModules servers(HomeDetailsModulesServers servers) {
    this.servers = servers;
    return this;
  }

 /**
   * Get quickservers
   * @return quickservers
  **/
  @JsonProperty("quickservers")
  @NotNull
  public HomeDetailsModulesQuickservers getQuickservers() {
    return quickservers;
  }

  public void setQuickservers(HomeDetailsModulesQuickservers quickservers) {
    this.quickservers = quickservers;
  }

  public HomeDetailsModules quickservers(HomeDetailsModulesQuickservers quickservers) {
    this.quickservers = quickservers;
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

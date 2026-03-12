package io.swagger.model;

import io.swagger.model.HomeServicesBackups;
import io.swagger.model.HomeServicesDomains;
import io.swagger.model.HomeServicesLicenses;
import io.swagger.model.HomeServicesServers;
import io.swagger.model.HomeServicesVps;
import io.swagger.model.HomeServicesWebhosting;
import io.swagger.v3.oas.annotations.media.Schema;

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

/**
  * Users services.
 **/
@Schema(description="Users services.")
public class HomeServices   {
  
  @Schema(description = "")
  private HomeServicesDomains domains = null;
  
  @Schema(description = "")
  private HomeServicesWebhosting webhosting = null;
  
  @Schema(description = "")
  private HomeServicesVps vps = null;
  
  @Schema(description = "")
  private HomeServicesLicenses licenses = null;
  
  @Schema(description = "")
  private HomeServicesServers servers = null;
  
  @Schema(description = "")
  private HomeServicesBackups backups = null;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

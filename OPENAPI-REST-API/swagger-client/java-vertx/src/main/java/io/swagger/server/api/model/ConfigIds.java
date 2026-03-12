package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * Internal configuration IDs mapped from the selected form values for a server order.
 */




public class ConfigIds   {
  private Integer memory = null;

  private Integer hd = null;

  private Integer bandwidth = null;

  private Integer ips = null;

  private Integer os = null;

  private Integer cp = null;

  private Integer raid = null;

  public ConfigIds memory(Integer memory) {
    this.memory = memory;
    return this;
  }

  /**
   * Configuration ID for the selected memory option.
   * @return memory
   **/
    public Integer getMemory() {
    return memory;
  }

  public void setMemory(Integer memory) {
    this.memory = memory;
  }

  public ConfigIds hd(Integer hd) {
    this.hd = hd;
    return this;
  }

  /**
   * Configuration ID for the selected hard drive option.
   * @return hd
   **/
    public Integer getHd() {
    return hd;
  }

  public void setHd(Integer hd) {
    this.hd = hd;
  }

  public ConfigIds bandwidth(Integer bandwidth) {
    this.bandwidth = bandwidth;
    return this;
  }

  /**
   * Configuration ID for the selected bandwidth option.
   * @return bandwidth
   **/
    public Integer getBandwidth() {
    return bandwidth;
  }

  public void setBandwidth(Integer bandwidth) {
    this.bandwidth = bandwidth;
  }

  public ConfigIds ips(Integer ips) {
    this.ips = ips;
    return this;
  }

  /**
   * Configuration ID for the selected IP block option.
   * @return ips
   **/
    public Integer getIps() {
    return ips;
  }

  public void setIps(Integer ips) {
    this.ips = ips;
  }

  public ConfigIds os(Integer os) {
    this.os = os;
    return this;
  }

  /**
   * Configuration ID for the selected operating system.
   * @return os
   **/
    public Integer getOs() {
    return os;
  }

  public void setOs(Integer os) {
    this.os = os;
  }

  public ConfigIds cp(Integer cp) {
    this.cp = cp;
    return this;
  }

  /**
   * Configuration ID for the selected control panel.
   * @return cp
   **/
    public Integer getCp() {
    return cp;
  }

  public void setCp(Integer cp) {
    this.cp = cp;
  }

  public ConfigIds raid(Integer raid) {
    this.raid = raid;
    return this;
  }

  /**
   * Configuration ID for the selected RAID option.
   * @return raid
   **/
    public Integer getRaid() {
    return raid;
  }

  public void setRaid(Integer raid) {
    this.raid = raid;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ConfigIds configIds = (ConfigIds) o;
    return Objects.equals(this.memory, configIds.memory) &&
        Objects.equals(this.hd, configIds.hd) &&
        Objects.equals(this.bandwidth, configIds.bandwidth) &&
        Objects.equals(this.ips, configIds.ips) &&
        Objects.equals(this.os, configIds.os) &&
        Objects.equals(this.cp, configIds.cp) &&
        Objects.equals(this.raid, configIds.raid);
  }

  @Override
  public int hashCode() {
    return Objects.hash(memory, hd, bandwidth, ips, os, cp, raid);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ConfigIds {\n");
    
    sb.append("    memory: ").append(toIndentedString(memory)).append("\n");
    sb.append("    hd: ").append(toIndentedString(hd)).append("\n");
    sb.append("    bandwidth: ").append(toIndentedString(bandwidth)).append("\n");
    sb.append("    ips: ").append(toIndentedString(ips)).append("\n");
    sb.append("    os: ").append(toIndentedString(os)).append("\n");
    sb.append("    cp: ").append(toIndentedString(cp)).append("\n");
    sb.append("    raid: ").append(toIndentedString(raid)).append("\n");
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

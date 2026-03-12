package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * Internal configuration IDs mapped from the selected form values for a server order.
 */
@Schema(description = "Internal configuration IDs mapped from the selected form values for a server order.")
@Validated
@Introspected

public class ConfigIds   {
  @JsonProperty("memory")
  private Integer memory = null;

  @JsonProperty("hd")
  private Integer hd = null;

  @JsonProperty("bandwidth")
  private Integer bandwidth = null;

  @JsonProperty("ips")
  private Integer ips = null;

  @JsonProperty("os")
  private Integer os = null;

  @JsonProperty("cp")
  private Integer cp = null;

  @JsonProperty("raid")
  private Integer raid = null;

  public ConfigIds memory(Integer memory) {
    this.memory = memory;
    return this;
  }

  /**
   * Configuration ID for the selected memory option.
   * @return memory
  **/
  @Schema(description = "Configuration ID for the selected memory option.")
  @NotNull

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
  @Schema(description = "Configuration ID for the selected hard drive option.")
  @NotNull

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
  @Schema(description = "Configuration ID for the selected bandwidth option.")
  @NotNull

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
  @Schema(description = "Configuration ID for the selected IP block option.")
  @NotNull

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
  @Schema(description = "Configuration ID for the selected operating system.")
  @NotNull

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
  @Schema(description = "Configuration ID for the selected control panel.")
  @NotNull

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
  @Schema(description = "Configuration ID for the selected RAID option.")
  @NotNull

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

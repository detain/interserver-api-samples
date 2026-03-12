package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * Internal configuration IDs mapped from the selected form values for a server order.
 **/
@Schema(description = "Internal configuration IDs mapped from the selected form values for a server order.")


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
  /**
   * Configuration ID for the selected memory option.
   **/
  public ConfigIds memory(Integer memory) {
    this.memory = memory;
    return this;
  }

  
  @Schema(description = "Configuration ID for the selected memory option.")
  @JsonProperty("memory")
  public Integer getMemory() {
    return memory;
  }
  public void setMemory(Integer memory) {
    this.memory = memory;
  }

  /**
   * Configuration ID for the selected hard drive option.
   **/
  public ConfigIds hd(Integer hd) {
    this.hd = hd;
    return this;
  }

  
  @Schema(description = "Configuration ID for the selected hard drive option.")
  @JsonProperty("hd")
  public Integer getHd() {
    return hd;
  }
  public void setHd(Integer hd) {
    this.hd = hd;
  }

  /**
   * Configuration ID for the selected bandwidth option.
   **/
  public ConfigIds bandwidth(Integer bandwidth) {
    this.bandwidth = bandwidth;
    return this;
  }

  
  @Schema(description = "Configuration ID for the selected bandwidth option.")
  @JsonProperty("bandwidth")
  public Integer getBandwidth() {
    return bandwidth;
  }
  public void setBandwidth(Integer bandwidth) {
    this.bandwidth = bandwidth;
  }

  /**
   * Configuration ID for the selected IP block option.
   **/
  public ConfigIds ips(Integer ips) {
    this.ips = ips;
    return this;
  }

  
  @Schema(description = "Configuration ID for the selected IP block option.")
  @JsonProperty("ips")
  public Integer getIps() {
    return ips;
  }
  public void setIps(Integer ips) {
    this.ips = ips;
  }

  /**
   * Configuration ID for the selected operating system.
   **/
  public ConfigIds os(Integer os) {
    this.os = os;
    return this;
  }

  
  @Schema(description = "Configuration ID for the selected operating system.")
  @JsonProperty("os")
  public Integer getOs() {
    return os;
  }
  public void setOs(Integer os) {
    this.os = os;
  }

  /**
   * Configuration ID for the selected control panel.
   **/
  public ConfigIds cp(Integer cp) {
    this.cp = cp;
    return this;
  }

  
  @Schema(description = "Configuration ID for the selected control panel.")
  @JsonProperty("cp")
  public Integer getCp() {
    return cp;
  }
  public void setCp(Integer cp) {
    this.cp = cp;
  }

  /**
   * Configuration ID for the selected RAID option.
   **/
  public ConfigIds raid(Integer raid) {
    this.raid = raid;
    return this;
  }

  
  @Schema(description = "Configuration ID for the selected RAID option.")
  @JsonProperty("raid")
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
    return Objects.equals(memory, configIds.memory) &&
        Objects.equals(hd, configIds.hd) &&
        Objects.equals(bandwidth, configIds.bandwidth) &&
        Objects.equals(ips, configIds.ips) &&
        Objects.equals(os, configIds.os) &&
        Objects.equals(cp, configIds.cp) &&
        Objects.equals(raid, configIds.raid);
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

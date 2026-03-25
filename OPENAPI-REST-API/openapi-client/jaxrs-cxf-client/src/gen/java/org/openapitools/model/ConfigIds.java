package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Internal configuration IDs mapped from the selected form values for a server order.
 */
@ApiModel(description="Internal configuration IDs mapped from the selected form values for a server order.")

public class ConfigIds  {
  
 /**
  * Configuration ID for the selected memory option.
  */
  @ApiModelProperty(value = "Configuration ID for the selected memory option.")

  private Integer memory;

 /**
  * Configuration ID for the selected hard drive option.
  */
  @ApiModelProperty(value = "Configuration ID for the selected hard drive option.")

  private Integer hd;

 /**
  * Configuration ID for the selected bandwidth option.
  */
  @ApiModelProperty(value = "Configuration ID for the selected bandwidth option.")

  private Integer bandwidth;

 /**
  * Configuration ID for the selected IP block option.
  */
  @ApiModelProperty(value = "Configuration ID for the selected IP block option.")

  private Integer ips;

 /**
  * Configuration ID for the selected operating system.
  */
  @ApiModelProperty(value = "Configuration ID for the selected operating system.")

  private Integer os;

 /**
  * Configuration ID for the selected control panel.
  */
  @ApiModelProperty(value = "Configuration ID for the selected control panel.")

  private Integer cp;

 /**
  * Configuration ID for the selected RAID option.
  */
  @ApiModelProperty(value = "Configuration ID for the selected RAID option.")

  private Integer raid;
 /**
   * Configuration ID for the selected memory option.
   * @return memory
  **/
  @JsonProperty("memory")
  public Integer getMemory() {
    return memory;
  }

  public void setMemory(Integer memory) {
    this.memory = memory;
  }

  public ConfigIds memory(Integer memory) {
    this.memory = memory;
    return this;
  }

 /**
   * Configuration ID for the selected hard drive option.
   * @return hd
  **/
  @JsonProperty("hd")
  public Integer getHd() {
    return hd;
  }

  public void setHd(Integer hd) {
    this.hd = hd;
  }

  public ConfigIds hd(Integer hd) {
    this.hd = hd;
    return this;
  }

 /**
   * Configuration ID for the selected bandwidth option.
   * @return bandwidth
  **/
  @JsonProperty("bandwidth")
  public Integer getBandwidth() {
    return bandwidth;
  }

  public void setBandwidth(Integer bandwidth) {
    this.bandwidth = bandwidth;
  }

  public ConfigIds bandwidth(Integer bandwidth) {
    this.bandwidth = bandwidth;
    return this;
  }

 /**
   * Configuration ID for the selected IP block option.
   * @return ips
  **/
  @JsonProperty("ips")
  public Integer getIps() {
    return ips;
  }

  public void setIps(Integer ips) {
    this.ips = ips;
  }

  public ConfigIds ips(Integer ips) {
    this.ips = ips;
    return this;
  }

 /**
   * Configuration ID for the selected operating system.
   * @return os
  **/
  @JsonProperty("os")
  public Integer getOs() {
    return os;
  }

  public void setOs(Integer os) {
    this.os = os;
  }

  public ConfigIds os(Integer os) {
    this.os = os;
    return this;
  }

 /**
   * Configuration ID for the selected control panel.
   * @return cp
  **/
  @JsonProperty("cp")
  public Integer getCp() {
    return cp;
  }

  public void setCp(Integer cp) {
    this.cp = cp;
  }

  public ConfigIds cp(Integer cp) {
    this.cp = cp;
    return this;
  }

 /**
   * Configuration ID for the selected RAID option.
   * @return raid
  **/
  @JsonProperty("raid")
  public Integer getRaid() {
    return raid;
  }

  public void setRaid(Integer raid) {
    this.raid = raid;
  }

  public ConfigIds raid(Integer raid) {
    this.raid = raid;
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}


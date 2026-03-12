package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Configuration IDs for the server order.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Configuration IDs for the server order.")

public class ServerOrderConfigIds   {

  private @Valid Integer memory = null;

  private @Valid String bandwidth = null;

  private @Valid String ips = null;

  private @Valid String os = null;

  private @Valid Integer cp = null;

  private @Valid String raid = null;

  private @Valid String hd = null;

  /**
   * Memory configuration ID for the server order.
   **/
  public ServerOrderConfigIds memory(Integer memory) {
    this.memory = memory;
    return this;
  }

  
  @ApiModelProperty(example = "22", value = "Memory configuration ID for the server order.")
  @JsonProperty("memory")
  @NotNull

  public Integer getMemory() {
    return memory;
  }
  public void setMemory(Integer memory) {
    this.memory = memory;
  }

  /**
   * Bandwidth configuration ID for the server order.
   **/
  public ServerOrderConfigIds bandwidth(String bandwidth) {
    this.bandwidth = bandwidth;
    return this;
  }

  
  @ApiModelProperty(example = "3", value = "Bandwidth configuration ID for the server order.")
  @JsonProperty("bandwidth")
  @NotNull

  public String getBandwidth() {
    return bandwidth;
  }
  public void setBandwidth(String bandwidth) {
    this.bandwidth = bandwidth;
  }

  /**
   * IPs configuration ID for the server order.
   **/
  public ServerOrderConfigIds ips(String ips) {
    this.ips = ips;
    return this;
  }

  
  @ApiModelProperty(example = "9", value = "IPs configuration ID for the server order.")
  @JsonProperty("ips")
  @NotNull

  public String getIps() {
    return ips;
  }
  public void setIps(String ips) {
    this.ips = ips;
  }

  /**
   * Operating System configuration ID for the server order.
   **/
  public ServerOrderConfigIds os(String os) {
    this.os = os;
    return this;
  }

  
  @ApiModelProperty(example = "5", value = "Operating System configuration ID for the server order.")
  @JsonProperty("os")
  @NotNull

  public String getOs() {
    return os;
  }
  public void setOs(String os) {
    this.os = os;
  }

  /**
   * Control Panel configuration ID for the server order.
   **/
  public ServerOrderConfigIds cp(Integer cp) {
    this.cp = cp;
    return this;
  }

  
  @ApiModelProperty(example = "5", value = "Control Panel configuration ID for the server order.")
  @JsonProperty("cp")
  @NotNull

  public Integer getCp() {
    return cp;
  }
  public void setCp(Integer cp) {
    this.cp = cp;
  }

  /**
   * RAID configuration ID for the server order.
   **/
  public ServerOrderConfigIds raid(String raid) {
    this.raid = raid;
    return this;
  }

  
  @ApiModelProperty(example = "0", value = "RAID configuration ID for the server order.")
  @JsonProperty("raid")
  @NotNull

  public String getRaid() {
    return raid;
  }
  public void setRaid(String raid) {
    this.raid = raid;
  }

  /**
   * Hard Drives configuration ID for the server order.
   **/
  public ServerOrderConfigIds hd(String hd) {
    this.hd = hd;
    return this;
  }

  
  @ApiModelProperty(example = "16", value = "Hard Drives configuration ID for the server order.")
  @JsonProperty("hd")
  @NotNull

  public String getHd() {
    return hd;
  }
  public void setHd(String hd) {
    this.hd = hd;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServerOrderConfigIds serverOrderConfigIds = (ServerOrderConfigIds) o;
    return Objects.equals(memory, serverOrderConfigIds.memory) &&
        Objects.equals(bandwidth, serverOrderConfigIds.bandwidth) &&
        Objects.equals(ips, serverOrderConfigIds.ips) &&
        Objects.equals(os, serverOrderConfigIds.os) &&
        Objects.equals(cp, serverOrderConfigIds.cp) &&
        Objects.equals(raid, serverOrderConfigIds.raid) &&
        Objects.equals(hd, serverOrderConfigIds.hd);
  }

  @Override
  public int hashCode() {
    return Objects.hash(memory, bandwidth, ips, os, cp, raid, hd);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerOrderConfigIds {\n");
    
    sb.append("    memory: ").append(toIndentedString(memory)).append("\n");
    sb.append("    bandwidth: ").append(toIndentedString(bandwidth)).append("\n");
    sb.append("    ips: ").append(toIndentedString(ips)).append("\n");
    sb.append("    os: ").append(toIndentedString(os)).append("\n");
    sb.append("    cp: ").append(toIndentedString(cp)).append("\n");
    sb.append("    raid: ").append(toIndentedString(raid)).append("\n");
    sb.append("    hd: ").append(toIndentedString(hd)).append("\n");
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

package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Form values for the server order.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Form values for the server order.")

public class ServerOrderFormValues   {

  private @Valid Integer memory = null;

  private @Valid String bandwidth = null;

  private @Valid String ips = null;

  private @Valid String os = null;

  private @Valid Integer cp = null;

  private @Valid String raid = null;

  private @Valid String hd = null;

  /**
   * Memory value for the server order.
   **/
  public ServerOrderFormValues memory(Integer memory) {
    this.memory = memory;
    return this;
  }

  
  @ApiModelProperty(example = "22", value = "Memory value for the server order.")
  @JsonProperty("memory")
  @NotNull

  public Integer getMemory() {
    return memory;
  }
  public void setMemory(Integer memory) {
    this.memory = memory;
  }

  /**
   * Bandwidth value for the server order.
   **/
  public ServerOrderFormValues bandwidth(String bandwidth) {
    this.bandwidth = bandwidth;
    return this;
  }

  
  @ApiModelProperty(example = "3", value = "Bandwidth value for the server order.")
  @JsonProperty("bandwidth")
  @NotNull

  public String getBandwidth() {
    return bandwidth;
  }
  public void setBandwidth(String bandwidth) {
    this.bandwidth = bandwidth;
  }

  /**
   * IPs value for the server order.
   **/
  public ServerOrderFormValues ips(String ips) {
    this.ips = ips;
    return this;
  }

  
  @ApiModelProperty(example = "9", value = "IPs value for the server order.")
  @JsonProperty("ips")
  @NotNull

  public String getIps() {
    return ips;
  }
  public void setIps(String ips) {
    this.ips = ips;
  }

  /**
   * Operating System value for the server order.
   **/
  public ServerOrderFormValues os(String os) {
    this.os = os;
    return this;
  }

  
  @ApiModelProperty(example = "5", value = "Operating System value for the server order.")
  @JsonProperty("os")
  @NotNull

  public String getOs() {
    return os;
  }
  public void setOs(String os) {
    this.os = os;
  }

  /**
   * Control Panel value for the server order.
   **/
  public ServerOrderFormValues cp(Integer cp) {
    this.cp = cp;
    return this;
  }

  
  @ApiModelProperty(example = "5", value = "Control Panel value for the server order.")
  @JsonProperty("cp")
  @NotNull

  public Integer getCp() {
    return cp;
  }
  public void setCp(Integer cp) {
    this.cp = cp;
  }

  /**
   * RAID value for the server order.
   **/
  public ServerOrderFormValues raid(String raid) {
    this.raid = raid;
    return this;
  }

  
  @ApiModelProperty(example = "0", value = "RAID value for the server order.")
  @JsonProperty("raid")
  @NotNull

  public String getRaid() {
    return raid;
  }
  public void setRaid(String raid) {
    this.raid = raid;
  }

  /**
   * Hard Drives value for the server order.
   **/
  public ServerOrderFormValues hd(String hd) {
    this.hd = hd;
    return this;
  }

  
  @ApiModelProperty(example = "16", value = "Hard Drives value for the server order.")
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
    ServerOrderFormValues serverOrderFormValues = (ServerOrderFormValues) o;
    return Objects.equals(memory, serverOrderFormValues.memory) &&
        Objects.equals(bandwidth, serverOrderFormValues.bandwidth) &&
        Objects.equals(ips, serverOrderFormValues.ips) &&
        Objects.equals(os, serverOrderFormValues.os) &&
        Objects.equals(cp, serverOrderFormValues.cp) &&
        Objects.equals(raid, serverOrderFormValues.raid) &&
        Objects.equals(hd, serverOrderFormValues.hd);
  }

  @Override
  public int hashCode() {
    return Objects.hash(memory, bandwidth, ips, os, cp, raid, hd);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerOrderFormValues {\n");
    
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

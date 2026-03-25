package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Configuration IDs for the server order.
 */
@ApiModel(description="Configuration IDs for the server order.")

public class ServerOrderConfigIds  {
  
 /**
  * Memory configuration ID for the server order.
  */
  @ApiModelProperty(example = "22", value = "Memory configuration ID for the server order.")

  private Integer memory;

 /**
  * Bandwidth configuration ID for the server order.
  */
  @ApiModelProperty(example = "3", value = "Bandwidth configuration ID for the server order.")

  private String bandwidth;

 /**
  * IPs configuration ID for the server order.
  */
  @ApiModelProperty(example = "9", value = "IPs configuration ID for the server order.")

  private String ips;

 /**
  * Operating System configuration ID for the server order.
  */
  @ApiModelProperty(example = "5", value = "Operating System configuration ID for the server order.")

  private String os;

 /**
  * Control Panel configuration ID for the server order.
  */
  @ApiModelProperty(example = "5", value = "Control Panel configuration ID for the server order.")

  private Integer cp;

 /**
  * RAID configuration ID for the server order.
  */
  @ApiModelProperty(example = "0", value = "RAID configuration ID for the server order.")

  private String raid;

 /**
  * Hard Drives configuration ID for the server order.
  */
  @ApiModelProperty(example = "16", value = "Hard Drives configuration ID for the server order.")

  private String hd;
 /**
   * Memory configuration ID for the server order.
   * @return memory
  **/
  @JsonProperty("memory")
  public Integer getMemory() {
    return memory;
  }

  public void setMemory(Integer memory) {
    this.memory = memory;
  }

  public ServerOrderConfigIds memory(Integer memory) {
    this.memory = memory;
    return this;
  }

 /**
   * Bandwidth configuration ID for the server order.
   * @return bandwidth
  **/
  @JsonProperty("bandwidth")
  public String getBandwidth() {
    return bandwidth;
  }

  public void setBandwidth(String bandwidth) {
    this.bandwidth = bandwidth;
  }

  public ServerOrderConfigIds bandwidth(String bandwidth) {
    this.bandwidth = bandwidth;
    return this;
  }

 /**
   * IPs configuration ID for the server order.
   * @return ips
  **/
  @JsonProperty("ips")
  public String getIps() {
    return ips;
  }

  public void setIps(String ips) {
    this.ips = ips;
  }

  public ServerOrderConfigIds ips(String ips) {
    this.ips = ips;
    return this;
  }

 /**
   * Operating System configuration ID for the server order.
   * @return os
  **/
  @JsonProperty("os")
  public String getOs() {
    return os;
  }

  public void setOs(String os) {
    this.os = os;
  }

  public ServerOrderConfigIds os(String os) {
    this.os = os;
    return this;
  }

 /**
   * Control Panel configuration ID for the server order.
   * @return cp
  **/
  @JsonProperty("cp")
  public Integer getCp() {
    return cp;
  }

  public void setCp(Integer cp) {
    this.cp = cp;
  }

  public ServerOrderConfigIds cp(Integer cp) {
    this.cp = cp;
    return this;
  }

 /**
   * RAID configuration ID for the server order.
   * @return raid
  **/
  @JsonProperty("raid")
  public String getRaid() {
    return raid;
  }

  public void setRaid(String raid) {
    this.raid = raid;
  }

  public ServerOrderConfigIds raid(String raid) {
    this.raid = raid;
    return this;
  }

 /**
   * Hard Drives configuration ID for the server order.
   * @return hd
  **/
  @JsonProperty("hd")
  public String getHd() {
    return hd;
  }

  public void setHd(String hd) {
    this.hd = hd;
  }

  public ServerOrderConfigIds hd(String hd) {
    this.hd = hd;
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
    ServerOrderConfigIds serverOrderConfigIds = (ServerOrderConfigIds) o;
    return Objects.equals(this.memory, serverOrderConfigIds.memory) &&
        Objects.equals(this.bandwidth, serverOrderConfigIds.bandwidth) &&
        Objects.equals(this.ips, serverOrderConfigIds.ips) &&
        Objects.equals(this.os, serverOrderConfigIds.os) &&
        Objects.equals(this.cp, serverOrderConfigIds.cp) &&
        Objects.equals(this.raid, serverOrderConfigIds.raid) &&
        Objects.equals(this.hd, serverOrderConfigIds.hd);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}


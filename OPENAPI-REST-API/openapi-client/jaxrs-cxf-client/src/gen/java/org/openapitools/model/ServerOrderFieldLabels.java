package org.openapitools.model;

import org.openapitools.model.ServerOrderFieldLabel;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Field labels for the server order.
 */
@ApiModel(description="Field labels for the server order.")

public class ServerOrderFieldLabels  {
  
 /**
  * Bandwidth field label.
  */
  @ApiModelProperty(value = "Bandwidth field label.")

  private ServerOrderFieldLabel bandwidth;

 /**
  * IPs field label.
  */
  @ApiModelProperty(value = "IPs field label.")

  private ServerOrderFieldLabel ips;

 /**
  * Operating System field label.
  */
  @ApiModelProperty(value = "Operating System field label.")

  private ServerOrderFieldLabel os;

 /**
  * Control Panel field label.
  */
  @ApiModelProperty(value = "Control Panel field label.")

  private ServerOrderFieldLabel cp;

 /**
  * RAID field label.
  */
  @ApiModelProperty(value = "RAID field label.")

  private ServerOrderFieldLabel raid;

 /**
  * Memory field label.
  */
  @ApiModelProperty(value = "Memory field label.")

  private ServerOrderFieldLabel memory;

 /**
  * Hard Drives field label
  */
  @ApiModelProperty(value = "Hard Drives field label")

  private ServerOrderFieldLabel hd;
 /**
   * Bandwidth field label.
   * @return bandwidth
  **/
  @JsonProperty("bandwidth")
  public ServerOrderFieldLabel getBandwidth() {
    return bandwidth;
  }

  public void setBandwidth(ServerOrderFieldLabel bandwidth) {
    this.bandwidth = bandwidth;
  }

  public ServerOrderFieldLabels bandwidth(ServerOrderFieldLabel bandwidth) {
    this.bandwidth = bandwidth;
    return this;
  }

 /**
   * IPs field label.
   * @return ips
  **/
  @JsonProperty("ips")
  public ServerOrderFieldLabel getIps() {
    return ips;
  }

  public void setIps(ServerOrderFieldLabel ips) {
    this.ips = ips;
  }

  public ServerOrderFieldLabels ips(ServerOrderFieldLabel ips) {
    this.ips = ips;
    return this;
  }

 /**
   * Operating System field label.
   * @return os
  **/
  @JsonProperty("os")
  public ServerOrderFieldLabel getOs() {
    return os;
  }

  public void setOs(ServerOrderFieldLabel os) {
    this.os = os;
  }

  public ServerOrderFieldLabels os(ServerOrderFieldLabel os) {
    this.os = os;
    return this;
  }

 /**
   * Control Panel field label.
   * @return cp
  **/
  @JsonProperty("cp")
  public ServerOrderFieldLabel getCp() {
    return cp;
  }

  public void setCp(ServerOrderFieldLabel cp) {
    this.cp = cp;
  }

  public ServerOrderFieldLabels cp(ServerOrderFieldLabel cp) {
    this.cp = cp;
    return this;
  }

 /**
   * RAID field label.
   * @return raid
  **/
  @JsonProperty("raid")
  public ServerOrderFieldLabel getRaid() {
    return raid;
  }

  public void setRaid(ServerOrderFieldLabel raid) {
    this.raid = raid;
  }

  public ServerOrderFieldLabels raid(ServerOrderFieldLabel raid) {
    this.raid = raid;
    return this;
  }

 /**
   * Memory field label.
   * @return memory
  **/
  @JsonProperty("memory")
  public ServerOrderFieldLabel getMemory() {
    return memory;
  }

  public void setMemory(ServerOrderFieldLabel memory) {
    this.memory = memory;
  }

  public ServerOrderFieldLabels memory(ServerOrderFieldLabel memory) {
    this.memory = memory;
    return this;
  }

 /**
   * Hard Drives field label
   * @return hd
  **/
  @JsonProperty("hd")
  public ServerOrderFieldLabel getHd() {
    return hd;
  }

  public void setHd(ServerOrderFieldLabel hd) {
    this.hd = hd;
  }

  public ServerOrderFieldLabels hd(ServerOrderFieldLabel hd) {
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
    ServerOrderFieldLabels serverOrderFieldLabels = (ServerOrderFieldLabels) o;
    return Objects.equals(this.bandwidth, serverOrderFieldLabels.bandwidth) &&
        Objects.equals(this.ips, serverOrderFieldLabels.ips) &&
        Objects.equals(this.os, serverOrderFieldLabels.os) &&
        Objects.equals(this.cp, serverOrderFieldLabels.cp) &&
        Objects.equals(this.raid, serverOrderFieldLabels.raid) &&
        Objects.equals(this.memory, serverOrderFieldLabels.memory) &&
        Objects.equals(this.hd, serverOrderFieldLabels.hd);
  }

  @Override
  public int hashCode() {
    return Objects.hash(bandwidth, ips, os, cp, raid, memory, hd);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerOrderFieldLabels {\n");
    
    sb.append("    bandwidth: ").append(toIndentedString(bandwidth)).append("\n");
    sb.append("    ips: ").append(toIndentedString(ips)).append("\n");
    sb.append("    os: ").append(toIndentedString(os)).append("\n");
    sb.append("    cp: ").append(toIndentedString(cp)).append("\n");
    sb.append("    raid: ").append(toIndentedString(raid)).append("\n");
    sb.append("    memory: ").append(toIndentedString(memory)).append("\n");
    sb.append("    hd: ").append(toIndentedString(hd)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}


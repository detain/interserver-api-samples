package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Form values for the server order.
 */
@ApiModel(description="Form values for the server order.")

public class ServerOrderFormValues  {
  
 /**
  * Memory value for the server order.
  */
  @ApiModelProperty(example = "22", value = "Memory value for the server order.")

  private Integer memory;

 /**
  * Bandwidth value for the server order.
  */
  @ApiModelProperty(example = "3", value = "Bandwidth value for the server order.")

  private String bandwidth;

 /**
  * IPs value for the server order.
  */
  @ApiModelProperty(example = "9", value = "IPs value for the server order.")

  private String ips;

 /**
  * Operating System value for the server order.
  */
  @ApiModelProperty(example = "5", value = "Operating System value for the server order.")

  private String os;

 /**
  * Control Panel value for the server order.
  */
  @ApiModelProperty(example = "5", value = "Control Panel value for the server order.")

  private Integer cp;

 /**
  * RAID value for the server order.
  */
  @ApiModelProperty(example = "0", value = "RAID value for the server order.")

  private String raid;

 /**
  * Hard Drives value for the server order.
  */
  @ApiModelProperty(example = "16", value = "Hard Drives value for the server order.")

  private String hd;
 /**
   * Memory value for the server order.
   * @return memory
  **/
  @JsonProperty("memory")
  public Integer getMemory() {
    return memory;
  }

  public void setMemory(Integer memory) {
    this.memory = memory;
  }

  public ServerOrderFormValues memory(Integer memory) {
    this.memory = memory;
    return this;
  }

 /**
   * Bandwidth value for the server order.
   * @return bandwidth
  **/
  @JsonProperty("bandwidth")
  public String getBandwidth() {
    return bandwidth;
  }

  public void setBandwidth(String bandwidth) {
    this.bandwidth = bandwidth;
  }

  public ServerOrderFormValues bandwidth(String bandwidth) {
    this.bandwidth = bandwidth;
    return this;
  }

 /**
   * IPs value for the server order.
   * @return ips
  **/
  @JsonProperty("ips")
  public String getIps() {
    return ips;
  }

  public void setIps(String ips) {
    this.ips = ips;
  }

  public ServerOrderFormValues ips(String ips) {
    this.ips = ips;
    return this;
  }

 /**
   * Operating System value for the server order.
   * @return os
  **/
  @JsonProperty("os")
  public String getOs() {
    return os;
  }

  public void setOs(String os) {
    this.os = os;
  }

  public ServerOrderFormValues os(String os) {
    this.os = os;
    return this;
  }

 /**
   * Control Panel value for the server order.
   * @return cp
  **/
  @JsonProperty("cp")
  public Integer getCp() {
    return cp;
  }

  public void setCp(Integer cp) {
    this.cp = cp;
  }

  public ServerOrderFormValues cp(Integer cp) {
    this.cp = cp;
    return this;
  }

 /**
   * RAID value for the server order.
   * @return raid
  **/
  @JsonProperty("raid")
  public String getRaid() {
    return raid;
  }

  public void setRaid(String raid) {
    this.raid = raid;
  }

  public ServerOrderFormValues raid(String raid) {
    this.raid = raid;
    return this;
  }

 /**
   * Hard Drives value for the server order.
   * @return hd
  **/
  @JsonProperty("hd")
  public String getHd() {
    return hd;
  }

  public void setHd(String hd) {
    this.hd = hd;
  }

  public ServerOrderFormValues hd(String hd) {
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
    ServerOrderFormValues serverOrderFormValues = (ServerOrderFormValues) o;
    return Objects.equals(this.memory, serverOrderFormValues.memory) &&
        Objects.equals(this.bandwidth, serverOrderFormValues.bandwidth) &&
        Objects.equals(this.ips, serverOrderFormValues.ips) &&
        Objects.equals(this.os, serverOrderFormValues.os) &&
        Objects.equals(this.cp, serverOrderFormValues.cp) &&
        Objects.equals(this.raid, serverOrderFormValues.raid) &&
        Objects.equals(this.hd, serverOrderFormValues.hd);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}


package io.swagger.model;

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
  * Configuration IDs for the server order.
 **/
@Schema(description="Configuration IDs for the server order.")
public class ServerOrderConfigIds   {
  
  @Schema(example = "22", description = "Memory configuration ID for the server order.")
 /**
   * Memory configuration ID for the server order.  
  **/
  private Integer memory = null;
  
  @Schema(example = "3", description = "Bandwidth configuration ID for the server order.")
 /**
   * Bandwidth configuration ID for the server order.  
  **/
  private String bandwidth = null;
  
  @Schema(example = "9", description = "IPs configuration ID for the server order.")
 /**
   * IPs configuration ID for the server order.  
  **/
  private String ips = null;
  
  @Schema(example = "5", description = "Operating System configuration ID for the server order.")
 /**
   * Operating System configuration ID for the server order.  
  **/
  private String os = null;
  
  @Schema(example = "5", description = "Control Panel configuration ID for the server order.")
 /**
   * Control Panel configuration ID for the server order.  
  **/
  private Integer cp = null;
  
  @Schema(example = "0", description = "RAID configuration ID for the server order.")
 /**
   * RAID configuration ID for the server order.  
  **/
  private String raid = null;
  
  @Schema(example = "16", description = "Hard Drives configuration ID for the server order.")
 /**
   * Hard Drives configuration ID for the server order.  
  **/
  private String hd = null;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

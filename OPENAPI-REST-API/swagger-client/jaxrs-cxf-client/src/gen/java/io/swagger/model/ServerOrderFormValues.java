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
  * Form values for the server order.
 **/
@Schema(description="Form values for the server order.")
public class ServerOrderFormValues   {
  
  @Schema(example = "22", description = "Memory value for the server order.")
 /**
   * Memory value for the server order.  
  **/
  private Integer memory = null;
  
  @Schema(example = "3", description = "Bandwidth value for the server order.")
 /**
   * Bandwidth value for the server order.  
  **/
  private String bandwidth = null;
  
  @Schema(example = "9", description = "IPs value for the server order.")
 /**
   * IPs value for the server order.  
  **/
  private String ips = null;
  
  @Schema(example = "5", description = "Operating System value for the server order.")
 /**
   * Operating System value for the server order.  
  **/
  private String os = null;
  
  @Schema(example = "5", description = "Control Panel value for the server order.")
 /**
   * Control Panel value for the server order.  
  **/
  private Integer cp = null;
  
  @Schema(example = "0", description = "RAID value for the server order.")
 /**
   * RAID value for the server order.  
  **/
  private String raid = null;
  
  @Schema(example = "16", description = "Hard Drives value for the server order.")
 /**
   * Hard Drives value for the server order.  
  **/
  private String hd = null;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

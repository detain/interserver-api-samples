package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;

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
  * Internal configuration IDs mapped from the selected form values for a server order.
 **/
@Schema(description="Internal configuration IDs mapped from the selected form values for a server order.")
public class ConfigIds   {
  
  @Schema(description = "Configuration ID for the selected memory option.")
 /**
   * Configuration ID for the selected memory option.  
  **/
  private Integer memory = null;
  
  @Schema(description = "Configuration ID for the selected hard drive option.")
 /**
   * Configuration ID for the selected hard drive option.  
  **/
  private Integer hd = null;
  
  @Schema(description = "Configuration ID for the selected bandwidth option.")
 /**
   * Configuration ID for the selected bandwidth option.  
  **/
  private Integer bandwidth = null;
  
  @Schema(description = "Configuration ID for the selected IP block option.")
 /**
   * Configuration ID for the selected IP block option.  
  **/
  private Integer ips = null;
  
  @Schema(description = "Configuration ID for the selected operating system.")
 /**
   * Configuration ID for the selected operating system.  
  **/
  private Integer os = null;
  
  @Schema(description = "Configuration ID for the selected control panel.")
 /**
   * Configuration ID for the selected control panel.  
  **/
  private Integer cp = null;
  
  @Schema(description = "Configuration ID for the selected RAID option.")
 /**
   * Configuration ID for the selected RAID option.  
  **/
  private Integer raid = null;
 /**
   * Configuration ID for the selected memory option.
   * @return memory
  **/
  @JsonProperty("memory")
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

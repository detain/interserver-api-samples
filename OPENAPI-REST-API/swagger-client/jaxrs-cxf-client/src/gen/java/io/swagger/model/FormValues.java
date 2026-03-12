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
  * Currently selected configuration option IDs for a server order form.
 **/
@Schema(description="Currently selected configuration option IDs for a server order form.")
public class FormValues   {
  
  @Schema(description = "Selected memory option ID.")
 /**
   * Selected memory option ID.  
  **/
  private Integer memory = null;
  
  @Schema(description = "Selected bandwidth option ID.")
 /**
   * Selected bandwidth option ID.  
  **/
  private Integer bandwidth = null;
  
  @Schema(description = "Selected IP block option ID.")
 /**
   * Selected IP block option ID.  
  **/
  private Integer ips = null;
  
  @Schema(description = "Selected operating system option ID.")
 /**
   * Selected operating system option ID.  
  **/
  private Integer os = null;
  
  @Schema(description = "Selected control panel option ID.")
 /**
   * Selected control panel option ID.  
  **/
  private Integer cp = null;
  
  @Schema(description = "Selected RAID option ID.")
 /**
   * Selected RAID option ID.  
  **/
  private Integer raid = null;
  
  @Schema(description = "Selected hard drive option ID.")
 /**
   * Selected hard drive option ID.  
  **/
  private Integer hd = null;
  
  @Schema(description = "Selected datacenter region ID.")
 /**
   * Selected datacenter region ID.  
  **/
  private Integer region = null;
 /**
   * Selected memory option ID.
   * @return memory
  **/
  @JsonProperty("memory")
  public Integer getMemory() {
    return memory;
  }

  public void setMemory(Integer memory) {
    this.memory = memory;
  }

  public FormValues memory(Integer memory) {
    this.memory = memory;
    return this;
  }

 /**
   * Selected bandwidth option ID.
   * @return bandwidth
  **/
  @JsonProperty("bandwidth")
  public Integer getBandwidth() {
    return bandwidth;
  }

  public void setBandwidth(Integer bandwidth) {
    this.bandwidth = bandwidth;
  }

  public FormValues bandwidth(Integer bandwidth) {
    this.bandwidth = bandwidth;
    return this;
  }

 /**
   * Selected IP block option ID.
   * @return ips
  **/
  @JsonProperty("ips")
  public Integer getIps() {
    return ips;
  }

  public void setIps(Integer ips) {
    this.ips = ips;
  }

  public FormValues ips(Integer ips) {
    this.ips = ips;
    return this;
  }

 /**
   * Selected operating system option ID.
   * @return os
  **/
  @JsonProperty("os")
  public Integer getOs() {
    return os;
  }

  public void setOs(Integer os) {
    this.os = os;
  }

  public FormValues os(Integer os) {
    this.os = os;
    return this;
  }

 /**
   * Selected control panel option ID.
   * @return cp
  **/
  @JsonProperty("cp")
  public Integer getCp() {
    return cp;
  }

  public void setCp(Integer cp) {
    this.cp = cp;
  }

  public FormValues cp(Integer cp) {
    this.cp = cp;
    return this;
  }

 /**
   * Selected RAID option ID.
   * @return raid
  **/
  @JsonProperty("raid")
  public Integer getRaid() {
    return raid;
  }

  public void setRaid(Integer raid) {
    this.raid = raid;
  }

  public FormValues raid(Integer raid) {
    this.raid = raid;
    return this;
  }

 /**
   * Selected hard drive option ID.
   * @return hd
  **/
  @JsonProperty("hd")
  public Integer getHd() {
    return hd;
  }

  public void setHd(Integer hd) {
    this.hd = hd;
  }

  public FormValues hd(Integer hd) {
    this.hd = hd;
    return this;
  }

 /**
   * Selected datacenter region ID.
   * @return region
  **/
  @JsonProperty("region")
  public Integer getRegion() {
    return region;
  }

  public void setRegion(Integer region) {
    this.region = region;
  }

  public FormValues region(Integer region) {
    this.region = region;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class FormValues {\n");
    
    sb.append("    memory: ").append(toIndentedString(memory)).append("\n");
    sb.append("    bandwidth: ").append(toIndentedString(bandwidth)).append("\n");
    sb.append("    ips: ").append(toIndentedString(ips)).append("\n");
    sb.append("    os: ").append(toIndentedString(os)).append("\n");
    sb.append("    cp: ").append(toIndentedString(cp)).append("\n");
    sb.append("    raid: ").append(toIndentedString(raid)).append("\n");
    sb.append("    hd: ").append(toIndentedString(hd)).append("\n");
    sb.append("    region: ").append(toIndentedString(region)).append("\n");
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

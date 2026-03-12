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
  * Field labels for the server order.
 **/
@Schema(description="Field labels for the server order.")
public class ServerOrderFieldLabels   {
  
  @Schema(description = "Bandwidth field label.")
 /**
   * Bandwidth field label.  
  **/
  private AllOfServerOrderFieldLabelsBandwidth bandwidth = null;
  
  @Schema(description = "IPs field label.")
 /**
   * IPs field label.  
  **/
  private AllOfServerOrderFieldLabelsIps ips = null;
  
  @Schema(description = "Operating System field label.")
 /**
   * Operating System field label.  
  **/
  private AllOfServerOrderFieldLabelsOs os = null;
  
  @Schema(description = "Control Panel field label.")
 /**
   * Control Panel field label.  
  **/
  private AllOfServerOrderFieldLabelsCp cp = null;
  
  @Schema(description = "RAID field label.")
 /**
   * RAID field label.  
  **/
  private AllOfServerOrderFieldLabelsRaid raid = null;
  
  @Schema(description = "Memory field label.")
 /**
   * Memory field label.  
  **/
  private AllOfServerOrderFieldLabelsMemory memory = null;
  
  @Schema(description = "Hard Drives field label")
 /**
   * Hard Drives field label  
  **/
  private AllOfServerOrderFieldLabelsHd hd = null;
 /**
   * Bandwidth field label.
   * @return bandwidth
  **/
  @JsonProperty("bandwidth")
  public AllOfServerOrderFieldLabelsBandwidth getBandwidth() {
    return bandwidth;
  }

  public void setBandwidth(AllOfServerOrderFieldLabelsBandwidth bandwidth) {
    this.bandwidth = bandwidth;
  }

  public ServerOrderFieldLabels bandwidth(AllOfServerOrderFieldLabelsBandwidth bandwidth) {
    this.bandwidth = bandwidth;
    return this;
  }

 /**
   * IPs field label.
   * @return ips
  **/
  @JsonProperty("ips")
  public AllOfServerOrderFieldLabelsIps getIps() {
    return ips;
  }

  public void setIps(AllOfServerOrderFieldLabelsIps ips) {
    this.ips = ips;
  }

  public ServerOrderFieldLabels ips(AllOfServerOrderFieldLabelsIps ips) {
    this.ips = ips;
    return this;
  }

 /**
   * Operating System field label.
   * @return os
  **/
  @JsonProperty("os")
  public AllOfServerOrderFieldLabelsOs getOs() {
    return os;
  }

  public void setOs(AllOfServerOrderFieldLabelsOs os) {
    this.os = os;
  }

  public ServerOrderFieldLabels os(AllOfServerOrderFieldLabelsOs os) {
    this.os = os;
    return this;
  }

 /**
   * Control Panel field label.
   * @return cp
  **/
  @JsonProperty("cp")
  public AllOfServerOrderFieldLabelsCp getCp() {
    return cp;
  }

  public void setCp(AllOfServerOrderFieldLabelsCp cp) {
    this.cp = cp;
  }

  public ServerOrderFieldLabels cp(AllOfServerOrderFieldLabelsCp cp) {
    this.cp = cp;
    return this;
  }

 /**
   * RAID field label.
   * @return raid
  **/
  @JsonProperty("raid")
  public AllOfServerOrderFieldLabelsRaid getRaid() {
    return raid;
  }

  public void setRaid(AllOfServerOrderFieldLabelsRaid raid) {
    this.raid = raid;
  }

  public ServerOrderFieldLabels raid(AllOfServerOrderFieldLabelsRaid raid) {
    this.raid = raid;
    return this;
  }

 /**
   * Memory field label.
   * @return memory
  **/
  @JsonProperty("memory")
  public AllOfServerOrderFieldLabelsMemory getMemory() {
    return memory;
  }

  public void setMemory(AllOfServerOrderFieldLabelsMemory memory) {
    this.memory = memory;
  }

  public ServerOrderFieldLabels memory(AllOfServerOrderFieldLabelsMemory memory) {
    this.memory = memory;
    return this;
  }

 /**
   * Hard Drives field label
   * @return hd
  **/
  @JsonProperty("hd")
  public AllOfServerOrderFieldLabelsHd getHd() {
    return hd;
  }

  public void setHd(AllOfServerOrderFieldLabelsHd hd) {
    this.hd = hd;
  }

  public ServerOrderFieldLabels hd(AllOfServerOrderFieldLabelsHd hd) {
    this.hd = hd;
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

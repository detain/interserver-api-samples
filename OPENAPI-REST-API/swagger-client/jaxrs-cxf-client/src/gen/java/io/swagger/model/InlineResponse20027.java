package io.swagger.model;

import io.swagger.model.InlineResponse20027Bandwidth;
import io.swagger.model.InlineResponse20027Cp;
import io.swagger.model.InlineResponse20027Ips;
import io.swagger.model.InlineResponse20027Os;
import io.swagger.model.InlineResponse20027Raid;
import java.util.ArrayList;
import java.util.List;

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

public class InlineResponse20027   {
  
  @Schema(description = "")
  private List<InlineResponse20027Bandwidth> bandwidth = null;
  
  @Schema(description = "")
  private List<InlineResponse20027Ips> ips = null;
  
  @Schema(description = "")
  private List<InlineResponse20027Os> os = null;
  
  @Schema(description = "")
  private List<InlineResponse20027Cp> cp = null;
  
  @Schema(description = "")
  private List<InlineResponse20027Raid> raid = null;
 /**
   * Get bandwidth
   * @return bandwidth
  **/
  @JsonProperty("bandwidth")
  public List<InlineResponse20027Bandwidth> getBandwidth() {
    return bandwidth;
  }

  public void setBandwidth(List<InlineResponse20027Bandwidth> bandwidth) {
    this.bandwidth = bandwidth;
  }

  public InlineResponse20027 bandwidth(List<InlineResponse20027Bandwidth> bandwidth) {
    this.bandwidth = bandwidth;
    return this;
  }

  public InlineResponse20027 addBandwidthItem(InlineResponse20027Bandwidth bandwidthItem) {
    this.bandwidth.add(bandwidthItem);
    return this;
  }

 /**
   * Get ips
   * @return ips
  **/
  @JsonProperty("ips")
  public List<InlineResponse20027Ips> getIps() {
    return ips;
  }

  public void setIps(List<InlineResponse20027Ips> ips) {
    this.ips = ips;
  }

  public InlineResponse20027 ips(List<InlineResponse20027Ips> ips) {
    this.ips = ips;
    return this;
  }

  public InlineResponse20027 addIpsItem(InlineResponse20027Ips ipsItem) {
    this.ips.add(ipsItem);
    return this;
  }

 /**
   * Get os
   * @return os
  **/
  @JsonProperty("os")
  public List<InlineResponse20027Os> getOs() {
    return os;
  }

  public void setOs(List<InlineResponse20027Os> os) {
    this.os = os;
  }

  public InlineResponse20027 os(List<InlineResponse20027Os> os) {
    this.os = os;
    return this;
  }

  public InlineResponse20027 addOsItem(InlineResponse20027Os osItem) {
    this.os.add(osItem);
    return this;
  }

 /**
   * Get cp
   * @return cp
  **/
  @JsonProperty("cp")
  public List<InlineResponse20027Cp> getCp() {
    return cp;
  }

  public void setCp(List<InlineResponse20027Cp> cp) {
    this.cp = cp;
  }

  public InlineResponse20027 cp(List<InlineResponse20027Cp> cp) {
    this.cp = cp;
    return this;
  }

  public InlineResponse20027 addCpItem(InlineResponse20027Cp cpItem) {
    this.cp.add(cpItem);
    return this;
  }

 /**
   * Get raid
   * @return raid
  **/
  @JsonProperty("raid")
  public List<InlineResponse20027Raid> getRaid() {
    return raid;
  }

  public void setRaid(List<InlineResponse20027Raid> raid) {
    this.raid = raid;
  }

  public InlineResponse20027 raid(List<InlineResponse20027Raid> raid) {
    this.raid = raid;
    return this;
  }

  public InlineResponse20027 addRaidItem(InlineResponse20027Raid raidItem) {
    this.raid.add(raidItem);
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse20027 {\n");
    
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

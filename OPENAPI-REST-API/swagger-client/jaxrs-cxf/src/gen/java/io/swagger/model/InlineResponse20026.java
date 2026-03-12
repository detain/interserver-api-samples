package io.swagger.model;

import io.swagger.model.InlineResponse20026Bandwidth;
import io.swagger.model.InlineResponse20026Cp;
import io.swagger.model.InlineResponse20026Ips;
import io.swagger.model.InlineResponse20026Os;
import io.swagger.model.InlineResponse20026Raid;
import java.util.ArrayList;
import java.util.List;
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

public class InlineResponse20026   {
  
  @Schema(description = "")
  private List<InlineResponse20026Bandwidth> bandwidth = null;
  
  @Schema(description = "")
  private List<InlineResponse20026Ips> ips = null;
  
  @Schema(description = "")
  private List<InlineResponse20026Os> os = null;
  
  @Schema(description = "")
  private List<InlineResponse20026Cp> cp = null;
  
  @Schema(description = "")
  private List<InlineResponse20026Raid> raid = null;
 /**
   * Get bandwidth
   * @return bandwidth
  **/
  @JsonProperty("bandwidth")
  @NotNull
  public List<InlineResponse20026Bandwidth> getBandwidth() {
    return bandwidth;
  }

  public void setBandwidth(List<InlineResponse20026Bandwidth> bandwidth) {
    this.bandwidth = bandwidth;
  }

  public InlineResponse20026 bandwidth(List<InlineResponse20026Bandwidth> bandwidth) {
    this.bandwidth = bandwidth;
    return this;
  }

  public InlineResponse20026 addBandwidthItem(InlineResponse20026Bandwidth bandwidthItem) {
    this.bandwidth.add(bandwidthItem);
    return this;
  }

 /**
   * Get ips
   * @return ips
  **/
  @JsonProperty("ips")
  @NotNull
  public List<InlineResponse20026Ips> getIps() {
    return ips;
  }

  public void setIps(List<InlineResponse20026Ips> ips) {
    this.ips = ips;
  }

  public InlineResponse20026 ips(List<InlineResponse20026Ips> ips) {
    this.ips = ips;
    return this;
  }

  public InlineResponse20026 addIpsItem(InlineResponse20026Ips ipsItem) {
    this.ips.add(ipsItem);
    return this;
  }

 /**
   * Get os
   * @return os
  **/
  @JsonProperty("os")
  @NotNull
  public List<InlineResponse20026Os> getOs() {
    return os;
  }

  public void setOs(List<InlineResponse20026Os> os) {
    this.os = os;
  }

  public InlineResponse20026 os(List<InlineResponse20026Os> os) {
    this.os = os;
    return this;
  }

  public InlineResponse20026 addOsItem(InlineResponse20026Os osItem) {
    this.os.add(osItem);
    return this;
  }

 /**
   * Get cp
   * @return cp
  **/
  @JsonProperty("cp")
  @NotNull
  public List<InlineResponse20026Cp> getCp() {
    return cp;
  }

  public void setCp(List<InlineResponse20026Cp> cp) {
    this.cp = cp;
  }

  public InlineResponse20026 cp(List<InlineResponse20026Cp> cp) {
    this.cp = cp;
    return this;
  }

  public InlineResponse20026 addCpItem(InlineResponse20026Cp cpItem) {
    this.cp.add(cpItem);
    return this;
  }

 /**
   * Get raid
   * @return raid
  **/
  @JsonProperty("raid")
  @NotNull
  public List<InlineResponse20026Raid> getRaid() {
    return raid;
  }

  public void setRaid(List<InlineResponse20026Raid> raid) {
    this.raid = raid;
  }

  public InlineResponse20026 raid(List<InlineResponse20026Raid> raid) {
    this.raid = raid;
    return this;
  }

  public InlineResponse20026 addRaidItem(InlineResponse20026Raid raidItem) {
    this.raid.add(raidItem);
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse20026 {\n");
    
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

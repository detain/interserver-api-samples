package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.InlineResponse20026Bandwidth;
import io.swagger.model.InlineResponse20026Cp;
import io.swagger.model.InlineResponse20026Ips;
import io.swagger.model.InlineResponse20026Os;
import io.swagger.model.InlineResponse20026Raid;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import org.springframework.validation.annotation.Validated;
import org.openapitools.jackson.nullable.JsonNullable;
import io.swagger.configuration.NotUndefined;
import com.fasterxml.jackson.annotation.JsonInclude;
import com.fasterxml.jackson.annotation.JsonSetter;
import com.fasterxml.jackson.annotation.Nulls;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * InlineResponse20026
 */
@Validated
@NotUndefined



public class InlineResponse20026   {
  @JsonProperty("bandwidth")
  @Valid
  private List<InlineResponse20026Bandwidth> bandwidth = null;
  @JsonProperty("ips")
  @Valid
  private List<InlineResponse20026Ips> ips = null;
  @JsonProperty("os")
  @Valid
  private List<InlineResponse20026Os> os = null;
  @JsonProperty("cp")
  @Valid
  private List<InlineResponse20026Cp> cp = null;
  @JsonProperty("raid")
  @Valid
  private List<InlineResponse20026Raid> raid = null;

  public InlineResponse20026 bandwidth(List<InlineResponse20026Bandwidth> bandwidth) { 

    this.bandwidth = bandwidth;
    return this;
  }

  public InlineResponse20026 addBandwidthItem(InlineResponse20026Bandwidth bandwidthItem) {
    if (this.bandwidth == null) {
      this.bandwidth = new ArrayList<InlineResponse20026Bandwidth>();
    }
    this.bandwidth.add(bandwidthItem);
    return this;
  }

  /**
   * Get bandwidth
   * @return bandwidth
   **/
  
  @Schema(description = "")
  @Valid
  public List<InlineResponse20026Bandwidth> getBandwidth() {  
    return bandwidth;
  }



  public void setBandwidth(List<InlineResponse20026Bandwidth> bandwidth) { 
    this.bandwidth = bandwidth;
  }

  public InlineResponse20026 ips(List<InlineResponse20026Ips> ips) { 

    this.ips = ips;
    return this;
  }

  public InlineResponse20026 addIpsItem(InlineResponse20026Ips ipsItem) {
    if (this.ips == null) {
      this.ips = new ArrayList<InlineResponse20026Ips>();
    }
    this.ips.add(ipsItem);
    return this;
  }

  /**
   * Get ips
   * @return ips
   **/
  
  @Schema(description = "")
  @Valid
  public List<InlineResponse20026Ips> getIps() {  
    return ips;
  }



  public void setIps(List<InlineResponse20026Ips> ips) { 
    this.ips = ips;
  }

  public InlineResponse20026 os(List<InlineResponse20026Os> os) { 

    this.os = os;
    return this;
  }

  public InlineResponse20026 addOsItem(InlineResponse20026Os osItem) {
    if (this.os == null) {
      this.os = new ArrayList<InlineResponse20026Os>();
    }
    this.os.add(osItem);
    return this;
  }

  /**
   * Get os
   * @return os
   **/
  
  @Schema(description = "")
  @Valid
  public List<InlineResponse20026Os> getOs() {  
    return os;
  }



  public void setOs(List<InlineResponse20026Os> os) { 
    this.os = os;
  }

  public InlineResponse20026 cp(List<InlineResponse20026Cp> cp) { 

    this.cp = cp;
    return this;
  }

  public InlineResponse20026 addCpItem(InlineResponse20026Cp cpItem) {
    if (this.cp == null) {
      this.cp = new ArrayList<InlineResponse20026Cp>();
    }
    this.cp.add(cpItem);
    return this;
  }

  /**
   * Get cp
   * @return cp
   **/
  
  @Schema(description = "")
  @Valid
  public List<InlineResponse20026Cp> getCp() {  
    return cp;
  }



  public void setCp(List<InlineResponse20026Cp> cp) { 
    this.cp = cp;
  }

  public InlineResponse20026 raid(List<InlineResponse20026Raid> raid) { 

    this.raid = raid;
    return this;
  }

  public InlineResponse20026 addRaidItem(InlineResponse20026Raid raidItem) {
    if (this.raid == null) {
      this.raid = new ArrayList<InlineResponse20026Raid>();
    }
    this.raid.add(raidItem);
    return this;
  }

  /**
   * Get raid
   * @return raid
   **/
  
  @Schema(description = "")
  @Valid
  public List<InlineResponse20026Raid> getRaid() {  
    return raid;
  }



  public void setRaid(List<InlineResponse20026Raid> raid) { 
    this.raid = raid;
  }

  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InlineResponse20026 inlineResponse20026 = (InlineResponse20026) o;
    return Objects.equals(this.bandwidth, inlineResponse20026.bandwidth) &&
        Objects.equals(this.ips, inlineResponse20026.ips) &&
        Objects.equals(this.os, inlineResponse20026.os) &&
        Objects.equals(this.cp, inlineResponse20026.cp) &&
        Objects.equals(this.raid, inlineResponse20026.raid);
  }

  @Override
  public int hashCode() {
    return Objects.hash(bandwidth, ips, os, cp, raid);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

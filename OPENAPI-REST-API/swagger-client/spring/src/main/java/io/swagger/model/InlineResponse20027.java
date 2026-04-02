package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.InlineResponse20027Bandwidth;
import io.swagger.model.InlineResponse20027Cp;
import io.swagger.model.InlineResponse20027Ips;
import io.swagger.model.InlineResponse20027Os;
import io.swagger.model.InlineResponse20027Raid;
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
 * InlineResponse20027
 */
@Validated
@NotUndefined



public class InlineResponse20027   {
  @JsonProperty("bandwidth")
  @Valid
  private List<InlineResponse20027Bandwidth> bandwidth = null;
  @JsonProperty("ips")
  @Valid
  private List<InlineResponse20027Ips> ips = null;
  @JsonProperty("os")
  @Valid
  private List<InlineResponse20027Os> os = null;
  @JsonProperty("cp")
  @Valid
  private List<InlineResponse20027Cp> cp = null;
  @JsonProperty("raid")
  @Valid
  private List<InlineResponse20027Raid> raid = null;

  public InlineResponse20027 bandwidth(List<InlineResponse20027Bandwidth> bandwidth) { 

    this.bandwidth = bandwidth;
    return this;
  }

  public InlineResponse20027 addBandwidthItem(InlineResponse20027Bandwidth bandwidthItem) {
    if (this.bandwidth == null) {
      this.bandwidth = new ArrayList<InlineResponse20027Bandwidth>();
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
  public List<InlineResponse20027Bandwidth> getBandwidth() {  
    return bandwidth;
  }



  public void setBandwidth(List<InlineResponse20027Bandwidth> bandwidth) { 
    this.bandwidth = bandwidth;
  }

  public InlineResponse20027 ips(List<InlineResponse20027Ips> ips) { 

    this.ips = ips;
    return this;
  }

  public InlineResponse20027 addIpsItem(InlineResponse20027Ips ipsItem) {
    if (this.ips == null) {
      this.ips = new ArrayList<InlineResponse20027Ips>();
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
  public List<InlineResponse20027Ips> getIps() {  
    return ips;
  }



  public void setIps(List<InlineResponse20027Ips> ips) { 
    this.ips = ips;
  }

  public InlineResponse20027 os(List<InlineResponse20027Os> os) { 

    this.os = os;
    return this;
  }

  public InlineResponse20027 addOsItem(InlineResponse20027Os osItem) {
    if (this.os == null) {
      this.os = new ArrayList<InlineResponse20027Os>();
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
  public List<InlineResponse20027Os> getOs() {  
    return os;
  }



  public void setOs(List<InlineResponse20027Os> os) { 
    this.os = os;
  }

  public InlineResponse20027 cp(List<InlineResponse20027Cp> cp) { 

    this.cp = cp;
    return this;
  }

  public InlineResponse20027 addCpItem(InlineResponse20027Cp cpItem) {
    if (this.cp == null) {
      this.cp = new ArrayList<InlineResponse20027Cp>();
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
  public List<InlineResponse20027Cp> getCp() {  
    return cp;
  }



  public void setCp(List<InlineResponse20027Cp> cp) { 
    this.cp = cp;
  }

  public InlineResponse20027 raid(List<InlineResponse20027Raid> raid) { 

    this.raid = raid;
    return this;
  }

  public InlineResponse20027 addRaidItem(InlineResponse20027Raid raidItem) {
    if (this.raid == null) {
      this.raid = new ArrayList<InlineResponse20027Raid>();
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
  public List<InlineResponse20027Raid> getRaid() {  
    return raid;
  }



  public void setRaid(List<InlineResponse20027Raid> raid) { 
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
    InlineResponse20027 inlineResponse20027 = (InlineResponse20027) o;
    return Objects.equals(this.bandwidth, inlineResponse20027.bandwidth) &&
        Objects.equals(this.ips, inlineResponse20027.ips) &&
        Objects.equals(this.os, inlineResponse20027.os) &&
        Objects.equals(this.cp, inlineResponse20027.cp) &&
        Objects.equals(this.raid, inlineResponse20027.raid);
  }

  @Override
  public int hashCode() {
    return Objects.hash(bandwidth, ips, os, cp, raid);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.InlineResponse20026Bandwidth;
import io.swagger.model.InlineResponse20026Cp;
import io.swagger.model.InlineResponse20026Ips;
import io.swagger.model.InlineResponse20026Os;
import io.swagger.model.InlineResponse20026Raid;
import java.util.ArrayList;
import java.util.List;
import javax.validation.Valid;
import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;



public class InlineResponse20026   {
  private List<InlineResponse20026Bandwidth> bandwidth = new ArrayList<InlineResponse20026Bandwidth>();
  private List<InlineResponse20026Ips> ips = new ArrayList<InlineResponse20026Ips>();
  private List<InlineResponse20026Os> os = new ArrayList<InlineResponse20026Os>();
  private List<InlineResponse20026Cp> cp = new ArrayList<InlineResponse20026Cp>();
  private List<InlineResponse20026Raid> raid = new ArrayList<InlineResponse20026Raid>();

  /**
   **/
  public InlineResponse20026 bandwidth(List<InlineResponse20026Bandwidth> bandwidth) {
    this.bandwidth = bandwidth;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("bandwidth")
  @NotNull
  @Valid
  public List<InlineResponse20026Bandwidth> getBandwidth() {
    return bandwidth;
  }
  public void setBandwidth(List<InlineResponse20026Bandwidth> bandwidth) {
    this.bandwidth = bandwidth;
  }

  /**
   **/
  public InlineResponse20026 ips(List<InlineResponse20026Ips> ips) {
    this.ips = ips;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("ips")
  @NotNull
  @Valid
  public List<InlineResponse20026Ips> getIps() {
    return ips;
  }
  public void setIps(List<InlineResponse20026Ips> ips) {
    this.ips = ips;
  }

  /**
   **/
  public InlineResponse20026 os(List<InlineResponse20026Os> os) {
    this.os = os;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("os")
  @NotNull
  @Valid
  public List<InlineResponse20026Os> getOs() {
    return os;
  }
  public void setOs(List<InlineResponse20026Os> os) {
    this.os = os;
  }

  /**
   **/
  public InlineResponse20026 cp(List<InlineResponse20026Cp> cp) {
    this.cp = cp;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("cp")
  @NotNull
  @Valid
  public List<InlineResponse20026Cp> getCp() {
    return cp;
  }
  public void setCp(List<InlineResponse20026Cp> cp) {
    this.cp = cp;
  }

  /**
   **/
  public InlineResponse20026 raid(List<InlineResponse20026Raid> raid) {
    this.raid = raid;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("raid")
  @NotNull
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
    return Objects.equals(bandwidth, inlineResponse20026.bandwidth) &&
        Objects.equals(ips, inlineResponse20026.ips) &&
        Objects.equals(os, inlineResponse20026.os) &&
        Objects.equals(cp, inlineResponse20026.cp) &&
        Objects.equals(raid, inlineResponse20026.raid);
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

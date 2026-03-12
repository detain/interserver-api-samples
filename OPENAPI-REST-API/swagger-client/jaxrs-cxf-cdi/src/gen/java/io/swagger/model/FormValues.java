package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
/**
 * Currently selected configuration option IDs for a server order form.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "Currently selected configuration option IDs for a server order form.")

public class FormValues   {
  private Integer memory = null;
  private Integer bandwidth = null;
  private Integer ips = null;
  private Integer os = null;
  private Integer cp = null;
  private Integer raid = null;
  private Integer hd = null;
  private Integer region = null;

  /**
   * Selected memory option ID.
   **/
  public FormValues memory(Integer memory) {
    this.memory = memory;
    return this;
  }

  
  
  @Schema(description = "Selected memory option ID.")
  @JsonProperty("memory")
  @NotNull
  public Integer getMemory() {
    return memory;
  }
  public void setMemory(Integer memory) {
    this.memory = memory;
  }

  /**
   * Selected bandwidth option ID.
   **/
  public FormValues bandwidth(Integer bandwidth) {
    this.bandwidth = bandwidth;
    return this;
  }

  
  
  @Schema(description = "Selected bandwidth option ID.")
  @JsonProperty("bandwidth")
  @NotNull
  public Integer getBandwidth() {
    return bandwidth;
  }
  public void setBandwidth(Integer bandwidth) {
    this.bandwidth = bandwidth;
  }

  /**
   * Selected IP block option ID.
   **/
  public FormValues ips(Integer ips) {
    this.ips = ips;
    return this;
  }

  
  
  @Schema(description = "Selected IP block option ID.")
  @JsonProperty("ips")
  @NotNull
  public Integer getIps() {
    return ips;
  }
  public void setIps(Integer ips) {
    this.ips = ips;
  }

  /**
   * Selected operating system option ID.
   **/
  public FormValues os(Integer os) {
    this.os = os;
    return this;
  }

  
  
  @Schema(description = "Selected operating system option ID.")
  @JsonProperty("os")
  @NotNull
  public Integer getOs() {
    return os;
  }
  public void setOs(Integer os) {
    this.os = os;
  }

  /**
   * Selected control panel option ID.
   **/
  public FormValues cp(Integer cp) {
    this.cp = cp;
    return this;
  }

  
  
  @Schema(description = "Selected control panel option ID.")
  @JsonProperty("cp")
  @NotNull
  public Integer getCp() {
    return cp;
  }
  public void setCp(Integer cp) {
    this.cp = cp;
  }

  /**
   * Selected RAID option ID.
   **/
  public FormValues raid(Integer raid) {
    this.raid = raid;
    return this;
  }

  
  
  @Schema(description = "Selected RAID option ID.")
  @JsonProperty("raid")
  @NotNull
  public Integer getRaid() {
    return raid;
  }
  public void setRaid(Integer raid) {
    this.raid = raid;
  }

  /**
   * Selected hard drive option ID.
   **/
  public FormValues hd(Integer hd) {
    this.hd = hd;
    return this;
  }

  
  
  @Schema(description = "Selected hard drive option ID.")
  @JsonProperty("hd")
  @NotNull
  public Integer getHd() {
    return hd;
  }
  public void setHd(Integer hd) {
    this.hd = hd;
  }

  /**
   * Selected datacenter region ID.
   **/
  public FormValues region(Integer region) {
    this.region = region;
    return this;
  }

  
  
  @Schema(description = "Selected datacenter region ID.")
  @JsonProperty("region")
  @NotNull
  public Integer getRegion() {
    return region;
  }
  public void setRegion(Integer region) {
    this.region = region;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    FormValues formValues = (FormValues) o;
    return Objects.equals(memory, formValues.memory) &&
        Objects.equals(bandwidth, formValues.bandwidth) &&
        Objects.equals(ips, formValues.ips) &&
        Objects.equals(os, formValues.os) &&
        Objects.equals(cp, formValues.cp) &&
        Objects.equals(raid, formValues.raid) &&
        Objects.equals(hd, formValues.hd) &&
        Objects.equals(region, formValues.region);
  }

  @Override
  public int hashCode() {
    return Objects.hash(memory, bandwidth, ips, os, cp, raid, hd, region);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

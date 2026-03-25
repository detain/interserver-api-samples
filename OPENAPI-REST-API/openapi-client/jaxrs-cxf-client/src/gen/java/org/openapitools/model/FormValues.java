package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Currently selected configuration option IDs for a server order form.
 */
@ApiModel(description="Currently selected configuration option IDs for a server order form.")

public class FormValues  {
  
 /**
  * Selected memory option ID.
  */
  @ApiModelProperty(value = "Selected memory option ID.")

  private Integer memory;

 /**
  * Selected bandwidth option ID.
  */
  @ApiModelProperty(value = "Selected bandwidth option ID.")

  private Integer bandwidth;

 /**
  * Selected IP block option ID.
  */
  @ApiModelProperty(value = "Selected IP block option ID.")

  private Integer ips;

 /**
  * Selected operating system option ID.
  */
  @ApiModelProperty(value = "Selected operating system option ID.")

  private Integer os;

 /**
  * Selected control panel option ID.
  */
  @ApiModelProperty(value = "Selected control panel option ID.")

  private Integer cp;

 /**
  * Selected RAID option ID.
  */
  @ApiModelProperty(value = "Selected RAID option ID.")

  private Integer raid;

 /**
  * Selected hard drive option ID.
  */
  @ApiModelProperty(value = "Selected hard drive option ID.")

  private Integer hd;

 /**
  * Selected datacenter region ID.
  */
  @ApiModelProperty(value = "Selected datacenter region ID.")

  private Integer region;
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    FormValues formValues = (FormValues) o;
    return Objects.equals(this.memory, formValues.memory) &&
        Objects.equals(this.bandwidth, formValues.bandwidth) &&
        Objects.equals(this.ips, formValues.ips) &&
        Objects.equals(this.os, formValues.os) &&
        Objects.equals(this.cp, formValues.cp) &&
        Objects.equals(this.raid, formValues.raid) &&
        Objects.equals(this.hd, formValues.hd) &&
        Objects.equals(this.region, formValues.region);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}


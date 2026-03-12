package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import org.springframework.validation.annotation.Validated;
import org.openapitools.jackson.nullable.JsonNullable;
import io.swagger.configuration.NotUndefined;
import com.fasterxml.jackson.annotation.JsonInclude;
import com.fasterxml.jackson.annotation.JsonSetter;
import com.fasterxml.jackson.annotation.Nulls;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * Currently selected configuration option IDs for a server order form.
 */
@Schema(description = "Currently selected configuration option IDs for a server order form.")
@Validated
@NotUndefined



public class FormValues   {
  @JsonProperty("memory")

  @JsonInclude(JsonInclude.Include.NON_ABSENT)  // Exclude from JSON if absent
  @JsonSetter(nulls = Nulls.FAIL)    // FAIL setting if the value is null
  private Integer memory = null;

  @JsonProperty("bandwidth")

  @JsonInclude(JsonInclude.Include.NON_ABSENT)  // Exclude from JSON if absent
  @JsonSetter(nulls = Nulls.FAIL)    // FAIL setting if the value is null
  private Integer bandwidth = null;

  @JsonProperty("ips")

  @JsonInclude(JsonInclude.Include.NON_ABSENT)  // Exclude from JSON if absent
  @JsonSetter(nulls = Nulls.FAIL)    // FAIL setting if the value is null
  private Integer ips = null;

  @JsonProperty("os")

  @JsonInclude(JsonInclude.Include.NON_ABSENT)  // Exclude from JSON if absent
  @JsonSetter(nulls = Nulls.FAIL)    // FAIL setting if the value is null
  private Integer os = null;

  @JsonProperty("cp")

  @JsonInclude(JsonInclude.Include.NON_ABSENT)  // Exclude from JSON if absent
  @JsonSetter(nulls = Nulls.FAIL)    // FAIL setting if the value is null
  private Integer cp = null;

  @JsonProperty("raid")

  @JsonInclude(JsonInclude.Include.NON_ABSENT)  // Exclude from JSON if absent
  @JsonSetter(nulls = Nulls.FAIL)    // FAIL setting if the value is null
  private Integer raid = null;

  @JsonProperty("hd")

  @JsonInclude(JsonInclude.Include.NON_ABSENT)  // Exclude from JSON if absent
  @JsonSetter(nulls = Nulls.FAIL)    // FAIL setting if the value is null
  private Integer hd = null;

  @JsonProperty("region")

  @JsonInclude(JsonInclude.Include.NON_ABSENT)  // Exclude from JSON if absent
  @JsonSetter(nulls = Nulls.FAIL)    // FAIL setting if the value is null
  private Integer region = null;


  public FormValues memory(Integer memory) { 

    this.memory = memory;
    return this;
  }

  /**
   * Selected memory option ID.
   * @return memory
   **/
  
  @Schema(description = "Selected memory option ID.")
  
  public Integer getMemory() {  
    return memory;
  }



  public void setMemory(Integer memory) { 
    this.memory = memory;
  }

  public FormValues bandwidth(Integer bandwidth) { 

    this.bandwidth = bandwidth;
    return this;
  }

  /**
   * Selected bandwidth option ID.
   * @return bandwidth
   **/
  
  @Schema(description = "Selected bandwidth option ID.")
  
  public Integer getBandwidth() {  
    return bandwidth;
  }



  public void setBandwidth(Integer bandwidth) { 
    this.bandwidth = bandwidth;
  }

  public FormValues ips(Integer ips) { 

    this.ips = ips;
    return this;
  }

  /**
   * Selected IP block option ID.
   * @return ips
   **/
  
  @Schema(description = "Selected IP block option ID.")
  
  public Integer getIps() {  
    return ips;
  }



  public void setIps(Integer ips) { 
    this.ips = ips;
  }

  public FormValues os(Integer os) { 

    this.os = os;
    return this;
  }

  /**
   * Selected operating system option ID.
   * @return os
   **/
  
  @Schema(description = "Selected operating system option ID.")
  
  public Integer getOs() {  
    return os;
  }



  public void setOs(Integer os) { 
    this.os = os;
  }

  public FormValues cp(Integer cp) { 

    this.cp = cp;
    return this;
  }

  /**
   * Selected control panel option ID.
   * @return cp
   **/
  
  @Schema(description = "Selected control panel option ID.")
  
  public Integer getCp() {  
    return cp;
  }



  public void setCp(Integer cp) { 
    this.cp = cp;
  }

  public FormValues raid(Integer raid) { 

    this.raid = raid;
    return this;
  }

  /**
   * Selected RAID option ID.
   * @return raid
   **/
  
  @Schema(description = "Selected RAID option ID.")
  
  public Integer getRaid() {  
    return raid;
  }



  public void setRaid(Integer raid) { 
    this.raid = raid;
  }

  public FormValues hd(Integer hd) { 

    this.hd = hd;
    return this;
  }

  /**
   * Selected hard drive option ID.
   * @return hd
   **/
  
  @Schema(description = "Selected hard drive option ID.")
  
  public Integer getHd() {  
    return hd;
  }



  public void setHd(Integer hd) { 
    this.hd = hd;
  }

  public FormValues region(Integer region) { 

    this.region = region;
    return this;
  }

  /**
   * Selected datacenter region ID.
   * @return region
   **/
  
  @Schema(description = "Selected datacenter region ID.")
  
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

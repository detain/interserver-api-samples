package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Internal configuration IDs mapped from the selected form values for a server order.")

public class ConfigIds   {
  private Integer memory = null;
  private Integer hd = null;
  private Integer bandwidth = null;
  private Integer ips = null;
  private Integer os = null;
  private Integer cp = null;
  private Integer raid = null;

  /**
   * Configuration ID for the selected memory option.
   **/
  
  @Schema(description = "Configuration ID for the selected memory option.")
  @JsonProperty("memory")
  @NotNull
  public Integer getMemory() {
    return memory;
  }
  public void setMemory(Integer memory) {
    this.memory = memory;
  }

  /**
   * Configuration ID for the selected hard drive option.
   **/
  
  @Schema(description = "Configuration ID for the selected hard drive option.")
  @JsonProperty("hd")
  @NotNull
  public Integer getHd() {
    return hd;
  }
  public void setHd(Integer hd) {
    this.hd = hd;
  }

  /**
   * Configuration ID for the selected bandwidth option.
   **/
  
  @Schema(description = "Configuration ID for the selected bandwidth option.")
  @JsonProperty("bandwidth")
  @NotNull
  public Integer getBandwidth() {
    return bandwidth;
  }
  public void setBandwidth(Integer bandwidth) {
    this.bandwidth = bandwidth;
  }

  /**
   * Configuration ID for the selected IP block option.
   **/
  
  @Schema(description = "Configuration ID for the selected IP block option.")
  @JsonProperty("ips")
  @NotNull
  public Integer getIps() {
    return ips;
  }
  public void setIps(Integer ips) {
    this.ips = ips;
  }

  /**
   * Configuration ID for the selected operating system.
   **/
  
  @Schema(description = "Configuration ID for the selected operating system.")
  @JsonProperty("os")
  @NotNull
  public Integer getOs() {
    return os;
  }
  public void setOs(Integer os) {
    this.os = os;
  }

  /**
   * Configuration ID for the selected control panel.
   **/
  
  @Schema(description = "Configuration ID for the selected control panel.")
  @JsonProperty("cp")
  @NotNull
  public Integer getCp() {
    return cp;
  }
  public void setCp(Integer cp) {
    this.cp = cp;
  }

  /**
   * Configuration ID for the selected RAID option.
   **/
  
  @Schema(description = "Configuration ID for the selected RAID option.")
  @JsonProperty("raid")
  @NotNull
  public Integer getRaid() {
    return raid;
  }
  public void setRaid(Integer raid) {
    this.raid = raid;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ConfigIds configIds = (ConfigIds) o;
    return Objects.equals(memory, configIds.memory) &&
        Objects.equals(hd, configIds.hd) &&
        Objects.equals(bandwidth, configIds.bandwidth) &&
        Objects.equals(ips, configIds.ips) &&
        Objects.equals(os, configIds.os) &&
        Objects.equals(cp, configIds.cp) &&
        Objects.equals(raid, configIds.raid);
  }

  @Override
  public int hashCode() {
    return Objects.hash(memory, hd, bandwidth, ips, os, cp, raid);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ConfigIds {\n");
    
    sb.append("    memory: ").append(toIndentedString(memory)).append("\n");
    sb.append("    hd: ").append(toIndentedString(hd)).append("\n");
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Configuration IDs for the server order.")

public class ServerOrderConfigIds   {
  private Integer memory = null;  private String bandwidth = null;  private String ips = null;  private String os = null;  private Integer cp = null;  private String raid = null;  private String hd = null;

  /**
   * Memory configuration ID for the server order.
   **/
  
  @Schema(example = "22", description = "Memory configuration ID for the server order.")
  @JsonProperty("memory")
  @NotNull
  public Integer getMemory() {
    return memory;
  }
  public void setMemory(Integer memory) {
    this.memory = memory;
  }

  /**
   * Bandwidth configuration ID for the server order.
   **/
  
  @Schema(example = "3", description = "Bandwidth configuration ID for the server order.")
  @JsonProperty("bandwidth")
  @NotNull
  public String getBandwidth() {
    return bandwidth;
  }
  public void setBandwidth(String bandwidth) {
    this.bandwidth = bandwidth;
  }

  /**
   * IPs configuration ID for the server order.
   **/
  
  @Schema(example = "9", description = "IPs configuration ID for the server order.")
  @JsonProperty("ips")
  @NotNull
  public String getIps() {
    return ips;
  }
  public void setIps(String ips) {
    this.ips = ips;
  }

  /**
   * Operating System configuration ID for the server order.
   **/
  
  @Schema(example = "5", description = "Operating System configuration ID for the server order.")
  @JsonProperty("os")
  @NotNull
  public String getOs() {
    return os;
  }
  public void setOs(String os) {
    this.os = os;
  }

  /**
   * Control Panel configuration ID for the server order.
   **/
  
  @Schema(example = "5", description = "Control Panel configuration ID for the server order.")
  @JsonProperty("cp")
  @NotNull
  public Integer getCp() {
    return cp;
  }
  public void setCp(Integer cp) {
    this.cp = cp;
  }

  /**
   * RAID configuration ID for the server order.
   **/
  
  @Schema(example = "0", description = "RAID configuration ID for the server order.")
  @JsonProperty("raid")
  @NotNull
  public String getRaid() {
    return raid;
  }
  public void setRaid(String raid) {
    this.raid = raid;
  }

  /**
   * Hard Drives configuration ID for the server order.
   **/
  
  @Schema(example = "16", description = "Hard Drives configuration ID for the server order.")
  @JsonProperty("hd")
  @NotNull
  public String getHd() {
    return hd;
  }
  public void setHd(String hd) {
    this.hd = hd;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServerOrderConfigIds serverOrderConfigIds = (ServerOrderConfigIds) o;
    return Objects.equals(memory, serverOrderConfigIds.memory) &&
        Objects.equals(bandwidth, serverOrderConfigIds.bandwidth) &&
        Objects.equals(ips, serverOrderConfigIds.ips) &&
        Objects.equals(os, serverOrderConfigIds.os) &&
        Objects.equals(cp, serverOrderConfigIds.cp) &&
        Objects.equals(raid, serverOrderConfigIds.raid) &&
        Objects.equals(hd, serverOrderConfigIds.hd);
  }

  @Override
  public int hashCode() {
    return Objects.hash(memory, bandwidth, ips, os, cp, raid, hd);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerOrderConfigIds {\n");
    
    sb.append("    memory: ").append(toIndentedString(memory)).append("\n");
    sb.append("    bandwidth: ").append(toIndentedString(bandwidth)).append("\n");
    sb.append("    ips: ").append(toIndentedString(ips)).append("\n");
    sb.append("    os: ").append(toIndentedString(os)).append("\n");
    sb.append("    cp: ").append(toIndentedString(cp)).append("\n");
    sb.append("    raid: ").append(toIndentedString(raid)).append("\n");
    sb.append("    hd: ").append(toIndentedString(hd)).append("\n");
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

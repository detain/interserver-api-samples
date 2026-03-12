package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * Form values for the server order.
 **/
@Schema(description = "Form values for the server order.")


public class ServerOrderFormValues   {
  @JsonProperty("memory")
  private Integer memory = null;
  @JsonProperty("bandwidth")
  private String bandwidth = null;
  @JsonProperty("ips")
  private String ips = null;
  @JsonProperty("os")
  private String os = null;
  @JsonProperty("cp")
  private Integer cp = null;
  @JsonProperty("raid")
  private String raid = null;
  @JsonProperty("hd")
  private String hd = null;
  /**
   * Memory value for the server order.
   **/
  public ServerOrderFormValues memory(Integer memory) {
    this.memory = memory;
    return this;
  }

  
  @Schema(example = "22", description = "Memory value for the server order.")
  @JsonProperty("memory")
  public Integer getMemory() {
    return memory;
  }
  public void setMemory(Integer memory) {
    this.memory = memory;
  }

  /**
   * Bandwidth value for the server order.
   **/
  public ServerOrderFormValues bandwidth(String bandwidth) {
    this.bandwidth = bandwidth;
    return this;
  }

  
  @Schema(example = "3", description = "Bandwidth value for the server order.")
  @JsonProperty("bandwidth")
  public String getBandwidth() {
    return bandwidth;
  }
  public void setBandwidth(String bandwidth) {
    this.bandwidth = bandwidth;
  }

  /**
   * IPs value for the server order.
   **/
  public ServerOrderFormValues ips(String ips) {
    this.ips = ips;
    return this;
  }

  
  @Schema(example = "9", description = "IPs value for the server order.")
  @JsonProperty("ips")
  public String getIps() {
    return ips;
  }
  public void setIps(String ips) {
    this.ips = ips;
  }

  /**
   * Operating System value for the server order.
   **/
  public ServerOrderFormValues os(String os) {
    this.os = os;
    return this;
  }

  
  @Schema(example = "5", description = "Operating System value for the server order.")
  @JsonProperty("os")
  public String getOs() {
    return os;
  }
  public void setOs(String os) {
    this.os = os;
  }

  /**
   * Control Panel value for the server order.
   **/
  public ServerOrderFormValues cp(Integer cp) {
    this.cp = cp;
    return this;
  }

  
  @Schema(example = "5", description = "Control Panel value for the server order.")
  @JsonProperty("cp")
  public Integer getCp() {
    return cp;
  }
  public void setCp(Integer cp) {
    this.cp = cp;
  }

  /**
   * RAID value for the server order.
   **/
  public ServerOrderFormValues raid(String raid) {
    this.raid = raid;
    return this;
  }

  
  @Schema(example = "0", description = "RAID value for the server order.")
  @JsonProperty("raid")
  public String getRaid() {
    return raid;
  }
  public void setRaid(String raid) {
    this.raid = raid;
  }

  /**
   * Hard Drives value for the server order.
   **/
  public ServerOrderFormValues hd(String hd) {
    this.hd = hd;
    return this;
  }

  
  @Schema(example = "16", description = "Hard Drives value for the server order.")
  @JsonProperty("hd")
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
    ServerOrderFormValues serverOrderFormValues = (ServerOrderFormValues) o;
    return Objects.equals(memory, serverOrderFormValues.memory) &&
        Objects.equals(bandwidth, serverOrderFormValues.bandwidth) &&
        Objects.equals(ips, serverOrderFormValues.ips) &&
        Objects.equals(os, serverOrderFormValues.os) &&
        Objects.equals(cp, serverOrderFormValues.cp) &&
        Objects.equals(raid, serverOrderFormValues.raid) &&
        Objects.equals(hd, serverOrderFormValues.hd);
  }

  @Override
  public int hashCode() {
    return Objects.hash(memory, bandwidth, ips, os, cp, raid, hd);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerOrderFormValues {\n");
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

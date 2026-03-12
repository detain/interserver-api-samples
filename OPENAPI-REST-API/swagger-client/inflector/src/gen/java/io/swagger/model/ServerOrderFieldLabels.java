package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * Field labels for the server order.
 **/
@Schema(description = "Field labels for the server order.")


public class ServerOrderFieldLabels   {
  @JsonProperty("bandwidth")
  private AllOfServerOrderFieldLabelsBandwidth bandwidth = null;
  @JsonProperty("ips")
  private AllOfServerOrderFieldLabelsIps ips = null;
  @JsonProperty("os")
  private AllOfServerOrderFieldLabelsOs os = null;
  @JsonProperty("cp")
  private AllOfServerOrderFieldLabelsCp cp = null;
  @JsonProperty("raid")
  private AllOfServerOrderFieldLabelsRaid raid = null;
  @JsonProperty("memory")
  private AllOfServerOrderFieldLabelsMemory memory = null;
  @JsonProperty("hd")
  private AllOfServerOrderFieldLabelsHd hd = null;
  /**
   * Bandwidth field label.
   **/
  public ServerOrderFieldLabels bandwidth(AllOfServerOrderFieldLabelsBandwidth bandwidth) {
    this.bandwidth = bandwidth;
    return this;
  }

  
  @Schema(description = "Bandwidth field label.")
  @JsonProperty("bandwidth")
  public AllOfServerOrderFieldLabelsBandwidth getBandwidth() {
    return bandwidth;
  }
  public void setBandwidth(AllOfServerOrderFieldLabelsBandwidth bandwidth) {
    this.bandwidth = bandwidth;
  }

  /**
   * IPs field label.
   **/
  public ServerOrderFieldLabels ips(AllOfServerOrderFieldLabelsIps ips) {
    this.ips = ips;
    return this;
  }

  
  @Schema(description = "IPs field label.")
  @JsonProperty("ips")
  public AllOfServerOrderFieldLabelsIps getIps() {
    return ips;
  }
  public void setIps(AllOfServerOrderFieldLabelsIps ips) {
    this.ips = ips;
  }

  /**
   * Operating System field label.
   **/
  public ServerOrderFieldLabels os(AllOfServerOrderFieldLabelsOs os) {
    this.os = os;
    return this;
  }

  
  @Schema(description = "Operating System field label.")
  @JsonProperty("os")
  public AllOfServerOrderFieldLabelsOs getOs() {
    return os;
  }
  public void setOs(AllOfServerOrderFieldLabelsOs os) {
    this.os = os;
  }

  /**
   * Control Panel field label.
   **/
  public ServerOrderFieldLabels cp(AllOfServerOrderFieldLabelsCp cp) {
    this.cp = cp;
    return this;
  }

  
  @Schema(description = "Control Panel field label.")
  @JsonProperty("cp")
  public AllOfServerOrderFieldLabelsCp getCp() {
    return cp;
  }
  public void setCp(AllOfServerOrderFieldLabelsCp cp) {
    this.cp = cp;
  }

  /**
   * RAID field label.
   **/
  public ServerOrderFieldLabels raid(AllOfServerOrderFieldLabelsRaid raid) {
    this.raid = raid;
    return this;
  }

  
  @Schema(description = "RAID field label.")
  @JsonProperty("raid")
  public AllOfServerOrderFieldLabelsRaid getRaid() {
    return raid;
  }
  public void setRaid(AllOfServerOrderFieldLabelsRaid raid) {
    this.raid = raid;
  }

  /**
   * Memory field label.
   **/
  public ServerOrderFieldLabels memory(AllOfServerOrderFieldLabelsMemory memory) {
    this.memory = memory;
    return this;
  }

  
  @Schema(description = "Memory field label.")
  @JsonProperty("memory")
  public AllOfServerOrderFieldLabelsMemory getMemory() {
    return memory;
  }
  public void setMemory(AllOfServerOrderFieldLabelsMemory memory) {
    this.memory = memory;
  }

  /**
   * Hard Drives field label
   **/
  public ServerOrderFieldLabels hd(AllOfServerOrderFieldLabelsHd hd) {
    this.hd = hd;
    return this;
  }

  
  @Schema(description = "Hard Drives field label")
  @JsonProperty("hd")
  public AllOfServerOrderFieldLabelsHd getHd() {
    return hd;
  }
  public void setHd(AllOfServerOrderFieldLabelsHd hd) {
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
    ServerOrderFieldLabels serverOrderFieldLabels = (ServerOrderFieldLabels) o;
    return Objects.equals(bandwidth, serverOrderFieldLabels.bandwidth) &&
        Objects.equals(ips, serverOrderFieldLabels.ips) &&
        Objects.equals(os, serverOrderFieldLabels.os) &&
        Objects.equals(cp, serverOrderFieldLabels.cp) &&
        Objects.equals(raid, serverOrderFieldLabels.raid) &&
        Objects.equals(memory, serverOrderFieldLabels.memory) &&
        Objects.equals(hd, serverOrderFieldLabels.hd);
  }

  @Override
  public int hashCode() {
    return Objects.hash(bandwidth, ips, os, cp, raid, memory, hd);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerOrderFieldLabels {\n");
    sb.append("    bandwidth: ").append(toIndentedString(bandwidth)).append("\n");
    sb.append("    ips: ").append(toIndentedString(ips)).append("\n");
    sb.append("    os: ").append(toIndentedString(os)).append("\n");
    sb.append("    cp: ").append(toIndentedString(cp)).append("\n");
    sb.append("    raid: ").append(toIndentedString(raid)).append("\n");
    sb.append("    memory: ").append(toIndentedString(memory)).append("\n");
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

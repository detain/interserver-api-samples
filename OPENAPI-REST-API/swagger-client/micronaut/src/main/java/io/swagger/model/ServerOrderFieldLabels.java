package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * Field labels for the server order.
 */
@Schema(description = "Field labels for the server order.")
@Validated
@Introspected

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

  public ServerOrderFieldLabels bandwidth(AllOfServerOrderFieldLabelsBandwidth bandwidth) {
    this.bandwidth = bandwidth;
    return this;
  }

  /**
   * Bandwidth field label.
   * @return bandwidth
  **/
  @Schema(description = "Bandwidth field label.")
  @NotNull

  public AllOfServerOrderFieldLabelsBandwidth getBandwidth() {
    return bandwidth;
  }

  public void setBandwidth(AllOfServerOrderFieldLabelsBandwidth bandwidth) {
    this.bandwidth = bandwidth;
  }

  public ServerOrderFieldLabels ips(AllOfServerOrderFieldLabelsIps ips) {
    this.ips = ips;
    return this;
  }

  /**
   * IPs field label.
   * @return ips
  **/
  @Schema(description = "IPs field label.")
  @NotNull

  public AllOfServerOrderFieldLabelsIps getIps() {
    return ips;
  }

  public void setIps(AllOfServerOrderFieldLabelsIps ips) {
    this.ips = ips;
  }

  public ServerOrderFieldLabels os(AllOfServerOrderFieldLabelsOs os) {
    this.os = os;
    return this;
  }

  /**
   * Operating System field label.
   * @return os
  **/
  @Schema(description = "Operating System field label.")
  @NotNull

  public AllOfServerOrderFieldLabelsOs getOs() {
    return os;
  }

  public void setOs(AllOfServerOrderFieldLabelsOs os) {
    this.os = os;
  }

  public ServerOrderFieldLabels cp(AllOfServerOrderFieldLabelsCp cp) {
    this.cp = cp;
    return this;
  }

  /**
   * Control Panel field label.
   * @return cp
  **/
  @Schema(description = "Control Panel field label.")
  @NotNull

  public AllOfServerOrderFieldLabelsCp getCp() {
    return cp;
  }

  public void setCp(AllOfServerOrderFieldLabelsCp cp) {
    this.cp = cp;
  }

  public ServerOrderFieldLabels raid(AllOfServerOrderFieldLabelsRaid raid) {
    this.raid = raid;
    return this;
  }

  /**
   * RAID field label.
   * @return raid
  **/
  @Schema(description = "RAID field label.")
  @NotNull

  public AllOfServerOrderFieldLabelsRaid getRaid() {
    return raid;
  }

  public void setRaid(AllOfServerOrderFieldLabelsRaid raid) {
    this.raid = raid;
  }

  public ServerOrderFieldLabels memory(AllOfServerOrderFieldLabelsMemory memory) {
    this.memory = memory;
    return this;
  }

  /**
   * Memory field label.
   * @return memory
  **/
  @Schema(description = "Memory field label.")
  @NotNull

  public AllOfServerOrderFieldLabelsMemory getMemory() {
    return memory;
  }

  public void setMemory(AllOfServerOrderFieldLabelsMemory memory) {
    this.memory = memory;
  }

  public ServerOrderFieldLabels hd(AllOfServerOrderFieldLabelsHd hd) {
    this.hd = hd;
    return this;
  }

  /**
   * Hard Drives field label
   * @return hd
  **/
  @Schema(description = "Hard Drives field label")
  @NotNull

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
    return Objects.equals(this.bandwidth, serverOrderFieldLabels.bandwidth) &&
        Objects.equals(this.ips, serverOrderFieldLabels.ips) &&
        Objects.equals(this.os, serverOrderFieldLabels.os) &&
        Objects.equals(this.cp, serverOrderFieldLabels.cp) &&
        Objects.equals(this.raid, serverOrderFieldLabels.raid) &&
        Objects.equals(this.memory, serverOrderFieldLabels.memory) &&
        Objects.equals(this.hd, serverOrderFieldLabels.hd);
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

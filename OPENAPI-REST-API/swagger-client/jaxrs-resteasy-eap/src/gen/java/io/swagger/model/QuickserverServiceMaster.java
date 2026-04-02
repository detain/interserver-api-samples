package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Information about the host node running this QuickServer, including hardware specs and resource utilization.")

public class QuickserverServiceMaster   {
  private String qsId = null;
  private String qsName = null;
  private String qsIp = null;
  private String qsType = null;
  private String qsHdsize = null;
  private String qsHdfree = null;
  private String qsBits = null;
  private String qsLoad = null;
  private String qsRam = null;
  private String qsCpuModel = null;
  private String qsCpuMhz = null;
  private String qsLocation = null;
  private String qsAvailable = null;
  private String qsCost = null;
  private String qsLastUpdate = null;
  private String qsCores = null;
  private String qsIowait = null;
  private String qsRaidStatus = null;
  private String qsDriveType = null;
  private String qsOrder = null;
  private String qsRaidBuilding = null;
  private String qsKernel = null;
  private String qsIoping = null;
  private String qsSpeed = null;
  private String qsDistro = null;
  private String qsDistroVersion = null;
  private String qsBytesSecIn = null;
  private String qsBytesSecOut = null;
  private String qsPacketsSecIn = null;
  private String qsPacketsSecOut = null;
  private String qsLastInstallTime = null;
  private String qsPartitions = null;
  private String qsCpuFlags = null;

  /**
   * Quickserver ID
   **/
  
  @Schema(example = "365", description = "Quickserver ID")
  @JsonProperty("qs_id")
  @NotNull
  public String getQsId() {
    return qsId;
  }
  public void setQsId(String qsId) {
    this.qsId = qsId;
  }

  /**
   * Quickserver name
   **/
  
  @Schema(example = "Qs365", description = "Quickserver name")
  @JsonProperty("qs_name")
  @NotNull
  public String getQsName() {
    return qsName;
  }
  public void setQsName(String qsName) {
    this.qsName = qsName;
  }

  /**
   * IP address
   **/
  
  @Schema(description = "IP address")
  @JsonProperty("qs_ip")
  @NotNull
  public String getQsIp() {
    return qsIp;
  }
  public void setQsIp(String qsIp) {
    this.qsIp = qsIp;
  }

  /**
   * Type
   **/
  
  @Schema(example = "14", description = "Type")
  @JsonProperty("qs_type")
  @NotNull
  public String getQsType() {
    return qsType;
  }
  public void setQsType(String qsType) {
    this.qsType = qsType;
  }

  /**
   * HDD size
   **/
  
  @Schema(example = "1760", description = "HDD size")
  @JsonProperty("qs_hdsize")
  @NotNull
  public String getQsHdsize() {
    return qsHdsize;
  }
  public void setQsHdsize(String qsHdsize) {
    this.qsHdsize = qsHdsize;
  }

  /**
   * Free HDD space
   **/
  
  @Schema(example = "1192", description = "Free HDD space")
  @JsonProperty("qs_hdfree")
  @NotNull
  public String getQsHdfree() {
    return qsHdfree;
  }
  public void setQsHdfree(String qsHdfree) {
    this.qsHdfree = qsHdfree;
  }

  /**
   * Bits
   **/
  
  @Schema(example = "64", description = "Bits")
  @JsonProperty("qs_bits")
  @NotNull
  public String getQsBits() {
    return qsBits;
  }
  public void setQsBits(String qsBits) {
    this.qsBits = qsBits;
  }

  /**
   * Load
   **/
  
  @Schema(example = "3.45", description = "Load")
  @JsonProperty("qs_load")
  @NotNull
  public String getQsLoad() {
    return qsLoad;
  }
  public void setQsLoad(String qsLoad) {
    this.qsLoad = qsLoad;
  }

  /**
   * RAM information
   **/
  
  @Schema(example = "29550679", description = "RAM information")
  @JsonProperty("qs_ram")
  @NotNull
  public String getQsRam() {
    return qsRam;
  }
  public void setQsRam(String qsRam) {
    this.qsRam = qsRam;
  }

  /**
   * CPU model
   **/
  
  @Schema(example = "Intel(R) Xeon(R) CPU E3-1271 v3 @ 3.60GHz", description = "CPU model")
  @JsonProperty("qs_cpu_model")
  @NotNull
  public String getQsCpuModel() {
    return qsCpuModel;
  }
  public void setQsCpuModel(String qsCpuModel) {
    this.qsCpuModel = qsCpuModel;
  }

  /**
   * CPU frequency
   **/
  
  @Schema(example = "2900", description = "CPU frequency")
  @JsonProperty("qs_cpu_mhz")
  @NotNull
  public String getQsCpuMhz() {
    return qsCpuMhz;
  }
  public void setQsCpuMhz(String qsCpuMhz) {
    this.qsCpuMhz = qsCpuMhz;
  }

  /**
   * Location
   **/
  
  @Schema(example = "1", description = "Location")
  @JsonProperty("qs_location")
  @NotNull
  public String getQsLocation() {
    return qsLocation;
  }
  public void setQsLocation(String qsLocation) {
    this.qsLocation = qsLocation;
  }

  /**
   * Available information
   **/
  
  @Schema(example = "0", description = "Available information")
  @JsonProperty("qs_available")
  @NotNull
  public String getQsAvailable() {
    return qsAvailable;
  }
  public void setQsAvailable(String qsAvailable) {
    this.qsAvailable = qsAvailable;
  }

  /**
   * Cost
   **/
  
  @Schema(example = "49", description = "Cost")
  @JsonProperty("qs_cost")
  @NotNull
  public String getQsCost() {
    return qsCost;
  }
  public void setQsCost(String qsCost) {
    this.qsCost = qsCost;
  }

  /**
   * Last update date
   **/
  
  @Schema(example = "2023-08-17T23:52:02.000Z", description = "Last update date")
  @JsonProperty("qs_last_update")
  @NotNull
  public String getQsLastUpdate() {
    return qsLastUpdate;
  }
  public void setQsLastUpdate(String qsLastUpdate) {
    this.qsLastUpdate = qsLastUpdate;
  }

  /**
   * Number of cores
   **/
  
  @Schema(example = "8", description = "Number of cores")
  @JsonProperty("qs_cores")
  @NotNull
  public String getQsCores() {
    return qsCores;
  }
  public void setQsCores(String qsCores) {
    this.qsCores = qsCores;
  }

  /**
   * I/O wait
   **/
  
  @Schema(example = "6.89", description = "I/O wait")
  @JsonProperty("qs_iowait")
  @NotNull
  public String getQsIowait() {
    return qsIowait;
  }
  public void setQsIowait(String qsIowait) {
    this.qsIowait = qsIowait;
  }

  /**
   * RAID status
   **/
  
  @Schema(example = "OK: zfs:all pools are healthy", description = "RAID status")
  @JsonProperty("qs_raid_status")
  @NotNull
  public String getQsRaidStatus() {
    return qsRaidStatus;
  }
  public void setQsRaidStatus(String qsRaidStatus) {
    this.qsRaidStatus = qsRaidStatus;
  }

  /**
   * Drive type
   **/
  
  @Schema(example = "SSD", description = "Drive type")
  @JsonProperty("qs_drive_type")
  @NotNull
  public String getQsDriveType() {
    return qsDriveType;
  }
  public void setQsDriveType(String qsDriveType) {
    this.qsDriveType = qsDriveType;
  }

  /**
   * Order number
   **/
  
  @Schema(example = "92263", description = "Order number")
  @JsonProperty("qs_order")
  @NotNull
  public String getQsOrder() {
    return qsOrder;
  }
  public void setQsOrder(String qsOrder) {
    this.qsOrder = qsOrder;
  }

  /**
   * RAID building information
   **/
  
  @Schema(example = "0", description = "RAID building information")
  @JsonProperty("qs_raid_building")
  @NotNull
  public String getQsRaidBuilding() {
    return qsRaidBuilding;
  }
  public void setQsRaidBuilding(String qsRaidBuilding) {
    this.qsRaidBuilding = qsRaidBuilding;
  }

  /**
   * Kernel version
   **/
  
  @Schema(example = "5.15.0-69-generic", description = "Kernel version")
  @JsonProperty("qs_kernel")
  @NotNull
  public String getQsKernel() {
    return qsKernel;
  }
  public void setQsKernel(String qsKernel) {
    this.qsKernel = qsKernel;
  }

  /**
   * IOPing information
   **/
  
  @Schema(example = "330707348", description = "IOPing information")
  @JsonProperty("qs_ioping")
  @NotNull
  public String getQsIoping() {
    return qsIoping;
  }
  public void setQsIoping(String qsIoping) {
    this.qsIoping = qsIoping;
  }

  /**
   * Speed information
   **/
  
  @Schema(example = "1000", description = "Speed information")
  @JsonProperty("qs_speed")
  @NotNull
  public String getQsSpeed() {
    return qsSpeed;
  }
  public void setQsSpeed(String qsSpeed) {
    this.qsSpeed = qsSpeed;
  }

  /**
   * Distribution name
   **/
  
  @Schema(example = "Ubuntu", description = "Distribution name")
  @JsonProperty("qs_distro")
  @NotNull
  public String getQsDistro() {
    return qsDistro;
  }
  public void setQsDistro(String qsDistro) {
    this.qsDistro = qsDistro;
  }

  /**
   * Distribution version
   **/
  
  @Schema(example = "22.04", description = "Distribution version")
  @JsonProperty("qs_distro_version")
  @NotNull
  public String getQsDistroVersion() {
    return qsDistroVersion;
  }
  public void setQsDistroVersion(String qsDistroVersion) {
    this.qsDistroVersion = qsDistroVersion;
  }

  /**
   * Bytes/sec in
   **/
  
  @Schema(example = "0", description = "Bytes/sec in")
  @JsonProperty("qs_bytes_sec_in")
  @NotNull
  public String getQsBytesSecIn() {
    return qsBytesSecIn;
  }
  public void setQsBytesSecIn(String qsBytesSecIn) {
    this.qsBytesSecIn = qsBytesSecIn;
  }

  /**
   * Bytes/sec out
   **/
  
  @Schema(example = "0", description = "Bytes/sec out")
  @JsonProperty("qs_bytes_sec_out")
  @NotNull
  public String getQsBytesSecOut() {
    return qsBytesSecOut;
  }
  public void setQsBytesSecOut(String qsBytesSecOut) {
    this.qsBytesSecOut = qsBytesSecOut;
  }

  /**
   * Packets/sec in
   **/
  
  @Schema(example = "0", description = "Packets/sec in")
  @JsonProperty("qs_packets_sec_in")
  @NotNull
  public String getQsPacketsSecIn() {
    return qsPacketsSecIn;
  }
  public void setQsPacketsSecIn(String qsPacketsSecIn) {
    this.qsPacketsSecIn = qsPacketsSecIn;
  }

  /**
   * Packets/sec out
   **/
  
  @Schema(example = "0", description = "Packets/sec out")
  @JsonProperty("qs_packets_sec_out")
  @NotNull
  public String getQsPacketsSecOut() {
    return qsPacketsSecOut;
  }
  public void setQsPacketsSecOut(String qsPacketsSecOut) {
    this.qsPacketsSecOut = qsPacketsSecOut;
  }

  /**
   * Last install time (null)
   **/
  
  @Schema(description = "Last install time (null)")
  @JsonProperty("qs_last_install_time")
  public String getQsLastInstallTime() {
    return qsLastInstallTime;
  }
  public void setQsLastInstallTime(String qsLastInstallTime) {
    this.qsLastInstallTime = qsLastInstallTime;
  }

  /**
   * Partitions information (null)
   **/
  
  @Schema(description = "Partitions information (null)")
  @JsonProperty("qs_partitions")
  public String getQsPartitions() {
    return qsPartitions;
  }
  public void setQsPartitions(String qsPartitions) {
    this.qsPartitions = qsPartitions;
  }

  /**
   * CPU flags
   **/
  
  @Schema(description = "CPU flags")
  @JsonProperty("qs_cpu_flags")
  @NotNull
  public String getQsCpuFlags() {
    return qsCpuFlags;
  }
  public void setQsCpuFlags(String qsCpuFlags) {
    this.qsCpuFlags = qsCpuFlags;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    QuickserverServiceMaster quickserverServiceMaster = (QuickserverServiceMaster) o;
    return Objects.equals(qsId, quickserverServiceMaster.qsId) &&
        Objects.equals(qsName, quickserverServiceMaster.qsName) &&
        Objects.equals(qsIp, quickserverServiceMaster.qsIp) &&
        Objects.equals(qsType, quickserverServiceMaster.qsType) &&
        Objects.equals(qsHdsize, quickserverServiceMaster.qsHdsize) &&
        Objects.equals(qsHdfree, quickserverServiceMaster.qsHdfree) &&
        Objects.equals(qsBits, quickserverServiceMaster.qsBits) &&
        Objects.equals(qsLoad, quickserverServiceMaster.qsLoad) &&
        Objects.equals(qsRam, quickserverServiceMaster.qsRam) &&
        Objects.equals(qsCpuModel, quickserverServiceMaster.qsCpuModel) &&
        Objects.equals(qsCpuMhz, quickserverServiceMaster.qsCpuMhz) &&
        Objects.equals(qsLocation, quickserverServiceMaster.qsLocation) &&
        Objects.equals(qsAvailable, quickserverServiceMaster.qsAvailable) &&
        Objects.equals(qsCost, quickserverServiceMaster.qsCost) &&
        Objects.equals(qsLastUpdate, quickserverServiceMaster.qsLastUpdate) &&
        Objects.equals(qsCores, quickserverServiceMaster.qsCores) &&
        Objects.equals(qsIowait, quickserverServiceMaster.qsIowait) &&
        Objects.equals(qsRaidStatus, quickserverServiceMaster.qsRaidStatus) &&
        Objects.equals(qsDriveType, quickserverServiceMaster.qsDriveType) &&
        Objects.equals(qsOrder, quickserverServiceMaster.qsOrder) &&
        Objects.equals(qsRaidBuilding, quickserverServiceMaster.qsRaidBuilding) &&
        Objects.equals(qsKernel, quickserverServiceMaster.qsKernel) &&
        Objects.equals(qsIoping, quickserverServiceMaster.qsIoping) &&
        Objects.equals(qsSpeed, quickserverServiceMaster.qsSpeed) &&
        Objects.equals(qsDistro, quickserverServiceMaster.qsDistro) &&
        Objects.equals(qsDistroVersion, quickserverServiceMaster.qsDistroVersion) &&
        Objects.equals(qsBytesSecIn, quickserverServiceMaster.qsBytesSecIn) &&
        Objects.equals(qsBytesSecOut, quickserverServiceMaster.qsBytesSecOut) &&
        Objects.equals(qsPacketsSecIn, quickserverServiceMaster.qsPacketsSecIn) &&
        Objects.equals(qsPacketsSecOut, quickserverServiceMaster.qsPacketsSecOut) &&
        Objects.equals(qsLastInstallTime, quickserverServiceMaster.qsLastInstallTime) &&
        Objects.equals(qsPartitions, quickserverServiceMaster.qsPartitions) &&
        Objects.equals(qsCpuFlags, quickserverServiceMaster.qsCpuFlags);
  }

  @Override
  public int hashCode() {
    return Objects.hash(qsId, qsName, qsIp, qsType, qsHdsize, qsHdfree, qsBits, qsLoad, qsRam, qsCpuModel, qsCpuMhz, qsLocation, qsAvailable, qsCost, qsLastUpdate, qsCores, qsIowait, qsRaidStatus, qsDriveType, qsOrder, qsRaidBuilding, qsKernel, qsIoping, qsSpeed, qsDistro, qsDistroVersion, qsBytesSecIn, qsBytesSecOut, qsPacketsSecIn, qsPacketsSecOut, qsLastInstallTime, qsPartitions, qsCpuFlags);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class QuickserverServiceMaster {\n");
    
    sb.append("    qsId: ").append(toIndentedString(qsId)).append("\n");
    sb.append("    qsName: ").append(toIndentedString(qsName)).append("\n");
    sb.append("    qsIp: ").append(toIndentedString(qsIp)).append("\n");
    sb.append("    qsType: ").append(toIndentedString(qsType)).append("\n");
    sb.append("    qsHdsize: ").append(toIndentedString(qsHdsize)).append("\n");
    sb.append("    qsHdfree: ").append(toIndentedString(qsHdfree)).append("\n");
    sb.append("    qsBits: ").append(toIndentedString(qsBits)).append("\n");
    sb.append("    qsLoad: ").append(toIndentedString(qsLoad)).append("\n");
    sb.append("    qsRam: ").append(toIndentedString(qsRam)).append("\n");
    sb.append("    qsCpuModel: ").append(toIndentedString(qsCpuModel)).append("\n");
    sb.append("    qsCpuMhz: ").append(toIndentedString(qsCpuMhz)).append("\n");
    sb.append("    qsLocation: ").append(toIndentedString(qsLocation)).append("\n");
    sb.append("    qsAvailable: ").append(toIndentedString(qsAvailable)).append("\n");
    sb.append("    qsCost: ").append(toIndentedString(qsCost)).append("\n");
    sb.append("    qsLastUpdate: ").append(toIndentedString(qsLastUpdate)).append("\n");
    sb.append("    qsCores: ").append(toIndentedString(qsCores)).append("\n");
    sb.append("    qsIowait: ").append(toIndentedString(qsIowait)).append("\n");
    sb.append("    qsRaidStatus: ").append(toIndentedString(qsRaidStatus)).append("\n");
    sb.append("    qsDriveType: ").append(toIndentedString(qsDriveType)).append("\n");
    sb.append("    qsOrder: ").append(toIndentedString(qsOrder)).append("\n");
    sb.append("    qsRaidBuilding: ").append(toIndentedString(qsRaidBuilding)).append("\n");
    sb.append("    qsKernel: ").append(toIndentedString(qsKernel)).append("\n");
    sb.append("    qsIoping: ").append(toIndentedString(qsIoping)).append("\n");
    sb.append("    qsSpeed: ").append(toIndentedString(qsSpeed)).append("\n");
    sb.append("    qsDistro: ").append(toIndentedString(qsDistro)).append("\n");
    sb.append("    qsDistroVersion: ").append(toIndentedString(qsDistroVersion)).append("\n");
    sb.append("    qsBytesSecIn: ").append(toIndentedString(qsBytesSecIn)).append("\n");
    sb.append("    qsBytesSecOut: ").append(toIndentedString(qsBytesSecOut)).append("\n");
    sb.append("    qsPacketsSecIn: ").append(toIndentedString(qsPacketsSecIn)).append("\n");
    sb.append("    qsPacketsSecOut: ").append(toIndentedString(qsPacketsSecOut)).append("\n");
    sb.append("    qsLastInstallTime: ").append(toIndentedString(qsLastInstallTime)).append("\n");
    sb.append("    qsPartitions: ").append(toIndentedString(qsPartitions)).append("\n");
    sb.append("    qsCpuFlags: ").append(toIndentedString(qsCpuFlags)).append("\n");
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

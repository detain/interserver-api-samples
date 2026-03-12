package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Information about the host node running this QuickServer, including hardware specs and resource utilization.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Information about the host node running this QuickServer, including hardware specs and resource utilization.")

public class QuickserverServiceMaster   {

  private @Valid String qsId = null;

  private @Valid String qsName = null;

  private @Valid String qsIp = null;

  private @Valid String qsType = null;

  private @Valid String qsHdsize = null;

  private @Valid String qsHdfree = null;

  private @Valid String qsBits = null;

  private @Valid String qsLoad = null;

  private @Valid String qsRam = null;

  private @Valid String qsCpuModel = null;

  private @Valid String qsCpuMhz = null;

  private @Valid String qsLocation = null;

  private @Valid String qsAvailable = null;

  private @Valid String qsCost = null;

  private @Valid String qsLastUpdate = null;

  private @Valid String qsCores = null;

  private @Valid String qsIowait = null;

  private @Valid String qsRaidStatus = null;

  private @Valid String qsDriveType = null;

  private @Valid String qsOrder = null;

  private @Valid String qsRaidBuilding = null;

  private @Valid String qsKernel = null;

  private @Valid String qsIoping = null;

  private @Valid String qsSpeed = null;

  private @Valid String qsDistro = null;

  private @Valid String qsDistroVersion = null;

  private @Valid String qsBytesSecIn = null;

  private @Valid String qsBytesSecOut = null;

  private @Valid String qsPacketsSecIn = null;

  private @Valid String qsPacketsSecOut = null;

  private @Valid Object qsLastInstallTime = null;

  private @Valid Object qsPartitions = null;

  private @Valid String qsCpuFlags = null;

  /**
   * Quickserver ID
   **/
  public QuickserverServiceMaster qsId(String qsId) {
    this.qsId = qsId;
    return this;
  }

  
  @ApiModelProperty(example = "365", value = "Quickserver ID")
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
  public QuickserverServiceMaster qsName(String qsName) {
    this.qsName = qsName;
    return this;
  }

  
  @ApiModelProperty(example = "Qs365", value = "Quickserver name")
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
  public QuickserverServiceMaster qsIp(String qsIp) {
    this.qsIp = qsIp;
    return this;
  }

  
  @ApiModelProperty(value = "IP address")
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
  public QuickserverServiceMaster qsType(String qsType) {
    this.qsType = qsType;
    return this;
  }

  
  @ApiModelProperty(example = "14", value = "Type")
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
  public QuickserverServiceMaster qsHdsize(String qsHdsize) {
    this.qsHdsize = qsHdsize;
    return this;
  }

  
  @ApiModelProperty(example = "1760", value = "HDD size")
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
  public QuickserverServiceMaster qsHdfree(String qsHdfree) {
    this.qsHdfree = qsHdfree;
    return this;
  }

  
  @ApiModelProperty(example = "1192", value = "Free HDD space")
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
  public QuickserverServiceMaster qsBits(String qsBits) {
    this.qsBits = qsBits;
    return this;
  }

  
  @ApiModelProperty(example = "64", value = "Bits")
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
  public QuickserverServiceMaster qsLoad(String qsLoad) {
    this.qsLoad = qsLoad;
    return this;
  }

  
  @ApiModelProperty(example = "3.45", value = "Load")
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
  public QuickserverServiceMaster qsRam(String qsRam) {
    this.qsRam = qsRam;
    return this;
  }

  
  @ApiModelProperty(example = "29550679", value = "RAM information")
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
  public QuickserverServiceMaster qsCpuModel(String qsCpuModel) {
    this.qsCpuModel = qsCpuModel;
    return this;
  }

  
  @ApiModelProperty(example = "Intel(R) Xeon(R) CPU E3-1271 v3 @ 3.60GHz", value = "CPU model")
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
  public QuickserverServiceMaster qsCpuMhz(String qsCpuMhz) {
    this.qsCpuMhz = qsCpuMhz;
    return this;
  }

  
  @ApiModelProperty(example = "2900", value = "CPU frequency")
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
  public QuickserverServiceMaster qsLocation(String qsLocation) {
    this.qsLocation = qsLocation;
    return this;
  }

  
  @ApiModelProperty(example = "1", value = "Location")
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
  public QuickserverServiceMaster qsAvailable(String qsAvailable) {
    this.qsAvailable = qsAvailable;
    return this;
  }

  
  @ApiModelProperty(example = "0", value = "Available information")
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
  public QuickserverServiceMaster qsCost(String qsCost) {
    this.qsCost = qsCost;
    return this;
  }

  
  @ApiModelProperty(example = "49", value = "Cost")
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
  public QuickserverServiceMaster qsLastUpdate(String qsLastUpdate) {
    this.qsLastUpdate = qsLastUpdate;
    return this;
  }

  
  @ApiModelProperty(example = "2023-08-17T23:52:02.000Z", value = "Last update date")
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
  public QuickserverServiceMaster qsCores(String qsCores) {
    this.qsCores = qsCores;
    return this;
  }

  
  @ApiModelProperty(example = "8", value = "Number of cores")
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
  public QuickserverServiceMaster qsIowait(String qsIowait) {
    this.qsIowait = qsIowait;
    return this;
  }

  
  @ApiModelProperty(example = "6.89", value = "I/O wait")
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
  public QuickserverServiceMaster qsRaidStatus(String qsRaidStatus) {
    this.qsRaidStatus = qsRaidStatus;
    return this;
  }

  
  @ApiModelProperty(example = "OK: zfs:all pools are healthy", value = "RAID status")
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
  public QuickserverServiceMaster qsDriveType(String qsDriveType) {
    this.qsDriveType = qsDriveType;
    return this;
  }

  
  @ApiModelProperty(example = "SSD", value = "Drive type")
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
  public QuickserverServiceMaster qsOrder(String qsOrder) {
    this.qsOrder = qsOrder;
    return this;
  }

  
  @ApiModelProperty(example = "92263", value = "Order number")
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
  public QuickserverServiceMaster qsRaidBuilding(String qsRaidBuilding) {
    this.qsRaidBuilding = qsRaidBuilding;
    return this;
  }

  
  @ApiModelProperty(example = "0", value = "RAID building information")
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
  public QuickserverServiceMaster qsKernel(String qsKernel) {
    this.qsKernel = qsKernel;
    return this;
  }

  
  @ApiModelProperty(example = "5.15.0-69-generic", value = "Kernel version")
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
  public QuickserverServiceMaster qsIoping(String qsIoping) {
    this.qsIoping = qsIoping;
    return this;
  }

  
  @ApiModelProperty(example = "330707348", value = "IOPing information")
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
  public QuickserverServiceMaster qsSpeed(String qsSpeed) {
    this.qsSpeed = qsSpeed;
    return this;
  }

  
  @ApiModelProperty(example = "1000", value = "Speed information")
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
  public QuickserverServiceMaster qsDistro(String qsDistro) {
    this.qsDistro = qsDistro;
    return this;
  }

  
  @ApiModelProperty(example = "Ubuntu", value = "Distribution name")
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
  public QuickserverServiceMaster qsDistroVersion(String qsDistroVersion) {
    this.qsDistroVersion = qsDistroVersion;
    return this;
  }

  
  @ApiModelProperty(example = "22.04", value = "Distribution version")
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
  public QuickserverServiceMaster qsBytesSecIn(String qsBytesSecIn) {
    this.qsBytesSecIn = qsBytesSecIn;
    return this;
  }

  
  @ApiModelProperty(example = "0", value = "Bytes/sec in")
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
  public QuickserverServiceMaster qsBytesSecOut(String qsBytesSecOut) {
    this.qsBytesSecOut = qsBytesSecOut;
    return this;
  }

  
  @ApiModelProperty(example = "0", value = "Bytes/sec out")
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
  public QuickserverServiceMaster qsPacketsSecIn(String qsPacketsSecIn) {
    this.qsPacketsSecIn = qsPacketsSecIn;
    return this;
  }

  
  @ApiModelProperty(example = "0", value = "Packets/sec in")
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
  public QuickserverServiceMaster qsPacketsSecOut(String qsPacketsSecOut) {
    this.qsPacketsSecOut = qsPacketsSecOut;
    return this;
  }

  
  @ApiModelProperty(example = "0", value = "Packets/sec out")
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
  public QuickserverServiceMaster qsLastInstallTime(Object qsLastInstallTime) {
    this.qsLastInstallTime = qsLastInstallTime;
    return this;
  }

  
  @ApiModelProperty(value = "Last install time (null)")
  @JsonProperty("qs_last_install_time")
  @NotNull

  public Object getQsLastInstallTime() {
    return qsLastInstallTime;
  }
  public void setQsLastInstallTime(Object qsLastInstallTime) {
    this.qsLastInstallTime = qsLastInstallTime;
  }

  /**
   * Partitions information (null)
   **/
  public QuickserverServiceMaster qsPartitions(Object qsPartitions) {
    this.qsPartitions = qsPartitions;
    return this;
  }

  
  @ApiModelProperty(value = "Partitions information (null)")
  @JsonProperty("qs_partitions")
  @NotNull

  public Object getQsPartitions() {
    return qsPartitions;
  }
  public void setQsPartitions(Object qsPartitions) {
    this.qsPartitions = qsPartitions;
  }

  /**
   * CPU flags
   **/
  public QuickserverServiceMaster qsCpuFlags(String qsCpuFlags) {
    this.qsCpuFlags = qsCpuFlags;
    return this;
  }

  
  @ApiModelProperty(value = "CPU flags")
  @JsonProperty("qs_cpu_flags")
  @NotNull

  public String getQsCpuFlags() {
    return qsCpuFlags;
  }
  public void setQsCpuFlags(String qsCpuFlags) {
    this.qsCpuFlags = qsCpuFlags;
  }


  @Override
  public boolean equals(java.lang.Object o) {
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

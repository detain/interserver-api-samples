package org.openapitools.model;

import org.openapitools.jackson.nullable.JsonNullable;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Information about the host node running this QuickServer, including hardware specs and resource utilization.
 */
@ApiModel(description="Information about the host node running this QuickServer, including hardware specs and resource utilization.")

public class QuickserverServiceMaster  {
  
 /**
  * Quickserver ID
  */
  @ApiModelProperty(example = "365", value = "Quickserver ID")

  private String qsId;

 /**
  * Quickserver name
  */
  @ApiModelProperty(example = "Qs365", value = "Quickserver name")

  private String qsName;

 /**
  * IP address
  */
  @ApiModelProperty(example = "", value = "IP address")

  private String qsIp;

 /**
  * Type
  */
  @ApiModelProperty(example = "14", value = "Type")

  private String qsType;

 /**
  * HDD size
  */
  @ApiModelProperty(example = "1760", value = "HDD size")

  private String qsHdsize;

 /**
  * Free HDD space
  */
  @ApiModelProperty(example = "1192", value = "Free HDD space")

  private String qsHdfree;

 /**
  * Bits
  */
  @ApiModelProperty(example = "64", value = "Bits")

  private String qsBits;

 /**
  * Load
  */
  @ApiModelProperty(example = "3.45", value = "Load")

  private String qsLoad;

 /**
  * RAM information
  */
  @ApiModelProperty(example = "29550679", value = "RAM information")

  private String qsRam;

 /**
  * CPU model
  */
  @ApiModelProperty(example = "Intel(R) Xeon(R) CPU E3-1271 v3 @ 3.60GHz", value = "CPU model")

  private String qsCpuModel;

 /**
  * CPU frequency
  */
  @ApiModelProperty(example = "2900", value = "CPU frequency")

  private String qsCpuMhz;

 /**
  * Location
  */
  @ApiModelProperty(example = "1", value = "Location")

  private String qsLocation;

 /**
  * Available information
  */
  @ApiModelProperty(example = "0", value = "Available information")

  private String qsAvailable;

 /**
  * Cost
  */
  @ApiModelProperty(example = "49", value = "Cost")

  private String qsCost;

 /**
  * Last update date
  */
  @ApiModelProperty(example = "2023-08-17T23:52:02.000Z", value = "Last update date")

  private String qsLastUpdate;

 /**
  * Number of cores
  */
  @ApiModelProperty(example = "8", value = "Number of cores")

  private String qsCores;

 /**
  * I/O wait
  */
  @ApiModelProperty(example = "6.89", value = "I/O wait")

  private String qsIowait;

 /**
  * RAID status
  */
  @ApiModelProperty(example = "OK: zfs:all pools are healthy", value = "RAID status")

  private String qsRaidStatus;

 /**
  * Drive type
  */
  @ApiModelProperty(example = "SSD", value = "Drive type")

  private String qsDriveType;

 /**
  * Order number
  */
  @ApiModelProperty(example = "92263", value = "Order number")

  private String qsOrder;

 /**
  * RAID building information
  */
  @ApiModelProperty(example = "0", value = "RAID building information")

  private String qsRaidBuilding;

 /**
  * Kernel version
  */
  @ApiModelProperty(example = "5.15.0-69-generic", value = "Kernel version")

  private String qsKernel;

 /**
  * IOPing information
  */
  @ApiModelProperty(example = "330707348", value = "IOPing information")

  private String qsIoping;

 /**
  * Speed information
  */
  @ApiModelProperty(example = "1000", value = "Speed information")

  private String qsSpeed;

 /**
  * Distribution name
  */
  @ApiModelProperty(example = "Ubuntu", value = "Distribution name")

  private String qsDistro;

 /**
  * Distribution version
  */
  @ApiModelProperty(example = "22.04", value = "Distribution version")

  private String qsDistroVersion;

 /**
  * Bytes/sec in
  */
  @ApiModelProperty(example = "0", value = "Bytes/sec in")

  private String qsBytesSecIn;

 /**
  * Bytes/sec out
  */
  @ApiModelProperty(example = "0", value = "Bytes/sec out")

  private String qsBytesSecOut;

 /**
  * Packets/sec in
  */
  @ApiModelProperty(example = "0", value = "Packets/sec in")

  private String qsPacketsSecIn;

 /**
  * Packets/sec out
  */
  @ApiModelProperty(example = "0", value = "Packets/sec out")

  private String qsPacketsSecOut;

 /**
  * Last install time (null)
  */
  @ApiModelProperty(value = "Last install time (null)")

  private Object qsLastInstallTime = null;

 /**
  * Partitions information (null)
  */
  @ApiModelProperty(value = "Partitions information (null)")

  private Object qsPartitions = null;

 /**
  * CPU flags
  */
  @ApiModelProperty(example = "", value = "CPU flags")

  private String qsCpuFlags;
 /**
   * Quickserver ID
   * @return qsId
  **/
  @JsonProperty("qs_id")
  public String getQsId() {
    return qsId;
  }

  public void setQsId(String qsId) {
    this.qsId = qsId;
  }

  public QuickserverServiceMaster qsId(String qsId) {
    this.qsId = qsId;
    return this;
  }

 /**
   * Quickserver name
   * @return qsName
  **/
  @JsonProperty("qs_name")
  public String getQsName() {
    return qsName;
  }

  public void setQsName(String qsName) {
    this.qsName = qsName;
  }

  public QuickserverServiceMaster qsName(String qsName) {
    this.qsName = qsName;
    return this;
  }

 /**
   * IP address
   * @return qsIp
  **/
  @JsonProperty("qs_ip")
  public String getQsIp() {
    return qsIp;
  }

  public void setQsIp(String qsIp) {
    this.qsIp = qsIp;
  }

  public QuickserverServiceMaster qsIp(String qsIp) {
    this.qsIp = qsIp;
    return this;
  }

 /**
   * Type
   * @return qsType
  **/
  @JsonProperty("qs_type")
  public String getQsType() {
    return qsType;
  }

  public void setQsType(String qsType) {
    this.qsType = qsType;
  }

  public QuickserverServiceMaster qsType(String qsType) {
    this.qsType = qsType;
    return this;
  }

 /**
   * HDD size
   * @return qsHdsize
  **/
  @JsonProperty("qs_hdsize")
  public String getQsHdsize() {
    return qsHdsize;
  }

  public void setQsHdsize(String qsHdsize) {
    this.qsHdsize = qsHdsize;
  }

  public QuickserverServiceMaster qsHdsize(String qsHdsize) {
    this.qsHdsize = qsHdsize;
    return this;
  }

 /**
   * Free HDD space
   * @return qsHdfree
  **/
  @JsonProperty("qs_hdfree")
  public String getQsHdfree() {
    return qsHdfree;
  }

  public void setQsHdfree(String qsHdfree) {
    this.qsHdfree = qsHdfree;
  }

  public QuickserverServiceMaster qsHdfree(String qsHdfree) {
    this.qsHdfree = qsHdfree;
    return this;
  }

 /**
   * Bits
   * @return qsBits
  **/
  @JsonProperty("qs_bits")
  public String getQsBits() {
    return qsBits;
  }

  public void setQsBits(String qsBits) {
    this.qsBits = qsBits;
  }

  public QuickserverServiceMaster qsBits(String qsBits) {
    this.qsBits = qsBits;
    return this;
  }

 /**
   * Load
   * @return qsLoad
  **/
  @JsonProperty("qs_load")
  public String getQsLoad() {
    return qsLoad;
  }

  public void setQsLoad(String qsLoad) {
    this.qsLoad = qsLoad;
  }

  public QuickserverServiceMaster qsLoad(String qsLoad) {
    this.qsLoad = qsLoad;
    return this;
  }

 /**
   * RAM information
   * @return qsRam
  **/
  @JsonProperty("qs_ram")
  public String getQsRam() {
    return qsRam;
  }

  public void setQsRam(String qsRam) {
    this.qsRam = qsRam;
  }

  public QuickserverServiceMaster qsRam(String qsRam) {
    this.qsRam = qsRam;
    return this;
  }

 /**
   * CPU model
   * @return qsCpuModel
  **/
  @JsonProperty("qs_cpu_model")
  public String getQsCpuModel() {
    return qsCpuModel;
  }

  public void setQsCpuModel(String qsCpuModel) {
    this.qsCpuModel = qsCpuModel;
  }

  public QuickserverServiceMaster qsCpuModel(String qsCpuModel) {
    this.qsCpuModel = qsCpuModel;
    return this;
  }

 /**
   * CPU frequency
   * @return qsCpuMhz
  **/
  @JsonProperty("qs_cpu_mhz")
  public String getQsCpuMhz() {
    return qsCpuMhz;
  }

  public void setQsCpuMhz(String qsCpuMhz) {
    this.qsCpuMhz = qsCpuMhz;
  }

  public QuickserverServiceMaster qsCpuMhz(String qsCpuMhz) {
    this.qsCpuMhz = qsCpuMhz;
    return this;
  }

 /**
   * Location
   * @return qsLocation
  **/
  @JsonProperty("qs_location")
  public String getQsLocation() {
    return qsLocation;
  }

  public void setQsLocation(String qsLocation) {
    this.qsLocation = qsLocation;
  }

  public QuickserverServiceMaster qsLocation(String qsLocation) {
    this.qsLocation = qsLocation;
    return this;
  }

 /**
   * Available information
   * @return qsAvailable
  **/
  @JsonProperty("qs_available")
  public String getQsAvailable() {
    return qsAvailable;
  }

  public void setQsAvailable(String qsAvailable) {
    this.qsAvailable = qsAvailable;
  }

  public QuickserverServiceMaster qsAvailable(String qsAvailable) {
    this.qsAvailable = qsAvailable;
    return this;
  }

 /**
   * Cost
   * @return qsCost
  **/
  @JsonProperty("qs_cost")
  public String getQsCost() {
    return qsCost;
  }

  public void setQsCost(String qsCost) {
    this.qsCost = qsCost;
  }

  public QuickserverServiceMaster qsCost(String qsCost) {
    this.qsCost = qsCost;
    return this;
  }

 /**
   * Last update date
   * @return qsLastUpdate
  **/
  @JsonProperty("qs_last_update")
  public String getQsLastUpdate() {
    return qsLastUpdate;
  }

  public void setQsLastUpdate(String qsLastUpdate) {
    this.qsLastUpdate = qsLastUpdate;
  }

  public QuickserverServiceMaster qsLastUpdate(String qsLastUpdate) {
    this.qsLastUpdate = qsLastUpdate;
    return this;
  }

 /**
   * Number of cores
   * @return qsCores
  **/
  @JsonProperty("qs_cores")
  public String getQsCores() {
    return qsCores;
  }

  public void setQsCores(String qsCores) {
    this.qsCores = qsCores;
  }

  public QuickserverServiceMaster qsCores(String qsCores) {
    this.qsCores = qsCores;
    return this;
  }

 /**
   * I/O wait
   * @return qsIowait
  **/
  @JsonProperty("qs_iowait")
  public String getQsIowait() {
    return qsIowait;
  }

  public void setQsIowait(String qsIowait) {
    this.qsIowait = qsIowait;
  }

  public QuickserverServiceMaster qsIowait(String qsIowait) {
    this.qsIowait = qsIowait;
    return this;
  }

 /**
   * RAID status
   * @return qsRaidStatus
  **/
  @JsonProperty("qs_raid_status")
  public String getQsRaidStatus() {
    return qsRaidStatus;
  }

  public void setQsRaidStatus(String qsRaidStatus) {
    this.qsRaidStatus = qsRaidStatus;
  }

  public QuickserverServiceMaster qsRaidStatus(String qsRaidStatus) {
    this.qsRaidStatus = qsRaidStatus;
    return this;
  }

 /**
   * Drive type
   * @return qsDriveType
  **/
  @JsonProperty("qs_drive_type")
  public String getQsDriveType() {
    return qsDriveType;
  }

  public void setQsDriveType(String qsDriveType) {
    this.qsDriveType = qsDriveType;
  }

  public QuickserverServiceMaster qsDriveType(String qsDriveType) {
    this.qsDriveType = qsDriveType;
    return this;
  }

 /**
   * Order number
   * @return qsOrder
  **/
  @JsonProperty("qs_order")
  public String getQsOrder() {
    return qsOrder;
  }

  public void setQsOrder(String qsOrder) {
    this.qsOrder = qsOrder;
  }

  public QuickserverServiceMaster qsOrder(String qsOrder) {
    this.qsOrder = qsOrder;
    return this;
  }

 /**
   * RAID building information
   * @return qsRaidBuilding
  **/
  @JsonProperty("qs_raid_building")
  public String getQsRaidBuilding() {
    return qsRaidBuilding;
  }

  public void setQsRaidBuilding(String qsRaidBuilding) {
    this.qsRaidBuilding = qsRaidBuilding;
  }

  public QuickserverServiceMaster qsRaidBuilding(String qsRaidBuilding) {
    this.qsRaidBuilding = qsRaidBuilding;
    return this;
  }

 /**
   * Kernel version
   * @return qsKernel
  **/
  @JsonProperty("qs_kernel")
  public String getQsKernel() {
    return qsKernel;
  }

  public void setQsKernel(String qsKernel) {
    this.qsKernel = qsKernel;
  }

  public QuickserverServiceMaster qsKernel(String qsKernel) {
    this.qsKernel = qsKernel;
    return this;
  }

 /**
   * IOPing information
   * @return qsIoping
  **/
  @JsonProperty("qs_ioping")
  public String getQsIoping() {
    return qsIoping;
  }

  public void setQsIoping(String qsIoping) {
    this.qsIoping = qsIoping;
  }

  public QuickserverServiceMaster qsIoping(String qsIoping) {
    this.qsIoping = qsIoping;
    return this;
  }

 /**
   * Speed information
   * @return qsSpeed
  **/
  @JsonProperty("qs_speed")
  public String getQsSpeed() {
    return qsSpeed;
  }

  public void setQsSpeed(String qsSpeed) {
    this.qsSpeed = qsSpeed;
  }

  public QuickserverServiceMaster qsSpeed(String qsSpeed) {
    this.qsSpeed = qsSpeed;
    return this;
  }

 /**
   * Distribution name
   * @return qsDistro
  **/
  @JsonProperty("qs_distro")
  public String getQsDistro() {
    return qsDistro;
  }

  public void setQsDistro(String qsDistro) {
    this.qsDistro = qsDistro;
  }

  public QuickserverServiceMaster qsDistro(String qsDistro) {
    this.qsDistro = qsDistro;
    return this;
  }

 /**
   * Distribution version
   * @return qsDistroVersion
  **/
  @JsonProperty("qs_distro_version")
  public String getQsDistroVersion() {
    return qsDistroVersion;
  }

  public void setQsDistroVersion(String qsDistroVersion) {
    this.qsDistroVersion = qsDistroVersion;
  }

  public QuickserverServiceMaster qsDistroVersion(String qsDistroVersion) {
    this.qsDistroVersion = qsDistroVersion;
    return this;
  }

 /**
   * Bytes/sec in
   * @return qsBytesSecIn
  **/
  @JsonProperty("qs_bytes_sec_in")
  public String getQsBytesSecIn() {
    return qsBytesSecIn;
  }

  public void setQsBytesSecIn(String qsBytesSecIn) {
    this.qsBytesSecIn = qsBytesSecIn;
  }

  public QuickserverServiceMaster qsBytesSecIn(String qsBytesSecIn) {
    this.qsBytesSecIn = qsBytesSecIn;
    return this;
  }

 /**
   * Bytes/sec out
   * @return qsBytesSecOut
  **/
  @JsonProperty("qs_bytes_sec_out")
  public String getQsBytesSecOut() {
    return qsBytesSecOut;
  }

  public void setQsBytesSecOut(String qsBytesSecOut) {
    this.qsBytesSecOut = qsBytesSecOut;
  }

  public QuickserverServiceMaster qsBytesSecOut(String qsBytesSecOut) {
    this.qsBytesSecOut = qsBytesSecOut;
    return this;
  }

 /**
   * Packets/sec in
   * @return qsPacketsSecIn
  **/
  @JsonProperty("qs_packets_sec_in")
  public String getQsPacketsSecIn() {
    return qsPacketsSecIn;
  }

  public void setQsPacketsSecIn(String qsPacketsSecIn) {
    this.qsPacketsSecIn = qsPacketsSecIn;
  }

  public QuickserverServiceMaster qsPacketsSecIn(String qsPacketsSecIn) {
    this.qsPacketsSecIn = qsPacketsSecIn;
    return this;
  }

 /**
   * Packets/sec out
   * @return qsPacketsSecOut
  **/
  @JsonProperty("qs_packets_sec_out")
  public String getQsPacketsSecOut() {
    return qsPacketsSecOut;
  }

  public void setQsPacketsSecOut(String qsPacketsSecOut) {
    this.qsPacketsSecOut = qsPacketsSecOut;
  }

  public QuickserverServiceMaster qsPacketsSecOut(String qsPacketsSecOut) {
    this.qsPacketsSecOut = qsPacketsSecOut;
    return this;
  }

 /**
   * Last install time (null)
   * @return qsLastInstallTime
  **/
  @JsonProperty("qs_last_install_time")
  public Object getQsLastInstallTime() {
    return qsLastInstallTime;
  }

  public void setQsLastInstallTime(Object qsLastInstallTime) {
    this.qsLastInstallTime = qsLastInstallTime;
  }

  public QuickserverServiceMaster qsLastInstallTime(Object qsLastInstallTime) {
    this.qsLastInstallTime = qsLastInstallTime;
    return this;
  }

 /**
   * Partitions information (null)
   * @return qsPartitions
  **/
  @JsonProperty("qs_partitions")
  public Object getQsPartitions() {
    return qsPartitions;
  }

  public void setQsPartitions(Object qsPartitions) {
    this.qsPartitions = qsPartitions;
  }

  public QuickserverServiceMaster qsPartitions(Object qsPartitions) {
    this.qsPartitions = qsPartitions;
    return this;
  }

 /**
   * CPU flags
   * @return qsCpuFlags
  **/
  @JsonProperty("qs_cpu_flags")
  public String getQsCpuFlags() {
    return qsCpuFlags;
  }

  public void setQsCpuFlags(String qsCpuFlags) {
    this.qsCpuFlags = qsCpuFlags;
  }

  public QuickserverServiceMaster qsCpuFlags(String qsCpuFlags) {
    this.qsCpuFlags = qsCpuFlags;
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
    QuickserverServiceMaster quickserverServiceMaster = (QuickserverServiceMaster) o;
    return Objects.equals(this.qsId, quickserverServiceMaster.qsId) &&
        Objects.equals(this.qsName, quickserverServiceMaster.qsName) &&
        Objects.equals(this.qsIp, quickserverServiceMaster.qsIp) &&
        Objects.equals(this.qsType, quickserverServiceMaster.qsType) &&
        Objects.equals(this.qsHdsize, quickserverServiceMaster.qsHdsize) &&
        Objects.equals(this.qsHdfree, quickserverServiceMaster.qsHdfree) &&
        Objects.equals(this.qsBits, quickserverServiceMaster.qsBits) &&
        Objects.equals(this.qsLoad, quickserverServiceMaster.qsLoad) &&
        Objects.equals(this.qsRam, quickserverServiceMaster.qsRam) &&
        Objects.equals(this.qsCpuModel, quickserverServiceMaster.qsCpuModel) &&
        Objects.equals(this.qsCpuMhz, quickserverServiceMaster.qsCpuMhz) &&
        Objects.equals(this.qsLocation, quickserverServiceMaster.qsLocation) &&
        Objects.equals(this.qsAvailable, quickserverServiceMaster.qsAvailable) &&
        Objects.equals(this.qsCost, quickserverServiceMaster.qsCost) &&
        Objects.equals(this.qsLastUpdate, quickserverServiceMaster.qsLastUpdate) &&
        Objects.equals(this.qsCores, quickserverServiceMaster.qsCores) &&
        Objects.equals(this.qsIowait, quickserverServiceMaster.qsIowait) &&
        Objects.equals(this.qsRaidStatus, quickserverServiceMaster.qsRaidStatus) &&
        Objects.equals(this.qsDriveType, quickserverServiceMaster.qsDriveType) &&
        Objects.equals(this.qsOrder, quickserverServiceMaster.qsOrder) &&
        Objects.equals(this.qsRaidBuilding, quickserverServiceMaster.qsRaidBuilding) &&
        Objects.equals(this.qsKernel, quickserverServiceMaster.qsKernel) &&
        Objects.equals(this.qsIoping, quickserverServiceMaster.qsIoping) &&
        Objects.equals(this.qsSpeed, quickserverServiceMaster.qsSpeed) &&
        Objects.equals(this.qsDistro, quickserverServiceMaster.qsDistro) &&
        Objects.equals(this.qsDistroVersion, quickserverServiceMaster.qsDistroVersion) &&
        Objects.equals(this.qsBytesSecIn, quickserverServiceMaster.qsBytesSecIn) &&
        Objects.equals(this.qsBytesSecOut, quickserverServiceMaster.qsBytesSecOut) &&
        Objects.equals(this.qsPacketsSecIn, quickserverServiceMaster.qsPacketsSecIn) &&
        Objects.equals(this.qsPacketsSecOut, quickserverServiceMaster.qsPacketsSecOut) &&
        Objects.equals(this.qsLastInstallTime, quickserverServiceMaster.qsLastInstallTime) &&
        Objects.equals(this.qsPartitions, quickserverServiceMaster.qsPartitions) &&
        Objects.equals(this.qsCpuFlags, quickserverServiceMaster.qsCpuFlags);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}


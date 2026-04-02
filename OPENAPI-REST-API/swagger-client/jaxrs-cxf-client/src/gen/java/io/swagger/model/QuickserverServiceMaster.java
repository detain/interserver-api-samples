package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonCreator;

/**
  * Information about the host node running this QuickServer, including hardware specs and resource utilization.
 **/
@Schema(description="Information about the host node running this QuickServer, including hardware specs and resource utilization.")
public class QuickserverServiceMaster   {
  
  @Schema(example = "365", description = "Quickserver ID")
 /**
   * Quickserver ID  
  **/
  private String qsId = null;
  
  @Schema(example = "Qs365", description = "Quickserver name")
 /**
   * Quickserver name  
  **/
  private String qsName = null;
  
  @Schema(description = "IP address")
 /**
   * IP address  
  **/
  private String qsIp = null;
  
  @Schema(example = "14", description = "Type")
 /**
   * Type  
  **/
  private String qsType = null;
  
  @Schema(example = "1760", description = "HDD size")
 /**
   * HDD size  
  **/
  private String qsHdsize = null;
  
  @Schema(example = "1192", description = "Free HDD space")
 /**
   * Free HDD space  
  **/
  private String qsHdfree = null;
  
  @Schema(example = "64", description = "Bits")
 /**
   * Bits  
  **/
  private String qsBits = null;
  
  @Schema(example = "3.45", description = "Load")
 /**
   * Load  
  **/
  private String qsLoad = null;
  
  @Schema(example = "29550679", description = "RAM information")
 /**
   * RAM information  
  **/
  private String qsRam = null;
  
  @Schema(example = "Intel(R) Xeon(R) CPU E3-1271 v3 @ 3.60GHz", description = "CPU model")
 /**
   * CPU model  
  **/
  private String qsCpuModel = null;
  
  @Schema(example = "2900", description = "CPU frequency")
 /**
   * CPU frequency  
  **/
  private String qsCpuMhz = null;
  
  @Schema(example = "1", description = "Location")
 /**
   * Location  
  **/
  private String qsLocation = null;
  
  @Schema(example = "0", description = "Available information")
 /**
   * Available information  
  **/
  private String qsAvailable = null;
  
  @Schema(example = "49", description = "Cost")
 /**
   * Cost  
  **/
  private String qsCost = null;
  
  @Schema(example = "2023-08-17T23:52:02.000Z", description = "Last update date")
 /**
   * Last update date  
  **/
  private String qsLastUpdate = null;
  
  @Schema(example = "8", description = "Number of cores")
 /**
   * Number of cores  
  **/
  private String qsCores = null;
  
  @Schema(example = "6.89", description = "I/O wait")
 /**
   * I/O wait  
  **/
  private String qsIowait = null;
  
  @Schema(example = "OK: zfs:all pools are healthy", description = "RAID status")
 /**
   * RAID status  
  **/
  private String qsRaidStatus = null;
  
  @Schema(example = "SSD", description = "Drive type")
 /**
   * Drive type  
  **/
  private String qsDriveType = null;
  
  @Schema(example = "92263", description = "Order number")
 /**
   * Order number  
  **/
  private String qsOrder = null;
  
  @Schema(example = "0", description = "RAID building information")
 /**
   * RAID building information  
  **/
  private String qsRaidBuilding = null;
  
  @Schema(example = "5.15.0-69-generic", description = "Kernel version")
 /**
   * Kernel version  
  **/
  private String qsKernel = null;
  
  @Schema(example = "330707348", description = "IOPing information")
 /**
   * IOPing information  
  **/
  private String qsIoping = null;
  
  @Schema(example = "1000", description = "Speed information")
 /**
   * Speed information  
  **/
  private String qsSpeed = null;
  
  @Schema(example = "Ubuntu", description = "Distribution name")
 /**
   * Distribution name  
  **/
  private String qsDistro = null;
  
  @Schema(example = "22.04", description = "Distribution version")
 /**
   * Distribution version  
  **/
  private String qsDistroVersion = null;
  
  @Schema(example = "0", description = "Bytes/sec in")
 /**
   * Bytes/sec in  
  **/
  private String qsBytesSecIn = null;
  
  @Schema(example = "0", description = "Bytes/sec out")
 /**
   * Bytes/sec out  
  **/
  private String qsBytesSecOut = null;
  
  @Schema(example = "0", description = "Packets/sec in")
 /**
   * Packets/sec in  
  **/
  private String qsPacketsSecIn = null;
  
  @Schema(example = "0", description = "Packets/sec out")
 /**
   * Packets/sec out  
  **/
  private String qsPacketsSecOut = null;
  
  @Schema(description = "Last install time (null)")
 /**
   * Last install time (null)  
  **/
  private String qsLastInstallTime = null;
  
  @Schema(description = "Partitions information (null)")
 /**
   * Partitions information (null)  
  **/
  private String qsPartitions = null;
  
  @Schema(description = "CPU flags")
 /**
   * CPU flags  
  **/
  private String qsCpuFlags = null;
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
  public String getQsLastInstallTime() {
    return qsLastInstallTime;
  }

  public void setQsLastInstallTime(String qsLastInstallTime) {
    this.qsLastInstallTime = qsLastInstallTime;
  }

  public QuickserverServiceMaster qsLastInstallTime(String qsLastInstallTime) {
    this.qsLastInstallTime = qsLastInstallTime;
    return this;
  }

 /**
   * Partitions information (null)
   * @return qsPartitions
  **/
  @JsonProperty("qs_partitions")
  public String getQsPartitions() {
    return qsPartitions;
  }

  public void setQsPartitions(String qsPartitions) {
    this.qsPartitions = qsPartitions;
  }

  public QuickserverServiceMaster qsPartitions(String qsPartitions) {
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

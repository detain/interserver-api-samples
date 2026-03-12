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
  * Information about the host node (hypervisor) running this VPS, including hardware specs and resource utilization.
 **/
@Schema(description="Information about the host node (hypervisor) running this VPS, including hardware specs and resource utilization.")
public class VpsServiceMaster   {
  
  @Schema(example = "2439", description = "VPS ID")
 /**
   * VPS ID  
  **/
  private String vpsId = null;
  
  @Schema(example = "Mystaging", description = "VPS name")
 /**
   * VPS name  
  **/
  private String vpsName = null;
  
  @Schema(example = "10.11.12.13", description = "IP address of the VPS")
 /**
   * IP address of the VPS  
  **/
  private String vpsIp = null;
  
  @Schema(example = "14", description = "VPS type")
 /**
   * VPS type  
  **/
  private String vpsType = null;
  
  @Schema(example = "1856", description = "Hard drive size")
 /**
   * Hard drive size  
  **/
  private String vpsHdsize = null;
  
  @Schema(example = "1559", description = "Free hard drive space")
 /**
   * Free hard drive space  
  **/
  private String vpsHdfree = null;
  
  @Schema(example = "64", description = "Bits")
 /**
   * Bits  
  **/
  private String vpsBits = null;
  
  @Schema(example = "0.17", description = "CPU load")
 /**
   * CPU load  
  **/
  private String vpsLoad = null;
  
  @Schema(example = "263998228", description = "RAM")
 /**
   * RAM  
  **/
  private String vpsRam = null;
  
  @Schema(example = "Intel(R) Xeon(R) CPU E5-2678 v3 @ 2.50GHz", description = "CPU model")
 /**
   * CPU model  
  **/
  private String vpsCpuModel = null;
  
  @Schema(example = "1198.86", description = "CPU frequency in MHz")
 /**
   * CPU frequency in MHz  
  **/
  private String vpsCpuMhz = null;
  
  @Schema(example = "1", description = "Location of the VPS")
 /**
   * Location of the VPS  
  **/
  private String vpsLocation = null;
  
  @Schema(example = "2023-08-17T22:19:04.000Z", description = "Last update date")
 /**
   * Last update date  
  **/
  private String vpsLastUpdate = null;
  
  @Schema(example = "0", description = "RAID building status")
 /**
   * RAID building status  
  **/
  private String vpsRaidBuilding = null;
  
  @Schema(example = "5.4.0-121-generic", description = "Kernel version")
 /**
   * Kernel version  
  **/
  private String vpsKernel = null;
  
  @Schema(example = "0", description = "Available")
 /**
   * Available  
  **/
  private String vpsAvailable = null;
  
  @Schema(example = "48", description = "Number of CPU cores")
 /**
   * Number of CPU cores  
  **/
  private String vpsCores = null;
  
  @Schema(example = "0.09", description = "I/O wait")
 /**
   * I/O wait  
  **/
  private String vpsIowait = null;
  
  @Schema(example = "OK: zfs:all pools are healthy", description = "RAID status")
 /**
   * RAID status  
  **/
  private String vpsRaidStatus = null;
  
  @Schema(example = "udev:125:0:125:/dev,/dev/md1:91:53:38:/,securityfs:0:0:0:/sys/kernel/security,cgroup2:0:0:0:/sys/fs/cgroup/unified,pstore:0:0:0:/sys/fs/pstore,efivarfs:0:0:0:/sys/firmware/efi/efivars,systemd-1:0:0:0:/proc/sys/fs/binfmt_misc,hugetlbfs:0:0:0:/dev/hugepages", description = "Mounts")
 /**
   * Mounts  
  **/
  private String vpsMounts = null;
  
  @Schema(example = "50", description = "Maximum number of servers")
 /**
   * Maximum number of servers  
  **/
  private String vpsServerMax = null;
  
  @Schema(example = "80", description = "Maximum number of server slices")
 /**
   * Maximum number of server slices  
  **/
  private String vpsServerMaxSlices = null;
  
  @Schema(example = "SSD", description = "Drive type")
 /**
   * Drive type  
  **/
  private String vpsDriveType = null;
  
  @Schema(example = "36978", description = "Order number")
 /**
   * Order number  
  **/
  private String vpsOrder = null;
 /**
   * VPS ID
   * @return vpsId
  **/
  @JsonProperty("vps_id")
  public String getVpsId() {
    return vpsId;
  }

  public void setVpsId(String vpsId) {
    this.vpsId = vpsId;
  }

  public VpsServiceMaster vpsId(String vpsId) {
    this.vpsId = vpsId;
    return this;
  }

 /**
   * VPS name
   * @return vpsName
  **/
  @JsonProperty("vps_name")
  public String getVpsName() {
    return vpsName;
  }

  public void setVpsName(String vpsName) {
    this.vpsName = vpsName;
  }

  public VpsServiceMaster vpsName(String vpsName) {
    this.vpsName = vpsName;
    return this;
  }

 /**
   * IP address of the VPS
   * @return vpsIp
  **/
  @JsonProperty("vps_ip")
  public String getVpsIp() {
    return vpsIp;
  }

  public void setVpsIp(String vpsIp) {
    this.vpsIp = vpsIp;
  }

  public VpsServiceMaster vpsIp(String vpsIp) {
    this.vpsIp = vpsIp;
    return this;
  }

 /**
   * VPS type
   * @return vpsType
  **/
  @JsonProperty("vps_type")
  public String getVpsType() {
    return vpsType;
  }

  public void setVpsType(String vpsType) {
    this.vpsType = vpsType;
  }

  public VpsServiceMaster vpsType(String vpsType) {
    this.vpsType = vpsType;
    return this;
  }

 /**
   * Hard drive size
   * @return vpsHdsize
  **/
  @JsonProperty("vps_hdsize")
  public String getVpsHdsize() {
    return vpsHdsize;
  }

  public void setVpsHdsize(String vpsHdsize) {
    this.vpsHdsize = vpsHdsize;
  }

  public VpsServiceMaster vpsHdsize(String vpsHdsize) {
    this.vpsHdsize = vpsHdsize;
    return this;
  }

 /**
   * Free hard drive space
   * @return vpsHdfree
  **/
  @JsonProperty("vps_hdfree")
  public String getVpsHdfree() {
    return vpsHdfree;
  }

  public void setVpsHdfree(String vpsHdfree) {
    this.vpsHdfree = vpsHdfree;
  }

  public VpsServiceMaster vpsHdfree(String vpsHdfree) {
    this.vpsHdfree = vpsHdfree;
    return this;
  }

 /**
   * Bits
   * @return vpsBits
  **/
  @JsonProperty("vps_bits")
  public String getVpsBits() {
    return vpsBits;
  }

  public void setVpsBits(String vpsBits) {
    this.vpsBits = vpsBits;
  }

  public VpsServiceMaster vpsBits(String vpsBits) {
    this.vpsBits = vpsBits;
    return this;
  }

 /**
   * CPU load
   * @return vpsLoad
  **/
  @JsonProperty("vps_load")
  public String getVpsLoad() {
    return vpsLoad;
  }

  public void setVpsLoad(String vpsLoad) {
    this.vpsLoad = vpsLoad;
  }

  public VpsServiceMaster vpsLoad(String vpsLoad) {
    this.vpsLoad = vpsLoad;
    return this;
  }

 /**
   * RAM
   * @return vpsRam
  **/
  @JsonProperty("vps_ram")
  public String getVpsRam() {
    return vpsRam;
  }

  public void setVpsRam(String vpsRam) {
    this.vpsRam = vpsRam;
  }

  public VpsServiceMaster vpsRam(String vpsRam) {
    this.vpsRam = vpsRam;
    return this;
  }

 /**
   * CPU model
   * @return vpsCpuModel
  **/
  @JsonProperty("vps_cpu_model")
  public String getVpsCpuModel() {
    return vpsCpuModel;
  }

  public void setVpsCpuModel(String vpsCpuModel) {
    this.vpsCpuModel = vpsCpuModel;
  }

  public VpsServiceMaster vpsCpuModel(String vpsCpuModel) {
    this.vpsCpuModel = vpsCpuModel;
    return this;
  }

 /**
   * CPU frequency in MHz
   * @return vpsCpuMhz
  **/
  @JsonProperty("vps_cpu_mhz")
  public String getVpsCpuMhz() {
    return vpsCpuMhz;
  }

  public void setVpsCpuMhz(String vpsCpuMhz) {
    this.vpsCpuMhz = vpsCpuMhz;
  }

  public VpsServiceMaster vpsCpuMhz(String vpsCpuMhz) {
    this.vpsCpuMhz = vpsCpuMhz;
    return this;
  }

 /**
   * Location of the VPS
   * @return vpsLocation
  **/
  @JsonProperty("vps_location")
  public String getVpsLocation() {
    return vpsLocation;
  }

  public void setVpsLocation(String vpsLocation) {
    this.vpsLocation = vpsLocation;
  }

  public VpsServiceMaster vpsLocation(String vpsLocation) {
    this.vpsLocation = vpsLocation;
    return this;
  }

 /**
   * Last update date
   * @return vpsLastUpdate
  **/
  @JsonProperty("vps_last_update")
  public String getVpsLastUpdate() {
    return vpsLastUpdate;
  }

  public void setVpsLastUpdate(String vpsLastUpdate) {
    this.vpsLastUpdate = vpsLastUpdate;
  }

  public VpsServiceMaster vpsLastUpdate(String vpsLastUpdate) {
    this.vpsLastUpdate = vpsLastUpdate;
    return this;
  }

 /**
   * RAID building status
   * @return vpsRaidBuilding
  **/
  @JsonProperty("vps_raid_building")
  public String getVpsRaidBuilding() {
    return vpsRaidBuilding;
  }

  public void setVpsRaidBuilding(String vpsRaidBuilding) {
    this.vpsRaidBuilding = vpsRaidBuilding;
  }

  public VpsServiceMaster vpsRaidBuilding(String vpsRaidBuilding) {
    this.vpsRaidBuilding = vpsRaidBuilding;
    return this;
  }

 /**
   * Kernel version
   * @return vpsKernel
  **/
  @JsonProperty("vps_kernel")
  public String getVpsKernel() {
    return vpsKernel;
  }

  public void setVpsKernel(String vpsKernel) {
    this.vpsKernel = vpsKernel;
  }

  public VpsServiceMaster vpsKernel(String vpsKernel) {
    this.vpsKernel = vpsKernel;
    return this;
  }

 /**
   * Available
   * @return vpsAvailable
  **/
  @JsonProperty("vps_available")
  public String getVpsAvailable() {
    return vpsAvailable;
  }

  public void setVpsAvailable(String vpsAvailable) {
    this.vpsAvailable = vpsAvailable;
  }

  public VpsServiceMaster vpsAvailable(String vpsAvailable) {
    this.vpsAvailable = vpsAvailable;
    return this;
  }

 /**
   * Number of CPU cores
   * @return vpsCores
  **/
  @JsonProperty("vps_cores")
  public String getVpsCores() {
    return vpsCores;
  }

  public void setVpsCores(String vpsCores) {
    this.vpsCores = vpsCores;
  }

  public VpsServiceMaster vpsCores(String vpsCores) {
    this.vpsCores = vpsCores;
    return this;
  }

 /**
   * I/O wait
   * @return vpsIowait
  **/
  @JsonProperty("vps_iowait")
  public String getVpsIowait() {
    return vpsIowait;
  }

  public void setVpsIowait(String vpsIowait) {
    this.vpsIowait = vpsIowait;
  }

  public VpsServiceMaster vpsIowait(String vpsIowait) {
    this.vpsIowait = vpsIowait;
    return this;
  }

 /**
   * RAID status
   * @return vpsRaidStatus
  **/
  @JsonProperty("vps_raid_status")
  public String getVpsRaidStatus() {
    return vpsRaidStatus;
  }

  public void setVpsRaidStatus(String vpsRaidStatus) {
    this.vpsRaidStatus = vpsRaidStatus;
  }

  public VpsServiceMaster vpsRaidStatus(String vpsRaidStatus) {
    this.vpsRaidStatus = vpsRaidStatus;
    return this;
  }

 /**
   * Mounts
   * @return vpsMounts
  **/
  @JsonProperty("vps_mounts")
  public String getVpsMounts() {
    return vpsMounts;
  }

  public void setVpsMounts(String vpsMounts) {
    this.vpsMounts = vpsMounts;
  }

  public VpsServiceMaster vpsMounts(String vpsMounts) {
    this.vpsMounts = vpsMounts;
    return this;
  }

 /**
   * Maximum number of servers
   * @return vpsServerMax
  **/
  @JsonProperty("vps_server_max")
  public String getVpsServerMax() {
    return vpsServerMax;
  }

  public void setVpsServerMax(String vpsServerMax) {
    this.vpsServerMax = vpsServerMax;
  }

  public VpsServiceMaster vpsServerMax(String vpsServerMax) {
    this.vpsServerMax = vpsServerMax;
    return this;
  }

 /**
   * Maximum number of server slices
   * @return vpsServerMaxSlices
  **/
  @JsonProperty("vps_server_max_slices")
  public String getVpsServerMaxSlices() {
    return vpsServerMaxSlices;
  }

  public void setVpsServerMaxSlices(String vpsServerMaxSlices) {
    this.vpsServerMaxSlices = vpsServerMaxSlices;
  }

  public VpsServiceMaster vpsServerMaxSlices(String vpsServerMaxSlices) {
    this.vpsServerMaxSlices = vpsServerMaxSlices;
    return this;
  }

 /**
   * Drive type
   * @return vpsDriveType
  **/
  @JsonProperty("vps_drive_type")
  public String getVpsDriveType() {
    return vpsDriveType;
  }

  public void setVpsDriveType(String vpsDriveType) {
    this.vpsDriveType = vpsDriveType;
  }

  public VpsServiceMaster vpsDriveType(String vpsDriveType) {
    this.vpsDriveType = vpsDriveType;
    return this;
  }

 /**
   * Order number
   * @return vpsOrder
  **/
  @JsonProperty("vps_order")
  public String getVpsOrder() {
    return vpsOrder;
  }

  public void setVpsOrder(String vpsOrder) {
    this.vpsOrder = vpsOrder;
  }

  public VpsServiceMaster vpsOrder(String vpsOrder) {
    this.vpsOrder = vpsOrder;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsServiceMaster {\n");
    
    sb.append("    vpsId: ").append(toIndentedString(vpsId)).append("\n");
    sb.append("    vpsName: ").append(toIndentedString(vpsName)).append("\n");
    sb.append("    vpsIp: ").append(toIndentedString(vpsIp)).append("\n");
    sb.append("    vpsType: ").append(toIndentedString(vpsType)).append("\n");
    sb.append("    vpsHdsize: ").append(toIndentedString(vpsHdsize)).append("\n");
    sb.append("    vpsHdfree: ").append(toIndentedString(vpsHdfree)).append("\n");
    sb.append("    vpsBits: ").append(toIndentedString(vpsBits)).append("\n");
    sb.append("    vpsLoad: ").append(toIndentedString(vpsLoad)).append("\n");
    sb.append("    vpsRam: ").append(toIndentedString(vpsRam)).append("\n");
    sb.append("    vpsCpuModel: ").append(toIndentedString(vpsCpuModel)).append("\n");
    sb.append("    vpsCpuMhz: ").append(toIndentedString(vpsCpuMhz)).append("\n");
    sb.append("    vpsLocation: ").append(toIndentedString(vpsLocation)).append("\n");
    sb.append("    vpsLastUpdate: ").append(toIndentedString(vpsLastUpdate)).append("\n");
    sb.append("    vpsRaidBuilding: ").append(toIndentedString(vpsRaidBuilding)).append("\n");
    sb.append("    vpsKernel: ").append(toIndentedString(vpsKernel)).append("\n");
    sb.append("    vpsAvailable: ").append(toIndentedString(vpsAvailable)).append("\n");
    sb.append("    vpsCores: ").append(toIndentedString(vpsCores)).append("\n");
    sb.append("    vpsIowait: ").append(toIndentedString(vpsIowait)).append("\n");
    sb.append("    vpsRaidStatus: ").append(toIndentedString(vpsRaidStatus)).append("\n");
    sb.append("    vpsMounts: ").append(toIndentedString(vpsMounts)).append("\n");
    sb.append("    vpsServerMax: ").append(toIndentedString(vpsServerMax)).append("\n");
    sb.append("    vpsServerMaxSlices: ").append(toIndentedString(vpsServerMaxSlices)).append("\n");
    sb.append("    vpsDriveType: ").append(toIndentedString(vpsDriveType)).append("\n");
    sb.append("    vpsOrder: ").append(toIndentedString(vpsOrder)).append("\n");
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

package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Information about the host node (hypervisor) running this VPS, including hardware specs and resource utilization.
 */
@ApiModel(description="Information about the host node (hypervisor) running this VPS, including hardware specs and resource utilization.")

public class VpsServiceMaster  {
  
 /**
  * VPS ID
  */
  @ApiModelProperty(example = "2439", value = "VPS ID")

  private String vpsId;

 /**
  * VPS name
  */
  @ApiModelProperty(example = "Mystaging", value = "VPS name")

  private String vpsName;

 /**
  * IP address of the VPS
  */
  @ApiModelProperty(example = "10.11.12.13", value = "IP address of the VPS")

  private String vpsIp;

 /**
  * VPS type
  */
  @ApiModelProperty(example = "14", value = "VPS type")

  private String vpsType;

 /**
  * Hard drive size
  */
  @ApiModelProperty(example = "1856", value = "Hard drive size")

  private String vpsHdsize;

 /**
  * Free hard drive space
  */
  @ApiModelProperty(example = "1559", value = "Free hard drive space")

  private String vpsHdfree;

 /**
  * Bits
  */
  @ApiModelProperty(example = "64", value = "Bits")

  private String vpsBits;

 /**
  * CPU load
  */
  @ApiModelProperty(example = "0.17", value = "CPU load")

  private String vpsLoad;

 /**
  * RAM
  */
  @ApiModelProperty(example = "263998228", value = "RAM")

  private String vpsRam;

 /**
  * CPU model
  */
  @ApiModelProperty(example = "Intel(R) Xeon(R) CPU E5-2678 v3 @ 2.50GHz", value = "CPU model")

  private String vpsCpuModel;

 /**
  * CPU frequency in MHz
  */
  @ApiModelProperty(example = "1198.86", value = "CPU frequency in MHz")

  private String vpsCpuMhz;

 /**
  * Location of the VPS
  */
  @ApiModelProperty(example = "1", value = "Location of the VPS")

  private String vpsLocation;

 /**
  * Last update date
  */
  @ApiModelProperty(example = "2023-08-17T22:19:04.000Z", value = "Last update date")

  private String vpsLastUpdate;

 /**
  * RAID building status
  */
  @ApiModelProperty(example = "0", value = "RAID building status")

  private String vpsRaidBuilding;

 /**
  * Kernel version
  */
  @ApiModelProperty(example = "5.4.0-121-generic", value = "Kernel version")

  private String vpsKernel;

 /**
  * Available
  */
  @ApiModelProperty(example = "0", value = "Available")

  private String vpsAvailable;

 /**
  * Number of CPU cores
  */
  @ApiModelProperty(example = "48", value = "Number of CPU cores")

  private String vpsCores;

 /**
  * I/O wait
  */
  @ApiModelProperty(example = "0.09", value = "I/O wait")

  private String vpsIowait;

 /**
  * RAID status
  */
  @ApiModelProperty(example = "OK: zfs:all pools are healthy", value = "RAID status")

  private String vpsRaidStatus;

 /**
  * Mounts
  */
  @ApiModelProperty(example = "udev:125:0:125:/dev,/dev/md1:91:53:38:/,securityfs:0:0:0:/sys/kernel/security,cgroup2:0:0:0:/sys/fs/cgroup/unified,pstore:0:0:0:/sys/fs/pstore,efivarfs:0:0:0:/sys/firmware/efi/efivars,systemd-1:0:0:0:/proc/sys/fs/binfmt_misc,hugetlbfs:0:0:0:/dev/hugepages", value = "Mounts")

  private String vpsMounts;

 /**
  * Maximum number of servers
  */
  @ApiModelProperty(example = "50", value = "Maximum number of servers")

  private String vpsServerMax;

 /**
  * Maximum number of server slices
  */
  @ApiModelProperty(example = "80", value = "Maximum number of server slices")

  private String vpsServerMaxSlices;

 /**
  * Drive type
  */
  @ApiModelProperty(example = "SSD", value = "Drive type")

  private String vpsDriveType;

 /**
  * Order number
  */
  @ApiModelProperty(example = "36978", value = "Order number")

  private String vpsOrder;
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsServiceMaster vpsServiceMaster = (VpsServiceMaster) o;
    return Objects.equals(this.vpsId, vpsServiceMaster.vpsId) &&
        Objects.equals(this.vpsName, vpsServiceMaster.vpsName) &&
        Objects.equals(this.vpsIp, vpsServiceMaster.vpsIp) &&
        Objects.equals(this.vpsType, vpsServiceMaster.vpsType) &&
        Objects.equals(this.vpsHdsize, vpsServiceMaster.vpsHdsize) &&
        Objects.equals(this.vpsHdfree, vpsServiceMaster.vpsHdfree) &&
        Objects.equals(this.vpsBits, vpsServiceMaster.vpsBits) &&
        Objects.equals(this.vpsLoad, vpsServiceMaster.vpsLoad) &&
        Objects.equals(this.vpsRam, vpsServiceMaster.vpsRam) &&
        Objects.equals(this.vpsCpuModel, vpsServiceMaster.vpsCpuModel) &&
        Objects.equals(this.vpsCpuMhz, vpsServiceMaster.vpsCpuMhz) &&
        Objects.equals(this.vpsLocation, vpsServiceMaster.vpsLocation) &&
        Objects.equals(this.vpsLastUpdate, vpsServiceMaster.vpsLastUpdate) &&
        Objects.equals(this.vpsRaidBuilding, vpsServiceMaster.vpsRaidBuilding) &&
        Objects.equals(this.vpsKernel, vpsServiceMaster.vpsKernel) &&
        Objects.equals(this.vpsAvailable, vpsServiceMaster.vpsAvailable) &&
        Objects.equals(this.vpsCores, vpsServiceMaster.vpsCores) &&
        Objects.equals(this.vpsIowait, vpsServiceMaster.vpsIowait) &&
        Objects.equals(this.vpsRaidStatus, vpsServiceMaster.vpsRaidStatus) &&
        Objects.equals(this.vpsMounts, vpsServiceMaster.vpsMounts) &&
        Objects.equals(this.vpsServerMax, vpsServiceMaster.vpsServerMax) &&
        Objects.equals(this.vpsServerMaxSlices, vpsServiceMaster.vpsServerMaxSlices) &&
        Objects.equals(this.vpsDriveType, vpsServiceMaster.vpsDriveType) &&
        Objects.equals(this.vpsOrder, vpsServiceMaster.vpsOrder);
  }

  @Override
  public int hashCode() {
    return Objects.hash(vpsId, vpsName, vpsIp, vpsType, vpsHdsize, vpsHdfree, vpsBits, vpsLoad, vpsRam, vpsCpuModel, vpsCpuMhz, vpsLocation, vpsLastUpdate, vpsRaidBuilding, vpsKernel, vpsAvailable, vpsCores, vpsIowait, vpsRaidStatus, vpsMounts, vpsServerMax, vpsServerMaxSlices, vpsDriveType, vpsOrder);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}


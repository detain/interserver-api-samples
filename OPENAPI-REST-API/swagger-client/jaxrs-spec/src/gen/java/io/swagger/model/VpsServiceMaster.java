package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Information about the host node (hypervisor) running this VPS, including hardware specs and resource utilization.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Information about the host node (hypervisor) running this VPS, including hardware specs and resource utilization.")

public class VpsServiceMaster   {

  private @Valid String vpsId = null;

  private @Valid String vpsName = null;

  private @Valid String vpsIp = null;

  private @Valid String vpsType = null;

  private @Valid String vpsHdsize = null;

  private @Valid String vpsHdfree = null;

  private @Valid String vpsBits = null;

  private @Valid String vpsLoad = null;

  private @Valid String vpsRam = null;

  private @Valid String vpsCpuModel = null;

  private @Valid String vpsCpuMhz = null;

  private @Valid String vpsLocation = null;

  private @Valid String vpsLastUpdate = null;

  private @Valid String vpsRaidBuilding = null;

  private @Valid String vpsKernel = null;

  private @Valid String vpsAvailable = null;

  private @Valid String vpsCores = null;

  private @Valid String vpsIowait = null;

  private @Valid String vpsRaidStatus = null;

  private @Valid String vpsMounts = null;

  private @Valid String vpsServerMax = null;

  private @Valid String vpsServerMaxSlices = null;

  private @Valid String vpsDriveType = null;

  private @Valid String vpsOrder = null;

  /**
   * VPS ID
   **/
  public VpsServiceMaster vpsId(String vpsId) {
    this.vpsId = vpsId;
    return this;
  }

  
  @ApiModelProperty(example = "2439", value = "VPS ID")
  @JsonProperty("vps_id")
  @NotNull

  public String getVpsId() {
    return vpsId;
  }
  public void setVpsId(String vpsId) {
    this.vpsId = vpsId;
  }

  /**
   * VPS name
   **/
  public VpsServiceMaster vpsName(String vpsName) {
    this.vpsName = vpsName;
    return this;
  }

  
  @ApiModelProperty(example = "Mystaging", value = "VPS name")
  @JsonProperty("vps_name")
  @NotNull

  public String getVpsName() {
    return vpsName;
  }
  public void setVpsName(String vpsName) {
    this.vpsName = vpsName;
  }

  /**
   * IP address of the VPS
   **/
  public VpsServiceMaster vpsIp(String vpsIp) {
    this.vpsIp = vpsIp;
    return this;
  }

  
  @ApiModelProperty(example = "10.11.12.13", value = "IP address of the VPS")
  @JsonProperty("vps_ip")
  @NotNull

  public String getVpsIp() {
    return vpsIp;
  }
  public void setVpsIp(String vpsIp) {
    this.vpsIp = vpsIp;
  }

  /**
   * VPS type
   **/
  public VpsServiceMaster vpsType(String vpsType) {
    this.vpsType = vpsType;
    return this;
  }

  
  @ApiModelProperty(example = "14", value = "VPS type")
  @JsonProperty("vps_type")
  @NotNull

  public String getVpsType() {
    return vpsType;
  }
  public void setVpsType(String vpsType) {
    this.vpsType = vpsType;
  }

  /**
   * Hard drive size
   **/
  public VpsServiceMaster vpsHdsize(String vpsHdsize) {
    this.vpsHdsize = vpsHdsize;
    return this;
  }

  
  @ApiModelProperty(example = "1856", value = "Hard drive size")
  @JsonProperty("vps_hdsize")
  @NotNull

  public String getVpsHdsize() {
    return vpsHdsize;
  }
  public void setVpsHdsize(String vpsHdsize) {
    this.vpsHdsize = vpsHdsize;
  }

  /**
   * Free hard drive space
   **/
  public VpsServiceMaster vpsHdfree(String vpsHdfree) {
    this.vpsHdfree = vpsHdfree;
    return this;
  }

  
  @ApiModelProperty(example = "1559", value = "Free hard drive space")
  @JsonProperty("vps_hdfree")
  @NotNull

  public String getVpsHdfree() {
    return vpsHdfree;
  }
  public void setVpsHdfree(String vpsHdfree) {
    this.vpsHdfree = vpsHdfree;
  }

  /**
   * Bits
   **/
  public VpsServiceMaster vpsBits(String vpsBits) {
    this.vpsBits = vpsBits;
    return this;
  }

  
  @ApiModelProperty(example = "64", value = "Bits")
  @JsonProperty("vps_bits")
  @NotNull

  public String getVpsBits() {
    return vpsBits;
  }
  public void setVpsBits(String vpsBits) {
    this.vpsBits = vpsBits;
  }

  /**
   * CPU load
   **/
  public VpsServiceMaster vpsLoad(String vpsLoad) {
    this.vpsLoad = vpsLoad;
    return this;
  }

  
  @ApiModelProperty(example = "0.17", value = "CPU load")
  @JsonProperty("vps_load")
  @NotNull

  public String getVpsLoad() {
    return vpsLoad;
  }
  public void setVpsLoad(String vpsLoad) {
    this.vpsLoad = vpsLoad;
  }

  /**
   * RAM
   **/
  public VpsServiceMaster vpsRam(String vpsRam) {
    this.vpsRam = vpsRam;
    return this;
  }

  
  @ApiModelProperty(example = "263998228", value = "RAM")
  @JsonProperty("vps_ram")
  @NotNull

  public String getVpsRam() {
    return vpsRam;
  }
  public void setVpsRam(String vpsRam) {
    this.vpsRam = vpsRam;
  }

  /**
   * CPU model
   **/
  public VpsServiceMaster vpsCpuModel(String vpsCpuModel) {
    this.vpsCpuModel = vpsCpuModel;
    return this;
  }

  
  @ApiModelProperty(example = "Intel(R) Xeon(R) CPU E5-2678 v3 @ 2.50GHz", value = "CPU model")
  @JsonProperty("vps_cpu_model")
  @NotNull

  public String getVpsCpuModel() {
    return vpsCpuModel;
  }
  public void setVpsCpuModel(String vpsCpuModel) {
    this.vpsCpuModel = vpsCpuModel;
  }

  /**
   * CPU frequency in MHz
   **/
  public VpsServiceMaster vpsCpuMhz(String vpsCpuMhz) {
    this.vpsCpuMhz = vpsCpuMhz;
    return this;
  }

  
  @ApiModelProperty(example = "1198.86", value = "CPU frequency in MHz")
  @JsonProperty("vps_cpu_mhz")
  @NotNull

  public String getVpsCpuMhz() {
    return vpsCpuMhz;
  }
  public void setVpsCpuMhz(String vpsCpuMhz) {
    this.vpsCpuMhz = vpsCpuMhz;
  }

  /**
   * Location of the VPS
   **/
  public VpsServiceMaster vpsLocation(String vpsLocation) {
    this.vpsLocation = vpsLocation;
    return this;
  }

  
  @ApiModelProperty(example = "1", value = "Location of the VPS")
  @JsonProperty("vps_location")
  @NotNull

  public String getVpsLocation() {
    return vpsLocation;
  }
  public void setVpsLocation(String vpsLocation) {
    this.vpsLocation = vpsLocation;
  }

  /**
   * Last update date
   **/
  public VpsServiceMaster vpsLastUpdate(String vpsLastUpdate) {
    this.vpsLastUpdate = vpsLastUpdate;
    return this;
  }

  
  @ApiModelProperty(example = "2023-08-17T22:19:04.000Z", value = "Last update date")
  @JsonProperty("vps_last_update")
  @NotNull

  public String getVpsLastUpdate() {
    return vpsLastUpdate;
  }
  public void setVpsLastUpdate(String vpsLastUpdate) {
    this.vpsLastUpdate = vpsLastUpdate;
  }

  /**
   * RAID building status
   **/
  public VpsServiceMaster vpsRaidBuilding(String vpsRaidBuilding) {
    this.vpsRaidBuilding = vpsRaidBuilding;
    return this;
  }

  
  @ApiModelProperty(example = "0", value = "RAID building status")
  @JsonProperty("vps_raid_building")
  @NotNull

  public String getVpsRaidBuilding() {
    return vpsRaidBuilding;
  }
  public void setVpsRaidBuilding(String vpsRaidBuilding) {
    this.vpsRaidBuilding = vpsRaidBuilding;
  }

  /**
   * Kernel version
   **/
  public VpsServiceMaster vpsKernel(String vpsKernel) {
    this.vpsKernel = vpsKernel;
    return this;
  }

  
  @ApiModelProperty(example = "5.4.0-121-generic", value = "Kernel version")
  @JsonProperty("vps_kernel")
  @NotNull

  public String getVpsKernel() {
    return vpsKernel;
  }
  public void setVpsKernel(String vpsKernel) {
    this.vpsKernel = vpsKernel;
  }

  /**
   * Available
   **/
  public VpsServiceMaster vpsAvailable(String vpsAvailable) {
    this.vpsAvailable = vpsAvailable;
    return this;
  }

  
  @ApiModelProperty(example = "0", value = "Available")
  @JsonProperty("vps_available")
  @NotNull

  public String getVpsAvailable() {
    return vpsAvailable;
  }
  public void setVpsAvailable(String vpsAvailable) {
    this.vpsAvailable = vpsAvailable;
  }

  /**
   * Number of CPU cores
   **/
  public VpsServiceMaster vpsCores(String vpsCores) {
    this.vpsCores = vpsCores;
    return this;
  }

  
  @ApiModelProperty(example = "48", value = "Number of CPU cores")
  @JsonProperty("vps_cores")
  @NotNull

  public String getVpsCores() {
    return vpsCores;
  }
  public void setVpsCores(String vpsCores) {
    this.vpsCores = vpsCores;
  }

  /**
   * I/O wait
   **/
  public VpsServiceMaster vpsIowait(String vpsIowait) {
    this.vpsIowait = vpsIowait;
    return this;
  }

  
  @ApiModelProperty(example = "0.09", value = "I/O wait")
  @JsonProperty("vps_iowait")
  @NotNull

  public String getVpsIowait() {
    return vpsIowait;
  }
  public void setVpsIowait(String vpsIowait) {
    this.vpsIowait = vpsIowait;
  }

  /**
   * RAID status
   **/
  public VpsServiceMaster vpsRaidStatus(String vpsRaidStatus) {
    this.vpsRaidStatus = vpsRaidStatus;
    return this;
  }

  
  @ApiModelProperty(example = "OK: zfs:all pools are healthy", value = "RAID status")
  @JsonProperty("vps_raid_status")
  @NotNull

  public String getVpsRaidStatus() {
    return vpsRaidStatus;
  }
  public void setVpsRaidStatus(String vpsRaidStatus) {
    this.vpsRaidStatus = vpsRaidStatus;
  }

  /**
   * Mounts
   **/
  public VpsServiceMaster vpsMounts(String vpsMounts) {
    this.vpsMounts = vpsMounts;
    return this;
  }

  
  @ApiModelProperty(example = "udev:125:0:125:/dev,/dev/md1:91:53:38:/,securityfs:0:0:0:/sys/kernel/security,cgroup2:0:0:0:/sys/fs/cgroup/unified,pstore:0:0:0:/sys/fs/pstore,efivarfs:0:0:0:/sys/firmware/efi/efivars,systemd-1:0:0:0:/proc/sys/fs/binfmt_misc,hugetlbfs:0:0:0:/dev/hugepages", value = "Mounts")
  @JsonProperty("vps_mounts")
  @NotNull

  public String getVpsMounts() {
    return vpsMounts;
  }
  public void setVpsMounts(String vpsMounts) {
    this.vpsMounts = vpsMounts;
  }

  /**
   * Maximum number of servers
   **/
  public VpsServiceMaster vpsServerMax(String vpsServerMax) {
    this.vpsServerMax = vpsServerMax;
    return this;
  }

  
  @ApiModelProperty(example = "50", value = "Maximum number of servers")
  @JsonProperty("vps_server_max")
  @NotNull

  public String getVpsServerMax() {
    return vpsServerMax;
  }
  public void setVpsServerMax(String vpsServerMax) {
    this.vpsServerMax = vpsServerMax;
  }

  /**
   * Maximum number of server slices
   **/
  public VpsServiceMaster vpsServerMaxSlices(String vpsServerMaxSlices) {
    this.vpsServerMaxSlices = vpsServerMaxSlices;
    return this;
  }

  
  @ApiModelProperty(example = "80", value = "Maximum number of server slices")
  @JsonProperty("vps_server_max_slices")
  @NotNull

  public String getVpsServerMaxSlices() {
    return vpsServerMaxSlices;
  }
  public void setVpsServerMaxSlices(String vpsServerMaxSlices) {
    this.vpsServerMaxSlices = vpsServerMaxSlices;
  }

  /**
   * Drive type
   **/
  public VpsServiceMaster vpsDriveType(String vpsDriveType) {
    this.vpsDriveType = vpsDriveType;
    return this;
  }

  
  @ApiModelProperty(example = "SSD", value = "Drive type")
  @JsonProperty("vps_drive_type")
  @NotNull

  public String getVpsDriveType() {
    return vpsDriveType;
  }
  public void setVpsDriveType(String vpsDriveType) {
    this.vpsDriveType = vpsDriveType;
  }

  /**
   * Order number
   **/
  public VpsServiceMaster vpsOrder(String vpsOrder) {
    this.vpsOrder = vpsOrder;
    return this;
  }

  
  @ApiModelProperty(example = "36978", value = "Order number")
  @JsonProperty("vps_order")
  @NotNull

  public String getVpsOrder() {
    return vpsOrder;
  }
  public void setVpsOrder(String vpsOrder) {
    this.vpsOrder = vpsOrder;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsServiceMaster vpsServiceMaster = (VpsServiceMaster) o;
    return Objects.equals(vpsId, vpsServiceMaster.vpsId) &&
        Objects.equals(vpsName, vpsServiceMaster.vpsName) &&
        Objects.equals(vpsIp, vpsServiceMaster.vpsIp) &&
        Objects.equals(vpsType, vpsServiceMaster.vpsType) &&
        Objects.equals(vpsHdsize, vpsServiceMaster.vpsHdsize) &&
        Objects.equals(vpsHdfree, vpsServiceMaster.vpsHdfree) &&
        Objects.equals(vpsBits, vpsServiceMaster.vpsBits) &&
        Objects.equals(vpsLoad, vpsServiceMaster.vpsLoad) &&
        Objects.equals(vpsRam, vpsServiceMaster.vpsRam) &&
        Objects.equals(vpsCpuModel, vpsServiceMaster.vpsCpuModel) &&
        Objects.equals(vpsCpuMhz, vpsServiceMaster.vpsCpuMhz) &&
        Objects.equals(vpsLocation, vpsServiceMaster.vpsLocation) &&
        Objects.equals(vpsLastUpdate, vpsServiceMaster.vpsLastUpdate) &&
        Objects.equals(vpsRaidBuilding, vpsServiceMaster.vpsRaidBuilding) &&
        Objects.equals(vpsKernel, vpsServiceMaster.vpsKernel) &&
        Objects.equals(vpsAvailable, vpsServiceMaster.vpsAvailable) &&
        Objects.equals(vpsCores, vpsServiceMaster.vpsCores) &&
        Objects.equals(vpsIowait, vpsServiceMaster.vpsIowait) &&
        Objects.equals(vpsRaidStatus, vpsServiceMaster.vpsRaidStatus) &&
        Objects.equals(vpsMounts, vpsServiceMaster.vpsMounts) &&
        Objects.equals(vpsServerMax, vpsServiceMaster.vpsServerMax) &&
        Objects.equals(vpsServerMaxSlices, vpsServiceMaster.vpsServerMaxSlices) &&
        Objects.equals(vpsDriveType, vpsServiceMaster.vpsDriveType) &&
        Objects.equals(vpsOrder, vpsServiceMaster.vpsOrder);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

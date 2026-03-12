package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Information about the host node (hypervisor) running this VPS, including hardware specs and resource utilization.")

public class VpsServiceMaster   {
  private String vpsId = null;  private String vpsName = null;  private String vpsIp = null;  private String vpsType = null;  private String vpsHdsize = null;  private String vpsHdfree = null;  private String vpsBits = null;  private String vpsLoad = null;  private String vpsRam = null;  private String vpsCpuModel = null;  private String vpsCpuMhz = null;  private String vpsLocation = null;  private String vpsLastUpdate = null;  private String vpsRaidBuilding = null;  private String vpsKernel = null;  private String vpsAvailable = null;  private String vpsCores = null;  private String vpsIowait = null;  private String vpsRaidStatus = null;  private String vpsMounts = null;  private String vpsServerMax = null;  private String vpsServerMaxSlices = null;  private String vpsDriveType = null;  private String vpsOrder = null;

  /**
   * VPS ID
   **/
  
  @Schema(example = "2439", description = "VPS ID")
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
  
  @Schema(example = "Mystaging", description = "VPS name")
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
  
  @Schema(example = "10.11.12.13", description = "IP address of the VPS")
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
  
  @Schema(example = "14", description = "VPS type")
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
  
  @Schema(example = "1856", description = "Hard drive size")
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
  
  @Schema(example = "1559", description = "Free hard drive space")
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
  
  @Schema(example = "64", description = "Bits")
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
  
  @Schema(example = "0.17", description = "CPU load")
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
  
  @Schema(example = "263998228", description = "RAM")
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
  
  @Schema(example = "Intel(R) Xeon(R) CPU E5-2678 v3 @ 2.50GHz", description = "CPU model")
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
  
  @Schema(example = "1198.86", description = "CPU frequency in MHz")
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
  
  @Schema(example = "1", description = "Location of the VPS")
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
  
  @Schema(example = "2023-08-17T22:19:04.000Z", description = "Last update date")
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
  
  @Schema(example = "0", description = "RAID building status")
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
  
  @Schema(example = "5.4.0-121-generic", description = "Kernel version")
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
  
  @Schema(example = "0", description = "Available")
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
  
  @Schema(example = "48", description = "Number of CPU cores")
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
  
  @Schema(example = "0.09", description = "I/O wait")
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
  
  @Schema(example = "OK: zfs:all pools are healthy", description = "RAID status")
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
  
  @Schema(example = "udev:125:0:125:/dev,/dev/md1:91:53:38:/,securityfs:0:0:0:/sys/kernel/security,cgroup2:0:0:0:/sys/fs/cgroup/unified,pstore:0:0:0:/sys/fs/pstore,efivarfs:0:0:0:/sys/firmware/efi/efivars,systemd-1:0:0:0:/proc/sys/fs/binfmt_misc,hugetlbfs:0:0:0:/dev/hugepages", description = "Mounts")
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
  
  @Schema(example = "50", description = "Maximum number of servers")
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
  
  @Schema(example = "80", description = "Maximum number of server slices")
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
  
  @Schema(example = "SSD", description = "Drive type")
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
  
  @Schema(example = "36978", description = "Order number")
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

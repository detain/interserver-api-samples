package io.swagger.model;

import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class BackupServiceMaster   {

  private @Valid Integer backupId = null;

  private @Valid String backupName = null;

  private @Valid String backupIp = null;

  private @Valid Integer backupType = null;

  private @Valid Integer backupHdsize = null;

  private @Valid Integer backupHdfree = null;

  private @Valid String backupLastUpdate = null;

  private @Valid Integer backupAvailable = null;

  private @Valid Integer backupIowait = null;

  private @Valid Integer backupOrder = null;

  /**
   * Backup ID of the service master.
   **/
  public BackupServiceMaster backupId(Integer backupId) {
    this.backupId = backupId;
    return this;
  }

  
  @ApiModelProperty(example = "38", value = "Backup ID of the service master.")
  @JsonProperty("backup_id")
  @NotNull

  public Integer getBackupId() {
    return backupId;
  }
  public void setBackupId(Integer backupId) {
    this.backupId = backupId;
  }

  /**
   * Name of the backup service.
   **/
  public BackupServiceMaster backupName(String backupName) {
    this.backupName = backupName;
    return this;
  }

  
  @ApiModelProperty(example = "storage1400.is.cc", value = "Name of the backup service.")
  @JsonProperty("backup_name")
  @NotNull

  public String getBackupName() {
    return backupName;
  }
  public void setBackupName(String backupName) {
    this.backupName = backupName;
  }

  /**
   * IP address of the backup service.
   **/
  public BackupServiceMaster backupIp(String backupIp) {
    this.backupIp = backupIp;
    return this;
  }

  
  @ApiModelProperty(example = "44.22.11.88", value = "IP address of the backup service.")
  @JsonProperty("backup_ip")
  @NotNull

  public String getBackupIp() {
    return backupIp;
  }
  public void setBackupIp(String backupIp) {
    this.backupIp = backupIp;
  }

  /**
   * Type of the backup service.
   **/
  public BackupServiceMaster backupType(Integer backupType) {
    this.backupType = backupType;
    return this;
  }

  
  @ApiModelProperty(example = "703", value = "Type of the backup service.")
  @JsonProperty("backup_type")
  @NotNull

  public Integer getBackupType() {
    return backupType;
  }
  public void setBackupType(Integer backupType) {
    this.backupType = backupType;
  }

  /**
   * Size of the backup service&#x27;s hard drive.
   **/
  public BackupServiceMaster backupHdsize(Integer backupHdsize) {
    this.backupHdsize = backupHdsize;
    return this;
  }

  
  @ApiModelProperty(example = "156448", value = "Size of the backup service's hard drive.")
  @JsonProperty("backup_hdsize")
  @NotNull

  public Integer getBackupHdsize() {
    return backupHdsize;
  }
  public void setBackupHdsize(Integer backupHdsize) {
    this.backupHdsize = backupHdsize;
  }

  /**
   * Amount of free space on the backup service&#x27;s hard drive.
   **/
  public BackupServiceMaster backupHdfree(Integer backupHdfree) {
    this.backupHdfree = backupHdfree;
    return this;
  }

  
  @ApiModelProperty(example = "61374", value = "Amount of free space on the backup service's hard drive.")
  @JsonProperty("backup_hdfree")
  @NotNull

  public Integer getBackupHdfree() {
    return backupHdfree;
  }
  public void setBackupHdfree(Integer backupHdfree) {
    this.backupHdfree = backupHdfree;
  }

  /**
   * Last update timestamp of the backup service.
   **/
  public BackupServiceMaster backupLastUpdate(String backupLastUpdate) {
    this.backupLastUpdate = backupLastUpdate;
    return this;
  }

  
  @ApiModelProperty(example = "2023-08-17T23:20:02.000Z", value = "Last update timestamp of the backup service.")
  @JsonProperty("backup_last_update")
  @NotNull

  public String getBackupLastUpdate() {
    return backupLastUpdate;
  }
  public void setBackupLastUpdate(String backupLastUpdate) {
    this.backupLastUpdate = backupLastUpdate;
  }

  /**
   * Availability status of the backup service.
   **/
  public BackupServiceMaster backupAvailable(Integer backupAvailable) {
    this.backupAvailable = backupAvailable;
    return this;
  }

  
  @ApiModelProperty(example = "0", value = "Availability status of the backup service.")
  @JsonProperty("backup_available")
  @NotNull

  public Integer getBackupAvailable() {
    return backupAvailable;
  }
  public void setBackupAvailable(Integer backupAvailable) {
    this.backupAvailable = backupAvailable;
  }

  /**
   * I/O wait status of the backup service.
   **/
  public BackupServiceMaster backupIowait(Integer backupIowait) {
    this.backupIowait = backupIowait;
    return this;
  }

  
  @ApiModelProperty(example = "0", value = "I/O wait status of the backup service.")
  @JsonProperty("backup_iowait")
  @NotNull

  public Integer getBackupIowait() {
    return backupIowait;
  }
  public void setBackupIowait(Integer backupIowait) {
    this.backupIowait = backupIowait;
  }

  /**
   * Order associated with the backup service.
   **/
  public BackupServiceMaster backupOrder(Integer backupOrder) {
    this.backupOrder = backupOrder;
    return this;
  }

  
  @ApiModelProperty(example = "21359", value = "Order associated with the backup service.")
  @JsonProperty("backup_order")
  @NotNull

  public Integer getBackupOrder() {
    return backupOrder;
  }
  public void setBackupOrder(Integer backupOrder) {
    this.backupOrder = backupOrder;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    BackupServiceMaster backupServiceMaster = (BackupServiceMaster) o;
    return Objects.equals(backupId, backupServiceMaster.backupId) &&
        Objects.equals(backupName, backupServiceMaster.backupName) &&
        Objects.equals(backupIp, backupServiceMaster.backupIp) &&
        Objects.equals(backupType, backupServiceMaster.backupType) &&
        Objects.equals(backupHdsize, backupServiceMaster.backupHdsize) &&
        Objects.equals(backupHdfree, backupServiceMaster.backupHdfree) &&
        Objects.equals(backupLastUpdate, backupServiceMaster.backupLastUpdate) &&
        Objects.equals(backupAvailable, backupServiceMaster.backupAvailable) &&
        Objects.equals(backupIowait, backupServiceMaster.backupIowait) &&
        Objects.equals(backupOrder, backupServiceMaster.backupOrder);
  }

  @Override
  public int hashCode() {
    return Objects.hash(backupId, backupName, backupIp, backupType, backupHdsize, backupHdfree, backupLastUpdate, backupAvailable, backupIowait, backupOrder);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BackupServiceMaster {\n");
    
    sb.append("    backupId: ").append(toIndentedString(backupId)).append("\n");
    sb.append("    backupName: ").append(toIndentedString(backupName)).append("\n");
    sb.append("    backupIp: ").append(toIndentedString(backupIp)).append("\n");
    sb.append("    backupType: ").append(toIndentedString(backupType)).append("\n");
    sb.append("    backupHdsize: ").append(toIndentedString(backupHdsize)).append("\n");
    sb.append("    backupHdfree: ").append(toIndentedString(backupHdfree)).append("\n");
    sb.append("    backupLastUpdate: ").append(toIndentedString(backupLastUpdate)).append("\n");
    sb.append("    backupAvailable: ").append(toIndentedString(backupAvailable)).append("\n");
    sb.append("    backupIowait: ").append(toIndentedString(backupIowait)).append("\n");
    sb.append("    backupOrder: ").append(toIndentedString(backupOrder)).append("\n");
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

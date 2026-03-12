package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;





public class BackupServiceMaster   {
  @JsonProperty("backup_id")
  private Integer backupId = null;
  @JsonProperty("backup_name")
  private String backupName = null;
  @JsonProperty("backup_ip")
  private String backupIp = null;
  @JsonProperty("backup_type")
  private Integer backupType = null;
  @JsonProperty("backup_hdsize")
  private Integer backupHdsize = null;
  @JsonProperty("backup_hdfree")
  private Integer backupHdfree = null;
  @JsonProperty("backup_last_update")
  private String backupLastUpdate = null;
  @JsonProperty("backup_available")
  private Integer backupAvailable = null;
  @JsonProperty("backup_iowait")
  private Integer backupIowait = null;
  @JsonProperty("backup_order")
  private Integer backupOrder = null;
  /**
   * Backup ID of the service master.
   **/
  public BackupServiceMaster backupId(Integer backupId) {
    this.backupId = backupId;
    return this;
  }

  
  @Schema(example = "38", description = "Backup ID of the service master.")
  @JsonProperty("backup_id")
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

  
  @Schema(example = "storage1400.is.cc", description = "Name of the backup service.")
  @JsonProperty("backup_name")
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

  
  @Schema(example = "44.22.11.88", description = "IP address of the backup service.")
  @JsonProperty("backup_ip")
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

  
  @Schema(example = "703", description = "Type of the backup service.")
  @JsonProperty("backup_type")
  public Integer getBackupType() {
    return backupType;
  }
  public void setBackupType(Integer backupType) {
    this.backupType = backupType;
  }

  /**
   * Size of the backup service's hard drive.
   **/
  public BackupServiceMaster backupHdsize(Integer backupHdsize) {
    this.backupHdsize = backupHdsize;
    return this;
  }

  
  @Schema(example = "156448", description = "Size of the backup service's hard drive.")
  @JsonProperty("backup_hdsize")
  public Integer getBackupHdsize() {
    return backupHdsize;
  }
  public void setBackupHdsize(Integer backupHdsize) {
    this.backupHdsize = backupHdsize;
  }

  /**
   * Amount of free space on the backup service's hard drive.
   **/
  public BackupServiceMaster backupHdfree(Integer backupHdfree) {
    this.backupHdfree = backupHdfree;
    return this;
  }

  
  @Schema(example = "61374", description = "Amount of free space on the backup service's hard drive.")
  @JsonProperty("backup_hdfree")
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

  
  @Schema(example = "2023-08-17T23:20:02.000Z", description = "Last update timestamp of the backup service.")
  @JsonProperty("backup_last_update")
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

  
  @Schema(example = "0", description = "Availability status of the backup service.")
  @JsonProperty("backup_available")
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

  
  @Schema(example = "0", description = "I/O wait status of the backup service.")
  @JsonProperty("backup_iowait")
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

  
  @Schema(example = "21359", description = "Order associated with the backup service.")
  @JsonProperty("backup_order")
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

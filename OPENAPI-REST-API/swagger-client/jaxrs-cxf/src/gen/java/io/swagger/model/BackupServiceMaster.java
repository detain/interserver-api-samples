package io.swagger.model;

import javax.validation.constraints.*;

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

public class BackupServiceMaster   {
  
  @Schema(example = "38", description = "Backup ID of the service master.")
 /**
   * Backup ID of the service master.  
  **/
  private Integer backupId = null;
  
  @Schema(example = "storage1400.is.cc", description = "Name of the backup service.")
 /**
   * Name of the backup service.  
  **/
  private String backupName = null;
  
  @Schema(example = "44.22.11.88", description = "IP address of the backup service.")
 /**
   * IP address of the backup service.  
  **/
  private String backupIp = null;
  
  @Schema(example = "703", description = "Type of the backup service.")
 /**
   * Type of the backup service.  
  **/
  private Integer backupType = null;
  
  @Schema(example = "156448", description = "Size of the backup service's hard drive.")
 /**
   * Size of the backup service's hard drive.  
  **/
  private Integer backupHdsize = null;
  
  @Schema(example = "61374", description = "Amount of free space on the backup service's hard drive.")
 /**
   * Amount of free space on the backup service's hard drive.  
  **/
  private Integer backupHdfree = null;
  
  @Schema(example = "2023-08-17T23:20:02.000Z", description = "Last update timestamp of the backup service.")
 /**
   * Last update timestamp of the backup service.  
  **/
  private String backupLastUpdate = null;
  
  @Schema(example = "0", description = "Availability status of the backup service.")
 /**
   * Availability status of the backup service.  
  **/
  private Integer backupAvailable = null;
  
  @Schema(example = "0", description = "I/O wait status of the backup service.")
 /**
   * I/O wait status of the backup service.  
  **/
  private Integer backupIowait = null;
  
  @Schema(example = "21359", description = "Order associated with the backup service.")
 /**
   * Order associated with the backup service.  
  **/
  private Integer backupOrder = null;
 /**
   * Backup ID of the service master.
   * @return backupId
  **/
  @JsonProperty("backup_id")
  @NotNull
  public Integer getBackupId() {
    return backupId;
  }

  public void setBackupId(Integer backupId) {
    this.backupId = backupId;
  }

  public BackupServiceMaster backupId(Integer backupId) {
    this.backupId = backupId;
    return this;
  }

 /**
   * Name of the backup service.
   * @return backupName
  **/
  @JsonProperty("backup_name")
  @NotNull
  public String getBackupName() {
    return backupName;
  }

  public void setBackupName(String backupName) {
    this.backupName = backupName;
  }

  public BackupServiceMaster backupName(String backupName) {
    this.backupName = backupName;
    return this;
  }

 /**
   * IP address of the backup service.
   * @return backupIp
  **/
  @JsonProperty("backup_ip")
  @NotNull
  public String getBackupIp() {
    return backupIp;
  }

  public void setBackupIp(String backupIp) {
    this.backupIp = backupIp;
  }

  public BackupServiceMaster backupIp(String backupIp) {
    this.backupIp = backupIp;
    return this;
  }

 /**
   * Type of the backup service.
   * @return backupType
  **/
  @JsonProperty("backup_type")
  @NotNull
  public Integer getBackupType() {
    return backupType;
  }

  public void setBackupType(Integer backupType) {
    this.backupType = backupType;
  }

  public BackupServiceMaster backupType(Integer backupType) {
    this.backupType = backupType;
    return this;
  }

 /**
   * Size of the backup service&#x27;s hard drive.
   * @return backupHdsize
  **/
  @JsonProperty("backup_hdsize")
  @NotNull
  public Integer getBackupHdsize() {
    return backupHdsize;
  }

  public void setBackupHdsize(Integer backupHdsize) {
    this.backupHdsize = backupHdsize;
  }

  public BackupServiceMaster backupHdsize(Integer backupHdsize) {
    this.backupHdsize = backupHdsize;
    return this;
  }

 /**
   * Amount of free space on the backup service&#x27;s hard drive.
   * @return backupHdfree
  **/
  @JsonProperty("backup_hdfree")
  @NotNull
  public Integer getBackupHdfree() {
    return backupHdfree;
  }

  public void setBackupHdfree(Integer backupHdfree) {
    this.backupHdfree = backupHdfree;
  }

  public BackupServiceMaster backupHdfree(Integer backupHdfree) {
    this.backupHdfree = backupHdfree;
    return this;
  }

 /**
   * Last update timestamp of the backup service.
   * @return backupLastUpdate
  **/
  @JsonProperty("backup_last_update")
  @NotNull
  public String getBackupLastUpdate() {
    return backupLastUpdate;
  }

  public void setBackupLastUpdate(String backupLastUpdate) {
    this.backupLastUpdate = backupLastUpdate;
  }

  public BackupServiceMaster backupLastUpdate(String backupLastUpdate) {
    this.backupLastUpdate = backupLastUpdate;
    return this;
  }

 /**
   * Availability status of the backup service.
   * @return backupAvailable
  **/
  @JsonProperty("backup_available")
  @NotNull
  public Integer getBackupAvailable() {
    return backupAvailable;
  }

  public void setBackupAvailable(Integer backupAvailable) {
    this.backupAvailable = backupAvailable;
  }

  public BackupServiceMaster backupAvailable(Integer backupAvailable) {
    this.backupAvailable = backupAvailable;
    return this;
  }

 /**
   * I/O wait status of the backup service.
   * @return backupIowait
  **/
  @JsonProperty("backup_iowait")
  @NotNull
  public Integer getBackupIowait() {
    return backupIowait;
  }

  public void setBackupIowait(Integer backupIowait) {
    this.backupIowait = backupIowait;
  }

  public BackupServiceMaster backupIowait(Integer backupIowait) {
    this.backupIowait = backupIowait;
    return this;
  }

 /**
   * Order associated with the backup service.
   * @return backupOrder
  **/
  @JsonProperty("backup_order")
  @NotNull
  public Integer getBackupOrder() {
    return backupOrder;
  }

  public void setBackupOrder(Integer backupOrder) {
    this.backupOrder = backupOrder;
  }

  public BackupServiceMaster backupOrder(Integer backupOrder) {
    this.backupOrder = backupOrder;
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

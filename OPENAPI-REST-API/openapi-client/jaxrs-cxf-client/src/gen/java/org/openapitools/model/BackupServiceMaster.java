package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class BackupServiceMaster  {
  
 /**
  * Backup ID of the service master.
  */
  @ApiModelProperty(example = "38", value = "Backup ID of the service master.")

  private Integer backupId;

 /**
  * Name of the backup service.
  */
  @ApiModelProperty(example = "storage1400.is.cc", value = "Name of the backup service.")

  private String backupName;

 /**
  * IP address of the backup service.
  */
  @ApiModelProperty(example = "44.22.11.88", value = "IP address of the backup service.")

  private String backupIp;

 /**
  * Type of the backup service.
  */
  @ApiModelProperty(example = "703", value = "Type of the backup service.")

  private Integer backupType;

 /**
  * Size of the backup service's hard drive.
  */
  @ApiModelProperty(example = "156448", value = "Size of the backup service's hard drive.")

  private Integer backupHdsize;

 /**
  * Amount of free space on the backup service's hard drive.
  */
  @ApiModelProperty(example = "61374", value = "Amount of free space on the backup service's hard drive.")

  private Integer backupHdfree;

 /**
  * Last update timestamp of the backup service.
  */
  @ApiModelProperty(example = "2023-08-17T23:20:02.000Z", value = "Last update timestamp of the backup service.")

  private String backupLastUpdate;

 /**
  * Availability status of the backup service.
  */
  @ApiModelProperty(example = "0", value = "Availability status of the backup service.")

  private Integer backupAvailable;

 /**
  * I/O wait status of the backup service.
  */
  @ApiModelProperty(example = "0", value = "I/O wait status of the backup service.")

  private Integer backupIowait;

 /**
  * Order associated with the backup service.
  */
  @ApiModelProperty(example = "21359", value = "Order associated with the backup service.")

  private Integer backupOrder;
 /**
   * Backup ID of the service master.
   * @return backupId
  **/
  @JsonProperty("backup_id")
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
   * Size of the backup service&#39;s hard drive.
   * @return backupHdsize
  **/
  @JsonProperty("backup_hdsize")
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
   * Amount of free space on the backup service&#39;s hard drive.
   * @return backupHdfree
  **/
  @JsonProperty("backup_hdfree")
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    BackupServiceMaster backupServiceMaster = (BackupServiceMaster) o;
    return Objects.equals(this.backupId, backupServiceMaster.backupId) &&
        Objects.equals(this.backupName, backupServiceMaster.backupName) &&
        Objects.equals(this.backupIp, backupServiceMaster.backupIp) &&
        Objects.equals(this.backupType, backupServiceMaster.backupType) &&
        Objects.equals(this.backupHdsize, backupServiceMaster.backupHdsize) &&
        Objects.equals(this.backupHdfree, backupServiceMaster.backupHdfree) &&
        Objects.equals(this.backupLastUpdate, backupServiceMaster.backupLastUpdate) &&
        Objects.equals(this.backupAvailable, backupServiceMaster.backupAvailable) &&
        Objects.equals(this.backupIowait, backupServiceMaster.backupIowait) &&
        Objects.equals(this.backupOrder, backupServiceMaster.backupOrder);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}


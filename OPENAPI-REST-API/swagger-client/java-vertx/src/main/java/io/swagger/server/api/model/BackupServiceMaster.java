package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * BackupServiceMaster
 */




public class BackupServiceMaster   {
  private Integer backupId = null;

  private String backupName = null;

  private String backupIp = null;

  private Integer backupType = null;

  private Integer backupHdsize = null;

  private Integer backupHdfree = null;

  private String backupLastUpdate = null;

  private Integer backupAvailable = null;

  private Integer backupIowait = null;

  private Integer backupOrder = null;

  public BackupServiceMaster backupId(Integer backupId) {
    this.backupId = backupId;
    return this;
  }

  /**
   * Backup ID of the service master.
   * @return backupId
   **/
    public Integer getBackupId() {
    return backupId;
  }

  public void setBackupId(Integer backupId) {
    this.backupId = backupId;
  }

  public BackupServiceMaster backupName(String backupName) {
    this.backupName = backupName;
    return this;
  }

  /**
   * Name of the backup service.
   * @return backupName
   **/
    public String getBackupName() {
    return backupName;
  }

  public void setBackupName(String backupName) {
    this.backupName = backupName;
  }

  public BackupServiceMaster backupIp(String backupIp) {
    this.backupIp = backupIp;
    return this;
  }

  /**
   * IP address of the backup service.
   * @return backupIp
   **/
    public String getBackupIp() {
    return backupIp;
  }

  public void setBackupIp(String backupIp) {
    this.backupIp = backupIp;
  }

  public BackupServiceMaster backupType(Integer backupType) {
    this.backupType = backupType;
    return this;
  }

  /**
   * Type of the backup service.
   * @return backupType
   **/
    public Integer getBackupType() {
    return backupType;
  }

  public void setBackupType(Integer backupType) {
    this.backupType = backupType;
  }

  public BackupServiceMaster backupHdsize(Integer backupHdsize) {
    this.backupHdsize = backupHdsize;
    return this;
  }

  /**
   * Size of the backup service's hard drive.
   * @return backupHdsize
   **/
    public Integer getBackupHdsize() {
    return backupHdsize;
  }

  public void setBackupHdsize(Integer backupHdsize) {
    this.backupHdsize = backupHdsize;
  }

  public BackupServiceMaster backupHdfree(Integer backupHdfree) {
    this.backupHdfree = backupHdfree;
    return this;
  }

  /**
   * Amount of free space on the backup service's hard drive.
   * @return backupHdfree
   **/
    public Integer getBackupHdfree() {
    return backupHdfree;
  }

  public void setBackupHdfree(Integer backupHdfree) {
    this.backupHdfree = backupHdfree;
  }

  public BackupServiceMaster backupLastUpdate(String backupLastUpdate) {
    this.backupLastUpdate = backupLastUpdate;
    return this;
  }

  /**
   * Last update timestamp of the backup service.
   * @return backupLastUpdate
   **/
    public String getBackupLastUpdate() {
    return backupLastUpdate;
  }

  public void setBackupLastUpdate(String backupLastUpdate) {
    this.backupLastUpdate = backupLastUpdate;
  }

  public BackupServiceMaster backupAvailable(Integer backupAvailable) {
    this.backupAvailable = backupAvailable;
    return this;
  }

  /**
   * Availability status of the backup service.
   * @return backupAvailable
   **/
    public Integer getBackupAvailable() {
    return backupAvailable;
  }

  public void setBackupAvailable(Integer backupAvailable) {
    this.backupAvailable = backupAvailable;
  }

  public BackupServiceMaster backupIowait(Integer backupIowait) {
    this.backupIowait = backupIowait;
    return this;
  }

  /**
   * I/O wait status of the backup service.
   * @return backupIowait
   **/
    public Integer getBackupIowait() {
    return backupIowait;
  }

  public void setBackupIowait(Integer backupIowait) {
    this.backupIowait = backupIowait;
  }

  public BackupServiceMaster backupOrder(Integer backupOrder) {
    this.backupOrder = backupOrder;
    return this;
  }

  /**
   * Order associated with the backup service.
   * @return backupOrder
   **/
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

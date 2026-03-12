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
  * A result row from the `Backups` `GET` request.
 **/
@Schema(description="A result row from the `Backups` `GET` request.")
public class BackupRow   {
  
  @Schema(example = "2414", description = "The id of the backup.")
 /**
   * The id of the backup.  
  **/
  private String backupId = null;
  
  @Schema(example = "storage-nj.interserver.net", description = "The name of the backup.")
 /**
   * The name of the backup.  
  **/
  private String backupName = null;
  
  @Schema(example = "5.99", description = "The cost of the backup.")
 /**
   * The cost of the backup.  
  **/
  private String backupCost = null;
  
  @Schema(example = "detainin2414", description = "The username of the backup.")
 /**
   * The username of the backup.  
  **/
  private String backupUsername = null;
  
  @Schema(example = "pending-setup", description = "The status of the backup.")
 /**
   * The status of the backup.  
  **/
  private String backupStatus = null;
  
  @Schema(example = "Swift Storage", description = "The services name of the backup.")
 /**
   * The services name of the backup.  
  **/
  private String servicesName = null;
 /**
   * The id of the backup.
   * @return backupId
  **/
  @JsonProperty("backup_id")
  public String getBackupId() {
    return backupId;
  }

  public void setBackupId(String backupId) {
    this.backupId = backupId;
  }

  public BackupRow backupId(String backupId) {
    this.backupId = backupId;
    return this;
  }

 /**
   * The name of the backup.
   * @return backupName
  **/
  @JsonProperty("backup_name")
  public String getBackupName() {
    return backupName;
  }

  public void setBackupName(String backupName) {
    this.backupName = backupName;
  }

  public BackupRow backupName(String backupName) {
    this.backupName = backupName;
    return this;
  }

 /**
   * The cost of the backup.
   * @return backupCost
  **/
  @JsonProperty("backup_cost")
  public String getBackupCost() {
    return backupCost;
  }

  public void setBackupCost(String backupCost) {
    this.backupCost = backupCost;
  }

  public BackupRow backupCost(String backupCost) {
    this.backupCost = backupCost;
    return this;
  }

 /**
   * The username of the backup.
   * @return backupUsername
  **/
  @JsonProperty("backup_username")
  public String getBackupUsername() {
    return backupUsername;
  }

  public void setBackupUsername(String backupUsername) {
    this.backupUsername = backupUsername;
  }

  public BackupRow backupUsername(String backupUsername) {
    this.backupUsername = backupUsername;
    return this;
  }

 /**
   * The status of the backup.
   * @return backupStatus
  **/
  @JsonProperty("backup_status")
  public String getBackupStatus() {
    return backupStatus;
  }

  public void setBackupStatus(String backupStatus) {
    this.backupStatus = backupStatus;
  }

  public BackupRow backupStatus(String backupStatus) {
    this.backupStatus = backupStatus;
    return this;
  }

 /**
   * The services name of the backup.
   * @return servicesName
  **/
  @JsonProperty("services_name")
  public String getServicesName() {
    return servicesName;
  }

  public void setServicesName(String servicesName) {
    this.servicesName = servicesName;
  }

  public BackupRow servicesName(String servicesName) {
    this.servicesName = servicesName;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BackupRow {\n");
    
    sb.append("    backupId: ").append(toIndentedString(backupId)).append("\n");
    sb.append("    backupName: ").append(toIndentedString(backupName)).append("\n");
    sb.append("    backupCost: ").append(toIndentedString(backupCost)).append("\n");
    sb.append("    backupUsername: ").append(toIndentedString(backupUsername)).append("\n");
    sb.append("    backupStatus: ").append(toIndentedString(backupStatus)).append("\n");
    sb.append("    servicesName: ").append(toIndentedString(servicesName)).append("\n");
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

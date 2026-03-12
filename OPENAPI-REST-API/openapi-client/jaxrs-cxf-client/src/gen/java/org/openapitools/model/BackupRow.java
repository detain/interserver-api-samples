package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A result row from the `Backups` `GET` request.
 */
@ApiModel(description="A result row from the `Backups` `GET` request.")

public class BackupRow  {
  
 /**
  * The id of the backup.
  */
  @ApiModelProperty(example = "2414", value = "The id of the backup.")

  private String backupId;

 /**
  * The name of the backup.
  */
  @ApiModelProperty(example = "storage-nj.interserver.net", value = "The name of the backup.")

  private String backupName;

 /**
  * The cost of the backup.
  */
  @ApiModelProperty(example = "5.99", value = "The cost of the backup.")

  private String backupCost;

 /**
  * The username of the backup.
  */
  @ApiModelProperty(example = "detainin2414", value = "The username of the backup.")

  private String backupUsername;

 /**
  * The status of the backup.
  */
  @ApiModelProperty(example = "pending-setup", value = "The status of the backup.")

  private String backupStatus;

 /**
  * The services name of the backup.
  */
  @ApiModelProperty(example = "Swift Storage", value = "The services name of the backup.")

  private String servicesName;
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    BackupRow backupRow = (BackupRow) o;
    return Objects.equals(this.backupId, backupRow.backupId) &&
        Objects.equals(this.backupName, backupRow.backupName) &&
        Objects.equals(this.backupCost, backupRow.backupCost) &&
        Objects.equals(this.backupUsername, backupRow.backupUsername) &&
        Objects.equals(this.backupStatus, backupRow.backupStatus) &&
        Objects.equals(this.servicesName, backupRow.servicesName);
  }

  @Override
  public int hashCode() {
    return Objects.hash(backupId, backupName, backupCost, backupUsername, backupStatus, servicesName);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}


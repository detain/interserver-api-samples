package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * A result row from the &#x60;Backups&#x60; &#x60;GET&#x60; request.
 **/
@Schema(description = "A result row from the `Backups` `GET` request.")


public class BackupRow   {
  @JsonProperty("backup_id")
  private String backupId = null;
  @JsonProperty("backup_name")
  private String backupName = null;
  @JsonProperty("backup_cost")
  private String backupCost = null;
  @JsonProperty("backup_username")
  private String backupUsername = null;
  @JsonProperty("backup_status")
  private String backupStatus = null;
  @JsonProperty("services_name")
  private String servicesName = null;
  /**
   * The id of the backup.
   **/
  public BackupRow backupId(String backupId) {
    this.backupId = backupId;
    return this;
  }

  
  @Schema(example = "2414", description = "The id of the backup.")
  @JsonProperty("backup_id")
  public String getBackupId() {
    return backupId;
  }
  public void setBackupId(String backupId) {
    this.backupId = backupId;
  }

  /**
   * The name of the backup.
   **/
  public BackupRow backupName(String backupName) {
    this.backupName = backupName;
    return this;
  }

  
  @Schema(example = "storage-nj.interserver.net", description = "The name of the backup.")
  @JsonProperty("backup_name")
  public String getBackupName() {
    return backupName;
  }
  public void setBackupName(String backupName) {
    this.backupName = backupName;
  }

  /**
   * The cost of the backup.
   **/
  public BackupRow backupCost(String backupCost) {
    this.backupCost = backupCost;
    return this;
  }

  
  @Schema(example = "5.99", description = "The cost of the backup.")
  @JsonProperty("backup_cost")
  public String getBackupCost() {
    return backupCost;
  }
  public void setBackupCost(String backupCost) {
    this.backupCost = backupCost;
  }

  /**
   * The username of the backup.
   **/
  public BackupRow backupUsername(String backupUsername) {
    this.backupUsername = backupUsername;
    return this;
  }

  
  @Schema(example = "detainin2414", description = "The username of the backup.")
  @JsonProperty("backup_username")
  public String getBackupUsername() {
    return backupUsername;
  }
  public void setBackupUsername(String backupUsername) {
    this.backupUsername = backupUsername;
  }

  /**
   * The status of the backup.
   **/
  public BackupRow backupStatus(String backupStatus) {
    this.backupStatus = backupStatus;
    return this;
  }

  
  @Schema(example = "pending-setup", description = "The status of the backup.")
  @JsonProperty("backup_status")
  public String getBackupStatus() {
    return backupStatus;
  }
  public void setBackupStatus(String backupStatus) {
    this.backupStatus = backupStatus;
  }

  /**
   * The services name of the backup.
   **/
  public BackupRow servicesName(String servicesName) {
    this.servicesName = servicesName;
    return this;
  }

  
  @Schema(example = "Swift Storage", description = "The services name of the backup.")
  @JsonProperty("services_name")
  public String getServicesName() {
    return servicesName;
  }
  public void setServicesName(String servicesName) {
    this.servicesName = servicesName;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    BackupRow backupRow = (BackupRow) o;
    return Objects.equals(backupId, backupRow.backupId) &&
        Objects.equals(backupName, backupRow.backupName) &&
        Objects.equals(backupCost, backupRow.backupCost) &&
        Objects.equals(backupUsername, backupRow.backupUsername) &&
        Objects.equals(backupStatus, backupRow.backupStatus) &&
        Objects.equals(servicesName, backupRow.servicesName);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="A result row from the `Backups` `GET` request.")

public class BackupRow   {
  private String backupId = null;
  private String backupName = null;
  private String backupCost = null;
  private String backupUsername = null;
  private String backupStatus = null;
  private String servicesName = null;

  /**
   * The id of the backup.
   **/
  
  @Schema(example = "2414", description = "The id of the backup.")
  @JsonProperty("backup_id")
  @NotNull
  public String getBackupId() {
    return backupId;
  }
  public void setBackupId(String backupId) {
    this.backupId = backupId;
  }

  /**
   * The name of the backup.
   **/
  
  @Schema(example = "storage-nj.interserver.net", description = "The name of the backup.")
  @JsonProperty("backup_name")
  @NotNull
  public String getBackupName() {
    return backupName;
  }
  public void setBackupName(String backupName) {
    this.backupName = backupName;
  }

  /**
   * The cost of the backup.
   **/
  
  @Schema(example = "5.99", description = "The cost of the backup.")
  @JsonProperty("backup_cost")
  @NotNull
  public String getBackupCost() {
    return backupCost;
  }
  public void setBackupCost(String backupCost) {
    this.backupCost = backupCost;
  }

  /**
   * The username of the backup.
   **/
  
  @Schema(example = "detainin2414", description = "The username of the backup.")
  @JsonProperty("backup_username")
  @NotNull
  public String getBackupUsername() {
    return backupUsername;
  }
  public void setBackupUsername(String backupUsername) {
    this.backupUsername = backupUsername;
  }

  /**
   * The status of the backup.
   **/
  
  @Schema(example = "pending-setup", description = "The status of the backup.")
  @JsonProperty("backup_status")
  @NotNull
  public String getBackupStatus() {
    return backupStatus;
  }
  public void setBackupStatus(String backupStatus) {
    this.backupStatus = backupStatus;
  }

  /**
   * The services name of the backup.
   **/
  
  @Schema(example = "Swift Storage", description = "The services name of the backup.")
  @JsonProperty("services_name")
  @NotNull
  public String getServicesName() {
    return servicesName;
  }
  public void setServicesName(String servicesName) {
    this.servicesName = servicesName;
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

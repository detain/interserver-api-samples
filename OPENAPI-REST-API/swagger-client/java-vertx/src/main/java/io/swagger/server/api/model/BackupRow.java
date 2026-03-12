package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * A result row from the &#x60;Backups&#x60; &#x60;GET&#x60; request.
 */




public class BackupRow   {
  private String backupId = null;

  private String backupName = null;

  private String backupCost = null;

  private String backupUsername = null;

  private String backupStatus = null;

  private String servicesName = null;

  public BackupRow backupId(String backupId) {
    this.backupId = backupId;
    return this;
  }

  /**
   * The id of the backup.
   * @return backupId
   **/
    public String getBackupId() {
    return backupId;
  }

  public void setBackupId(String backupId) {
    this.backupId = backupId;
  }

  public BackupRow backupName(String backupName) {
    this.backupName = backupName;
    return this;
  }

  /**
   * The name of the backup.
   * @return backupName
   **/
    public String getBackupName() {
    return backupName;
  }

  public void setBackupName(String backupName) {
    this.backupName = backupName;
  }

  public BackupRow backupCost(String backupCost) {
    this.backupCost = backupCost;
    return this;
  }

  /**
   * The cost of the backup.
   * @return backupCost
   **/
    public String getBackupCost() {
    return backupCost;
  }

  public void setBackupCost(String backupCost) {
    this.backupCost = backupCost;
  }

  public BackupRow backupUsername(String backupUsername) {
    this.backupUsername = backupUsername;
    return this;
  }

  /**
   * The username of the backup.
   * @return backupUsername
   **/
    public String getBackupUsername() {
    return backupUsername;
  }

  public void setBackupUsername(String backupUsername) {
    this.backupUsername = backupUsername;
  }

  public BackupRow backupStatus(String backupStatus) {
    this.backupStatus = backupStatus;
    return this;
  }

  /**
   * The status of the backup.
   * @return backupStatus
   **/
    public String getBackupStatus() {
    return backupStatus;
  }

  public void setBackupStatus(String backupStatus) {
    this.backupStatus = backupStatus;
  }

  public BackupRow servicesName(String servicesName) {
    this.servicesName = servicesName;
    return this;
  }

  /**
   * The services name of the backup.
   * @return servicesName
   **/
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

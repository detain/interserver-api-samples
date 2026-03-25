package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Request data to trigger a restore from backup.
 */
@ApiModel(description="Request data to trigger a restore from backup.")

public class RestoreRequest  {
  
  @ApiModelProperty(value = "")

  private String backup;

  @ApiModelProperty(value = "")

  private String password;
 /**
   * Get backup
   * @return backup
  **/
  @JsonProperty("backup")
  public String getBackup() {
    return backup;
  }

  public void setBackup(String backup) {
    this.backup = backup;
  }

  public RestoreRequest backup(String backup) {
    this.backup = backup;
    return this;
  }

 /**
   * Get password
   * @return password
  **/
  @JsonProperty("password")
  public String getPassword() {
    return password;
  }

  public void setPassword(String password) {
    this.password = password;
  }

  public RestoreRequest password(String password) {
    this.password = password;
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
    RestoreRequest restoreRequest = (RestoreRequest) o;
    return Objects.equals(this.backup, restoreRequest.backup) &&
        Objects.equals(this.password, restoreRequest.password);
  }

  @Override
  public int hashCode() {
    return Objects.hash(backup, password);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class RestoreRequest {\n");
    
    sb.append("    backup: ").append(toIndentedString(backup)).append("\n");
    sb.append("    password: ").append(toIndentedString(password)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}


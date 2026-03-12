package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
/**
 * Request data to trigger a restore from backup.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "Request data to trigger a restore from backup.")

public class RestoreRequest   {
  private String backup = null;
  private String password = null;

  /**
   **/
  public RestoreRequest backup(String backup) {
    this.backup = backup;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("backup")
  @NotNull
  public String getBackup() {
    return backup;
  }
  public void setBackup(String backup) {
    this.backup = backup;
  }

  /**
   **/
  public RestoreRequest password(String password) {
    this.password = password;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("password")
  @NotNull
  public String getPassword() {
    return password;
  }
  public void setPassword(String password) {
    this.password = password;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    RestoreRequest restoreRequest = (RestoreRequest) o;
    return Objects.equals(backup, restoreRequest.backup) &&
        Objects.equals(password, restoreRequest.password);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

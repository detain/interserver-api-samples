package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
/**
 * A VPS snapshot (point-in-time backup) stored on the host node.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "A VPS snapshot (point-in-time backup) stored on the host node.")

public class VpsSnapshot   {
  private String name = null;
  private Integer used = null;
  private Integer date = null;

  /**
   * Snapshot name.
   **/
  public VpsSnapshot name(String name) {
    this.name = name;
    return this;
  }

  
  
  @Schema(description = "Snapshot name.")
  @JsonProperty("name")
  @NotNull
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  /**
   * Disk space used by this snapshot in bytes.
   **/
  public VpsSnapshot used(Integer used) {
    this.used = used;
    return this;
  }

  
  
  @Schema(description = "Disk space used by this snapshot in bytes.")
  @JsonProperty("used")
  @NotNull
  public Integer getUsed() {
    return used;
  }
  public void setUsed(Integer used) {
    this.used = used;
  }

  /**
   * Unix timestamp of when the snapshot was created.
   **/
  public VpsSnapshot date(Integer date) {
    this.date = date;
    return this;
  }

  
  
  @Schema(description = "Unix timestamp of when the snapshot was created.")
  @JsonProperty("date")
  @NotNull
  public Integer getDate() {
    return date;
  }
  public void setDate(Integer date) {
    this.date = date;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsSnapshot vpsSnapshot = (VpsSnapshot) o;
    return Objects.equals(name, vpsSnapshot.name) &&
        Objects.equals(used, vpsSnapshot.used) &&
        Objects.equals(date, vpsSnapshot.date);
  }

  @Override
  public int hashCode() {
    return Objects.hash(name, used, date);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsSnapshot {\n");
    
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    used: ").append(toIndentedString(used)).append("\n");
    sb.append("    date: ").append(toIndentedString(date)).append("\n");
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

package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
/**
 * A single backed-up item and information about it.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "A single backed-up item and information about it.")

public class VpsBackupRow   {
  private String type = null;
  private Integer service = null;
  private String name = null;
  private Integer size = null;
  private Integer date = null;

  /**
   * Backup Type
   **/
  public VpsBackupRow type(String type) {
    this.type = type;
    return this;
  }

  
  
  @Schema(example = "zfs", required = true, description = "Backup Type")
  @JsonProperty("type")
  @NotNull
  public String getType() {
    return type;
  }
  public void setType(String type) {
    this.type = type;
  }

  /**
   * The service id such as vps  id.
   **/
  public VpsBackupRow service(Integer service) {
    this.service = service;
    return this;
  }

  
  
  @Schema(example = "12343", required = true, description = "The service id such as vps  id.")
  @JsonProperty("service")
  @NotNull
  public Integer getService() {
    return service;
  }
  public void setService(Integer service) {
    this.service = service;
  }

  /**
   * The name of the backup.
   **/
  public VpsBackupRow name(String name) {
    this.name = name;
    return this;
  }

  
  
  @Schema(example = "automated_backup", required = true, description = "The name of the backup.")
  @JsonProperty("name")
  @NotNull
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  /**
   * Size of the file in bytes
   **/
  public VpsBackupRow size(Integer size) {
    this.size = size;
    return this;
  }

  
  
  @Schema(example = "132412343124213", required = true, description = "Size of the file in bytes")
  @JsonProperty("size")
  @NotNull
  public Integer getSize() {
    return size;
  }
  public void setSize(Integer size) {
    this.size = size;
  }

  /**
   * The creation date of the backup in a unix timestamp.
   **/
  public VpsBackupRow date(Integer date) {
    this.date = date;
    return this;
  }

  
  
  @Schema(example = "1693996140", required = true, description = "The creation date of the backup in a unix timestamp.")
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
    VpsBackupRow vpsBackupRow = (VpsBackupRow) o;
    return Objects.equals(type, vpsBackupRow.type) &&
        Objects.equals(service, vpsBackupRow.service) &&
        Objects.equals(name, vpsBackupRow.name) &&
        Objects.equals(size, vpsBackupRow.size) &&
        Objects.equals(date, vpsBackupRow.date);
  }

  @Override
  public int hashCode() {
    return Objects.hash(type, service, name, size, date);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsBackupRow {\n");
    
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    service: ").append(toIndentedString(service)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    size: ").append(toIndentedString(size)).append("\n");
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

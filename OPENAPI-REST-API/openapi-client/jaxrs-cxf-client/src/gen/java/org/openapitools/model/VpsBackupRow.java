package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A single backed-up item and information about it.
 */
@ApiModel(description="A single backed-up item and information about it.")

public class VpsBackupRow  {
  
 /**
  * Backup Type
  */
  @ApiModelProperty(example = "zfs", required = true, value = "Backup Type")

  private String type;

 /**
  * The service id such as vps  id.
  */
  @ApiModelProperty(example = "12343", required = true, value = "The service id such as vps  id.")

  private Integer service;

 /**
  * The name of the backup.
  */
  @ApiModelProperty(example = "automated_backup", required = true, value = "The name of the backup.")

  private String name;

 /**
  * Size of the file in bytes
  */
  @ApiModelProperty(example = "132412343124213", required = true, value = "Size of the file in bytes")

  private Integer size;

 /**
  * The creation date of the backup in a unix timestamp.
  */
  @ApiModelProperty(example = "1693996140", required = true, value = "The creation date of the backup in a unix timestamp.")

  private Integer date;
 /**
   * Backup Type
   * @return type
  **/
  @JsonProperty("type")
  public String getType() {
    return type;
  }

  public void setType(String type) {
    this.type = type;
  }

  public VpsBackupRow type(String type) {
    this.type = type;
    return this;
  }

 /**
   * The service id such as vps  id.
   * @return service
  **/
  @JsonProperty("service")
  public Integer getService() {
    return service;
  }

  public void setService(Integer service) {
    this.service = service;
  }

  public VpsBackupRow service(Integer service) {
    this.service = service;
    return this;
  }

 /**
   * The name of the backup.
   * @return name
  **/
  @JsonProperty("name")
  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public VpsBackupRow name(String name) {
    this.name = name;
    return this;
  }

 /**
   * Size of the file in bytes
   * @return size
  **/
  @JsonProperty("size")
  public Integer getSize() {
    return size;
  }

  public void setSize(Integer size) {
    this.size = size;
  }

  public VpsBackupRow size(Integer size) {
    this.size = size;
    return this;
  }

 /**
   * The creation date of the backup in a unix timestamp.
   * @return date
  **/
  @JsonProperty("date")
  public Integer getDate() {
    return date;
  }

  public void setDate(Integer date) {
    this.date = date;
  }

  public VpsBackupRow date(Integer date) {
    this.date = date;
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
    VpsBackupRow vpsBackupRow = (VpsBackupRow) o;
    return Objects.equals(this.type, vpsBackupRow.type) &&
        Objects.equals(this.service, vpsBackupRow.service) &&
        Objects.equals(this.name, vpsBackupRow.name) &&
        Objects.equals(this.size, vpsBackupRow.size) &&
        Objects.equals(this.date, vpsBackupRow.date);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}


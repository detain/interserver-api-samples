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
  * A single backed-up item and information about it.
 **/
@Schema(description="A single backed-up item and information about it.")
public class VpsBackupRow   {
  
  @Schema(example = "zfs", required = true, description = "Backup Type")
 /**
   * Backup Type  
  **/
  private String type = null;
  
  @Schema(example = "12343", required = true, description = "The service id such as vps  id.")
 /**
   * The service id such as vps  id.  
  **/
  private Integer service = null;
  
  @Schema(example = "automated_backup", required = true, description = "The name of the backup.")
 /**
   * The name of the backup.  
  **/
  private String name = null;
  
  @Schema(example = "132412343124213", required = true, description = "Size of the file in bytes")
 /**
   * Size of the file in bytes  
  **/
  private Integer size = null;
  
  @Schema(example = "1693996140", required = true, description = "The creation date of the backup in a unix timestamp.")
 /**
   * The creation date of the backup in a unix timestamp.  
  **/
  private Integer date = null;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

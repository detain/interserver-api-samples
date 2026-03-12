package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;

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
  * A VPS snapshot (point-in-time backup) stored on the host node.
 **/
@Schema(description="A VPS snapshot (point-in-time backup) stored on the host node.")
public class VpsSnapshot   {
  
  @Schema(description = "Snapshot name.")
 /**
   * Snapshot name.  
  **/
  private String name = null;
  
  @Schema(description = "Disk space used by this snapshot in bytes.")
 /**
   * Disk space used by this snapshot in bytes.  
  **/
  private Integer used = null;
  
  @Schema(description = "Unix timestamp of when the snapshot was created.")
 /**
   * Unix timestamp of when the snapshot was created.  
  **/
  private Integer date = null;
 /**
   * Snapshot name.
   * @return name
  **/
  @JsonProperty("name")
  @NotNull
  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public VpsSnapshot name(String name) {
    this.name = name;
    return this;
  }

 /**
   * Disk space used by this snapshot in bytes.
   * @return used
  **/
  @JsonProperty("used")
  @NotNull
  public Integer getUsed() {
    return used;
  }

  public void setUsed(Integer used) {
    this.used = used;
  }

  public VpsSnapshot used(Integer used) {
    this.used = used;
    return this;
  }

 /**
   * Unix timestamp of when the snapshot was created.
   * @return date
  **/
  @JsonProperty("date")
  @NotNull
  public Integer getDate() {
    return date;
  }

  public void setDate(Integer date) {
    this.date = date;
  }

  public VpsSnapshot date(Integer date) {
    this.date = date;
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

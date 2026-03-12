package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A VPS snapshot (point-in-time backup) stored on the host node.
 */
@ApiModel(description="A VPS snapshot (point-in-time backup) stored on the host node.")

public class VpsSnapshot  {
  
 /**
  * Snapshot name.
  */
  @ApiModelProperty(value = "Snapshot name.")

  private String name;

 /**
  * Disk space used by this snapshot in bytes.
  */
  @ApiModelProperty(value = "Disk space used by this snapshot in bytes.")

  private Integer used;

 /**
  * Unix timestamp of when the snapshot was created.
  */
  @ApiModelProperty(value = "Unix timestamp of when the snapshot was created.")

  private Integer date;
 /**
   * Snapshot name.
   * @return name
  **/
  @JsonProperty("name")
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsSnapshot vpsSnapshot = (VpsSnapshot) o;
    return Objects.equals(this.name, vpsSnapshot.name) &&
        Objects.equals(this.used, vpsSnapshot.used) &&
        Objects.equals(this.date, vpsSnapshot.date);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}


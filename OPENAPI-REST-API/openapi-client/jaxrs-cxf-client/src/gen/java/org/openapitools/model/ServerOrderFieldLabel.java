package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A display label for a field in the server order form.
 */
@ApiModel(description="A display label for a field in the server order form.")

public class ServerOrderFieldLabel  {
  
 /**
  * Name of the field label.
  */
  @ApiModelProperty(example = "Bandwidth", value = "Name of the field label.")

  private String name;

 /**
  * Active status of the field label.
  */
  @ApiModelProperty(example = "1", value = "Active status of the field label.")

  private Integer active;
 /**
   * Name of the field label.
   * @return name
  **/
  @JsonProperty("name")
  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public ServerOrderFieldLabel name(String name) {
    this.name = name;
    return this;
  }

 /**
   * Active status of the field label.
   * @return active
  **/
  @JsonProperty("active")
  public Integer getActive() {
    return active;
  }

  public void setActive(Integer active) {
    this.active = active;
  }

  public ServerOrderFieldLabel active(Integer active) {
    this.active = active;
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
    ServerOrderFieldLabel serverOrderFieldLabel = (ServerOrderFieldLabel) o;
    return Objects.equals(this.name, serverOrderFieldLabel.name) &&
        Objects.equals(this.active, serverOrderFieldLabel.active);
  }

  @Override
  public int hashCode() {
    return Objects.hash(name, active);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerOrderFieldLabel {\n");
    
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    active: ").append(toIndentedString(active)).append("\n");
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


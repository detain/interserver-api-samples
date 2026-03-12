package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * A display label for a field in the server order form.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "A display label for a field in the server order form.")

public class ServerOrderFieldLabel   {

  private @Valid String name = null;

  private @Valid Integer active = null;

  /**
   * Name of the field label.
   **/
  public ServerOrderFieldLabel name(String name) {
    this.name = name;
    return this;
  }

  
  @ApiModelProperty(example = "Bandwidth", value = "Name of the field label.")
  @JsonProperty("name")
  @NotNull

  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  /**
   * Active status of the field label.
   **/
  public ServerOrderFieldLabel active(Integer active) {
    this.active = active;
    return this;
  }

  
  @ApiModelProperty(example = "1", value = "Active status of the field label.")
  @JsonProperty("active")
  @NotNull

  public Integer getActive() {
    return active;
  }
  public void setActive(Integer active) {
    this.active = active;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServerOrderFieldLabel serverOrderFieldLabel = (ServerOrderFieldLabel) o;
    return Objects.equals(name, serverOrderFieldLabel.name) &&
        Objects.equals(active, serverOrderFieldLabel.active);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

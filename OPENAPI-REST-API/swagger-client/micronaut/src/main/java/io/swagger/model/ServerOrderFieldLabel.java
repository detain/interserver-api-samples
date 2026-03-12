package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * A display label for a field in the server order form.
 */
@Schema(description = "A display label for a field in the server order form.")
@Validated
@Introspected

public class ServerOrderFieldLabel   {
  @JsonProperty("name")
  private String name = null;

  @JsonProperty("active")
  private Integer active = null;

  public ServerOrderFieldLabel name(String name) {
    this.name = name;
    return this;
  }

  /**
   * Name of the field label.
   * @return name
  **/
  @Schema(example = "Bandwidth", description = "Name of the field label.")
  @NotNull

  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public ServerOrderFieldLabel active(Integer active) {
    this.active = active;
    return this;
  }

  /**
   * Active status of the field label.
   * @return active
  **/
  @Schema(example = "1", description = "Active status of the field label.")
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

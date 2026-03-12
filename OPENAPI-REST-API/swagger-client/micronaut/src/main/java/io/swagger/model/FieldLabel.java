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
 * A display label for a server order form field.
 */
@Schema(description = "A display label for a server order form field.")
@Validated
@Introspected

public class FieldLabel   {
  @JsonProperty("name")
  private String name = null;

  @JsonProperty("active")
  private Integer active = null;

  public FieldLabel name(String name) {
    this.name = name;
    return this;
  }

  /**
   * Get name
   * @return name
  **/
  @Schema(description = "")
  @NotNull

  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public FieldLabel active(Integer active) {
    this.active = active;
    return this;
  }

  /**
   * Get active
   * @return active
  **/
  @Schema(description = "")
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
    FieldLabel fieldLabel = (FieldLabel) o;
    return Objects.equals(this.name, fieldLabel.name) &&
        Objects.equals(this.active, fieldLabel.active);
  }

  @Override
  public int hashCode() {
    return Objects.hash(name, active);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class FieldLabel {\n");
    
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

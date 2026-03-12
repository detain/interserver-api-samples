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
 * ScrubIpFilterTypesFilters
 */
@Validated
@Introspected

public class ScrubIpFilterTypesFilters   {
  @JsonProperty("name")
  private String name = null;

  @JsonProperty("desc")
  private String desc = null;

  public ScrubIpFilterTypesFilters name(String name) {
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

  public ScrubIpFilterTypesFilters desc(String desc) {
    this.desc = desc;
    return this;
  }

  /**
   * Get desc
   * @return desc
  **/
  @Schema(description = "")
  @NotNull

  public String getDesc() {
    return desc;
  }

  public void setDesc(String desc) {
    this.desc = desc;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ScrubIpFilterTypesFilters scrubIpFilterTypesFilters = (ScrubIpFilterTypesFilters) o;
    return Objects.equals(this.name, scrubIpFilterTypesFilters.name) &&
        Objects.equals(this.desc, scrubIpFilterTypesFilters.desc);
  }

  @Override
  public int hashCode() {
    return Objects.hash(name, desc);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ScrubIpFilterTypesFilters {\n");
    
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    desc: ").append(toIndentedString(desc)).append("\n");
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

package io.swagger.model;

import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class ScrubIpFilterTypesFilters   {

  private @Valid String name = null;

  private @Valid String desc = null;

  /**
   **/
  public ScrubIpFilterTypesFilters name(String name) {
    this.name = name;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("name")
  @NotNull

  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  /**
   **/
  public ScrubIpFilterTypesFilters desc(String desc) {
    this.desc = desc;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("desc")
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
    return Objects.equals(name, scrubIpFilterTypesFilters.name) &&
        Objects.equals(desc, scrubIpFilterTypesFilters.desc);
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

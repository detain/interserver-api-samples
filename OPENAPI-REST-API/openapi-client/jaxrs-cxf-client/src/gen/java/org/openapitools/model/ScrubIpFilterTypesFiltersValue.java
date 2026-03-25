package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class ScrubIpFilterTypesFiltersValue  {
  
  @ApiModelProperty(value = "")

  private String name;

  @ApiModelProperty(value = "")

  private String desc;
 /**
   * Get name
   * @return name
  **/
  @JsonProperty("name")
  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public ScrubIpFilterTypesFiltersValue name(String name) {
    this.name = name;
    return this;
  }

 /**
   * Get desc
   * @return desc
  **/
  @JsonProperty("desc")
  public String getDesc() {
    return desc;
  }

  public void setDesc(String desc) {
    this.desc = desc;
  }

  public ScrubIpFilterTypesFiltersValue desc(String desc) {
    this.desc = desc;
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
    ScrubIpFilterTypesFiltersValue scrubIpFilterTypesFiltersValue = (ScrubIpFilterTypesFiltersValue) o;
    return Objects.equals(this.name, scrubIpFilterTypesFiltersValue.name) &&
        Objects.equals(this.desc, scrubIpFilterTypesFiltersValue.desc);
  }

  @Override
  public int hashCode() {
    return Objects.hash(name, desc);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ScrubIpFilterTypesFiltersValue {\n");
    
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    desc: ").append(toIndentedString(desc)).append("\n");
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


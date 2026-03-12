package org.openapitools.model;

import org.openapitools.model.VpsDALicense;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * DirectAdmin license options available for a VPS.
 */
@ApiModel(description="DirectAdmin license options available for a VPS.")

public class VpsDAData  {
  
  @ApiModelProperty(value = "")

  private VpsDALicense free;
 /**
   * Get free
   * @return free
  **/
  @JsonProperty("free")
  public VpsDALicense getFree() {
    return free;
  }

  public void setFree(VpsDALicense free) {
    this.free = free;
  }

  public VpsDAData free(VpsDALicense free) {
    this.free = free;
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
    VpsDAData vpsDAData = (VpsDAData) o;
    return Objects.equals(this.free, vpsDAData.free);
  }

  @Override
  public int hashCode() {
    return Objects.hash(free);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsDAData {\n");
    
    sb.append("    free: ").append(toIndentedString(free)).append("\n");
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


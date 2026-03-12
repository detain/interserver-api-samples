package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * A datacenter region where a server can be provisioned.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "A datacenter region where a server can be provisioned.")

public class Region   {

  private @Valid Integer regionId = null;

  private @Valid String regionName = null;

  /**
   **/
  public Region regionId(Integer regionId) {
    this.regionId = regionId;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("region_id")
  @NotNull

  public Integer getRegionId() {
    return regionId;
  }
  public void setRegionId(Integer regionId) {
    this.regionId = regionId;
  }

  /**
   **/
  public Region regionName(String regionName) {
    this.regionName = regionName;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("region_name")
  @NotNull

  public String getRegionName() {
    return regionName;
  }
  public void setRegionName(String regionName) {
    this.regionName = regionName;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Region region = (Region) o;
    return Objects.equals(regionId, region.regionId) &&
        Objects.equals(regionName, region.regionName);
  }

  @Override
  public int hashCode() {
    return Objects.hash(regionId, regionName);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Region {\n");
    
    sb.append("    regionId: ").append(toIndentedString(regionId)).append("\n");
    sb.append("    regionName: ").append(toIndentedString(regionName)).append("\n");
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

package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A datacenter region where a server can be provisioned.
 */
@ApiModel(description="A datacenter region where a server can be provisioned.")

public class Region  {
  
  @ApiModelProperty(value = "")

  private Integer regionId;

  @ApiModelProperty(value = "")

  private String regionName;
 /**
   * Get regionId
   * @return regionId
  **/
  @JsonProperty("region_id")
  public Integer getRegionId() {
    return regionId;
  }

  public void setRegionId(Integer regionId) {
    this.regionId = regionId;
  }

  public Region regionId(Integer regionId) {
    this.regionId = regionId;
    return this;
  }

 /**
   * Get regionName
   * @return regionName
  **/
  @JsonProperty("region_name")
  public String getRegionName() {
    return regionName;
  }

  public void setRegionName(String regionName) {
    this.regionName = regionName;
  }

  public Region regionName(String regionName) {
    this.regionName = regionName;
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
    Region region = (Region) o;
    return Objects.equals(this.regionId, region.regionId) &&
        Objects.equals(this.regionName, region.regionName);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}


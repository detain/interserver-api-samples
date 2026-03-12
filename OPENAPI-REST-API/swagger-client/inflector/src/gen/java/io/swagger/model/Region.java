package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * A datacenter region where a server can be provisioned.
 **/
@Schema(description = "A datacenter region where a server can be provisioned.")


public class Region   {
  @JsonProperty("region_id")
  private Integer regionId = null;
  @JsonProperty("region_name")
  private String regionName = null;
  /**
   **/
  public Region regionId(Integer regionId) {
    this.regionId = regionId;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("region_id")
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

  
  @Schema(description = "")
  @JsonProperty("region_name")
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

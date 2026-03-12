package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import org.springframework.validation.annotation.Validated;
import org.openapitools.jackson.nullable.JsonNullable;
import io.swagger.configuration.NotUndefined;
import com.fasterxml.jackson.annotation.JsonInclude;
import com.fasterxml.jackson.annotation.JsonSetter;
import com.fasterxml.jackson.annotation.Nulls;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * A datacenter region where a server can be provisioned.
 */
@Schema(description = "A datacenter region where a server can be provisioned.")
@Validated
@NotUndefined



public class Region   {
  @JsonProperty("region_id")

  @JsonInclude(JsonInclude.Include.NON_ABSENT)  // Exclude from JSON if absent
  @JsonSetter(nulls = Nulls.FAIL)    // FAIL setting if the value is null
  private Integer regionId = null;

  @JsonProperty("region_name")

  @JsonInclude(JsonInclude.Include.NON_ABSENT)  // Exclude from JSON if absent
  @JsonSetter(nulls = Nulls.FAIL)    // FAIL setting if the value is null
  private String regionName = null;


  public Region regionId(Integer regionId) { 

    this.regionId = regionId;
    return this;
  }

  /**
   * Get regionId
   * @return regionId
   **/
  
  @Schema(description = "")
  
  public Integer getRegionId() {  
    return regionId;
  }



  public void setRegionId(Integer regionId) { 
    this.regionId = regionId;
  }

  public Region regionName(String regionName) { 

    this.regionName = regionName;
    return this;
  }

  /**
   * Get regionName
   * @return regionName
   **/
  
  @Schema(description = "")
  
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

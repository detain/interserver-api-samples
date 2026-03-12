package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonCreator;

/**
  * A datacenter region where a server can be provisioned.
 **/
@Schema(description="A datacenter region where a server can be provisioned.")
public class Region   {
  
  @Schema(description = "")
  private Integer regionId = null;
  
  @Schema(description = "")
  private String regionName = null;
 /**
   * Get regionId
   * @return regionId
  **/
  @JsonProperty("region_id")
  @NotNull
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
  @NotNull
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

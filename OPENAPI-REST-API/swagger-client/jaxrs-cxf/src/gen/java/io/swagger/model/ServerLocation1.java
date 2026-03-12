package io.swagger.model;

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

public class ServerLocation1   {
  
  @Schema(required = true, description = "")
  private Integer locationId = null;
  
  @Schema(required = true, description = "")
  private String locationName = null;
  
  @Schema(description = "")
  private String locationDescription = null;
  
  @Schema(required = true, description = "")
  private String locationLat = null;
  
  @Schema(required = true, description = "")
  private String locationLong = null;
  
  @Schema(description = "")
  private Integer locationIpmiGroup = null;
 /**
   * Get locationId
   * @return locationId
  **/
  @JsonProperty("location_id")
  @NotNull
  public Integer getLocationId() {
    return locationId;
  }

  public void setLocationId(Integer locationId) {
    this.locationId = locationId;
  }

  public ServerLocation1 locationId(Integer locationId) {
    this.locationId = locationId;
    return this;
  }

 /**
   * Get locationName
   * @return locationName
  **/
  @JsonProperty("location_name")
  @NotNull
  public String getLocationName() {
    return locationName;
  }

  public void setLocationName(String locationName) {
    this.locationName = locationName;
  }

  public ServerLocation1 locationName(String locationName) {
    this.locationName = locationName;
    return this;
  }

 /**
   * Get locationDescription
   * @return locationDescription
  **/
  @JsonProperty("location_description")
  @NotNull
  public String getLocationDescription() {
    return locationDescription;
  }

  public void setLocationDescription(String locationDescription) {
    this.locationDescription = locationDescription;
  }

  public ServerLocation1 locationDescription(String locationDescription) {
    this.locationDescription = locationDescription;
    return this;
  }

 /**
   * Get locationLat
   * @return locationLat
  **/
  @JsonProperty("location_lat")
  @NotNull
  public String getLocationLat() {
    return locationLat;
  }

  public void setLocationLat(String locationLat) {
    this.locationLat = locationLat;
  }

  public ServerLocation1 locationLat(String locationLat) {
    this.locationLat = locationLat;
    return this;
  }

 /**
   * Get locationLong
   * @return locationLong
  **/
  @JsonProperty("location_long")
  @NotNull
  public String getLocationLong() {
    return locationLong;
  }

  public void setLocationLong(String locationLong) {
    this.locationLong = locationLong;
  }

  public ServerLocation1 locationLong(String locationLong) {
    this.locationLong = locationLong;
    return this;
  }

 /**
   * Get locationIpmiGroup
   * @return locationIpmiGroup
  **/
  @JsonProperty("location_ipmi_group")
  @NotNull
  public Integer getLocationIpmiGroup() {
    return locationIpmiGroup;
  }

  public void setLocationIpmiGroup(Integer locationIpmiGroup) {
    this.locationIpmiGroup = locationIpmiGroup;
  }

  public ServerLocation1 locationIpmiGroup(Integer locationIpmiGroup) {
    this.locationIpmiGroup = locationIpmiGroup;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerLocation1 {\n");
    
    sb.append("    locationId: ").append(toIndentedString(locationId)).append("\n");
    sb.append("    locationName: ").append(toIndentedString(locationName)).append("\n");
    sb.append("    locationDescription: ").append(toIndentedString(locationDescription)).append("\n");
    sb.append("    locationLat: ").append(toIndentedString(locationLat)).append("\n");
    sb.append("    locationLong: ").append(toIndentedString(locationLong)).append("\n");
    sb.append("    locationIpmiGroup: ").append(toIndentedString(locationIpmiGroup)).append("\n");
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

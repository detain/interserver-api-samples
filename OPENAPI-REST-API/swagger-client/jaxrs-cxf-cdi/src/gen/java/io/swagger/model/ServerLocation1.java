package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;



public class ServerLocation1   {
  private Integer locationId = null;
  private String locationName = null;
  private String locationDescription = null;
  private String locationLat = null;
  private String locationLong = null;
  private Integer locationIpmiGroup = null;

  /**
   **/
  public ServerLocation1 locationId(Integer locationId) {
    this.locationId = locationId;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("location_id")
  @NotNull
  public Integer getLocationId() {
    return locationId;
  }
  public void setLocationId(Integer locationId) {
    this.locationId = locationId;
  }

  /**
   **/
  public ServerLocation1 locationName(String locationName) {
    this.locationName = locationName;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("location_name")
  @NotNull
  public String getLocationName() {
    return locationName;
  }
  public void setLocationName(String locationName) {
    this.locationName = locationName;
  }

  /**
   **/
  public ServerLocation1 locationDescription(String locationDescription) {
    this.locationDescription = locationDescription;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("location_description")
  @NotNull
  public String getLocationDescription() {
    return locationDescription;
  }
  public void setLocationDescription(String locationDescription) {
    this.locationDescription = locationDescription;
  }

  /**
   **/
  public ServerLocation1 locationLat(String locationLat) {
    this.locationLat = locationLat;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("location_lat")
  @NotNull
  public String getLocationLat() {
    return locationLat;
  }
  public void setLocationLat(String locationLat) {
    this.locationLat = locationLat;
  }

  /**
   **/
  public ServerLocation1 locationLong(String locationLong) {
    this.locationLong = locationLong;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("location_long")
  @NotNull
  public String getLocationLong() {
    return locationLong;
  }
  public void setLocationLong(String locationLong) {
    this.locationLong = locationLong;
  }

  /**
   **/
  public ServerLocation1 locationIpmiGroup(Integer locationIpmiGroup) {
    this.locationIpmiGroup = locationIpmiGroup;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("location_ipmi_group")
  @NotNull
  public Integer getLocationIpmiGroup() {
    return locationIpmiGroup;
  }
  public void setLocationIpmiGroup(Integer locationIpmiGroup) {
    this.locationIpmiGroup = locationIpmiGroup;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServerLocation1 serverLocation1 = (ServerLocation1) o;
    return Objects.equals(locationId, serverLocation1.locationId) &&
        Objects.equals(locationName, serverLocation1.locationName) &&
        Objects.equals(locationDescription, serverLocation1.locationDescription) &&
        Objects.equals(locationLat, serverLocation1.locationLat) &&
        Objects.equals(locationLong, serverLocation1.locationLong) &&
        Objects.equals(locationIpmiGroup, serverLocation1.locationIpmiGroup);
  }

  @Override
  public int hashCode() {
    return Objects.hash(locationId, locationName, locationDescription, locationLat, locationLong, locationIpmiGroup);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

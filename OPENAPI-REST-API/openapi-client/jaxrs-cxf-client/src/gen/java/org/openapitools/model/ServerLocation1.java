package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class ServerLocation1  {
  
  @ApiModelProperty(required = true, value = "")

  private Integer locationId;

  @ApiModelProperty(required = true, value = "")

  private String locationName;

  @ApiModelProperty(required = true, value = "")

  private String locationLat;

  @ApiModelProperty(required = true, value = "")

  private String locationLong;

  @ApiModelProperty(value = "")

  private String locationDescription;

  @ApiModelProperty(value = "")

  private Integer locationIpmiGroup;
 /**
   * Get locationId
   * @return locationId
  **/
  @JsonProperty("location_id")
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
   * Get locationLat
   * @return locationLat
  **/
  @JsonProperty("location_lat")
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
   * Get locationDescription
   * @return locationDescription
  **/
  @JsonProperty("location_description")
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
   * Get locationIpmiGroup
   * @return locationIpmiGroup
  **/
  @JsonProperty("location_ipmi_group")
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServerLocation1 serverLocation1 = (ServerLocation1) o;
    return Objects.equals(this.locationId, serverLocation1.locationId) &&
        Objects.equals(this.locationName, serverLocation1.locationName) &&
        Objects.equals(this.locationLat, serverLocation1.locationLat) &&
        Objects.equals(this.locationLong, serverLocation1.locationLong) &&
        Objects.equals(this.locationDescription, serverLocation1.locationDescription) &&
        Objects.equals(this.locationIpmiGroup, serverLocation1.locationIpmiGroup);
  }

  @Override
  public int hashCode() {
    return Objects.hash(locationId, locationName, locationLat, locationLong, locationDescription, locationIpmiGroup);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerLocation1 {\n");
    
    sb.append("    locationId: ").append(toIndentedString(locationId)).append("\n");
    sb.append("    locationName: ").append(toIndentedString(locationName)).append("\n");
    sb.append("    locationLat: ").append(toIndentedString(locationLat)).append("\n");
    sb.append("    locationLong: ").append(toIndentedString(locationLong)).append("\n");
    sb.append("    locationDescription: ").append(toIndentedString(locationDescription)).append("\n");
    sb.append("    locationIpmiGroup: ").append(toIndentedString(locationIpmiGroup)).append("\n");
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


package org.openapitools.model;

import org.openapitools.model.VpsTrafficHistorySectionResponse;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * VPS Traffic Data History Section
 */
@ApiModel(description="VPS Traffic Data History Section")

public class VpsTrafficHistoryResponse  {
  
  @ApiModelProperty(required = true, value = "")

  private VpsTrafficHistorySectionResponse hour;

  @ApiModelProperty(required = true, value = "")

  private VpsTrafficHistorySectionResponse day;
 /**
   * Get hour
   * @return hour
  **/
  @JsonProperty("hour")
  public VpsTrafficHistorySectionResponse getHour() {
    return hour;
  }

  public void setHour(VpsTrafficHistorySectionResponse hour) {
    this.hour = hour;
  }

  public VpsTrafficHistoryResponse hour(VpsTrafficHistorySectionResponse hour) {
    this.hour = hour;
    return this;
  }

 /**
   * Get day
   * @return day
  **/
  @JsonProperty("day")
  public VpsTrafficHistorySectionResponse getDay() {
    return day;
  }

  public void setDay(VpsTrafficHistorySectionResponse day) {
    this.day = day;
  }

  public VpsTrafficHistoryResponse day(VpsTrafficHistorySectionResponse day) {
    this.day = day;
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
    VpsTrafficHistoryResponse vpsTrafficHistoryResponse = (VpsTrafficHistoryResponse) o;
    return Objects.equals(this.hour, vpsTrafficHistoryResponse.hour) &&
        Objects.equals(this.day, vpsTrafficHistoryResponse.day);
  }

  @Override
  public int hashCode() {
    return Objects.hash(hour, day);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsTrafficHistoryResponse {\n");
    
    sb.append("    hour: ").append(toIndentedString(hour)).append("\n");
    sb.append("    day: ").append(toIndentedString(day)).append("\n");
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


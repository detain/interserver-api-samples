package io.swagger.model;

import io.swagger.model.VpsTrafficHistorySectionResponse;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * VPS Traffic Data History Section
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "VPS Traffic Data History Section")

public class VpsTrafficHistoryResponse   {

  private @Valid VpsTrafficHistorySectionResponse hour = null;

  private @Valid VpsTrafficHistorySectionResponse day = null;

  /**
   **/
  public VpsTrafficHistoryResponse hour(VpsTrafficHistorySectionResponse hour) {
    this.hour = hour;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("hour")
  @NotNull

  public VpsTrafficHistorySectionResponse getHour() {
    return hour;
  }
  public void setHour(VpsTrafficHistorySectionResponse hour) {
    this.hour = hour;
  }

  /**
   **/
  public VpsTrafficHistoryResponse day(VpsTrafficHistorySectionResponse day) {
    this.day = day;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("day")
  @NotNull

  public VpsTrafficHistorySectionResponse getDay() {
    return day;
  }
  public void setDay(VpsTrafficHistorySectionResponse day) {
    this.day = day;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsTrafficHistoryResponse vpsTrafficHistoryResponse = (VpsTrafficHistoryResponse) o;
    return Objects.equals(hour, vpsTrafficHistoryResponse.hour) &&
        Objects.equals(day, vpsTrafficHistoryResponse.day);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

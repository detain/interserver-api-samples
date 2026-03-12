package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.VpsTrafficHistorySectionResponse;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="VPS Traffic Data History Section")

public class VpsTrafficHistoryResponse   {
  private VpsTrafficHistorySectionResponse hour = null;
  private VpsTrafficHistorySectionResponse day = null;

  /**
   **/
  
  @Schema(required = true, description = "")
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
  
  @Schema(required = true, description = "")
  @JsonProperty("day")
  @NotNull
  public VpsTrafficHistorySectionResponse getDay() {
    return day;
  }
  public void setDay(VpsTrafficHistorySectionResponse day) {
    this.day = day;
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

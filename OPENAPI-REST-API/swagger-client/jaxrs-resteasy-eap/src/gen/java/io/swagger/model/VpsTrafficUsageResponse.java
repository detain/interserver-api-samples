package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.VpsTrafficTotalsSectionResponse;
import io.swagger.model.VpsTrafficUsageAverageResponse;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="VPS Traffic Usage Section")

public class VpsTrafficUsageResponse   {
  private VpsTrafficTotalsSectionResponse current = null;
  private VpsTrafficTotalsSectionResponse peak = null;
  private VpsTrafficUsageAverageResponse average = null;

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("current")
  @NotNull
  public VpsTrafficTotalsSectionResponse getCurrent() {
    return current;
  }
  public void setCurrent(VpsTrafficTotalsSectionResponse current) {
    this.current = current;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("peak")
  @NotNull
  public VpsTrafficTotalsSectionResponse getPeak() {
    return peak;
  }
  public void setPeak(VpsTrafficTotalsSectionResponse peak) {
    this.peak = peak;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("average")
  @NotNull
  public VpsTrafficUsageAverageResponse getAverage() {
    return average;
  }
  public void setAverage(VpsTrafficUsageAverageResponse average) {
    this.average = average;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsTrafficUsageResponse vpsTrafficUsageResponse = (VpsTrafficUsageResponse) o;
    return Objects.equals(current, vpsTrafficUsageResponse.current) &&
        Objects.equals(peak, vpsTrafficUsageResponse.peak) &&
        Objects.equals(average, vpsTrafficUsageResponse.average);
  }

  @Override
  public int hashCode() {
    return Objects.hash(current, peak, average);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsTrafficUsageResponse {\n");
    
    sb.append("    current: ").append(toIndentedString(current)).append("\n");
    sb.append("    peak: ").append(toIndentedString(peak)).append("\n");
    sb.append("    average: ").append(toIndentedString(average)).append("\n");
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

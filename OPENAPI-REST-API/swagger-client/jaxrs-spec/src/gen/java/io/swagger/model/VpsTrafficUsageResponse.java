package io.swagger.model;

import io.swagger.model.VpsTrafficTotalsSectionResponse;
import io.swagger.model.VpsTrafficUsageAverageResponse;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * VPS Traffic Usage Section
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "VPS Traffic Usage Section")

public class VpsTrafficUsageResponse   {

  private @Valid VpsTrafficTotalsSectionResponse current = null;

  private @Valid VpsTrafficTotalsSectionResponse peak = null;

  private @Valid VpsTrafficUsageAverageResponse average = null;

  /**
   **/
  public VpsTrafficUsageResponse current(VpsTrafficTotalsSectionResponse current) {
    this.current = current;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
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
  public VpsTrafficUsageResponse peak(VpsTrafficTotalsSectionResponse peak) {
    this.peak = peak;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
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
  public VpsTrafficUsageResponse average(VpsTrafficUsageAverageResponse average) {
    this.average = average;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("average")
  @NotNull

  public VpsTrafficUsageAverageResponse getAverage() {
    return average;
  }
  public void setAverage(VpsTrafficUsageAverageResponse average) {
    this.average = average;
  }


  @Override
  public boolean equals(java.lang.Object o) {
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

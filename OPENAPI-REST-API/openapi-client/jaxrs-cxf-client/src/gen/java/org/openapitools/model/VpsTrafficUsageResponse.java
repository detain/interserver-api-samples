package org.openapitools.model;

import org.openapitools.model.VpsTrafficTotalsSectionResponse;
import org.openapitools.model.VpsTrafficUsageAverageResponse;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * VPS Traffic Usage Section
 */
@ApiModel(description="VPS Traffic Usage Section")

public class VpsTrafficUsageResponse  {
  
  @ApiModelProperty(required = true, value = "")

  private VpsTrafficTotalsSectionResponse current;

  @ApiModelProperty(required = true, value = "")

  private VpsTrafficTotalsSectionResponse peak;

  @ApiModelProperty(required = true, value = "")

  private VpsTrafficUsageAverageResponse average;
 /**
   * Get current
   * @return current
  **/
  @JsonProperty("current")
  public VpsTrafficTotalsSectionResponse getCurrent() {
    return current;
  }

  public void setCurrent(VpsTrafficTotalsSectionResponse current) {
    this.current = current;
  }

  public VpsTrafficUsageResponse current(VpsTrafficTotalsSectionResponse current) {
    this.current = current;
    return this;
  }

 /**
   * Get peak
   * @return peak
  **/
  @JsonProperty("peak")
  public VpsTrafficTotalsSectionResponse getPeak() {
    return peak;
  }

  public void setPeak(VpsTrafficTotalsSectionResponse peak) {
    this.peak = peak;
  }

  public VpsTrafficUsageResponse peak(VpsTrafficTotalsSectionResponse peak) {
    this.peak = peak;
    return this;
  }

 /**
   * Get average
   * @return average
  **/
  @JsonProperty("average")
  public VpsTrafficUsageAverageResponse getAverage() {
    return average;
  }

  public void setAverage(VpsTrafficUsageAverageResponse average) {
    this.average = average;
  }

  public VpsTrafficUsageResponse average(VpsTrafficUsageAverageResponse average) {
    this.average = average;
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
    VpsTrafficUsageResponse vpsTrafficUsageResponse = (VpsTrafficUsageResponse) o;
    return Objects.equals(this.current, vpsTrafficUsageResponse.current) &&
        Objects.equals(this.peak, vpsTrafficUsageResponse.peak) &&
        Objects.equals(this.average, vpsTrafficUsageResponse.average);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}


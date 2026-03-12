package io.swagger.model;

import io.swagger.model.VpsTrafficTotalsSectionResponse;
import io.swagger.model.VpsTrafficUsageAverageResponse;
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
  * VPS Traffic Usage Section
 **/
@Schema(description="VPS Traffic Usage Section")
public class VpsTrafficUsageResponse   {
  
  @Schema(required = true, description = "")
  private VpsTrafficTotalsSectionResponse current = null;
  
  @Schema(required = true, description = "")
  private VpsTrafficTotalsSectionResponse peak = null;
  
  @Schema(required = true, description = "")
  private VpsTrafficUsageAverageResponse average = null;
 /**
   * Get current
   * @return current
  **/
  @JsonProperty("current")
  @NotNull
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
  @NotNull
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
  @NotNull
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

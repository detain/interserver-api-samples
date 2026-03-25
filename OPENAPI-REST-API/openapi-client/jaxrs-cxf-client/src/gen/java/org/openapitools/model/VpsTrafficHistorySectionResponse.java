package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Date;
import java.util.List;
import org.openapitools.model.VpsTrafficHistorySectionDataResponse;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * VPS Traffic History Hour and Day Sections
 */
@ApiModel(description="VPS Traffic History Hour and Day Sections")

public class VpsTrafficHistorySectionResponse  {
  
  @ApiModelProperty(required = true, value = "")

  private List<VpsTrafficHistorySectionDataResponse> data = new ArrayList<>();

  @ApiModelProperty(required = true, value = "")

  private List<Date> times = new ArrayList<>();
 /**
   * Get data
   * @return data
  **/
  @JsonProperty("data")
  public List<VpsTrafficHistorySectionDataResponse> getData() {
    return data;
  }

  public void setData(List<VpsTrafficHistorySectionDataResponse> data) {
    this.data = data;
  }

  public VpsTrafficHistorySectionResponse data(List<VpsTrafficHistorySectionDataResponse> data) {
    this.data = data;
    return this;
  }

  public VpsTrafficHistorySectionResponse addDataItem(VpsTrafficHistorySectionDataResponse dataItem) {
    this.data.add(dataItem);
    return this;
  }

 /**
   * Get times
   * @return times
  **/
  @JsonProperty("times")
  public List<Date> getTimes() {
    return times;
  }

  public void setTimes(List<Date> times) {
    this.times = times;
  }

  public VpsTrafficHistorySectionResponse times(List<Date> times) {
    this.times = times;
    return this;
  }

  public VpsTrafficHistorySectionResponse addTimesItem(Date timesItem) {
    this.times.add(timesItem);
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
    VpsTrafficHistorySectionResponse vpsTrafficHistorySectionResponse = (VpsTrafficHistorySectionResponse) o;
    return Objects.equals(this.data, vpsTrafficHistorySectionResponse.data) &&
        Objects.equals(this.times, vpsTrafficHistorySectionResponse.times);
  }

  @Override
  public int hashCode() {
    return Objects.hash(data, times);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsTrafficHistorySectionResponse {\n");
    
    sb.append("    data: ").append(toIndentedString(data)).append("\n");
    sb.append("    times: ").append(toIndentedString(times)).append("\n");
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


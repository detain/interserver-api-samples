package io.swagger.model;

import io.swagger.model.VpsTrafficHistorySectionDataResponse;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * VPS Traffic History Hour and Day Sections
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "VPS Traffic History Hour and Day Sections")

public class VpsTrafficHistorySectionResponse   {

  private @Valid List<VpsTrafficHistorySectionDataResponse> data = new ArrayList<VpsTrafficHistorySectionDataResponse>();

  private @Valid List<Date> times = new ArrayList<Date>();

  /**
   **/
  public VpsTrafficHistorySectionResponse data(List<VpsTrafficHistorySectionDataResponse> data) {
    this.data = data;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("data")
  @NotNull

  public List<VpsTrafficHistorySectionDataResponse> getData() {
    return data;
  }
  public void setData(List<VpsTrafficHistorySectionDataResponse> data) {
    this.data = data;
  }

  /**
   **/
  public VpsTrafficHistorySectionResponse times(List<Date> times) {
    this.times = times;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("times")
  @NotNull

  public List<Date> getTimes() {
    return times;
  }
  public void setTimes(List<Date> times) {
    this.times = times;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsTrafficHistorySectionResponse vpsTrafficHistorySectionResponse = (VpsTrafficHistorySectionResponse) o;
    return Objects.equals(data, vpsTrafficHistorySectionResponse.data) &&
        Objects.equals(times, vpsTrafficHistorySectionResponse.times);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

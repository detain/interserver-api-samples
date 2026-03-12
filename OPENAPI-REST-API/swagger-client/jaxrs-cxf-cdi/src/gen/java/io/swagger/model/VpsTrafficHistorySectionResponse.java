package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.VpsTrafficHistorySectionDataResponse;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import javax.validation.Valid;
import javax.validation.constraints.*;
/**
 * VPS Traffic History Hour and Day Sections
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "VPS Traffic History Hour and Day Sections")

public class VpsTrafficHistorySectionResponse   {
  private List<VpsTrafficHistorySectionDataResponse> data = new ArrayList<VpsTrafficHistorySectionDataResponse>();
  private List<java.util.Date> times = new ArrayList<java.util.Date>();

  /**
   **/
  public VpsTrafficHistorySectionResponse data(List<VpsTrafficHistorySectionDataResponse> data) {
    this.data = data;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("data")
  @NotNull
  @Valid
  public List<VpsTrafficHistorySectionDataResponse> getData() {
    return data;
  }
  public void setData(List<VpsTrafficHistorySectionDataResponse> data) {
    this.data = data;
  }

  /**
   **/
  public VpsTrafficHistorySectionResponse times(List<java.util.Date> times) {
    this.times = times;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("times")
  @NotNull
  @Valid
  public List<java.util.Date> getTimes() {
    return times;
  }
  public void setTimes(List<java.util.Date> times) {
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

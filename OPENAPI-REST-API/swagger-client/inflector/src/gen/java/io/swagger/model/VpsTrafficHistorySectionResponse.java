package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.VpsTrafficHistorySectionDataResponse;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;


/**
 * VPS Traffic History Hour and Day Sections
 **/
@Schema(description = "VPS Traffic History Hour and Day Sections")


public class VpsTrafficHistorySectionResponse   {
  @JsonProperty("data")
  private List<VpsTrafficHistorySectionDataResponse> data = new ArrayList<VpsTrafficHistorySectionDataResponse>();
  @JsonProperty("times")
  private List<Date> times = new ArrayList<Date>();
  /**
   **/
  public VpsTrafficHistorySectionResponse data(List<VpsTrafficHistorySectionDataResponse> data) {
    this.data = data;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("data")
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

  
  @Schema(required = true, description = "")
  @JsonProperty("times")
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

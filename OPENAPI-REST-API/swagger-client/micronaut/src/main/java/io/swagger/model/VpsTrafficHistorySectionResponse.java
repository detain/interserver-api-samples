package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.VpsTrafficHistorySectionDataResponse;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import org.threeten.bp.OffsetDateTime;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * VPS Traffic History Hour and Day Sections
 */
@Schema(description = "VPS Traffic History Hour and Day Sections")
@Validated
@Introspected

public class VpsTrafficHistorySectionResponse   {
  @JsonProperty("data")
  @Valid
  private List<VpsTrafficHistorySectionDataResponse> data = new ArrayList<VpsTrafficHistorySectionDataResponse>();

  @JsonProperty("times")
  @Valid
  private List<OffsetDateTime> times = new ArrayList<OffsetDateTime>();

  public VpsTrafficHistorySectionResponse data(List<VpsTrafficHistorySectionDataResponse> data) {
    this.data = data;
    return this;
  }

  public VpsTrafficHistorySectionResponse addDataItem(VpsTrafficHistorySectionDataResponse dataItem) {
    this.data.add(dataItem);
    return this;
  }

  /**
   * Get data
   * @return data
  **/
  @Schema(required = true, description = "")
  @NotNull
  @Valid
  public List<VpsTrafficHistorySectionDataResponse> getData() {
    return data;
  }

  public void setData(List<VpsTrafficHistorySectionDataResponse> data) {
    this.data = data;
  }

  public VpsTrafficHistorySectionResponse times(List<OffsetDateTime> times) {
    this.times = times;
    return this;
  }

  public VpsTrafficHistorySectionResponse addTimesItem(OffsetDateTime timesItem) {
    this.times.add(timesItem);
    return this;
  }

  /**
   * Get times
   * @return times
  **/
  @Schema(required = true, description = "")
  @NotNull
  @Valid
  public List<OffsetDateTime> getTimes() {
    return times;
  }

  public void setTimes(List<OffsetDateTime> times) {
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

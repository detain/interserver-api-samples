package io.swagger.model;

import io.swagger.model.VpsTrafficDataSectionResponse;
import io.swagger.model.VpsTrafficHistoryResponse;
import io.swagger.model.VpsTrafficTotalsResposne;
import io.swagger.model.VpsTrafficUsageResponse;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * VPS Traffic Information
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "VPS Traffic Information")

public class VpsTrafficResponse   {

  private @Valid String name = null;

  private @Valid String target = null;

  private @Valid Integer interval = null;

  private @Valid VpsTrafficHistoryResponse history = null;

  private @Valid Date last = null;

  private @Valid List<Date> times = new ArrayList<Date>();

  private @Valid VpsTrafficTotalsResposne totals = null;

  private @Valid VpsTrafficUsageResponse usage = null;

  private @Valid List<VpsTrafficDataSectionResponse> data = new ArrayList<VpsTrafficDataSectionResponse>();

  /**
   **/
  public VpsTrafficResponse name(String name) {
    this.name = name;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("name")
  @NotNull

  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  /**
   **/
  public VpsTrafficResponse target(String target) {
    this.target = target;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("target")
  @NotNull

  public String getTarget() {
    return target;
  }
  public void setTarget(String target) {
    this.target = target;
  }

  /**
   **/
  public VpsTrafficResponse interval(Integer interval) {
    this.interval = interval;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("interval")
  @NotNull

  public Integer getInterval() {
    return interval;
  }
  public void setInterval(Integer interval) {
    this.interval = interval;
  }

  /**
   **/
  public VpsTrafficResponse history(VpsTrafficHistoryResponse history) {
    this.history = history;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("history")
  @NotNull

  public VpsTrafficHistoryResponse getHistory() {
    return history;
  }
  public void setHistory(VpsTrafficHistoryResponse history) {
    this.history = history;
  }

  /**
   **/
  public VpsTrafficResponse last(Date last) {
    this.last = last;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("last")
  @NotNull

  public Date getLast() {
    return last;
  }
  public void setLast(Date last) {
    this.last = last;
  }

  /**
   **/
  public VpsTrafficResponse times(List<Date> times) {
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

  /**
   **/
  public VpsTrafficResponse totals(VpsTrafficTotalsResposne totals) {
    this.totals = totals;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("totals")
  @NotNull

  public VpsTrafficTotalsResposne getTotals() {
    return totals;
  }
  public void setTotals(VpsTrafficTotalsResposne totals) {
    this.totals = totals;
  }

  /**
   **/
  public VpsTrafficResponse usage(VpsTrafficUsageResponse usage) {
    this.usage = usage;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("usage")
  @NotNull

  public VpsTrafficUsageResponse getUsage() {
    return usage;
  }
  public void setUsage(VpsTrafficUsageResponse usage) {
    this.usage = usage;
  }

  /**
   **/
  public VpsTrafficResponse data(List<VpsTrafficDataSectionResponse> data) {
    this.data = data;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("data")
  @NotNull

  public List<VpsTrafficDataSectionResponse> getData() {
    return data;
  }
  public void setData(List<VpsTrafficDataSectionResponse> data) {
    this.data = data;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsTrafficResponse vpsTrafficResponse = (VpsTrafficResponse) o;
    return Objects.equals(name, vpsTrafficResponse.name) &&
        Objects.equals(target, vpsTrafficResponse.target) &&
        Objects.equals(interval, vpsTrafficResponse.interval) &&
        Objects.equals(history, vpsTrafficResponse.history) &&
        Objects.equals(last, vpsTrafficResponse.last) &&
        Objects.equals(times, vpsTrafficResponse.times) &&
        Objects.equals(totals, vpsTrafficResponse.totals) &&
        Objects.equals(usage, vpsTrafficResponse.usage) &&
        Objects.equals(data, vpsTrafficResponse.data);
  }

  @Override
  public int hashCode() {
    return Objects.hash(name, target, interval, history, last, times, totals, usage, data);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsTrafficResponse {\n");
    
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    target: ").append(toIndentedString(target)).append("\n");
    sb.append("    interval: ").append(toIndentedString(interval)).append("\n");
    sb.append("    history: ").append(toIndentedString(history)).append("\n");
    sb.append("    last: ").append(toIndentedString(last)).append("\n");
    sb.append("    times: ").append(toIndentedString(times)).append("\n");
    sb.append("    totals: ").append(toIndentedString(totals)).append("\n");
    sb.append("    usage: ").append(toIndentedString(usage)).append("\n");
    sb.append("    data: ").append(toIndentedString(data)).append("\n");
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

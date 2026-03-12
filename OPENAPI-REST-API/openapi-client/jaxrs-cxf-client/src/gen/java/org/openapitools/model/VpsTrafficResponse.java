package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Date;
import java.util.List;
import org.openapitools.model.VpsTrafficDataSectionResponse;
import org.openapitools.model.VpsTrafficHistoryResponse;
import org.openapitools.model.VpsTrafficTotalsResposne;
import org.openapitools.model.VpsTrafficUsageResponse;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * VPS Traffic Information
 */
@ApiModel(description="VPS Traffic Information")

public class VpsTrafficResponse  {
  
  @ApiModelProperty(required = true, value = "")

  private String name;

  @ApiModelProperty(required = true, value = "")

  private String target;

  @ApiModelProperty(required = true, value = "")

  private Integer interval;

  @ApiModelProperty(required = true, value = "")

  private VpsTrafficHistoryResponse history;

  @ApiModelProperty(required = true, value = "")

  private Date last;

  @ApiModelProperty(required = true, value = "")

  private List<Date> times = new ArrayList<>();

  @ApiModelProperty(required = true, value = "")

  private VpsTrafficTotalsResposne totals;

  @ApiModelProperty(required = true, value = "")

  private VpsTrafficUsageResponse usage;

  @ApiModelProperty(required = true, value = "")

  private List<VpsTrafficDataSectionResponse> data = new ArrayList<>();
 /**
   * Get name
   * @return name
  **/
  @JsonProperty("name")
  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public VpsTrafficResponse name(String name) {
    this.name = name;
    return this;
  }

 /**
   * Get target
   * @return target
  **/
  @JsonProperty("target")
  public String getTarget() {
    return target;
  }

  public void setTarget(String target) {
    this.target = target;
  }

  public VpsTrafficResponse target(String target) {
    this.target = target;
    return this;
  }

 /**
   * Get interval
   * @return interval
  **/
  @JsonProperty("interval")
  public Integer getInterval() {
    return interval;
  }

  public void setInterval(Integer interval) {
    this.interval = interval;
  }

  public VpsTrafficResponse interval(Integer interval) {
    this.interval = interval;
    return this;
  }

 /**
   * Get history
   * @return history
  **/
  @JsonProperty("history")
  public VpsTrafficHistoryResponse getHistory() {
    return history;
  }

  public void setHistory(VpsTrafficHistoryResponse history) {
    this.history = history;
  }

  public VpsTrafficResponse history(VpsTrafficHistoryResponse history) {
    this.history = history;
    return this;
  }

 /**
   * Get last
   * @return last
  **/
  @JsonProperty("last")
  public Date getLast() {
    return last;
  }

  public void setLast(Date last) {
    this.last = last;
  }

  public VpsTrafficResponse last(Date last) {
    this.last = last;
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

  public VpsTrafficResponse times(List<Date> times) {
    this.times = times;
    return this;
  }

  public VpsTrafficResponse addTimesItem(Date timesItem) {
    this.times.add(timesItem);
    return this;
  }

 /**
   * Get totals
   * @return totals
  **/
  @JsonProperty("totals")
  public VpsTrafficTotalsResposne getTotals() {
    return totals;
  }

  public void setTotals(VpsTrafficTotalsResposne totals) {
    this.totals = totals;
  }

  public VpsTrafficResponse totals(VpsTrafficTotalsResposne totals) {
    this.totals = totals;
    return this;
  }

 /**
   * Get usage
   * @return usage
  **/
  @JsonProperty("usage")
  public VpsTrafficUsageResponse getUsage() {
    return usage;
  }

  public void setUsage(VpsTrafficUsageResponse usage) {
    this.usage = usage;
  }

  public VpsTrafficResponse usage(VpsTrafficUsageResponse usage) {
    this.usage = usage;
    return this;
  }

 /**
   * Get data
   * @return data
  **/
  @JsonProperty("data")
  public List<VpsTrafficDataSectionResponse> getData() {
    return data;
  }

  public void setData(List<VpsTrafficDataSectionResponse> data) {
    this.data = data;
  }

  public VpsTrafficResponse data(List<VpsTrafficDataSectionResponse> data) {
    this.data = data;
    return this;
  }

  public VpsTrafficResponse addDataItem(VpsTrafficDataSectionResponse dataItem) {
    this.data.add(dataItem);
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
    VpsTrafficResponse vpsTrafficResponse = (VpsTrafficResponse) o;
    return Objects.equals(this.name, vpsTrafficResponse.name) &&
        Objects.equals(this.target, vpsTrafficResponse.target) &&
        Objects.equals(this.interval, vpsTrafficResponse.interval) &&
        Objects.equals(this.history, vpsTrafficResponse.history) &&
        Objects.equals(this.last, vpsTrafficResponse.last) &&
        Objects.equals(this.times, vpsTrafficResponse.times) &&
        Objects.equals(this.totals, vpsTrafficResponse.totals) &&
        Objects.equals(this.usage, vpsTrafficResponse.usage) &&
        Objects.equals(this.data, vpsTrafficResponse.data);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}


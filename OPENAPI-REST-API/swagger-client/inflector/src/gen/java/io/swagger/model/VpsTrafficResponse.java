package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.VpsTrafficDataSectionResponse;
import io.swagger.model.VpsTrafficHistoryResponse;
import io.swagger.model.VpsTrafficTotalsResposne;
import io.swagger.model.VpsTrafficUsageResponse;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;


/**
 * VPS Traffic Information
 **/
@Schema(description = "VPS Traffic Information")


public class VpsTrafficResponse   {
  @JsonProperty("name")
  private String name = null;
  @JsonProperty("target")
  private String target = null;
  @JsonProperty("interval")
  private Integer interval = null;
  @JsonProperty("history")
  private VpsTrafficHistoryResponse history = null;
  @JsonProperty("last")
  private Date last = null;
  @JsonProperty("times")
  private List<Date> times = new ArrayList<Date>();
  @JsonProperty("totals")
  private VpsTrafficTotalsResposne totals = null;
  @JsonProperty("usage")
  private VpsTrafficUsageResponse usage = null;
  @JsonProperty("data")
  private List<VpsTrafficDataSectionResponse> data = new ArrayList<VpsTrafficDataSectionResponse>();
  /**
   **/
  public VpsTrafficResponse name(String name) {
    this.name = name;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("name")
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

  
  @Schema(required = true, description = "")
  @JsonProperty("target")
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

  
  @Schema(required = true, description = "")
  @JsonProperty("interval")
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

  
  @Schema(required = true, description = "")
  @JsonProperty("history")
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

  
  @Schema(required = true, description = "")
  @JsonProperty("last")
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

  
  @Schema(required = true, description = "")
  @JsonProperty("times")
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

  
  @Schema(required = true, description = "")
  @JsonProperty("totals")
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

  
  @Schema(required = true, description = "")
  @JsonProperty("usage")
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

  
  @Schema(required = true, description = "")
  @JsonProperty("data")
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

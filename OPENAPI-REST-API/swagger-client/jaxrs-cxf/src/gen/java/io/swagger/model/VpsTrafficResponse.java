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
  * VPS Traffic Information
 **/
@Schema(description="VPS Traffic Information")
public class VpsTrafficResponse   {
  
  @Schema(required = true, description = "")
  private String name = null;
  
  @Schema(required = true, description = "")
  private String target = null;
  
  @Schema(required = true, description = "")
  private Integer interval = null;
  
  @Schema(required = true, description = "")
  private VpsTrafficHistoryResponse history = null;
  
  @Schema(required = true, description = "")
  private Date last = null;
  
  @Schema(required = true, description = "")
  private List<Date> times = new ArrayList<Date>();
  
  @Schema(required = true, description = "")
  private VpsTrafficTotalsResposne totals = null;
  
  @Schema(required = true, description = "")
  private VpsTrafficUsageResponse usage = null;
  
  @Schema(required = true, description = "")
  private List<VpsTrafficDataSectionResponse> data = new ArrayList<VpsTrafficDataSectionResponse>();
 /**
   * Get name
   * @return name
  **/
  @JsonProperty("name")
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

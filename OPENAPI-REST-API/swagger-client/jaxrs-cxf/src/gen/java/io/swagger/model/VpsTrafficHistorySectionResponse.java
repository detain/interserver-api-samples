package io.swagger.model;

import io.swagger.model.VpsTrafficHistorySectionDataResponse;
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
  * VPS Traffic History Hour and Day Sections
 **/
@Schema(description="VPS Traffic History Hour and Day Sections")
public class VpsTrafficHistorySectionResponse   {
  
  @Schema(required = true, description = "")
  private List<VpsTrafficHistorySectionDataResponse> data = new ArrayList<VpsTrafficHistorySectionDataResponse>();
  
  @Schema(required = true, description = "")
  private List<Date> times = new ArrayList<Date>();
 /**
   * Get data
   * @return data
  **/
  @JsonProperty("data")
  @NotNull
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
  @NotNull
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

package org.openapitools.model;

import org.openapitools.model.VpsTrafficTotalsSectionResponse;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * VPS Traffic Totals Section
 */
@ApiModel(description="VPS Traffic Totals Section")

public class VpsTrafficTotalsResposne  {
  
  @ApiModelProperty(required = true, value = "")

  private VpsTrafficTotalsSectionResponse day;

  @ApiModelProperty(required = true, value = "")

  private VpsTrafficTotalsSectionResponse month;

  @ApiModelProperty(required = true, value = "")

  private VpsTrafficTotalsSectionResponse year;

  @ApiModelProperty(required = true, value = "")

  private VpsTrafficTotalsSectionResponse all;
 /**
   * Get day
   * @return day
  **/
  @JsonProperty("day")
  public VpsTrafficTotalsSectionResponse getDay() {
    return day;
  }

  public void setDay(VpsTrafficTotalsSectionResponse day) {
    this.day = day;
  }

  public VpsTrafficTotalsResposne day(VpsTrafficTotalsSectionResponse day) {
    this.day = day;
    return this;
  }

 /**
   * Get month
   * @return month
  **/
  @JsonProperty("month")
  public VpsTrafficTotalsSectionResponse getMonth() {
    return month;
  }

  public void setMonth(VpsTrafficTotalsSectionResponse month) {
    this.month = month;
  }

  public VpsTrafficTotalsResposne month(VpsTrafficTotalsSectionResponse month) {
    this.month = month;
    return this;
  }

 /**
   * Get year
   * @return year
  **/
  @JsonProperty("year")
  public VpsTrafficTotalsSectionResponse getYear() {
    return year;
  }

  public void setYear(VpsTrafficTotalsSectionResponse year) {
    this.year = year;
  }

  public VpsTrafficTotalsResposne year(VpsTrafficTotalsSectionResponse year) {
    this.year = year;
    return this;
  }

 /**
   * Get all
   * @return all
  **/
  @JsonProperty("all")
  public VpsTrafficTotalsSectionResponse getAll() {
    return all;
  }

  public void setAll(VpsTrafficTotalsSectionResponse all) {
    this.all = all;
  }

  public VpsTrafficTotalsResposne all(VpsTrafficTotalsSectionResponse all) {
    this.all = all;
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
    VpsTrafficTotalsResposne vpsTrafficTotalsResposne = (VpsTrafficTotalsResposne) o;
    return Objects.equals(this.day, vpsTrafficTotalsResposne.day) &&
        Objects.equals(this.month, vpsTrafficTotalsResposne.month) &&
        Objects.equals(this.year, vpsTrafficTotalsResposne.year) &&
        Objects.equals(this.all, vpsTrafficTotalsResposne.all);
  }

  @Override
  public int hashCode() {
    return Objects.hash(day, month, year, all);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsTrafficTotalsResposne {\n");
    
    sb.append("    day: ").append(toIndentedString(day)).append("\n");
    sb.append("    month: ").append(toIndentedString(month)).append("\n");
    sb.append("    year: ").append(toIndentedString(year)).append("\n");
    sb.append("    all: ").append(toIndentedString(all)).append("\n");
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


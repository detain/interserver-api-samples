package io.swagger.model;

import io.swagger.model.VpsTrafficTotalsSectionResponse;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * VPS Traffic Totals Section
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "VPS Traffic Totals Section")

public class VpsTrafficTotalsResposne   {

  private @Valid VpsTrafficTotalsSectionResponse day = null;

  private @Valid VpsTrafficTotalsSectionResponse month = null;

  private @Valid VpsTrafficTotalsSectionResponse year = null;

  private @Valid VpsTrafficTotalsSectionResponse all = null;

  /**
   **/
  public VpsTrafficTotalsResposne day(VpsTrafficTotalsSectionResponse day) {
    this.day = day;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("day")
  @NotNull

  public VpsTrafficTotalsSectionResponse getDay() {
    return day;
  }
  public void setDay(VpsTrafficTotalsSectionResponse day) {
    this.day = day;
  }

  /**
   **/
  public VpsTrafficTotalsResposne month(VpsTrafficTotalsSectionResponse month) {
    this.month = month;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("month")
  @NotNull

  public VpsTrafficTotalsSectionResponse getMonth() {
    return month;
  }
  public void setMonth(VpsTrafficTotalsSectionResponse month) {
    this.month = month;
  }

  /**
   **/
  public VpsTrafficTotalsResposne year(VpsTrafficTotalsSectionResponse year) {
    this.year = year;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("year")
  @NotNull

  public VpsTrafficTotalsSectionResponse getYear() {
    return year;
  }
  public void setYear(VpsTrafficTotalsSectionResponse year) {
    this.year = year;
  }

  /**
   **/
  public VpsTrafficTotalsResposne all(VpsTrafficTotalsSectionResponse all) {
    this.all = all;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("all")
  @NotNull

  public VpsTrafficTotalsSectionResponse getAll() {
    return all;
  }
  public void setAll(VpsTrafficTotalsSectionResponse all) {
    this.all = all;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsTrafficTotalsResposne vpsTrafficTotalsResposne = (VpsTrafficTotalsResposne) o;
    return Objects.equals(day, vpsTrafficTotalsResposne.day) &&
        Objects.equals(month, vpsTrafficTotalsResposne.month) &&
        Objects.equals(year, vpsTrafficTotalsResposne.year) &&
        Objects.equals(all, vpsTrafficTotalsResposne.all);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

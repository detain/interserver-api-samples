package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.VpsTrafficTotalsSectionResponse;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.Valid;
import javax.validation.constraints.*;
/**
 * VPS Traffic Totals Section
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "VPS Traffic Totals Section")

public class VpsTrafficTotalsResposne   {
  private VpsTrafficTotalsSectionResponse day = null;
  private VpsTrafficTotalsSectionResponse month = null;
  private VpsTrafficTotalsSectionResponse year = null;
  private VpsTrafficTotalsSectionResponse all = null;

  /**
   **/
  public VpsTrafficTotalsResposne day(VpsTrafficTotalsSectionResponse day) {
    this.day = day;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("day")
  @NotNull
  @Valid
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

  
  
  @Schema(required = true, description = "")
  @JsonProperty("month")
  @NotNull
  @Valid
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

  
  
  @Schema(required = true, description = "")
  @JsonProperty("year")
  @NotNull
  @Valid
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

  
  
  @Schema(required = true, description = "")
  @JsonProperty("all")
  @NotNull
  @Valid
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

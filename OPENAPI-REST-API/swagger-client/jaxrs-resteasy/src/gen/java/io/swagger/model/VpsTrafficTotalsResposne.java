package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.VpsTrafficTotalsSectionResponse;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="VPS Traffic Totals Section")

public class VpsTrafficTotalsResposne   {
  private VpsTrafficTotalsSectionResponse day = null;  private VpsTrafficTotalsSectionResponse month = null;  private VpsTrafficTotalsSectionResponse year = null;  private VpsTrafficTotalsSectionResponse all = null;

  /**
   **/
  
  @Schema(required = true, description = "")
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
  
  @Schema(required = true, description = "")
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
  
  @Schema(required = true, description = "")
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
  
  @Schema(required = true, description = "")
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

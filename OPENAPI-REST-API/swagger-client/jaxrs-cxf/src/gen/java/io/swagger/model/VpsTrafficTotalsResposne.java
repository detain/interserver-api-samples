package io.swagger.model;

import io.swagger.model.VpsTrafficTotalsSectionResponse;
import io.swagger.v3.oas.annotations.media.Schema;
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
  * VPS Traffic Totals Section
 **/
@Schema(description="VPS Traffic Totals Section")
public class VpsTrafficTotalsResposne   {
  
  @Schema(required = true, description = "")
  private VpsTrafficTotalsSectionResponse day = null;
  
  @Schema(required = true, description = "")
  private VpsTrafficTotalsSectionResponse month = null;
  
  @Schema(required = true, description = "")
  private VpsTrafficTotalsSectionResponse year = null;
  
  @Schema(required = true, description = "")
  private VpsTrafficTotalsSectionResponse all = null;
 /**
   * Get day
   * @return day
  **/
  @JsonProperty("day")
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

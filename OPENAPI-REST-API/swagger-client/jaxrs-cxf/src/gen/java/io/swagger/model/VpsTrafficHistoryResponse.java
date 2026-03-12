package io.swagger.model;

import io.swagger.model.VpsTrafficHistorySectionResponse;
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
  * VPS Traffic Data History Section
 **/
@Schema(description="VPS Traffic Data History Section")
public class VpsTrafficHistoryResponse   {
  
  @Schema(required = true, description = "")
  private VpsTrafficHistorySectionResponse hour = null;
  
  @Schema(required = true, description = "")
  private VpsTrafficHistorySectionResponse day = null;
 /**
   * Get hour
   * @return hour
  **/
  @JsonProperty("hour")
  @NotNull
  public VpsTrafficHistorySectionResponse getHour() {
    return hour;
  }

  public void setHour(VpsTrafficHistorySectionResponse hour) {
    this.hour = hour;
  }

  public VpsTrafficHistoryResponse hour(VpsTrafficHistorySectionResponse hour) {
    this.hour = hour;
    return this;
  }

 /**
   * Get day
   * @return day
  **/
  @JsonProperty("day")
  @NotNull
  public VpsTrafficHistorySectionResponse getDay() {
    return day;
  }

  public void setDay(VpsTrafficHistorySectionResponse day) {
    this.day = day;
  }

  public VpsTrafficHistoryResponse day(VpsTrafficHistorySectionResponse day) {
    this.day = day;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsTrafficHistoryResponse {\n");
    
    sb.append("    hour: ").append(toIndentedString(hour)).append("\n");
    sb.append("    day: ").append(toIndentedString(day)).append("\n");
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

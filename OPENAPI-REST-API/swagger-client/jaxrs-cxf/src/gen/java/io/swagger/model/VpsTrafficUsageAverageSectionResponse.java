package io.swagger.model;

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
  * VPS Traffic Usage Average Section Response
 **/
@Schema(description="VPS Traffic Usage Average Section Response")
public class VpsTrafficUsageAverageSectionResponse   {
  
  @Schema(required = true, description = "")
  private Integer total = null;
  
  @Schema(required = true, description = "")
  private Integer count = null;
  
  @Schema(required = true, description = "")
  private Integer value = null;
 /**
   * Get total
   * @return total
  **/
  @JsonProperty("total")
  @NotNull
  public Integer getTotal() {
    return total;
  }

  public void setTotal(Integer total) {
    this.total = total;
  }

  public VpsTrafficUsageAverageSectionResponse total(Integer total) {
    this.total = total;
    return this;
  }

 /**
   * Get count
   * @return count
  **/
  @JsonProperty("count")
  @NotNull
  public Integer getCount() {
    return count;
  }

  public void setCount(Integer count) {
    this.count = count;
  }

  public VpsTrafficUsageAverageSectionResponse count(Integer count) {
    this.count = count;
    return this;
  }

 /**
   * Get value
   * @return value
  **/
  @JsonProperty("value")
  @NotNull
  public Integer getValue() {
    return value;
  }

  public void setValue(Integer value) {
    this.value = value;
  }

  public VpsTrafficUsageAverageSectionResponse value(Integer value) {
    this.value = value;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsTrafficUsageAverageSectionResponse {\n");
    
    sb.append("    total: ").append(toIndentedString(total)).append("\n");
    sb.append("    count: ").append(toIndentedString(count)).append("\n");
    sb.append("    value: ").append(toIndentedString(value)).append("\n");
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

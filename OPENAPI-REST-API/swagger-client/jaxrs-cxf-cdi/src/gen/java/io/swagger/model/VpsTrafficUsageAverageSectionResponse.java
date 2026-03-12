package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
/**
 * VPS Traffic Usage Average Section Response
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "VPS Traffic Usage Average Section Response")

public class VpsTrafficUsageAverageSectionResponse   {
  private Integer total = null;
  private Integer count = null;
  private Integer value = null;

  /**
   **/
  public VpsTrafficUsageAverageSectionResponse total(Integer total) {
    this.total = total;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("total")
  @NotNull
  public Integer getTotal() {
    return total;
  }
  public void setTotal(Integer total) {
    this.total = total;
  }

  /**
   **/
  public VpsTrafficUsageAverageSectionResponse count(Integer count) {
    this.count = count;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("count")
  @NotNull
  public Integer getCount() {
    return count;
  }
  public void setCount(Integer count) {
    this.count = count;
  }

  /**
   **/
  public VpsTrafficUsageAverageSectionResponse value(Integer value) {
    this.value = value;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("value")
  @NotNull
  public Integer getValue() {
    return value;
  }
  public void setValue(Integer value) {
    this.value = value;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsTrafficUsageAverageSectionResponse vpsTrafficUsageAverageSectionResponse = (VpsTrafficUsageAverageSectionResponse) o;
    return Objects.equals(total, vpsTrafficUsageAverageSectionResponse.total) &&
        Objects.equals(count, vpsTrafficUsageAverageSectionResponse.count) &&
        Objects.equals(value, vpsTrafficUsageAverageSectionResponse.value);
  }

  @Override
  public int hashCode() {
    return Objects.hash(total, count, value);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

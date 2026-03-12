package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * VPS Traffic Usage Average Section Response
 */
@ApiModel(description="VPS Traffic Usage Average Section Response")

public class VpsTrafficUsageAverageSectionResponse  {
  
  @ApiModelProperty(required = true, value = "")

  private Integer total;

  @ApiModelProperty(required = true, value = "")

  private Integer count;

  @ApiModelProperty(required = true, value = "")

  private Integer value;
 /**
   * Get total
   * @return total
  **/
  @JsonProperty("total")
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsTrafficUsageAverageSectionResponse vpsTrafficUsageAverageSectionResponse = (VpsTrafficUsageAverageSectionResponse) o;
    return Objects.equals(this.total, vpsTrafficUsageAverageSectionResponse.total) &&
        Objects.equals(this.count, vpsTrafficUsageAverageSectionResponse.count) &&
        Objects.equals(this.value, vpsTrafficUsageAverageSectionResponse.value);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}


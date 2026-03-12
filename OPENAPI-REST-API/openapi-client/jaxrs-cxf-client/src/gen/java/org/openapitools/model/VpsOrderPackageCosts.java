package org.openapitools.model;

import java.math.BigDecimal;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Package Costs
 */
@ApiModel(description="Package Costs")

public class VpsOrderPackageCosts  {
  
  @ApiModelProperty(example = "6", value = "")

  private BigDecimal _57;
 /**
   * Get _57
   * @return _57
  **/
  @JsonProperty("57")
  public BigDecimal get57() {
    return _57;
  }

  public void set57(BigDecimal _57) {
    this._57 = _57;
  }

  public VpsOrderPackageCosts _57(BigDecimal _57) {
    this._57 = _57;
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
    VpsOrderPackageCosts vpsOrderPackageCosts = (VpsOrderPackageCosts) o;
    return Objects.equals(this._57, vpsOrderPackageCosts._57);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_57);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsOrderPackageCosts {\n");
    
    sb.append("    _57: ").append(toIndentedString(_57)).append("\n");
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


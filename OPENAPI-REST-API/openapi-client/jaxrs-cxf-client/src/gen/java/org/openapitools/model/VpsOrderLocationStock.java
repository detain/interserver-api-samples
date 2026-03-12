package org.openapitools.model;

import org.openapitools.model.VpsOrderLocationStock1;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Location Stock
 */
@ApiModel(description="Location Stock")

public class VpsOrderLocationStock  {
  
  @ApiModelProperty(value = "")

  private VpsOrderLocationStock1 _1;
 /**
   * Get _1
   * @return _1
  **/
  @JsonProperty("1")
  public VpsOrderLocationStock1 get1() {
    return _1;
  }

  public void set1(VpsOrderLocationStock1 _1) {
    this._1 = _1;
  }

  public VpsOrderLocationStock _1(VpsOrderLocationStock1 _1) {
    this._1 = _1;
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
    VpsOrderLocationStock vpsOrderLocationStock = (VpsOrderLocationStock) o;
    return Objects.equals(this._1, vpsOrderLocationStock._1);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_1);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsOrderLocationStock {\n");
    
    sb.append("    _1: ").append(toIndentedString(_1)).append("\n");
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


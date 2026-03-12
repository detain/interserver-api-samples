package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Location Names
 */
@ApiModel(description="Location Names")

public class VpsOrderLocationNames  {
  
  @ApiModelProperty(example = "Equinix NY4", value = "")

  private String _3;
 /**
   * Get _3
   * @return _3
  **/
  @JsonProperty("3")
  public String get3() {
    return _3;
  }

  public void set3(String _3) {
    this._3 = _3;
  }

  public VpsOrderLocationNames _3(String _3) {
    this._3 = _3;
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
    VpsOrderLocationNames vpsOrderLocationNames = (VpsOrderLocationNames) o;
    return Objects.equals(this._3, vpsOrderLocationNames._3);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_3);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsOrderLocationNames {\n");
    
    sb.append("    _3: ").append(toIndentedString(_3)).append("\n");
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


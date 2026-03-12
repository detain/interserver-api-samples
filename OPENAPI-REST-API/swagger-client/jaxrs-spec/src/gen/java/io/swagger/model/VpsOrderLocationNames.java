package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Location Names
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Location Names")

public class VpsOrderLocationNames   {

  private @Valid String _3 = null;

  /**
   **/
  public VpsOrderLocationNames _3(String _3) {
    this._3 = _3;
    return this;
  }

  
  @ApiModelProperty(example = "Equinix NY4", value = "")
  @JsonProperty("3")
  @NotNull

  public String get3() {
    return _3;
  }
  public void set3(String _3) {
    this._3 = _3;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsOrderLocationNames vpsOrderLocationNames = (VpsOrderLocationNames) o;
    return Objects.equals(_3, vpsOrderLocationNames._3);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

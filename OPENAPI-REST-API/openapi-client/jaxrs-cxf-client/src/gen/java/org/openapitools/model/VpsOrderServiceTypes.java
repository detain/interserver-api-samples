package org.openapitools.model;

import org.openapitools.model.VpsOrderServiceTypes32;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Service Types
 */
@ApiModel(description="Service Types")

public class VpsOrderServiceTypes  {
  
  @ApiModelProperty(value = "")

  private VpsOrderServiceTypes32 _32;
 /**
   * Get _32
   * @return _32
  **/
  @JsonProperty("32")
  public VpsOrderServiceTypes32 get32() {
    return _32;
  }

  public void set32(VpsOrderServiceTypes32 _32) {
    this._32 = _32;
  }

  public VpsOrderServiceTypes _32(VpsOrderServiceTypes32 _32) {
    this._32 = _32;
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
    VpsOrderServiceTypes vpsOrderServiceTypes = (VpsOrderServiceTypes) o;
    return Objects.equals(this._32, vpsOrderServiceTypes._32);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_32);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsOrderServiceTypes {\n");
    
    sb.append("    _32: ").append(toIndentedString(_32)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}


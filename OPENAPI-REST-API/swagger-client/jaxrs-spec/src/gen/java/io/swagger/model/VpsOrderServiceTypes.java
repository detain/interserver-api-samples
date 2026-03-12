package io.swagger.model;

import io.swagger.model.VpsOrderServiceTypes32;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Service Types
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Service Types")

public class VpsOrderServiceTypes   {

  private @Valid VpsOrderServiceTypes32 _32 = null;

  /**
   **/
  public VpsOrderServiceTypes _32(VpsOrderServiceTypes32 _32) {
    this._32 = _32;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("32")
  @NotNull

  public VpsOrderServiceTypes32 get32() {
    return _32;
  }
  public void set32(VpsOrderServiceTypes32 _32) {
    this._32 = _32;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsOrderServiceTypes vpsOrderServiceTypes = (VpsOrderServiceTypes) o;
    return Objects.equals(_32, vpsOrderServiceTypes._32);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

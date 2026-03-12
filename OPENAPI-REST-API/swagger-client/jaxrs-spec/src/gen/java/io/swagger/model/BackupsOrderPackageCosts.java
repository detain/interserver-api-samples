package io.swagger.model;

import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class BackupsOrderPackageCosts   {

  private @Valid Integer _11006 = null;

  /**
   * The cost associated with package 11006.
   **/
  public BackupsOrderPackageCosts _11006(Integer _11006) {
    this._11006 = _11006;
    return this;
  }

  
  @ApiModelProperty(example = "84", required = true, value = "The cost associated with package 11006.")
  @JsonProperty("11006")
  @NotNull

  public Integer get11006() {
    return _11006;
  }
  public void set11006(Integer _11006) {
    this._11006 = _11006;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    BackupsOrderPackageCosts backupsOrderPackageCosts = (BackupsOrderPackageCosts) o;
    return Objects.equals(_11006, backupsOrderPackageCosts._11006);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_11006);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BackupsOrderPackageCosts {\n");
    
    sb.append("    _11006: ").append(toIndentedString(_11006)).append("\n");
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

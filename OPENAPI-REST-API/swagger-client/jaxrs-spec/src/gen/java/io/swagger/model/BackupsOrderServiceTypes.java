package io.swagger.model;

import io.swagger.model.BackupsOrderServiceTypes;
import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class BackupsOrderServiceTypes   {

  private @Valid BackupsOrderServiceTypes _11006 = null;

  /**
   **/
  public BackupsOrderServiceTypes _11006(BackupsOrderServiceTypes _11006) {
    this._11006 = _11006;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("11006")
  @NotNull

  public BackupsOrderServiceTypes get11006() {
    return _11006;
  }
  public void set11006(BackupsOrderServiceTypes _11006) {
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
    BackupsOrderServiceTypes backupsOrderServiceTypes = (BackupsOrderServiceTypes) o;
    return Objects.equals(_11006, backupsOrderServiceTypes._11006);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_11006);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BackupsOrderServiceTypes {\n");
    
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

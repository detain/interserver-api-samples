package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class BackupsOrderPackageCosts  {
  
 /**
  * The cost associated with package 11006.
  */
  @ApiModelProperty(example = "84", required = true, value = "The cost associated with package 11006.")

  private Integer _11006;
 /**
   * The cost associated with package 11006.
   * @return _11006
  **/
  @JsonProperty("11006")
  public Integer get11006() {
    return _11006;
  }

  public void set11006(Integer _11006) {
    this._11006 = _11006;
  }

  public BackupsOrderPackageCosts _11006(Integer _11006) {
    this._11006 = _11006;
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
    BackupsOrderPackageCosts backupsOrderPackageCosts = (BackupsOrderPackageCosts) o;
    return Objects.equals(this._11006, backupsOrderPackageCosts._11006);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}


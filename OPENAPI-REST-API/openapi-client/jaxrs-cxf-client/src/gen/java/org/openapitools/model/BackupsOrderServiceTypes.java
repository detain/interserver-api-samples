package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class BackupsOrderServiceTypes  {
  
  @ApiModelProperty(value = "")

  private BackupsOrderServiceTypes _11006;
 /**
   * Get _11006
   * @return _11006
  **/
  @JsonProperty("11006")
  public BackupsOrderServiceTypes get11006() {
    return _11006;
  }

  public void set11006(BackupsOrderServiceTypes _11006) {
    this._11006 = _11006;
  }

  public BackupsOrderServiceTypes _11006(BackupsOrderServiceTypes _11006) {
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
    BackupsOrderServiceTypes backupsOrderServiceTypes = (BackupsOrderServiceTypes) o;
    return Objects.equals(this._11006, backupsOrderServiceTypes._11006);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}


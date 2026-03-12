package io.swagger.model;

import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class QuickserverOrderVersionCentosstream8   {

  private @Valid String centosstream8 = null;

  /**
   * Version details of CentOS Stream 8.
   **/
  public QuickserverOrderVersionCentosstream8 centosstream8(String centosstream8) {
    this.centosstream8 = centosstream8;
    return this;
  }

  
  @ApiModelProperty(example = "8 Stream (64 bits)", value = "Version details of CentOS Stream 8.")
  @JsonProperty("centosstream-8")
  @NotNull

  public String getCentosstream8() {
    return centosstream8;
  }
  public void setCentosstream8(String centosstream8) {
    this.centosstream8 = centosstream8;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    QuickserverOrderVersionCentosstream8 quickserverOrderVersionCentosstream8 = (QuickserverOrderVersionCentosstream8) o;
    return Objects.equals(centosstream8, quickserverOrderVersionCentosstream8.centosstream8);
  }

  @Override
  public int hashCode() {
    return Objects.hash(centosstream8);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class QuickserverOrderVersionCentosstream8 {\n");
    
    sb.append("    centosstream8: ").append(toIndentedString(centosstream8)).append("\n");
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

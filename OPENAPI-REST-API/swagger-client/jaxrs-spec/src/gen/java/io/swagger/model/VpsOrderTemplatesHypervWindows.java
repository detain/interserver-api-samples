package io.swagger.model;

import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class VpsOrderTemplatesHypervWindows   {

  private @Valid String windows2019Standard = null;

  private @Valid String windows2022 = null;

  /**
   **/
  public VpsOrderTemplatesHypervWindows windows2019Standard(String windows2019Standard) {
    this.windows2019Standard = windows2019Standard;
    return this;
  }

  
  @ApiModelProperty(example = "2019 Standard", value = "")
  @JsonProperty("Windows2019Standard")
  @NotNull

  public String getWindows2019Standard() {
    return windows2019Standard;
  }
  public void setWindows2019Standard(String windows2019Standard) {
    this.windows2019Standard = windows2019Standard;
  }

  /**
   **/
  public VpsOrderTemplatesHypervWindows windows2022(String windows2022) {
    this.windows2022 = windows2022;
    return this;
  }

  
  @ApiModelProperty(example = "2022", value = "")
  @JsonProperty("Windows2022")
  @NotNull

  public String getWindows2022() {
    return windows2022;
  }
  public void setWindows2022(String windows2022) {
    this.windows2022 = windows2022;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsOrderTemplatesHypervWindows vpsOrderTemplatesHypervWindows = (VpsOrderTemplatesHypervWindows) o;
    return Objects.equals(windows2019Standard, vpsOrderTemplatesHypervWindows.windows2019Standard) &&
        Objects.equals(windows2022, vpsOrderTemplatesHypervWindows.windows2022);
  }

  @Override
  public int hashCode() {
    return Objects.hash(windows2019Standard, windows2022);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsOrderTemplatesHypervWindows {\n");
    
    sb.append("    windows2019Standard: ").append(toIndentedString(windows2019Standard)).append("\n");
    sb.append("    windows2022: ").append(toIndentedString(windows2022)).append("\n");
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

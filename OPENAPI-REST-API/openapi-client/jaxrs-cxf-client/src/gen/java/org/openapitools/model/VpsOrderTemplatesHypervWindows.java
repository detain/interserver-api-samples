package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class VpsOrderTemplatesHypervWindows  {
  
  @ApiModelProperty(example = "2019 Standard", value = "")

  private String windows2019Standard;

  @ApiModelProperty(example = "2022", value = "")

  private String windows2022;
 /**
   * Get windows2019Standard
   * @return windows2019Standard
  **/
  @JsonProperty("Windows2019Standard")
  public String getWindows2019Standard() {
    return windows2019Standard;
  }

  public void setWindows2019Standard(String windows2019Standard) {
    this.windows2019Standard = windows2019Standard;
  }

  public VpsOrderTemplatesHypervWindows windows2019Standard(String windows2019Standard) {
    this.windows2019Standard = windows2019Standard;
    return this;
  }

 /**
   * Get windows2022
   * @return windows2022
  **/
  @JsonProperty("Windows2022")
  public String getWindows2022() {
    return windows2022;
  }

  public void setWindows2022(String windows2022) {
    this.windows2022 = windows2022;
  }

  public VpsOrderTemplatesHypervWindows windows2022(String windows2022) {
    this.windows2022 = windows2022;
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
    VpsOrderTemplatesHypervWindows vpsOrderTemplatesHypervWindows = (VpsOrderTemplatesHypervWindows) o;
    return Objects.equals(this.windows2019Standard, vpsOrderTemplatesHypervWindows.windows2019Standard) &&
        Objects.equals(this.windows2022, vpsOrderTemplatesHypervWindows.windows2022);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}


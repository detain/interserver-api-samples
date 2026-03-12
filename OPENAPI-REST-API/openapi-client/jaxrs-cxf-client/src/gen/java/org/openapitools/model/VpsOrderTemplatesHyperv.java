package org.openapitools.model;

import org.openapitools.model.VpsOrderTemplatesHypervWindows;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class VpsOrderTemplatesHyperv  {
  
  @ApiModelProperty(value = "")

  private VpsOrderTemplatesHypervWindows windows;
 /**
   * Get windows
   * @return windows
  **/
  @JsonProperty("windows")
  public VpsOrderTemplatesHypervWindows getWindows() {
    return windows;
  }

  public void setWindows(VpsOrderTemplatesHypervWindows windows) {
    this.windows = windows;
  }

  public VpsOrderTemplatesHyperv windows(VpsOrderTemplatesHypervWindows windows) {
    this.windows = windows;
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
    VpsOrderTemplatesHyperv vpsOrderTemplatesHyperv = (VpsOrderTemplatesHyperv) o;
    return Objects.equals(this.windows, vpsOrderTemplatesHyperv.windows);
  }

  @Override
  public int hashCode() {
    return Objects.hash(windows);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsOrderTemplatesHyperv {\n");
    
    sb.append("    windows: ").append(toIndentedString(windows)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}


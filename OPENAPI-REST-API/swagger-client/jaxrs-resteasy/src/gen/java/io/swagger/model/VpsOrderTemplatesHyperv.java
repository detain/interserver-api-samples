package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.VpsOrderTemplatesHypervWindows;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;



public class VpsOrderTemplatesHyperv   {
  private VpsOrderTemplatesHypervWindows windows = null;

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("windows")
  @NotNull
  public VpsOrderTemplatesHypervWindows getWindows() {
    return windows;
  }
  public void setWindows(VpsOrderTemplatesHypervWindows windows) {
    this.windows = windows;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsOrderTemplatesHyperv vpsOrderTemplatesHyperv = (VpsOrderTemplatesHyperv) o;
    return Objects.equals(windows, vpsOrderTemplatesHyperv.windows);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

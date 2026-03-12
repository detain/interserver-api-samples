package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;



public class VpsOrderTemplatesHypervWindows   {
  private String windows2019Standard = null;
  private String windows2022 = null;

  /**
   **/
  
  @Schema(example = "2019 Standard", description = "")
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
  
  @Schema(example = "2022", description = "")
  @JsonProperty("Windows2022")
  @NotNull
  public String getWindows2022() {
    return windows2022;
  }
  public void setWindows2022(String windows2022) {
    this.windows2022 = windows2022;
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

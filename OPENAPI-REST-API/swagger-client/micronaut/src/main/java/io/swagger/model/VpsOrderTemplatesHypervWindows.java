package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * VpsOrderTemplatesHypervWindows
 */
@Validated
@Introspected

public class VpsOrderTemplatesHypervWindows   {
  @JsonProperty("Windows2019Standard")
  private String windows2019Standard = null;

  @JsonProperty("Windows2022")
  private String windows2022 = null;

  public VpsOrderTemplatesHypervWindows windows2019Standard(String windows2019Standard) {
    this.windows2019Standard = windows2019Standard;
    return this;
  }

  /**
   * Get windows2019Standard
   * @return windows2019Standard
  **/
  @Schema(example = "2019 Standard", description = "")
  @NotNull

  public String getWindows2019Standard() {
    return windows2019Standard;
  }

  public void setWindows2019Standard(String windows2019Standard) {
    this.windows2019Standard = windows2019Standard;
  }

  public VpsOrderTemplatesHypervWindows windows2022(String windows2022) {
    this.windows2022 = windows2022;
    return this;
  }

  /**
   * Get windows2022
   * @return windows2022
  **/
  @Schema(example = "2022", description = "")
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

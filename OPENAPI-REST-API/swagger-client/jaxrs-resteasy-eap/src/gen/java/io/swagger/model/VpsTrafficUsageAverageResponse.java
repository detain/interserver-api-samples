package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.VpsTrafficUsageAverageSectionResponse;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="VPS Traffic Usage Average Section")

public class VpsTrafficUsageAverageResponse   {
  private VpsTrafficUsageAverageSectionResponse in = null;
  private VpsTrafficUsageAverageSectionResponse out = null;

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("in")
  @NotNull
  public VpsTrafficUsageAverageSectionResponse getIn() {
    return in;
  }
  public void setIn(VpsTrafficUsageAverageSectionResponse in) {
    this.in = in;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("out")
  @NotNull
  public VpsTrafficUsageAverageSectionResponse getOut() {
    return out;
  }
  public void setOut(VpsTrafficUsageAverageSectionResponse out) {
    this.out = out;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsTrafficUsageAverageResponse vpsTrafficUsageAverageResponse = (VpsTrafficUsageAverageResponse) o;
    return Objects.equals(in, vpsTrafficUsageAverageResponse.in) &&
        Objects.equals(out, vpsTrafficUsageAverageResponse.out);
  }

  @Override
  public int hashCode() {
    return Objects.hash(in, out);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsTrafficUsageAverageResponse {\n");
    
    sb.append("    in: ").append(toIndentedString(in)).append("\n");
    sb.append("    out: ").append(toIndentedString(out)).append("\n");
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

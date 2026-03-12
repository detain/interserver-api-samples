package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.VpsTrafficUsageAverageSectionResponse;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.Valid;
import javax.validation.constraints.*;
/**
 * VPS Traffic Usage Average Section
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "VPS Traffic Usage Average Section")

public class VpsTrafficUsageAverageResponse   {
  private VpsTrafficUsageAverageSectionResponse in = null;
  private VpsTrafficUsageAverageSectionResponse out = null;

  /**
   **/
  public VpsTrafficUsageAverageResponse in(VpsTrafficUsageAverageSectionResponse in) {
    this.in = in;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("in")
  @NotNull
  @Valid
  public VpsTrafficUsageAverageSectionResponse getIn() {
    return in;
  }
  public void setIn(VpsTrafficUsageAverageSectionResponse in) {
    this.in = in;
  }

  /**
   **/
  public VpsTrafficUsageAverageResponse out(VpsTrafficUsageAverageSectionResponse out) {
    this.out = out;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("out")
  @NotNull
  @Valid
  public VpsTrafficUsageAverageSectionResponse getOut() {
    return out;
  }
  public void setOut(VpsTrafficUsageAverageSectionResponse out) {
    this.out = out;
  }


  @Override
  public boolean equals(java.lang.Object o) {
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

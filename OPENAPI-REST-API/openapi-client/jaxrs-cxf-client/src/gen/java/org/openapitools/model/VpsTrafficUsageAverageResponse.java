package org.openapitools.model;

import org.openapitools.model.VpsTrafficUsageAverageSectionResponse;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * VPS Traffic Usage Average Section
 */
@ApiModel(description="VPS Traffic Usage Average Section")

public class VpsTrafficUsageAverageResponse  {
  
  @ApiModelProperty(required = true, value = "")

  private VpsTrafficUsageAverageSectionResponse in;

  @ApiModelProperty(required = true, value = "")

  private VpsTrafficUsageAverageSectionResponse out;
 /**
   * Get in
   * @return in
  **/
  @JsonProperty("in")
  public VpsTrafficUsageAverageSectionResponse getIn() {
    return in;
  }

  public void setIn(VpsTrafficUsageAverageSectionResponse in) {
    this.in = in;
  }

  public VpsTrafficUsageAverageResponse in(VpsTrafficUsageAverageSectionResponse in) {
    this.in = in;
    return this;
  }

 /**
   * Get out
   * @return out
  **/
  @JsonProperty("out")
  public VpsTrafficUsageAverageSectionResponse getOut() {
    return out;
  }

  public void setOut(VpsTrafficUsageAverageSectionResponse out) {
    this.out = out;
  }

  public VpsTrafficUsageAverageResponse out(VpsTrafficUsageAverageSectionResponse out) {
    this.out = out;
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
    VpsTrafficUsageAverageResponse vpsTrafficUsageAverageResponse = (VpsTrafficUsageAverageResponse) o;
    return Objects.equals(this.in, vpsTrafficUsageAverageResponse.in) &&
        Objects.equals(this.out, vpsTrafficUsageAverageResponse.out);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}


package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * VPS Traffic Totals Secttions Data
 */
@ApiModel(description="VPS Traffic Totals Secttions Data")

public class VpsTrafficTotalsSectionResponse  {
  
  @ApiModelProperty(required = true, value = "")

  private Long in;

  @ApiModelProperty(required = true, value = "")

  private Long out;
 /**
   * Get in
   * @return in
  **/
  @JsonProperty("in")
  public Long getIn() {
    return in;
  }

  public void setIn(Long in) {
    this.in = in;
  }

  public VpsTrafficTotalsSectionResponse in(Long in) {
    this.in = in;
    return this;
  }

 /**
   * Get out
   * @return out
  **/
  @JsonProperty("out")
  public Long getOut() {
    return out;
  }

  public void setOut(Long out) {
    this.out = out;
  }

  public VpsTrafficTotalsSectionResponse out(Long out) {
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
    VpsTrafficTotalsSectionResponse vpsTrafficTotalsSectionResponse = (VpsTrafficTotalsSectionResponse) o;
    return Objects.equals(this.in, vpsTrafficTotalsSectionResponse.in) &&
        Objects.equals(this.out, vpsTrafficTotalsSectionResponse.out);
  }

  @Override
  public int hashCode() {
    return Objects.hash(in, out);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsTrafficTotalsSectionResponse {\n");
    
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
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}


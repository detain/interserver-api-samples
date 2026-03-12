package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * VPS Traffic Totals Secttions Data
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "VPS Traffic Totals Secttions Data")

public class VpsTrafficTotalsSectionResponse   {

  private @Valid Long in = null;

  private @Valid Long out = null;

  /**
   **/
  public VpsTrafficTotalsSectionResponse in(Long in) {
    this.in = in;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("in")
  @NotNull

  public Long getIn() {
    return in;
  }
  public void setIn(Long in) {
    this.in = in;
  }

  /**
   **/
  public VpsTrafficTotalsSectionResponse out(Long out) {
    this.out = out;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("out")
  @NotNull

  public Long getOut() {
    return out;
  }
  public void setOut(Long out) {
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
    VpsTrafficTotalsSectionResponse vpsTrafficTotalsSectionResponse = (VpsTrafficTotalsSectionResponse) o;
    return Objects.equals(in, vpsTrafficTotalsSectionResponse.in) &&
        Objects.equals(out, vpsTrafficTotalsSectionResponse.out);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

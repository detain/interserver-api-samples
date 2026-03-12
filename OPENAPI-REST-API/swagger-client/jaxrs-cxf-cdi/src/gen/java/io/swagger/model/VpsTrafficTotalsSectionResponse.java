package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
/**
 * VPS Traffic Totals Secttions Data
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "VPS Traffic Totals Secttions Data")

public class VpsTrafficTotalsSectionResponse   {
  private Long in = null;
  private Long out = null;

  /**
   **/
  public VpsTrafficTotalsSectionResponse in(Long in) {
    this.in = in;
    return this;
  }

  
  
  @Schema(required = true, description = "")
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

  
  
  @Schema(required = true, description = "")
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

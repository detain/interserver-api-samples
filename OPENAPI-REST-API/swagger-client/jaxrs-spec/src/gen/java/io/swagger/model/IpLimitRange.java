package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * The lower and upper bounds of an ip range.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "The lower and upper bounds of an ip range.")

public class IpLimitRange   {

  private @Valid String start = null;

  private @Valid String end = null;

  /**
   * The begining (or first) IP address in the range.
   **/
  public IpLimitRange start(String start) {
    this.start = start;
    return this;
  }

  
  @ApiModelProperty(example = "1.2.3.0", required = true, value = "The begining (or first) IP address in the range.")
  @JsonProperty("start")
  @NotNull

  public String getStart() {
    return start;
  }
  public void setStart(String start) {
    this.start = start;
  }

  /**
   * The ending (or last) IP address in the range.
   **/
  public IpLimitRange end(String end) {
    this.end = end;
    return this;
  }

  
  @ApiModelProperty(example = "1.2.3.255", required = true, value = "The ending (or last) IP address in the range.")
  @JsonProperty("end")
  @NotNull

  public String getEnd() {
    return end;
  }
  public void setEnd(String end) {
    this.end = end;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    IpLimitRange ipLimitRange = (IpLimitRange) o;
    return Objects.equals(start, ipLimitRange.start) &&
        Objects.equals(end, ipLimitRange.end);
  }

  @Override
  public int hashCode() {
    return Objects.hash(start, end);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class IpLimitRange {\n");
    
    sb.append("    start: ").append(toIndentedString(start)).append("\n");
    sb.append("    end: ").append(toIndentedString(end)).append("\n");
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

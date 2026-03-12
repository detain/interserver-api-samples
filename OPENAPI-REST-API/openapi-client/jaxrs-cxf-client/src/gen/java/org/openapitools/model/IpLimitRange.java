package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * The lower and upper bounds of an ip range.
 */
@ApiModel(description="The lower and upper bounds of an ip range.")

public class IpLimitRange  {
  
 /**
  * The begining (or first) IP address in the range.
  */
  @ApiModelProperty(example = "1.2.3.0", required = true, value = "The begining (or first) IP address in the range.")

  private String start;

 /**
  * The ending (or last) IP address in the range.
  */
  @ApiModelProperty(example = "1.2.3.255", required = true, value = "The ending (or last) IP address in the range.")

  private String end;
 /**
   * The begining (or first) IP address in the range.
   * @return start
  **/
  @JsonProperty("start")
  public String getStart() {
    return start;
  }

  public void setStart(String start) {
    this.start = start;
  }

  public IpLimitRange start(String start) {
    this.start = start;
    return this;
  }

 /**
   * The ending (or last) IP address in the range.
   * @return end
  **/
  @JsonProperty("end")
  public String getEnd() {
    return end;
  }

  public void setEnd(String end) {
    this.end = end;
  }

  public IpLimitRange end(String end) {
    this.end = end;
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
    IpLimitRange ipLimitRange = (IpLimitRange) o;
    return Objects.equals(this.start, ipLimitRange.start) &&
        Objects.equals(this.end, ipLimitRange.end);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}


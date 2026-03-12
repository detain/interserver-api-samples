package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonCreator;

/**
  * The lower and upper bounds of an ip range.
 **/
@Schema(description="The lower and upper bounds of an ip range.")
public class IpLimitRange   {
  
  @Schema(example = "1.2.3.0", required = true, description = "The begining (or first) IP address in the range.")
 /**
   * The begining (or first) IP address in the range.  
  **/
  private String start = null;
  
  @Schema(example = "1.2.3.255", required = true, description = "The ending (or last) IP address in the range.")
 /**
   * The ending (or last) IP address in the range.  
  **/
  private String end = null;
 /**
   * The begining (or first) IP address in the range.
   * @return start
  **/
  @JsonProperty("start")
  @NotNull
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
  @NotNull
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

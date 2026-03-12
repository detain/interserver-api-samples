package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;

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
  * VPS Traffic Totals Secttions Data
 **/
@Schema(description="VPS Traffic Totals Secttions Data")
public class VpsTrafficTotalsSectionResponse   {
  
  @Schema(required = true, description = "")
  private Long in = null;
  
  @Schema(required = true, description = "")
  private Long out = null;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

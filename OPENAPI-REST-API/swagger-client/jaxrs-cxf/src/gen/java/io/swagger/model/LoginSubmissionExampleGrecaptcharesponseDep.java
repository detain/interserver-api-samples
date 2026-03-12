package io.swagger.model;

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

public class LoginSubmissionExampleGrecaptcharesponseDep   {
  
  @Schema(description = "")
  private Integer w = null;
  
  @Schema(description = "")
  private Integer n = null;
 /**
   * Get w
   * @return w
  **/
  @JsonProperty("w")
  @NotNull
  public Integer getW() {
    return w;
  }

  public void setW(Integer w) {
    this.w = w;
  }

  public LoginSubmissionExampleGrecaptcharesponseDep w(Integer w) {
    this.w = w;
    return this;
  }

 /**
   * Get n
   * @return n
  **/
  @JsonProperty("n")
  @NotNull
  public Integer getN() {
    return n;
  }

  public void setN(Integer n) {
    this.n = n;
  }

  public LoginSubmissionExampleGrecaptcharesponseDep n(Integer n) {
    this.n = n;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class LoginSubmissionExampleGrecaptcharesponseDep {\n");
    
    sb.append("    w: ").append(toIndentedString(w)).append("\n");
    sb.append("    n: ").append(toIndentedString(n)).append("\n");
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

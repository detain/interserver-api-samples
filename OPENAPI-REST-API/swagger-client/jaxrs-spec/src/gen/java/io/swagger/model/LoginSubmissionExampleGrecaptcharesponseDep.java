package io.swagger.model;

import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class LoginSubmissionExampleGrecaptcharesponseDep   {

  private @Valid Integer w = null;

  private @Valid Integer n = null;

  /**
   **/
  public LoginSubmissionExampleGrecaptcharesponseDep w(Integer w) {
    this.w = w;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("w")
  @NotNull

  public Integer getW() {
    return w;
  }
  public void setW(Integer w) {
    this.w = w;
  }

  /**
   **/
  public LoginSubmissionExampleGrecaptcharesponseDep n(Integer n) {
    this.n = n;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("n")
  @NotNull

  public Integer getN() {
    return n;
  }
  public void setN(Integer n) {
    this.n = n;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    LoginSubmissionExampleGrecaptcharesponseDep loginSubmissionExampleGrecaptcharesponseDep = (LoginSubmissionExampleGrecaptcharesponseDep) o;
    return Objects.equals(w, loginSubmissionExampleGrecaptcharesponseDep.w) &&
        Objects.equals(n, loginSubmissionExampleGrecaptcharesponseDep.n);
  }

  @Override
  public int hashCode() {
    return Objects.hash(w, n);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

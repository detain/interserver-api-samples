package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class LoginSubmissionExampleGRecaptchaResponseDep  {
  
  @ApiModelProperty(value = "")

  private Integer w;

  @ApiModelProperty(value = "")

  private Integer n;
 /**
   * Get w
   * @return w
  **/
  @JsonProperty("w")
  public Integer getW() {
    return w;
  }

  public void setW(Integer w) {
    this.w = w;
  }

  public LoginSubmissionExampleGRecaptchaResponseDep w(Integer w) {
    this.w = w;
    return this;
  }

 /**
   * Get n
   * @return n
  **/
  @JsonProperty("n")
  public Integer getN() {
    return n;
  }

  public void setN(Integer n) {
    this.n = n;
  }

  public LoginSubmissionExampleGRecaptchaResponseDep n(Integer n) {
    this.n = n;
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
    LoginSubmissionExampleGRecaptchaResponseDep loginSubmissionExampleGRecaptchaResponseDep = (LoginSubmissionExampleGRecaptchaResponseDep) o;
    return Objects.equals(this.w, loginSubmissionExampleGRecaptchaResponseDep.w) &&
        Objects.equals(this.n, loginSubmissionExampleGRecaptchaResponseDep.n);
  }

  @Override
  public int hashCode() {
    return Objects.hash(w, n);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class LoginSubmissionExampleGRecaptchaResponseDep {\n");
    
    sb.append("    w: ").append(toIndentedString(w)).append("\n");
    sb.append("    n: ").append(toIndentedString(n)).append("\n");
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


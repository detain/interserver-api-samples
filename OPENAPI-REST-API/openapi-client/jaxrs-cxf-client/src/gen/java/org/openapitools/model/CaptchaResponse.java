package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A base-64 encoded captcha image.
 */
@ApiModel(description="A base-64 encoded captcha image.")

public class CaptchaResponse  {
  
 /**
  * The base64 encoded captcha image.
  */
  @ApiModelProperty(example = "data:image/jpeg;base64,/9j/4AAQ", required = true, value = "The base64 encoded captcha image.")

  private String captcha;
 /**
   * The base64 encoded captcha image.
   * @return captcha
  **/
  @JsonProperty("captcha")
  public String getCaptcha() {
    return captcha;
  }

  public void setCaptcha(String captcha) {
    this.captcha = captcha;
  }

  public CaptchaResponse captcha(String captcha) {
    this.captcha = captcha;
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
    CaptchaResponse captchaResponse = (CaptchaResponse) o;
    return Objects.equals(this.captcha, captchaResponse.captcha);
  }

  @Override
  public int hashCode() {
    return Objects.hash(captcha);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CaptchaResponse {\n");
    
    sb.append("    captcha: ").append(toIndentedString(captcha)).append("\n");
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


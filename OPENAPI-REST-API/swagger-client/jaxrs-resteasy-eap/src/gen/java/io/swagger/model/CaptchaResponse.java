package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="A base-64 encoded captcha image.")

public class CaptchaResponse   {
  private String captcha = null;

  /**
   * The base64 encoded captcha image.
   **/
  
  @Schema(example = "data:image/jpeg;base64,/9j/4AAQ", required = true, description = "The base64 encoded captcha image.")
  @JsonProperty("captcha")
  @NotNull
  public String getCaptcha() {
    return captcha;
  }
  public void setCaptcha(String captcha) {
    this.captcha = captcha;
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
    return Objects.equals(captcha, captchaResponse.captcha);
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

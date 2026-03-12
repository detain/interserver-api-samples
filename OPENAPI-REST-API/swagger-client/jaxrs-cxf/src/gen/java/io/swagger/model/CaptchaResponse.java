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
  * A base-64 encoded captcha image.
 **/
@Schema(description="A base-64 encoded captcha image.")
public class CaptchaResponse   {
  
  @Schema(example = "data:image/jpeg;base64,/9j/4AAQ", required = true, description = "The base64 encoded captcha image.")
 /**
   * The base64 encoded captcha image.  
  **/
  private String captcha = null;
 /**
   * The base64 encoded captcha image.
   * @return captcha
  **/
  @JsonProperty("captcha")
  @NotNull
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

package io.swagger.model;

import io.swagger.model.LoginSubmissionExampleGrecaptcharesponse;
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
  * The data to submit in the login request.
 **/
@Schema(description="The data to submit in the login request.")
public class LoginSubmissionExample   {
  
  @Schema(required = true, description = "")
  private String login = null;
  
  @Schema(required = true, description = "")
  private String passwd = null;
  
  @Schema(description = "")
  private String remember = null;
  
  @Schema(description = "")
  private LoginSubmissionExampleGrecaptcharesponse gRecaptchaResponse = null;
  
  @Schema(description = "Two Factor Authentication Response.")
 /**
   * Two Factor Authentication Response.  
  **/
  private String tfa = null;
 /**
   * Get login
   * @return login
  **/
  @JsonProperty("login")
  @NotNull
  public String getLogin() {
    return login;
  }

  public void setLogin(String login) {
    this.login = login;
  }

  public LoginSubmissionExample login(String login) {
    this.login = login;
    return this;
  }

 /**
   * Get passwd
   * @return passwd
  **/
  @JsonProperty("passwd")
  @NotNull
  public String getPasswd() {
    return passwd;
  }

  public void setPasswd(String passwd) {
    this.passwd = passwd;
  }

  public LoginSubmissionExample passwd(String passwd) {
    this.passwd = passwd;
    return this;
  }

 /**
   * Get remember
   * @return remember
  **/
  @JsonProperty("remember")
  @NotNull
  public String getRemember() {
    return remember;
  }

  public void setRemember(String remember) {
    this.remember = remember;
  }

  public LoginSubmissionExample remember(String remember) {
    this.remember = remember;
    return this;
  }

 /**
   * Get gRecaptchaResponse
   * @return gRecaptchaResponse
  **/
  @JsonProperty("g-recaptcha-response")
  @NotNull
  public LoginSubmissionExampleGrecaptcharesponse getGRecaptchaResponse() {
    return gRecaptchaResponse;
  }

  public void setGRecaptchaResponse(LoginSubmissionExampleGrecaptcharesponse gRecaptchaResponse) {
    this.gRecaptchaResponse = gRecaptchaResponse;
  }

  public LoginSubmissionExample gRecaptchaResponse(LoginSubmissionExampleGrecaptcharesponse gRecaptchaResponse) {
    this.gRecaptchaResponse = gRecaptchaResponse;
    return this;
  }

 /**
   * Two Factor Authentication Response.
   * @return tfa
  **/
  @JsonProperty("tfa")
  @NotNull
  public String getTfa() {
    return tfa;
  }

  public void setTfa(String tfa) {
    this.tfa = tfa;
  }

  public LoginSubmissionExample tfa(String tfa) {
    this.tfa = tfa;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class LoginSubmissionExample {\n");
    
    sb.append("    login: ").append(toIndentedString(login)).append("\n");
    sb.append("    passwd: ").append(toIndentedString(passwd)).append("\n");
    sb.append("    remember: ").append(toIndentedString(remember)).append("\n");
    sb.append("    gRecaptchaResponse: ").append(toIndentedString(gRecaptchaResponse)).append("\n");
    sb.append("    tfa: ").append(toIndentedString(tfa)).append("\n");
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

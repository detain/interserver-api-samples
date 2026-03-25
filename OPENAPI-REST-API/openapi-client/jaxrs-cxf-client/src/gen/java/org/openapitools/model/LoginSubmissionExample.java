package org.openapitools.model;

import org.openapitools.model.LoginSubmissionExampleGRecaptchaResponse;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * The data to submit in the login request.
 */
@ApiModel(description="The data to submit in the login request.")

public class LoginSubmissionExample  {
  
  @ApiModelProperty(required = true, value = "")

  private String login;

  @ApiModelProperty(required = true, value = "")

  private String passwd;

  @ApiModelProperty(value = "")

  private String remember;

  @ApiModelProperty(value = "")

  private LoginSubmissionExampleGRecaptchaResponse gRecaptchaResponse;

 /**
  * Two Factor Authentication Response.
  */
  @ApiModelProperty(value = "Two Factor Authentication Response.")

  private String tfa;
 /**
   * Get login
   * @return login
  **/
  @JsonProperty("login")
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
  public LoginSubmissionExampleGRecaptchaResponse getgRecaptchaResponse() {
    return gRecaptchaResponse;
  }

  public void setgRecaptchaResponse(LoginSubmissionExampleGRecaptchaResponse gRecaptchaResponse) {
    this.gRecaptchaResponse = gRecaptchaResponse;
  }

  public LoginSubmissionExample gRecaptchaResponse(LoginSubmissionExampleGRecaptchaResponse gRecaptchaResponse) {
    this.gRecaptchaResponse = gRecaptchaResponse;
    return this;
  }

 /**
   * Two Factor Authentication Response.
   * @return tfa
  **/
  @JsonProperty("tfa")
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    LoginSubmissionExample loginSubmissionExample = (LoginSubmissionExample) o;
    return Objects.equals(this.login, loginSubmissionExample.login) &&
        Objects.equals(this.passwd, loginSubmissionExample.passwd) &&
        Objects.equals(this.remember, loginSubmissionExample.remember) &&
        Objects.equals(this.gRecaptchaResponse, loginSubmissionExample.gRecaptchaResponse) &&
        Objects.equals(this.tfa, loginSubmissionExample.tfa);
  }

  @Override
  public int hashCode() {
    return Objects.hash(login, passwd, remember, gRecaptchaResponse, tfa);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}


package io.swagger.model;

import io.swagger.model.LoginSubmissionExampleGrecaptcharesponse;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * The data to submit in the login request.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "The data to submit in the login request.")

public class LoginSubmissionExample   {

  private @Valid String login = null;

  private @Valid String passwd = null;

  private @Valid String remember = null;

  private @Valid LoginSubmissionExampleGrecaptcharesponse gRecaptchaResponse = null;

  private @Valid String tfa = null;

  /**
   **/
  public LoginSubmissionExample login(String login) {
    this.login = login;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("login")
  @NotNull

  public String getLogin() {
    return login;
  }
  public void setLogin(String login) {
    this.login = login;
  }

  /**
   **/
  public LoginSubmissionExample passwd(String passwd) {
    this.passwd = passwd;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("passwd")
  @NotNull

  public String getPasswd() {
    return passwd;
  }
  public void setPasswd(String passwd) {
    this.passwd = passwd;
  }

  /**
   **/
  public LoginSubmissionExample remember(String remember) {
    this.remember = remember;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("remember")
  @NotNull

  public String getRemember() {
    return remember;
  }
  public void setRemember(String remember) {
    this.remember = remember;
  }

  /**
   **/
  public LoginSubmissionExample gRecaptchaResponse(LoginSubmissionExampleGrecaptcharesponse gRecaptchaResponse) {
    this.gRecaptchaResponse = gRecaptchaResponse;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("g-recaptcha-response")
  @NotNull

  public LoginSubmissionExampleGrecaptcharesponse getGRecaptchaResponse() {
    return gRecaptchaResponse;
  }
  public void setGRecaptchaResponse(LoginSubmissionExampleGrecaptcharesponse gRecaptchaResponse) {
    this.gRecaptchaResponse = gRecaptchaResponse;
  }

  /**
   * Two Factor Authentication Response.
   **/
  public LoginSubmissionExample tfa(String tfa) {
    this.tfa = tfa;
    return this;
  }

  
  @ApiModelProperty(value = "Two Factor Authentication Response.")
  @JsonProperty("tfa")
  @NotNull

  public String getTfa() {
    return tfa;
  }
  public void setTfa(String tfa) {
    this.tfa = tfa;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    LoginSubmissionExample loginSubmissionExample = (LoginSubmissionExample) o;
    return Objects.equals(login, loginSubmissionExample.login) &&
        Objects.equals(passwd, loginSubmissionExample.passwd) &&
        Objects.equals(remember, loginSubmissionExample.remember) &&
        Objects.equals(gRecaptchaResponse, loginSubmissionExample.gRecaptchaResponse) &&
        Objects.equals(tfa, loginSubmissionExample.tfa);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

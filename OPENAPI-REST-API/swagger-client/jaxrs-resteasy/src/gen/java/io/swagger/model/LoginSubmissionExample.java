package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.LoginSubmissionExampleGrecaptcharesponse;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="The data to submit in the login request.")

public class LoginSubmissionExample   {
  private String login = null;  private String passwd = null;  private String remember = null;  private LoginSubmissionExampleGrecaptcharesponse gRecaptchaResponse = null;  private String tfa = null;

  /**
   **/
  
  @Schema(required = true, description = "")
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
  
  @Schema(required = true, description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "Two Factor Authentication Response.")
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

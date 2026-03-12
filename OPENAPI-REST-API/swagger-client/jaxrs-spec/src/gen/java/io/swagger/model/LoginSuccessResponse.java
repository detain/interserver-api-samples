package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * The response from a successful login.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "The response from a successful login.")

public class LoginSuccessResponse   {

  private @Valid String sessionId = null;

  private @Valid Integer accountId = null;

  private @Valid String accountLid = null;

  private @Valid String ima = null;

  private @Valid String gravatar = null;

  /**
   **/
  public LoginSuccessResponse sessionId(String sessionId) {
    this.sessionId = sessionId;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("sessionId")
  @NotNull

  public String getSessionId() {
    return sessionId;
  }
  public void setSessionId(String sessionId) {
    this.sessionId = sessionId;
  }

  /**
   **/
  public LoginSuccessResponse accountId(Integer accountId) {
    this.accountId = accountId;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("account_id")
  @NotNull

  public Integer getAccountId() {
    return accountId;
  }
  public void setAccountId(Integer accountId) {
    this.accountId = accountId;
  }

  /**
   **/
  public LoginSuccessResponse accountLid(String accountLid) {
    this.accountLid = accountLid;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("account_lid")
  @NotNull

  public String getAccountLid() {
    return accountLid;
  }
  public void setAccountLid(String accountLid) {
    this.accountLid = accountLid;
  }

  /**
   **/
  public LoginSuccessResponse ima(String ima) {
    this.ima = ima;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("ima")
  @NotNull

  public String getIma() {
    return ima;
  }
  public void setIma(String ima) {
    this.ima = ima;
  }

  /**
   **/
  public LoginSuccessResponse gravatar(String gravatar) {
    this.gravatar = gravatar;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("gravatar")
  @NotNull

  public String getGravatar() {
    return gravatar;
  }
  public void setGravatar(String gravatar) {
    this.gravatar = gravatar;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    LoginSuccessResponse loginSuccessResponse = (LoginSuccessResponse) o;
    return Objects.equals(sessionId, loginSuccessResponse.sessionId) &&
        Objects.equals(accountId, loginSuccessResponse.accountId) &&
        Objects.equals(accountLid, loginSuccessResponse.accountLid) &&
        Objects.equals(ima, loginSuccessResponse.ima) &&
        Objects.equals(gravatar, loginSuccessResponse.gravatar);
  }

  @Override
  public int hashCode() {
    return Objects.hash(sessionId, accountId, accountLid, ima, gravatar);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class LoginSuccessResponse {\n");
    
    sb.append("    sessionId: ").append(toIndentedString(sessionId)).append("\n");
    sb.append("    accountId: ").append(toIndentedString(accountId)).append("\n");
    sb.append("    accountLid: ").append(toIndentedString(accountLid)).append("\n");
    sb.append("    ima: ").append(toIndentedString(ima)).append("\n");
    sb.append("    gravatar: ").append(toIndentedString(gravatar)).append("\n");
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

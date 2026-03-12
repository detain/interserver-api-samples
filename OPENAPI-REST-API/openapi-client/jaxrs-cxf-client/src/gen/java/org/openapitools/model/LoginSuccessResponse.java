package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * The response from a successful login.
 */
@ApiModel(description="The response from a successful login.")

public class LoginSuccessResponse  {
  
  @ApiModelProperty(value = "")

  private String sessionId;

  @ApiModelProperty(value = "")

  private Integer accountId;

  @ApiModelProperty(value = "")

  private String accountLid;

  @ApiModelProperty(value = "")

  private String ima;

  @ApiModelProperty(value = "")

  private String gravatar;
 /**
   * Get sessionId
   * @return sessionId
  **/
  @JsonProperty("sessionId")
  public String getSessionId() {
    return sessionId;
  }

  public void setSessionId(String sessionId) {
    this.sessionId = sessionId;
  }

  public LoginSuccessResponse sessionId(String sessionId) {
    this.sessionId = sessionId;
    return this;
  }

 /**
   * Get accountId
   * @return accountId
  **/
  @JsonProperty("account_id")
  public Integer getAccountId() {
    return accountId;
  }

  public void setAccountId(Integer accountId) {
    this.accountId = accountId;
  }

  public LoginSuccessResponse accountId(Integer accountId) {
    this.accountId = accountId;
    return this;
  }

 /**
   * Get accountLid
   * @return accountLid
  **/
  @JsonProperty("account_lid")
  public String getAccountLid() {
    return accountLid;
  }

  public void setAccountLid(String accountLid) {
    this.accountLid = accountLid;
  }

  public LoginSuccessResponse accountLid(String accountLid) {
    this.accountLid = accountLid;
    return this;
  }

 /**
   * Get ima
   * @return ima
  **/
  @JsonProperty("ima")
  public String getIma() {
    return ima;
  }

  public void setIma(String ima) {
    this.ima = ima;
  }

  public LoginSuccessResponse ima(String ima) {
    this.ima = ima;
    return this;
  }

 /**
   * Get gravatar
   * @return gravatar
  **/
  @JsonProperty("gravatar")
  public String getGravatar() {
    return gravatar;
  }

  public void setGravatar(String gravatar) {
    this.gravatar = gravatar;
  }

  public LoginSuccessResponse gravatar(String gravatar) {
    this.gravatar = gravatar;
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
    LoginSuccessResponse loginSuccessResponse = (LoginSuccessResponse) o;
    return Objects.equals(this.sessionId, loginSuccessResponse.sessionId) &&
        Objects.equals(this.accountId, loginSuccessResponse.accountId) &&
        Objects.equals(this.accountLid, loginSuccessResponse.accountLid) &&
        Objects.equals(this.ima, loginSuccessResponse.ima) &&
        Objects.equals(this.gravatar, loginSuccessResponse.gravatar);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}


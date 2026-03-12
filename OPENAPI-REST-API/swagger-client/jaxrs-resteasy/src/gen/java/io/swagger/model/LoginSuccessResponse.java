package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="The response from a successful login.")

public class LoginSuccessResponse   {
  private String sessionId = null;  private Integer accountId = null;  private String accountLid = null;  private String ima = null;  private String gravatar = null;

  /**
   **/
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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

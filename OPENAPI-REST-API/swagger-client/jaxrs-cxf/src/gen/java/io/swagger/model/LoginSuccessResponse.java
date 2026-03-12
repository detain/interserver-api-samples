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
  * The response from a successful login.
 **/
@Schema(description="The response from a successful login.")
public class LoginSuccessResponse   {
  
  @Schema(description = "")
  private String sessionId = null;
  
  @Schema(description = "")
  private Integer accountId = null;
  
  @Schema(description = "")
  private String accountLid = null;
  
  @Schema(description = "")
  private String ima = null;
  
  @Schema(description = "")
  private String gravatar = null;
 /**
   * Get sessionId
   * @return sessionId
  **/
  @JsonProperty("sessionId")
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

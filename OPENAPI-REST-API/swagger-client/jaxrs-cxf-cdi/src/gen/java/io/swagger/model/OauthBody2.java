package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;



public class OauthBody2   {
  private Integer accountId = null;
  private String code = null;

  /**
   * The account ID returned from the POST callback.
   **/
  public OauthBody2 accountId(Integer accountId) {
    this.accountId = accountId;
    return this;
  }

  
  
  @Schema(required = true, description = "The account ID returned from the POST callback.")
  @JsonProperty("account_id")
  @NotNull
  public Integer getAccountId() {
    return accountId;
  }
  public void setAccountId(Integer accountId) {
    this.accountId = accountId;
  }

  /**
   * The 6-digit two-factor authentication code.
   **/
  public OauthBody2 code(String code) {
    this.code = code;
    return this;
  }

  
  
  @Schema(required = true, description = "The 6-digit two-factor authentication code.")
  @JsonProperty("code")
  @NotNull
  public String getCode() {
    return code;
  }
  public void setCode(String code) {
    this.code = code;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OauthBody2 oauthBody2 = (OauthBody2) o;
    return Objects.equals(accountId, oauthBody2.accountId) &&
        Objects.equals(code, oauthBody2.code);
  }

  @Override
  public int hashCode() {
    return Objects.hash(accountId, code);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class OauthBody2 {\n");
    
    sb.append("    accountId: ").append(toIndentedString(accountId)).append("\n");
    sb.append("    code: ").append(toIndentedString(code)).append("\n");
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

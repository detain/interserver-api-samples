package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;



public class OauthBody2   {
  private Integer accountId = null;  private String code = null;

  /**
   * The account ID returned from the POST callback.
   **/
  
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

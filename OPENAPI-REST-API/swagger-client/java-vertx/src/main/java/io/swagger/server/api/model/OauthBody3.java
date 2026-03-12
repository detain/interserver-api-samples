package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * OauthBody3
 */




public class OauthBody3   {
  private Integer accountId = null;

  private String code = null;

  public OauthBody3 accountId(Integer accountId) {
    this.accountId = accountId;
    return this;
  }

  /**
   * The account ID returned from the POST callback.
   * @return accountId
   **/
    public Integer getAccountId() {
    return accountId;
  }

  public void setAccountId(Integer accountId) {
    this.accountId = accountId;
  }

  public OauthBody3 code(String code) {
    this.code = code;
    return this;
  }

  /**
   * The 6-digit two-factor authentication code.
   * @return code
   **/
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
    OauthBody3 oauthBody3 = (OauthBody3) o;
    return Objects.equals(this.accountId, oauthBody3.accountId) &&
        Objects.equals(this.code, oauthBody3.code);
  }

  @Override
  public int hashCode() {
    return Objects.hash(accountId, code);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class OauthBody3 {\n");
    
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

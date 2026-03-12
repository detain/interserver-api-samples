package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * InlineResponse2006
 */




public class InlineResponse2006   {
  private Boolean login = null;

  private Boolean signup = null;

  private Boolean linked = null;

  private Integer accountId = null;

  private String errorCode = null;

  public InlineResponse2006 login(Boolean login) {
    this.login = login;
    return this;
  }

  /**
   * Whether the user was logged in to an existing account.
   * @return login
   **/
    public Boolean isLogin() {
    return login;
  }

  public void setLogin(Boolean login) {
    this.login = login;
  }

  public InlineResponse2006 signup(Boolean signup) {
    this.signup = signup;
    return this;
  }

  /**
   * Whether a new account was created.
   * @return signup
   **/
    public Boolean isSignup() {
    return signup;
  }

  public void setSignup(Boolean signup) {
    this.signup = signup;
  }

  public InlineResponse2006 linked(Boolean linked) {
    this.linked = linked;
    return this;
  }

  /**
   * Whether the OAuth provider was linked to an existing account.
   * @return linked
   **/
    public Boolean isLinked() {
    return linked;
  }

  public void setLinked(Boolean linked) {
    this.linked = linked;
  }

  public InlineResponse2006 accountId(Integer accountId) {
    this.accountId = accountId;
    return this;
  }

  /**
   * The account ID associated with the OAuth login.
   * @return accountId
   **/
    public Integer getAccountId() {
    return accountId;
  }

  public void setAccountId(Integer accountId) {
    this.accountId = accountId;
  }

  public InlineResponse2006 errorCode(String errorCode) {
    this.errorCode = errorCode;
    return this;
  }

  /**
   * Error code if additional verification is needed (e.g. `2fa_required`).
   * @return errorCode
   **/
    public String getErrorCode() {
    return errorCode;
  }

  public void setErrorCode(String errorCode) {
    this.errorCode = errorCode;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InlineResponse2006 inlineResponse2006 = (InlineResponse2006) o;
    return Objects.equals(this.login, inlineResponse2006.login) &&
        Objects.equals(this.signup, inlineResponse2006.signup) &&
        Objects.equals(this.linked, inlineResponse2006.linked) &&
        Objects.equals(this.accountId, inlineResponse2006.accountId) &&
        Objects.equals(this.errorCode, inlineResponse2006.errorCode);
  }

  @Override
  public int hashCode() {
    return Objects.hash(login, signup, linked, accountId, errorCode);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse2006 {\n");
    
    sb.append("    login: ").append(toIndentedString(login)).append("\n");
    sb.append("    signup: ").append(toIndentedString(signup)).append("\n");
    sb.append("    linked: ").append(toIndentedString(linked)).append("\n");
    sb.append("    accountId: ").append(toIndentedString(accountId)).append("\n");
    sb.append("    errorCode: ").append(toIndentedString(errorCode)).append("\n");
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

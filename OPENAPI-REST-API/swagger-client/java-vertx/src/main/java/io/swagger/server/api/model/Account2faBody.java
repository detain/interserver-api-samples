package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * Account2faBody
 */




public class Account2faBody   {
  private String _2faGoogleCode = null;

  public Account2faBody _2faGoogleCode(String _2faGoogleCode) {
    this._2faGoogleCode = _2faGoogleCode;
    return this;
  }

  /**
   * The 6-digit verification code from your authenticator app.
   * @return _2faGoogleCode
   **/
    public String get2faGoogleCode() {
    return _2faGoogleCode;
  }

  public void set2faGoogleCode(String _2faGoogleCode) {
    this._2faGoogleCode = _2faGoogleCode;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Account2faBody account2faBody = (Account2faBody) o;
    return Objects.equals(this._2faGoogleCode, account2faBody._2faGoogleCode);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_2faGoogleCode);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Account2faBody {\n");
    
    sb.append("    _2faGoogleCode: ").append(toIndentedString(_2faGoogleCode)).append("\n");
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

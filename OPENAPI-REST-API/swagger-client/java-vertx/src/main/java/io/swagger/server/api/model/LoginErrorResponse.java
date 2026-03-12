package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * Error resposne during login indicating further action.
 */




public class LoginErrorResponse   {
  private String message = null;

  private String field = null;

  public LoginErrorResponse message(String message) {
    this.message = message;
    return this;
  }

  /**
   * Get message
   * @return message
   **/
    public String getMessage() {
    return message;
  }

  public void setMessage(String message) {
    this.message = message;
  }

  public LoginErrorResponse field(String field) {
    this.field = field;
    return this;
  }

  /**
   * Get field
   * @return field
   **/
    public String getField() {
    return field;
  }

  public void setField(String field) {
    this.field = field;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    LoginErrorResponse loginErrorResponse = (LoginErrorResponse) o;
    return Objects.equals(this.message, loginErrorResponse.message) &&
        Objects.equals(this.field, loginErrorResponse.field);
  }

  @Override
  public int hashCode() {
    return Objects.hash(message, field);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class LoginErrorResponse {\n");
    
    sb.append("    message: ").append(toIndentedString(message)).append("\n");
    sb.append("    field: ").append(toIndentedString(field)).append("\n");
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

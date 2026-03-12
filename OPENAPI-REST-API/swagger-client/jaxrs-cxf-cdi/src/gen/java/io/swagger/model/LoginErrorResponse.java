package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
/**
 * Error resposne during login indicating further action.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "Error resposne during login indicating further action.")

public class LoginErrorResponse   {
  private String message = null;
  private String field = null;

  /**
   **/
  public LoginErrorResponse message(String message) {
    this.message = message;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("message")
  @NotNull
  public String getMessage() {
    return message;
  }
  public void setMessage(String message) {
    this.message = message;
  }

  /**
   **/
  public LoginErrorResponse field(String field) {
    this.field = field;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("field")
  @NotNull
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
    return Objects.equals(message, loginErrorResponse.message) &&
        Objects.equals(field, loginErrorResponse.field);
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

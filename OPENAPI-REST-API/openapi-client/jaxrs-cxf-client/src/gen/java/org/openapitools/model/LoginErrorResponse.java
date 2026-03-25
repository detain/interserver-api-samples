package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Error resposne during login indicating further action.
 */
@ApiModel(description="Error resposne during login indicating further action.")

public class LoginErrorResponse  {
  
  @ApiModelProperty(value = "")

  private String message;

  @ApiModelProperty(value = "")

  private String field;
 /**
   * Get message
   * @return message
  **/
  @JsonProperty("message")
  public String getMessage() {
    return message;
  }

  public void setMessage(String message) {
    this.message = message;
  }

  public LoginErrorResponse message(String message) {
    this.message = message;
    return this;
  }

 /**
   * Get field
   * @return field
  **/
  @JsonProperty("field")
  public String getField() {
    return field;
  }

  public void setField(String field) {
    this.field = field;
  }

  public LoginErrorResponse field(String field) {
    this.field = field;
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}


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
  * Error resposne during login indicating further action.
 **/
@Schema(description="Error resposne during login indicating further action.")
public class LoginErrorResponse   {
  
  @Schema(description = "")
  private String message = null;
  
  @Schema(description = "")
  private String field = null;
 /**
   * Get message
   * @return message
  **/
  @JsonProperty("message")
  @NotNull
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
  @NotNull
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;



public class InlineResponse401   {
  private Integer code = null;
  private String message = null;

  /**
   **/
  public InlineResponse401 code(Integer code) {
    this.code = code;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("code")
  @NotNull
  public Integer getCode() {
    return code;
  }
  public void setCode(Integer code) {
    this.code = code;
  }

  /**
   **/
  public InlineResponse401 message(String message) {
    this.message = message;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("message")
  @NotNull
  public String getMessage() {
    return message;
  }
  public void setMessage(String message) {
    this.message = message;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InlineResponse401 inlineResponse401 = (InlineResponse401) o;
    return Objects.equals(code, inlineResponse401.code) &&
        Objects.equals(message, inlineResponse401.message);
  }

  @Override
  public int hashCode() {
    return Objects.hash(code, message);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse401 {\n");
    
    sb.append("    code: ").append(toIndentedString(code)).append("\n");
    sb.append("    message: ").append(toIndentedString(message)).append("\n");
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

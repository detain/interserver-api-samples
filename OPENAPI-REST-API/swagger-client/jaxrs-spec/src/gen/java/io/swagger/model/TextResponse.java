package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Text Response Object
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Text Response Object")

public class TextResponse   {

  private @Valid String text = null;

  private @Valid String message = null;

  /**
   * Response text
   **/
  public TextResponse text(String text) {
    this.text = text;
    return this;
  }

  
  @ApiModelProperty(example = "\"You were successfull.\"", value = "Response text")
  @JsonProperty("text")
  @NotNull

  public String getText() {
    return text;
  }
  public void setText(String text) {
    this.text = text;
  }

  /**
   * Response message
   **/
  public TextResponse message(String message) {
    this.message = message;
    return this;
  }

  
  @ApiModelProperty(value = "Response message")
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
    TextResponse textResponse = (TextResponse) o;
    return Objects.equals(text, textResponse.text) &&
        Objects.equals(message, textResponse.message);
  }

  @Override
  public int hashCode() {
    return Objects.hash(text, message);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class TextResponse {\n");
    
    sb.append("    text: ").append(toIndentedString(text)).append("\n");
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

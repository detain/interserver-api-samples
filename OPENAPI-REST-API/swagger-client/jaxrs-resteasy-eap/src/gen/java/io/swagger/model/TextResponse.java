package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Text Response Object")

public class TextResponse   {
  private String text = null;
  private String message = null;

  /**
   * Response text
   **/
  
  @Schema(example = "\"You were successfull.\"", description = "Response text")
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
  
  @Schema(description = "Response message")
  @JsonProperty("message")
  @NotNull
  public String getMessage() {
    return message;
  }
  public void setMessage(String message) {
    this.message = message;
  }


  @Override
  public boolean equals(Object o) {
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Text Response Object
 */
@ApiModel(description="Text Response Object")

public class TextResponse  {
  
 /**
  * Response text
  */
  @ApiModelProperty(example = "\"You were successfull.\"", value = "Response text")

  private String text;

 /**
  * Response message
  */
  @ApiModelProperty(value = "Response message")

  private String message;
 /**
   * Response text
   * @return text
  **/
  @JsonProperty("text")
  public String getText() {
    return text;
  }

  public void setText(String text) {
    this.text = text;
  }

  public TextResponse text(String text) {
    this.text = text;
    return this;
  }

 /**
   * Response message
   * @return message
  **/
  @JsonProperty("message")
  public String getMessage() {
    return message;
  }

  public void setMessage(String message) {
    this.message = message;
  }

  public TextResponse message(String message) {
    this.message = message;
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
    TextResponse textResponse = (TextResponse) o;
    return Objects.equals(this.text, textResponse.text) &&
        Objects.equals(this.message, textResponse.message);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}


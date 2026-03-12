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
  * Text Response Object
 **/
@Schema(description="Text Response Object")
public class TextResponse   {
  
  @Schema(example = "\"You were successfull.\"", description = "Response text")
 /**
   * Response text  
  **/
  private String text = null;
  
  @Schema(description = "Response message")
 /**
   * Response message  
  **/
  private String message = null;
 /**
   * Response text
   * @return text
  **/
  @JsonProperty("text")
  @NotNull
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
  @NotNull
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

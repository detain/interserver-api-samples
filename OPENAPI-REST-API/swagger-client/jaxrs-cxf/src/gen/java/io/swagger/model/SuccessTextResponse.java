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
  * Response with success flag and text description.
 **/
@Schema(description="Response with success flag and text description.")
public class SuccessTextResponse   {
  
  @Schema(required = true, description = "Indicates whether or not the command was successful or not.")
 /**
   * Indicates whether or not the command was successful or not.  
  **/
  private Boolean success = null;
  
  @Schema(description = "Text associated with the response.")
 /**
   * Text associated with the response.  
  **/
  private String text = null;
  
  @Schema(description = "Optional Action relating to the response.")
 /**
   * Optional Action relating to the response.  
  **/
  private String action = null;
 /**
   * Indicates whether or not the command was successful or not.
   * @return success
  **/
  @JsonProperty("success")
  @NotNull
  public Boolean isSuccess() {
    return success;
  }

  public void setSuccess(Boolean success) {
    this.success = success;
  }

  public SuccessTextResponse success(Boolean success) {
    this.success = success;
    return this;
  }

 /**
   * Text associated with the response.
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

  public SuccessTextResponse text(String text) {
    this.text = text;
    return this;
  }

 /**
   * Optional Action relating to the response.
   * @return action
  **/
  @JsonProperty("action")
  @NotNull
  public String getAction() {
    return action;
  }

  public void setAction(String action) {
    this.action = action;
  }

  public SuccessTextResponse action(String action) {
    this.action = action;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class SuccessTextResponse {\n");
    
    sb.append("    success: ").append(toIndentedString(success)).append("\n");
    sb.append("    text: ").append(toIndentedString(text)).append("\n");
    sb.append("    action: ").append(toIndentedString(action)).append("\n");
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

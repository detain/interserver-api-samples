package io.swagger.model;

import java.util.ArrayList;
import java.util.List;
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

public class InlineResponse4004   {
  
  @Schema(example = "false", description = "")
  private Boolean success = null;
  
  @Schema(example = "Bad Request", description = "")
  private String text = null;
  
  @Schema(description = "")
  private List<String> errors = null;
 /**
   * Get success
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

  public InlineResponse4004 success(Boolean success) {
    this.success = success;
    return this;
  }

 /**
   * Get text
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

  public InlineResponse4004 text(String text) {
    this.text = text;
    return this;
  }

 /**
   * Get errors
   * @return errors
  **/
  @JsonProperty("errors")
  @NotNull
  public List<String> getErrors() {
    return errors;
  }

  public void setErrors(List<String> errors) {
    this.errors = errors;
  }

  public InlineResponse4004 errors(List<String> errors) {
    this.errors = errors;
    return this;
  }

  public InlineResponse4004 addErrorsItem(String errorsItem) {
    this.errors.add(errorsItem);
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse4004 {\n");
    
    sb.append("    success: ").append(toIndentedString(success)).append("\n");
    sb.append("    text: ").append(toIndentedString(text)).append("\n");
    sb.append("    errors: ").append(toIndentedString(errors)).append("\n");
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

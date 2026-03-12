package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import java.util.ArrayList;
import java.util.List;
import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;



public class InlineResponse4001   {
  private Boolean success = null;
  private String text = null;
  private List<String> errors = new ArrayList<String>();

  /**
   **/
  public InlineResponse4001 success(Boolean success) {
    this.success = success;
    return this;
  }

  
  
  @Schema(example = "false", description = "")
  @JsonProperty("success")
  @NotNull
  public Boolean isSuccess() {
    return success;
  }
  public void setSuccess(Boolean success) {
    this.success = success;
  }

  /**
   **/
  public InlineResponse4001 text(String text) {
    this.text = text;
    return this;
  }

  
  
  @Schema(example = "Bad Request", description = "")
  @JsonProperty("text")
  @NotNull
  public String getText() {
    return text;
  }
  public void setText(String text) {
    this.text = text;
  }

  /**
   **/
  public InlineResponse4001 errors(List<String> errors) {
    this.errors = errors;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("errors")
  @NotNull
  public List<String> getErrors() {
    return errors;
  }
  public void setErrors(List<String> errors) {
    this.errors = errors;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InlineResponse4001 inlineResponse4001 = (InlineResponse4001) o;
    return Objects.equals(success, inlineResponse4001.success) &&
        Objects.equals(text, inlineResponse4001.text) &&
        Objects.equals(errors, inlineResponse4001.errors);
  }

  @Override
  public int hashCode() {
    return Objects.hash(success, text, errors);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse4001 {\n");
    
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

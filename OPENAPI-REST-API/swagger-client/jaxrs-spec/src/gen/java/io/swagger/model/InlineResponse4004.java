package io.swagger.model;

import java.util.ArrayList;
import java.util.List;
import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class InlineResponse4004   {

  private @Valid Boolean success = null;

  private @Valid String text = null;

  private @Valid List<String> errors = new ArrayList<String>();

  /**
   **/
  public InlineResponse4004 success(Boolean success) {
    this.success = success;
    return this;
  }

  
  @ApiModelProperty(example = "false", value = "")
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
  public InlineResponse4004 text(String text) {
    this.text = text;
    return this;
  }

  
  @ApiModelProperty(example = "Bad Request", value = "")
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
  public InlineResponse4004 errors(List<String> errors) {
    this.errors = errors;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
    InlineResponse4004 inlineResponse4004 = (InlineResponse4004) o;
    return Objects.equals(success, inlineResponse4004.success) &&
        Objects.equals(text, inlineResponse4004.text) &&
        Objects.equals(errors, inlineResponse4004.errors);
  }

  @Override
  public int hashCode() {
    return Objects.hash(success, text, errors);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

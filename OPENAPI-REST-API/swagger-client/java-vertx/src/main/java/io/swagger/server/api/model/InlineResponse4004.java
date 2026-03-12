package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import java.util.ArrayList;
import java.util.List;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * InlineResponse4004
 */




public class InlineResponse4004   {
  private Boolean success = null;

  private String text = null;

  
  private List<String> errors = null;

  public InlineResponse4004 success(Boolean success) {
    this.success = success;
    return this;
  }

  /**
   * Get success
   * @return success
   **/
    public Boolean isSuccess() {
    return success;
  }

  public void setSuccess(Boolean success) {
    this.success = success;
  }

  public InlineResponse4004 text(String text) {
    this.text = text;
    return this;
  }

  /**
   * Get text
   * @return text
   **/
    public String getText() {
    return text;
  }

  public void setText(String text) {
    this.text = text;
  }

  public InlineResponse4004 errors(List<String> errors) {
    this.errors = errors;
    return this;
  }

  public InlineResponse4004 addErrorsItem(String errorsItem) {
    if (this.errors == null) {
      this.errors = new ArrayList<String>();
    }
    this.errors.add(errorsItem);
    return this;
  }

  /**
   * Get errors
   * @return errors
   **/
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
    return Objects.equals(this.success, inlineResponse4004.success) &&
        Objects.equals(this.text, inlineResponse4004.text) &&
        Objects.equals(this.errors, inlineResponse4004.errors);
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

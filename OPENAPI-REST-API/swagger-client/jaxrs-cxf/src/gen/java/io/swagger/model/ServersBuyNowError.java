package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
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

/**
  * Error response when a buy-it-now server order fails validation.
 **/
@Schema(description="Error response when a buy-it-now server order fails validation.")
public class ServersBuyNowError   {
  
  @Schema(example = "false", description = "Always false for error responses.")
 /**
   * Always false for error responses.  
  **/
  private Boolean success = null;
  
  @Schema(example = "Unable to place order.", description = "Human-readable error summary.")
 /**
   * Human-readable error summary.  
  **/
  private String text = null;
  
  @Schema(example = "[\"Server ID is missing.\",\"Server Hostname is missing.;\",\"Password must contain atleast 8 characters, one lowercase letter, one uppercase letter, one number & one special character\"]", description = "List of specific validation error messages.")
 /**
   * List of specific validation error messages.  
  **/
  private List<String> errors = null;
 /**
   * Always false for error responses.
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

  public ServersBuyNowError success(Boolean success) {
    this.success = success;
    return this;
  }

 /**
   * Human-readable error summary.
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

  public ServersBuyNowError text(String text) {
    this.text = text;
    return this;
  }

 /**
   * List of specific validation error messages.
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

  public ServersBuyNowError errors(List<String> errors) {
    this.errors = errors;
    return this;
  }

  public ServersBuyNowError addErrorsItem(String errorsItem) {
    this.errors.add(errorsItem);
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServersBuyNowError {\n");
    
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

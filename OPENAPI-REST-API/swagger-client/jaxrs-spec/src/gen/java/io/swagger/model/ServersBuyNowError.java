package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Error response when a buy-it-now server order fails validation.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Error response when a buy-it-now server order fails validation.")

public class ServersBuyNowError   {

  private @Valid Boolean success = null;

  private @Valid String text = null;

  private @Valid List<String> errors = new ArrayList<String>();

  /**
   * Always false for error responses.
   **/
  public ServersBuyNowError success(Boolean success) {
    this.success = success;
    return this;
  }

  
  @ApiModelProperty(example = "false", value = "Always false for error responses.")
  @JsonProperty("success")
  @NotNull

  public Boolean isSuccess() {
    return success;
  }
  public void setSuccess(Boolean success) {
    this.success = success;
  }

  /**
   * Human-readable error summary.
   **/
  public ServersBuyNowError text(String text) {
    this.text = text;
    return this;
  }

  
  @ApiModelProperty(example = "Unable to place order.", value = "Human-readable error summary.")
  @JsonProperty("text")
  @NotNull

  public String getText() {
    return text;
  }
  public void setText(String text) {
    this.text = text;
  }

  /**
   * List of specific validation error messages.
   **/
  public ServersBuyNowError errors(List<String> errors) {
    this.errors = errors;
    return this;
  }

  
  @ApiModelProperty(example = "[\"Server ID is missing.\",\"Server Hostname is missing.;\",\"Password must contain atleast 8 characters, one lowercase letter, one uppercase letter, one number & one special character\"]", value = "List of specific validation error messages.")
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
    ServersBuyNowError serversBuyNowError = (ServersBuyNowError) o;
    return Objects.equals(success, serversBuyNowError.success) &&
        Objects.equals(text, serversBuyNowError.text) &&
        Objects.equals(errors, serversBuyNowError.errors);
  }

  @Override
  public int hashCode() {
    return Objects.hash(success, text, errors);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

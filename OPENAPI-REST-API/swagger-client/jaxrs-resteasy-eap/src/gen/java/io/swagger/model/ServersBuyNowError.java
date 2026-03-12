package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.List;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Error response when a buy-it-now server order fails validation.")

public class ServersBuyNowError   {
  private Boolean success = null;
  private String text = null;
  private List<String> errors = new ArrayList<String>();

  /**
   * Always false for error responses.
   **/
  
  @Schema(example = "false", description = "Always false for error responses.")
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
  
  @Schema(example = "Unable to place order.", description = "Human-readable error summary.")
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
  
  @Schema(example = "[\"Server ID is missing.\",\"Server Hostname is missing.;\",\"Password must contain atleast 8 characters, one lowercase letter, one uppercase letter, one number & one special character\"]", description = "List of specific validation error messages.")
  @JsonProperty("errors")
  @NotNull
  public List<String> getErrors() {
    return errors;
  }
  public void setErrors(List<String> errors) {
    this.errors = errors;
  }


  @Override
  public boolean equals(Object o) {
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

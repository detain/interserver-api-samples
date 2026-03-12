package io.swagger.model;

import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class UpdateTicketResponseSchema   {

  private @Valid Boolean success = null;

  private @Valid String message = null;

  /**
   **/
  public UpdateTicketResponseSchema success(Boolean success) {
    this.success = success;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public UpdateTicketResponseSchema message(String message) {
    this.message = message;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("message")
  @NotNull

  public String getMessage() {
    return message;
  }
  public void setMessage(String message) {
    this.message = message;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    UpdateTicketResponseSchema updateTicketResponseSchema = (UpdateTicketResponseSchema) o;
    return Objects.equals(success, updateTicketResponseSchema.success) &&
        Objects.equals(message, updateTicketResponseSchema.message);
  }

  @Override
  public int hashCode() {
    return Objects.hash(success, message);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class UpdateTicketResponseSchema {\n");
    
    sb.append("    success: ").append(toIndentedString(success)).append("\n");
    sb.append("    message: ").append(toIndentedString(message)).append("\n");
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

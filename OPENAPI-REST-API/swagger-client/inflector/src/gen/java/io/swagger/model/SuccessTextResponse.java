package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * Response with success flag and text description.
 **/
@Schema(description = "Response with success flag and text description.")


public class SuccessTextResponse   {
  @JsonProperty("success")
  private Boolean success = null;
  @JsonProperty("text")
  private String text = null;
  @JsonProperty("action")
  private String action = null;
  /**
   * Indicates whether or not the command was successful or not.
   **/
  public SuccessTextResponse success(Boolean success) {
    this.success = success;
    return this;
  }

  
  @Schema(required = true, description = "Indicates whether or not the command was successful or not.")
  @JsonProperty("success")
  public Boolean isSuccess() {
    return success;
  }
  public void setSuccess(Boolean success) {
    this.success = success;
  }

  /**
   * Text associated with the response.
   **/
  public SuccessTextResponse text(String text) {
    this.text = text;
    return this;
  }

  
  @Schema(description = "Text associated with the response.")
  @JsonProperty("text")
  public String getText() {
    return text;
  }
  public void setText(String text) {
    this.text = text;
  }

  /**
   * Optional Action relating to the response.
   **/
  public SuccessTextResponse action(String action) {
    this.action = action;
    return this;
  }

  
  @Schema(description = "Optional Action relating to the response.")
  @JsonProperty("action")
  public String getAction() {
    return action;
  }
  public void setAction(String action) {
    this.action = action;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    SuccessTextResponse successTextResponse = (SuccessTextResponse) o;
    return Objects.equals(success, successTextResponse.success) &&
        Objects.equals(text, successTextResponse.text) &&
        Objects.equals(action, successTextResponse.action);
  }

  @Override
  public int hashCode() {
    return Objects.hash(success, text, action);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

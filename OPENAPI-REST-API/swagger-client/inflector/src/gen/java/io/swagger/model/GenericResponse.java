package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * Generic Response
 **/
@Schema(description = "Generic Response")


public class GenericResponse   {
  @JsonProperty("status")
  private String status = null;
  @JsonProperty("text")
  private String text = null;
  /**
   **/
  public GenericResponse status(String status) {
    this.status = status;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("status")
  public String getStatus() {
    return status;
  }
  public void setStatus(String status) {
    this.status = status;
  }

  /**
   **/
  public GenericResponse text(String text) {
    this.text = text;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("text")
  public String getText() {
    return text;
  }
  public void setText(String text) {
    this.text = text;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    GenericResponse genericResponse = (GenericResponse) o;
    return Objects.equals(status, genericResponse.status) &&
        Objects.equals(text, genericResponse.text);
  }

  @Override
  public int hashCode() {
    return Objects.hash(status, text);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class GenericResponse {\n");
    sb.append("    status: ").append(toIndentedString(status)).append("\n");
    sb.append("    text: ").append(toIndentedString(text)).append("\n");
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

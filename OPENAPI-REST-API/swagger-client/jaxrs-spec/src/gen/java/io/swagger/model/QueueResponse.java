package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Response after sending an action queue to a service.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Response after sending an action queue to a service.")

public class QueueResponse   {

  private @Valid String text = null;

  private @Valid Integer queueId = null;

  /**
   * Response text
   **/
  public QueueResponse text(String text) {
    this.text = text;
    return this;
  }

  
  @ApiModelProperty(example = "Action has been sent to the server. Please allow up to 2 minutes for action to be completed.", required = true, value = "Response text")
  @JsonProperty("text")
  @NotNull

  public String getText() {
    return text;
  }
  public void setText(String text) {
    this.text = text;
  }

  /**
   * The Queue ID attached to the action.
   **/
  public QueueResponse queueId(Integer queueId) {
    this.queueId = queueId;
    return this;
  }

  
  @ApiModelProperty(example = "14670065", required = true, value = "The Queue ID attached to the action.")
  @JsonProperty("queueId")
  @NotNull

  public Integer getQueueId() {
    return queueId;
  }
  public void setQueueId(Integer queueId) {
    this.queueId = queueId;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    QueueResponse queueResponse = (QueueResponse) o;
    return Objects.equals(text, queueResponse.text) &&
        Objects.equals(queueId, queueResponse.queueId);
  }

  @Override
  public int hashCode() {
    return Objects.hash(text, queueId);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class QueueResponse {\n");
    
    sb.append("    text: ").append(toIndentedString(text)).append("\n");
    sb.append("    queueId: ").append(toIndentedString(queueId)).append("\n");
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

package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Response after sending an action queue to a service.
 */
@ApiModel(description="Response after sending an action queue to a service.")

public class QueueResponse  {
  
 /**
  * Response text
  */
  @ApiModelProperty(example = "Action has been sent to the server. Please allow up to 2 minutes for action to be completed.", required = true, value = "Response text")

  private String text;

 /**
  * The Queue ID attached to the action.
  */
  @ApiModelProperty(example = "14670065", required = true, value = "The Queue ID attached to the action.")

  private Integer queueId;
 /**
   * Response text
   * @return text
  **/
  @JsonProperty("text")
  public String getText() {
    return text;
  }

  public void setText(String text) {
    this.text = text;
  }

  public QueueResponse text(String text) {
    this.text = text;
    return this;
  }

 /**
   * The Queue ID attached to the action.
   * @return queueId
  **/
  @JsonProperty("queueId")
  public Integer getQueueId() {
    return queueId;
  }

  public void setQueueId(Integer queueId) {
    this.queueId = queueId;
  }

  public QueueResponse queueId(Integer queueId) {
    this.queueId = queueId;
    return this;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    QueueResponse queueResponse = (QueueResponse) o;
    return Objects.equals(this.text, queueResponse.text) &&
        Objects.equals(this.queueId, queueResponse.queueId);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}


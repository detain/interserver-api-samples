package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;

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
  * Response after sending an action queue to a service.
 **/
@Schema(description="Response after sending an action queue to a service.")
public class QueueResponse   {
  
  @Schema(example = "Action has been sent to the server. Please allow up to 2 minutes for action to be completed.", required = true, description = "Response text")
 /**
   * Response text  
  **/
  private String text = null;
  
  @Schema(example = "14670065", required = true, description = "The Queue ID attached to the action.")
 /**
   * The Queue ID attached to the action.  
  **/
  private Integer queueId = null;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

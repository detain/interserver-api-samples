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
  * Response returned after creating a new support ticket.
 **/
@Schema(description="Response returned after creating a new support ticket.")
public class TicketNewResponse   {
  
  @Schema(description = "")
  private Integer ticketId = null;
  
  @Schema(required = true, description = "")
  private String text = null;
  
  @Schema(required = true, description = "")
  private Boolean success = null;
 /**
   * Get ticketId
   * @return ticketId
  **/
  @JsonProperty("ticket_id")
  public Integer getTicketId() {
    return ticketId;
  }

  public void setTicketId(Integer ticketId) {
    this.ticketId = ticketId;
  }

  public TicketNewResponse ticketId(Integer ticketId) {
    this.ticketId = ticketId;
    return this;
  }

 /**
   * Get text
   * @return text
  **/
  @JsonProperty("text")
  public String getText() {
    return text;
  }

  public void setText(String text) {
    this.text = text;
  }

  public TicketNewResponse text(String text) {
    this.text = text;
    return this;
  }

 /**
   * Get success
   * @return success
  **/
  @JsonProperty("success")
  public Boolean isSuccess() {
    return success;
  }

  public void setSuccess(Boolean success) {
    this.success = success;
  }

  public TicketNewResponse success(Boolean success) {
    this.success = success;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class TicketNewResponse {\n");
    
    sb.append("    ticketId: ").append(toIndentedString(ticketId)).append("\n");
    sb.append("    text: ").append(toIndentedString(text)).append("\n");
    sb.append("    success: ").append(toIndentedString(success)).append("\n");
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

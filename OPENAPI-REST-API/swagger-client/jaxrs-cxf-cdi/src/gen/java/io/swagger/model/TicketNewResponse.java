package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
/**
 * Response returned after creating a new support ticket.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "Response returned after creating a new support ticket.")

public class TicketNewResponse   {
  private Integer ticketId = null;
  private String text = null;
  private Boolean success = null;

  /**
   **/
  public TicketNewResponse ticketId(Integer ticketId) {
    this.ticketId = ticketId;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("ticket_id")
  @NotNull
  public Integer getTicketId() {
    return ticketId;
  }
  public void setTicketId(Integer ticketId) {
    this.ticketId = ticketId;
  }

  /**
   **/
  public TicketNewResponse text(String text) {
    this.text = text;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("text")
  @NotNull
  public String getText() {
    return text;
  }
  public void setText(String text) {
    this.text = text;
  }

  /**
   **/
  public TicketNewResponse success(Boolean success) {
    this.success = success;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("success")
  @NotNull
  public Boolean isSuccess() {
    return success;
  }
  public void setSuccess(Boolean success) {
    this.success = success;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    TicketNewResponse ticketNewResponse = (TicketNewResponse) o;
    return Objects.equals(ticketId, ticketNewResponse.ticketId) &&
        Objects.equals(text, ticketNewResponse.text) &&
        Objects.equals(success, ticketNewResponse.success);
  }

  @Override
  public int hashCode() {
    return Objects.hash(ticketId, text, success);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

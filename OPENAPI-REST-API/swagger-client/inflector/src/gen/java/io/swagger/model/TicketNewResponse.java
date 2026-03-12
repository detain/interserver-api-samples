package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * Response returned after creating a new support ticket.
 **/
@Schema(description = "Response returned after creating a new support ticket.")


public class TicketNewResponse   {
  @JsonProperty("ticket_id")
  private Integer ticketId = null;
  @JsonProperty("text")
  private String text = null;
  @JsonProperty("success")
  private Boolean success = null;
  /**
   **/
  public TicketNewResponse ticketId(Integer ticketId) {
    this.ticketId = ticketId;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("ticket_id")
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

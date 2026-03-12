package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.TicketCustomFieldDetails;
import io.swagger.model.TicketDetails;
import io.swagger.model.TicketPostDetails;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Ticket details")

public class ViewTicketResponse   {
  private Boolean success = null;
  private TicketDetails ticket = null;
  private TicketCustomFieldDetails ticketCustomFields = null;
  private TicketPostDetails ticketPosts = null;

  /**
   **/
  
  @Schema(required = true, description = "")
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
  
  @Schema(required = true, description = "")
  @JsonProperty("ticket")
  @NotNull
  public TicketDetails getTicket() {
    return ticket;
  }
  public void setTicket(TicketDetails ticket) {
    this.ticket = ticket;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("ticket_custom_fields")
  @NotNull
  public TicketCustomFieldDetails getTicketCustomFields() {
    return ticketCustomFields;
  }
  public void setTicketCustomFields(TicketCustomFieldDetails ticketCustomFields) {
    this.ticketCustomFields = ticketCustomFields;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("ticket_posts")
  @NotNull
  public TicketPostDetails getTicketPosts() {
    return ticketPosts;
  }
  public void setTicketPosts(TicketPostDetails ticketPosts) {
    this.ticketPosts = ticketPosts;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ViewTicketResponse viewTicketResponse = (ViewTicketResponse) o;
    return Objects.equals(success, viewTicketResponse.success) &&
        Objects.equals(ticket, viewTicketResponse.ticket) &&
        Objects.equals(ticketCustomFields, viewTicketResponse.ticketCustomFields) &&
        Objects.equals(ticketPosts, viewTicketResponse.ticketPosts);
  }

  @Override
  public int hashCode() {
    return Objects.hash(success, ticket, ticketCustomFields, ticketPosts);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ViewTicketResponse {\n");
    
    sb.append("    success: ").append(toIndentedString(success)).append("\n");
    sb.append("    ticket: ").append(toIndentedString(ticket)).append("\n");
    sb.append("    ticketCustomFields: ").append(toIndentedString(ticketCustomFields)).append("\n");
    sb.append("    ticketPosts: ").append(toIndentedString(ticketPosts)).append("\n");
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

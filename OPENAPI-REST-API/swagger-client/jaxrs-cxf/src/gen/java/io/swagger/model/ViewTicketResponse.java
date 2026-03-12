package io.swagger.model;

import io.swagger.model.TicketCustomFieldDetails;
import io.swagger.model.TicketDetails;
import io.swagger.model.TicketPostDetails;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;

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
  * Ticket details
 **/
@Schema(description="Ticket details")
public class ViewTicketResponse   {
  
  @Schema(required = true, description = "")
  private Boolean success = null;
  
  @Schema(required = true, description = "")
  private TicketDetails ticket = null;
  
  @Schema(description = "")
  private TicketCustomFieldDetails ticketCustomFields = null;
  
  @Schema(description = "")
  private TicketPostDetails ticketPosts = null;
 /**
   * Get success
   * @return success
  **/
  @JsonProperty("success")
  @NotNull
  public Boolean isSuccess() {
    return success;
  }

  public void setSuccess(Boolean success) {
    this.success = success;
  }

  public ViewTicketResponse success(Boolean success) {
    this.success = success;
    return this;
  }

 /**
   * Get ticket
   * @return ticket
  **/
  @JsonProperty("ticket")
  @NotNull
  public TicketDetails getTicket() {
    return ticket;
  }

  public void setTicket(TicketDetails ticket) {
    this.ticket = ticket;
  }

  public ViewTicketResponse ticket(TicketDetails ticket) {
    this.ticket = ticket;
    return this;
  }

 /**
   * Get ticketCustomFields
   * @return ticketCustomFields
  **/
  @JsonProperty("ticket_custom_fields")
  @NotNull
  public TicketCustomFieldDetails getTicketCustomFields() {
    return ticketCustomFields;
  }

  public void setTicketCustomFields(TicketCustomFieldDetails ticketCustomFields) {
    this.ticketCustomFields = ticketCustomFields;
  }

  public ViewTicketResponse ticketCustomFields(TicketCustomFieldDetails ticketCustomFields) {
    this.ticketCustomFields = ticketCustomFields;
    return this;
  }

 /**
   * Get ticketPosts
   * @return ticketPosts
  **/
  @JsonProperty("ticket_posts")
  @NotNull
  public TicketPostDetails getTicketPosts() {
    return ticketPosts;
  }

  public void setTicketPosts(TicketPostDetails ticketPosts) {
    this.ticketPosts = ticketPosts;
  }

  public ViewTicketResponse ticketPosts(TicketPostDetails ticketPosts) {
    this.ticketPosts = ticketPosts;
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

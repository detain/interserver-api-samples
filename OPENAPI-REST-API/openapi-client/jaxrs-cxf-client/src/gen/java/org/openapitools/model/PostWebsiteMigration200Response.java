package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class PostWebsiteMigration200Response  {
  
 /**
  * Confirmation message.
  */
  @ApiModelProperty(value = "Confirmation message.")

  private String text;

 /**
  * The support ticket ID created for tracking the migration. Use this with `/tickets/{id}` to check migration progress.
  */
  @ApiModelProperty(value = "The support ticket ID created for tracking the migration. Use this with `/tickets/{id}` to check migration progress.")

  private Integer ticket;
 /**
   * Confirmation message.
   * @return text
  **/
  @JsonProperty("text")
  public String getText() {
    return text;
  }

  public void setText(String text) {
    this.text = text;
  }

  public PostWebsiteMigration200Response text(String text) {
    this.text = text;
    return this;
  }

 /**
   * The support ticket ID created for tracking the migration. Use this with &#x60;/tickets/{id}&#x60; to check migration progress.
   * @return ticket
  **/
  @JsonProperty("ticket")
  public Integer getTicket() {
    return ticket;
  }

  public void setTicket(Integer ticket) {
    this.ticket = ticket;
  }

  public PostWebsiteMigration200Response ticket(Integer ticket) {
    this.ticket = ticket;
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
    PostWebsiteMigration200Response postWebsiteMigration200Response = (PostWebsiteMigration200Response) o;
    return Objects.equals(this.text, postWebsiteMigration200Response.text) &&
        Objects.equals(this.ticket, postWebsiteMigration200Response.ticket);
  }

  @Override
  public int hashCode() {
    return Objects.hash(text, ticket);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class PostWebsiteMigration200Response {\n");
    
    sb.append("    text: ").append(toIndentedString(text)).append("\n");
    sb.append("    ticket: ").append(toIndentedString(ticket)).append("\n");
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


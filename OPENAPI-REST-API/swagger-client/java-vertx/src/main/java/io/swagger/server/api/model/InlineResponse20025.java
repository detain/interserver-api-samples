package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * InlineResponse20025
 */




public class InlineResponse20025   {
  private String text = null;

  private Integer ticket = null;

  public InlineResponse20025 text(String text) {
    this.text = text;
    return this;
  }

  /**
   * Confirmation message.
   * @return text
   **/
    public String getText() {
    return text;
  }

  public void setText(String text) {
    this.text = text;
  }

  public InlineResponse20025 ticket(Integer ticket) {
    this.ticket = ticket;
    return this;
  }

  /**
   * The support ticket ID created for tracking the migration. Use this with `/tickets/{id}` to check migration progress.
   * @return ticket
   **/
    public Integer getTicket() {
    return ticket;
  }

  public void setTicket(Integer ticket) {
    this.ticket = ticket;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InlineResponse20025 inlineResponse20025 = (InlineResponse20025) o;
    return Objects.equals(this.text, inlineResponse20025.text) &&
        Objects.equals(this.ticket, inlineResponse20025.ticket);
  }

  @Override
  public int hashCode() {
    return Objects.hash(text, ticket);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse20025 {\n");
    
    sb.append("    text: ").append(toIndentedString(text)).append("\n");
    sb.append("    ticket: ").append(toIndentedString(ticket)).append("\n");
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

package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * Ticket statuses.
 */




public class HomeTicketStatus   {
  private Integer open = null;

  private Integer onHold = null;

  public HomeTicketStatus open(Integer open) {
    this.open = open;
    return this;
  }

  /**
   * Count of open tickets.
   * @return open
   **/
    public Integer getOpen() {
    return open;
  }

  public void setOpen(Integer open) {
    this.open = open;
  }

  public HomeTicketStatus onHold(Integer onHold) {
    this.onHold = onHold;
    return this;
  }

  /**
   * Count of tickets on hold.
   * @return onHold
   **/
    public Integer getOnHold() {
    return onHold;
  }

  public void setOnHold(Integer onHold) {
    this.onHold = onHold;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    HomeTicketStatus homeTicketStatus = (HomeTicketStatus) o;
    return Objects.equals(this.open, homeTicketStatus.open) &&
        Objects.equals(this.onHold, homeTicketStatus.onHold);
  }

  @Override
  public int hashCode() {
    return Objects.hash(open, onHold);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HomeTicketStatus {\n");
    
    sb.append("    open: ").append(toIndentedString(open)).append("\n");
    sb.append("    onHold: ").append(toIndentedString(onHold)).append("\n");
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

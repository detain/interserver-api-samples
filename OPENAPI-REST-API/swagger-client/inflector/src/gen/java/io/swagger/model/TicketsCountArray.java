package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;





public class TicketsCountArray   {
  @JsonProperty("Open")
  private Integer open = null;
  @JsonProperty("On Hold")
  private Integer onHold = null;
  @JsonProperty("Closed")
  private Integer closed = null;
  /**
   **/
  public TicketsCountArray open(Integer open) {
    this.open = open;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("Open")
  public Integer getOpen() {
    return open;
  }
  public void setOpen(Integer open) {
    this.open = open;
  }

  /**
   **/
  public TicketsCountArray onHold(Integer onHold) {
    this.onHold = onHold;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("On Hold")
  public Integer getOnHold() {
    return onHold;
  }
  public void setOnHold(Integer onHold) {
    this.onHold = onHold;
  }

  /**
   **/
  public TicketsCountArray closed(Integer closed) {
    this.closed = closed;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("Closed")
  public Integer getClosed() {
    return closed;
  }
  public void setClosed(Integer closed) {
    this.closed = closed;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    TicketsCountArray ticketsCountArray = (TicketsCountArray) o;
    return Objects.equals(open, ticketsCountArray.open) &&
        Objects.equals(onHold, ticketsCountArray.onHold) &&
        Objects.equals(closed, ticketsCountArray.closed);
  }

  @Override
  public int hashCode() {
    return Objects.hash(open, onHold, closed);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class TicketsCountArray {\n");
    sb.append("    open: ").append(toIndentedString(open)).append("\n");
    sb.append("    onHold: ").append(toIndentedString(onHold)).append("\n");
    sb.append("    closed: ").append(toIndentedString(closed)).append("\n");
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

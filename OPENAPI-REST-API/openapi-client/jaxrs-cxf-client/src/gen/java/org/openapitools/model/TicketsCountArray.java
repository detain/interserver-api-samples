package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class TicketsCountArray  {
  
  @ApiModelProperty(value = "")

  private Integer open;

  @ApiModelProperty(value = "")

  private Integer onHold;

  @ApiModelProperty(value = "")

  private Integer closed;
 /**
   * Get open
   * @return open
  **/
  @JsonProperty("Open")
  public Integer getOpen() {
    return open;
  }

  public void setOpen(Integer open) {
    this.open = open;
  }

  public TicketsCountArray open(Integer open) {
    this.open = open;
    return this;
  }

 /**
   * Get onHold
   * @return onHold
  **/
  @JsonProperty("On Hold")
  public Integer getOnHold() {
    return onHold;
  }

  public void setOnHold(Integer onHold) {
    this.onHold = onHold;
  }

  public TicketsCountArray onHold(Integer onHold) {
    this.onHold = onHold;
    return this;
  }

 /**
   * Get closed
   * @return closed
  **/
  @JsonProperty("Closed")
  public Integer getClosed() {
    return closed;
  }

  public void setClosed(Integer closed) {
    this.closed = closed;
  }

  public TicketsCountArray closed(Integer closed) {
    this.closed = closed;
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
    TicketsCountArray ticketsCountArray = (TicketsCountArray) o;
    return Objects.equals(this.open, ticketsCountArray.open) &&
        Objects.equals(this.onHold, ticketsCountArray.onHold) &&
        Objects.equals(this.closed, ticketsCountArray.closed);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}


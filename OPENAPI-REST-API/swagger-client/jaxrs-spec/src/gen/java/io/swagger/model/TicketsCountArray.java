package io.swagger.model;

import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class TicketsCountArray   {

  private @Valid Integer open = null;

  private @Valid Integer onHold = null;

  private @Valid Integer closed = null;

  /**
   **/
  public TicketsCountArray open(Integer open) {
    this.open = open;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("Open")
  @NotNull

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

  
  @ApiModelProperty(value = "")
  @JsonProperty("On Hold")
  @NotNull

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

  
  @ApiModelProperty(value = "")
  @JsonProperty("Closed")
  @NotNull

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

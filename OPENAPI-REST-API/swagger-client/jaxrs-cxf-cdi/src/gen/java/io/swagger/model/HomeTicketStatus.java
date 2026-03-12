package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
/**
 * Ticket statuses.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "Ticket statuses.")

public class HomeTicketStatus   {
  private Integer open = null;
  private Integer onHold = null;

  /**
   * Count of open tickets.
   **/
  public HomeTicketStatus open(Integer open) {
    this.open = open;
    return this;
  }

  
  
  @Schema(example = "4", description = "Count of open tickets.")
  @JsonProperty("Open")
  @NotNull
  public Integer getOpen() {
    return open;
  }
  public void setOpen(Integer open) {
    this.open = open;
  }

  /**
   * Count of tickets on hold.
   **/
  public HomeTicketStatus onHold(Integer onHold) {
    this.onHold = onHold;
    return this;
  }

  
  
  @Schema(example = "5", description = "Count of tickets on hold.")
  @JsonProperty("On Hold")
  @NotNull
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
    return Objects.equals(open, homeTicketStatus.open) &&
        Objects.equals(onHold, homeTicketStatus.onHold);
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

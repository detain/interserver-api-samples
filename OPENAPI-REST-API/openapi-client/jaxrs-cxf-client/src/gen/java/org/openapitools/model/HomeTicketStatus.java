package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Ticket statuses.
 */
@ApiModel(description="Ticket statuses.")

public class HomeTicketStatus  {
  
 /**
  * Count of open tickets.
  */
  @ApiModelProperty(example = "4", value = "Count of open tickets.")

  private Integer open;

 /**
  * Count of tickets on hold.
  */
  @ApiModelProperty(example = "5", value = "Count of tickets on hold.")

  private Integer onHold;
 /**
   * Count of open tickets.
   * @return open
  **/
  @JsonProperty("Open")
  public Integer getOpen() {
    return open;
  }

  public void setOpen(Integer open) {
    this.open = open;
  }

  public HomeTicketStatus open(Integer open) {
    this.open = open;
    return this;
  }

 /**
   * Count of tickets on hold.
   * @return onHold
  **/
  @JsonProperty("On Hold")
  public Integer getOnHold() {
    return onHold;
  }

  public void setOnHold(Integer onHold) {
    this.onHold = onHold;
  }

  public HomeTicketStatus onHold(Integer onHold) {
    this.onHold = onHold;
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}


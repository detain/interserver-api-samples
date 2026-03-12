package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;

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
  * Ticket statuses.
 **/
@Schema(description="Ticket statuses.")
public class HomeTicketStatus   {
  
  @Schema(example = "4", description = "Count of open tickets.")
 /**
   * Count of open tickets.  
  **/
  private Integer open = null;
  
  @Schema(example = "5", description = "Count of tickets on hold.")
 /**
   * Count of tickets on hold.  
  **/
  private Integer onHold = null;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

package io.swagger.model;

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

public class TicketsCountArray   {
  
  @Schema(description = "")
  private Integer open = null;
  
  @Schema(description = "")
  private Integer onHold = null;
  
  @Schema(description = "")
  private Integer closed = null;
 /**
   * Get open
   * @return open
  **/
  @JsonProperty("Open")
  @NotNull
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
  @NotNull
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
  @NotNull
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

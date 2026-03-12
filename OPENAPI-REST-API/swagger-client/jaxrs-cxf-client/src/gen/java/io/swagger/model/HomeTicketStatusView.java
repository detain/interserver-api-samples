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
  * Ticket statuses with view numbers.
 **/
@Schema(description="Ticket statuses with view numbers.")
public class HomeTicketStatusView   {
  
  @Schema(example = "Open", description = "Status corresponding to view number 4.")
 /**
   * Status corresponding to view number 4.  
  **/
  private String _4 = null;
  
  @Schema(example = "On Hold", description = "Status corresponding to view number 5.")
 /**
   * Status corresponding to view number 5.  
  **/
  private String _5 = null;
  
  @Schema(example = "Closed", description = "Status corresponding to view number 6.")
 /**
   * Status corresponding to view number 6.  
  **/
  private String _6 = null;
 /**
   * Status corresponding to view number 4.
   * @return _4
  **/
  @JsonProperty("4")
  public String get4() {
    return _4;
  }

  public void set4(String _4) {
    this._4 = _4;
  }

  public HomeTicketStatusView _4(String _4) {
    this._4 = _4;
    return this;
  }

 /**
   * Status corresponding to view number 5.
   * @return _5
  **/
  @JsonProperty("5")
  public String get5() {
    return _5;
  }

  public void set5(String _5) {
    this._5 = _5;
  }

  public HomeTicketStatusView _5(String _5) {
    this._5 = _5;
    return this;
  }

 /**
   * Status corresponding to view number 6.
   * @return _6
  **/
  @JsonProperty("6")
  public String get6() {
    return _6;
  }

  public void set6(String _6) {
    this._6 = _6;
  }

  public HomeTicketStatusView _6(String _6) {
    this._6 = _6;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HomeTicketStatusView {\n");
    
    sb.append("    _4: ").append(toIndentedString(_4)).append("\n");
    sb.append("    _5: ").append(toIndentedString(_5)).append("\n");
    sb.append("    _6: ").append(toIndentedString(_6)).append("\n");
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

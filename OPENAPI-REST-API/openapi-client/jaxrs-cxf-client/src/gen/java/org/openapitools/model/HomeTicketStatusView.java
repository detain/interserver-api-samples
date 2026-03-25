package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Ticket statuses with view numbers.
 */
@ApiModel(description="Ticket statuses with view numbers.")

public class HomeTicketStatusView  {
  
 /**
  * Status corresponding to view number 4.
  */
  @ApiModelProperty(example = "Open", value = "Status corresponding to view number 4.")

  private String _4;

 /**
  * Status corresponding to view number 5.
  */
  @ApiModelProperty(example = "On Hold", value = "Status corresponding to view number 5.")

  private String _5;

 /**
  * Status corresponding to view number 6.
  */
  @ApiModelProperty(example = "Closed", value = "Status corresponding to view number 6.")

  private String _6;
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    HomeTicketStatusView homeTicketStatusView = (HomeTicketStatusView) o;
    return Objects.equals(this._4, homeTicketStatusView._4) &&
        Objects.equals(this._5, homeTicketStatusView._5) &&
        Objects.equals(this._6, homeTicketStatusView._6);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_4, _5, _6);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}


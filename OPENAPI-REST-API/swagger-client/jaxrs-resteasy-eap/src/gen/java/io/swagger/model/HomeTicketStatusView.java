package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Ticket statuses with view numbers.")

public class HomeTicketStatusView   {
  private String _4 = null;
  private String _5 = null;
  private String _6 = null;

  /**
   * Status corresponding to view number 4.
   **/
  
  @Schema(example = "Open", description = "Status corresponding to view number 4.")
  @JsonProperty("4")
  @NotNull
  public String get4() {
    return _4;
  }
  public void set4(String _4) {
    this._4 = _4;
  }

  /**
   * Status corresponding to view number 5.
   **/
  
  @Schema(example = "On Hold", description = "Status corresponding to view number 5.")
  @JsonProperty("5")
  @NotNull
  public String get5() {
    return _5;
  }
  public void set5(String _5) {
    this._5 = _5;
  }

  /**
   * Status corresponding to view number 6.
   **/
  
  @Schema(example = "Closed", description = "Status corresponding to view number 6.")
  @JsonProperty("6")
  @NotNull
  public String get6() {
    return _6;
  }
  public void set6(String _6) {
    this._6 = _6;
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
    return Objects.equals(_4, homeTicketStatusView._4) &&
        Objects.equals(_5, homeTicketStatusView._5) &&
        Objects.equals(_6, homeTicketStatusView._6);
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

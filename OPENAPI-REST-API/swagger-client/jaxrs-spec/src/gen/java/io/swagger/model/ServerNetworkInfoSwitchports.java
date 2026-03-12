package io.swagger.model;

import io.swagger.model.ServerSwitchport;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Object containing switchport information.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Object containing switchport information.")

public class ServerNetworkInfoSwitchports   {

  private @Valid ServerSwitchport _10414 = null;

  /**
   **/
  public ServerNetworkInfoSwitchports _10414(ServerSwitchport _10414) {
    this._10414 = _10414;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("10414")
  @NotNull

  public ServerSwitchport get10414() {
    return _10414;
  }
  public void set10414(ServerSwitchport _10414) {
    this._10414 = _10414;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServerNetworkInfoSwitchports serverNetworkInfoSwitchports = (ServerNetworkInfoSwitchports) o;
    return Objects.equals(_10414, serverNetworkInfoSwitchports._10414);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_10414);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerNetworkInfoSwitchports {\n");
    
    sb.append("    _10414: ").append(toIndentedString(_10414)).append("\n");
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

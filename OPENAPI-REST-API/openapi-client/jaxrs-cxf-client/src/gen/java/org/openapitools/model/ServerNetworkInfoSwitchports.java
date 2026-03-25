package org.openapitools.model;

import org.openapitools.model.ServerSwitchport;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Object containing switchport information.
 */
@ApiModel(description="Object containing switchport information.")

public class ServerNetworkInfoSwitchports  {
  
  @ApiModelProperty(required = true, value = "")

  private ServerSwitchport _10414;
 /**
   * Get _10414
   * @return _10414
  **/
  @JsonProperty("10414")
  public ServerSwitchport get10414() {
    return _10414;
  }

  public void set10414(ServerSwitchport _10414) {
    this._10414 = _10414;
  }

  public ServerNetworkInfoSwitchports _10414(ServerSwitchport _10414) {
    this._10414 = _10414;
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
    ServerNetworkInfoSwitchports serverNetworkInfoSwitchports = (ServerNetworkInfoSwitchports) o;
    return Objects.equals(this._10414, serverNetworkInfoSwitchports._10414);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}


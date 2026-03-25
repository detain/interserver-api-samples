package org.openapitools.model;

import org.openapitools.model.ServerAsset;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Object containing asset information.
 */
@ApiModel(description="Object containing asset information.")

public class ServerNetworkInfoAssets  {
  
  @ApiModelProperty(required = true, value = "")

  private ServerAsset _3497;
 /**
   * Get _3497
   * @return _3497
  **/
  @JsonProperty("3497")
  public ServerAsset get3497() {
    return _3497;
  }

  public void set3497(ServerAsset _3497) {
    this._3497 = _3497;
  }

  public ServerNetworkInfoAssets _3497(ServerAsset _3497) {
    this._3497 = _3497;
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
    ServerNetworkInfoAssets serverNetworkInfoAssets = (ServerNetworkInfoAssets) o;
    return Objects.equals(this._3497, serverNetworkInfoAssets._3497);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_3497);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerNetworkInfoAssets {\n");
    
    sb.append("    _3497: ").append(toIndentedString(_3497)).append("\n");
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


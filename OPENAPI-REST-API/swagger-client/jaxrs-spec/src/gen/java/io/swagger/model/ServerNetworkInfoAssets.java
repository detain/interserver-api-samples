package io.swagger.model;

import io.swagger.model.ServerAsset;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Object containing asset information.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Object containing asset information.")

public class ServerNetworkInfoAssets   {

  private @Valid ServerAsset _3497 = null;

  /**
   **/
  public ServerNetworkInfoAssets _3497(ServerAsset _3497) {
    this._3497 = _3497;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("3497")
  @NotNull

  public ServerAsset get3497() {
    return _3497;
  }
  public void set3497(ServerAsset _3497) {
    this._3497 = _3497;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServerNetworkInfoAssets serverNetworkInfoAssets = (ServerNetworkInfoAssets) o;
    return Objects.equals(_3497, serverNetworkInfoAssets._3497);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.ServerOrderBandwidth;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * Bandwidth options for the server order.
 **/
@Schema(description = "Bandwidth options for the server order.")


public class ServerOrderBandwidthLi   {
  @JsonProperty("15")
  private ServerOrderBandwidth _15 = null;
  /**
   **/
  public ServerOrderBandwidthLi _15(ServerOrderBandwidth _15) {
    this._15 = _15;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("15")
  public ServerOrderBandwidth get15() {
    return _15;
  }
  public void set15(ServerOrderBandwidth _15) {
    this._15 = _15;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServerOrderBandwidthLi serverOrderBandwidthLi = (ServerOrderBandwidthLi) o;
    return Objects.equals(_15, serverOrderBandwidthLi._15);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_15);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerOrderBandwidthLi {\n");
    sb.append("    _15: ").append(toIndentedString(_15)).append("\n");
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

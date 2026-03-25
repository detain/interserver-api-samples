package org.openapitools.model;

import org.openapitools.model.ServerOrderControlPanel;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Control Panel options for the server order.
 */
@ApiModel(description="Control Panel options for the server order.")

public class ServerOrderCpLi  {
  
  @ApiModelProperty(value = "")

  private ServerOrderControlPanel _9;
 /**
   * Get _9
   * @return _9
  **/
  @JsonProperty("9")
  public ServerOrderControlPanel get9() {
    return _9;
  }

  public void set9(ServerOrderControlPanel _9) {
    this._9 = _9;
  }

  public ServerOrderCpLi _9(ServerOrderControlPanel _9) {
    this._9 = _9;
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
    ServerOrderCpLi serverOrderCpLi = (ServerOrderCpLi) o;
    return Objects.equals(this._9, serverOrderCpLi._9);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_9);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerOrderCpLi {\n");
    
    sb.append("    _9: ").append(toIndentedString(_9)).append("\n");
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


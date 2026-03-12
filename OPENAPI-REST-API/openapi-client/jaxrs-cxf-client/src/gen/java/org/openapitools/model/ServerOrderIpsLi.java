package org.openapitools.model;

import org.openapitools.model.ServerOrderIP;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * IP options for the server order.
 */
@ApiModel(description="IP options for the server order.")

public class ServerOrderIpsLi  {
  
  @ApiModelProperty(value = "")

  private ServerOrderIP _9;
 /**
   * Get _9
   * @return _9
  **/
  @JsonProperty("9")
  public ServerOrderIP get9() {
    return _9;
  }

  public void set9(ServerOrderIP _9) {
    this._9 = _9;
  }

  public ServerOrderIpsLi _9(ServerOrderIP _9) {
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
    ServerOrderIpsLi serverOrderIpsLi = (ServerOrderIpsLi) o;
    return Objects.equals(this._9, serverOrderIpsLi._9);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_9);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerOrderIpsLi {\n");
    
    sb.append("    _9: ").append(toIndentedString(_9)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}


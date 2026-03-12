package io.swagger.model;

import io.swagger.model.ServerOrderIP;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * IP options for the server order.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "IP options for the server order.")

public class ServerOrderIpsLi   {

  private @Valid ServerOrderIP _9 = null;

  /**
   **/
  public ServerOrderIpsLi _9(ServerOrderIP _9) {
    this._9 = _9;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("9")
  @NotNull

  public ServerOrderIP get9() {
    return _9;
  }
  public void set9(ServerOrderIP _9) {
    this._9 = _9;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServerOrderIpsLi serverOrderIpsLi = (ServerOrderIpsLi) o;
    return Objects.equals(_9, serverOrderIpsLi._9);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

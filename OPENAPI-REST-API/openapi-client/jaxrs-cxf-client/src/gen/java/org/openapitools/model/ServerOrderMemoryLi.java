package org.openapitools.model;

import org.openapitools.model.ServerOrderMemoryLi254;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Memory options for the server order.
 */
@ApiModel(description="Memory options for the server order.")

public class ServerOrderMemoryLi  {
  
  @ApiModelProperty(value = "")

  private ServerOrderMemoryLi254 _254;
 /**
   * Get _254
   * @return _254
  **/
  @JsonProperty("254")
  public ServerOrderMemoryLi254 get254() {
    return _254;
  }

  public void set254(ServerOrderMemoryLi254 _254) {
    this._254 = _254;
  }

  public ServerOrderMemoryLi _254(ServerOrderMemoryLi254 _254) {
    this._254 = _254;
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
    ServerOrderMemoryLi serverOrderMemoryLi = (ServerOrderMemoryLi) o;
    return Objects.equals(this._254, serverOrderMemoryLi._254);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_254);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerOrderMemoryLi {\n");
    
    sb.append("    _254: ").append(toIndentedString(_254)).append("\n");
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


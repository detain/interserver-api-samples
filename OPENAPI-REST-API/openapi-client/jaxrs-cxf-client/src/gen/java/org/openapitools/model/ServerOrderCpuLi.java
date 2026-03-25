package org.openapitools.model;

import org.openapitools.model.ServerOrderCPU;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * CPU options for the server order.
 */
@ApiModel(description="CPU options for the server order.")

public class ServerOrderCpuLi  {
  
  @ApiModelProperty(value = "")

  private ServerOrderCPU _254;
 /**
   * Get _254
   * @return _254
  **/
  @JsonProperty("254")
  public ServerOrderCPU get254() {
    return _254;
  }

  public void set254(ServerOrderCPU _254) {
    this._254 = _254;
  }

  public ServerOrderCpuLi _254(ServerOrderCPU _254) {
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
    ServerOrderCpuLi serverOrderCpuLi = (ServerOrderCpuLi) o;
    return Objects.equals(this._254, serverOrderCpuLi._254);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_254);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerOrderCpuLi {\n");
    
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


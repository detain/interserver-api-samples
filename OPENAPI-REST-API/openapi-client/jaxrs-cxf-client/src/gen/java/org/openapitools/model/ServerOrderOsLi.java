package org.openapitools.model;

import org.openapitools.model.ServerOrderOS;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Operating System options for the server order.
 */
@ApiModel(description="Operating System options for the server order.")

public class ServerOrderOsLi  {
  
  @ApiModelProperty(value = "")

  private ServerOrderOS _51;
 /**
   * Get _51
   * @return _51
  **/
  @JsonProperty("51")
  public ServerOrderOS get51() {
    return _51;
  }

  public void set51(ServerOrderOS _51) {
    this._51 = _51;
  }

  public ServerOrderOsLi _51(ServerOrderOS _51) {
    this._51 = _51;
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
    ServerOrderOsLi serverOrderOsLi = (ServerOrderOsLi) o;
    return Objects.equals(this._51, serverOrderOsLi._51);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_51);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerOrderOsLi {\n");
    
    sb.append("    _51: ").append(toIndentedString(_51)).append("\n");
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


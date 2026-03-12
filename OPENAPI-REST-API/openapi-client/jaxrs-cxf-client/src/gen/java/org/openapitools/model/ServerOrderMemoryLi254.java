package org.openapitools.model;

import org.openapitools.model.ServerOrderMemory;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class ServerOrderMemoryLi254  {
  
  @ApiModelProperty(value = "")

  private ServerOrderMemory _65;
 /**
   * Get _65
   * @return _65
  **/
  @JsonProperty("65")
  public ServerOrderMemory get65() {
    return _65;
  }

  public void set65(ServerOrderMemory _65) {
    this._65 = _65;
  }

  public ServerOrderMemoryLi254 _65(ServerOrderMemory _65) {
    this._65 = _65;
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
    ServerOrderMemoryLi254 serverOrderMemoryLi254 = (ServerOrderMemoryLi254) o;
    return Objects.equals(this._65, serverOrderMemoryLi254._65);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_65);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerOrderMemoryLi254 {\n");
    
    sb.append("    _65: ").append(toIndentedString(_65)).append("\n");
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


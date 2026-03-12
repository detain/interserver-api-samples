package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.ServerOrderMemory;
import javax.validation.Valid;
import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;



public class ServerOrderMemoryLi254   {
  private ServerOrderMemory _65 = null;

  /**
   **/
  public ServerOrderMemoryLi254 _65(ServerOrderMemory _65) {
    this._65 = _65;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("65")
  @NotNull
  @Valid
  public ServerOrderMemory get65() {
    return _65;
  }
  public void set65(ServerOrderMemory _65) {
    this._65 = _65;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServerOrderMemoryLi254 serverOrderMemoryLi254 = (ServerOrderMemoryLi254) o;
    return Objects.equals(_65, serverOrderMemoryLi254._65);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

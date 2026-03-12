package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.ServerOrderMemoryLi254;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Memory options for the server order.")

public class ServerOrderMemoryLi   {
  private ServerOrderMemoryLi254 _254 = null;

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("254")
  @NotNull
  public ServerOrderMemoryLi254 get254() {
    return _254;
  }
  public void set254(ServerOrderMemoryLi254 _254) {
    this._254 = _254;
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
    return Objects.equals(_254, serverOrderMemoryLi._254);
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.ServerOrderOS;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Operating System options for the server order.")

public class ServerOrderOsLi   {
  private ServerOrderOS _51 = null;

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("51")
  @NotNull
  public ServerOrderOS get51() {
    return _51;
  }
  public void set51(ServerOrderOS _51) {
    this._51 = _51;
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
    return Objects.equals(_51, serverOrderOsLi._51);
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.ServerOrderOS;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * Operating System options for the server order.
 **/
@Schema(description = "Operating System options for the server order.")


public class ServerOrderOsLi   {
  @JsonProperty("51")
  private ServerOrderOS _51 = null;
  /**
   **/
  public ServerOrderOsLi _51(ServerOrderOS _51) {
    this._51 = _51;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("51")
  public ServerOrderOS get51() {
    return _51;
  }
  public void set51(ServerOrderOS _51) {
    this._51 = _51;
  }


  @Override
  public boolean equals(java.lang.Object o) {
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

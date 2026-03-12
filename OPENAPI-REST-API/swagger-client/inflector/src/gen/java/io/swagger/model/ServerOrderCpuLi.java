package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.ServerOrderCPU;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * CPU options for the server order.
 **/
@Schema(description = "CPU options for the server order.")


public class ServerOrderCpuLi   {
  @JsonProperty("254")
  private ServerOrderCPU _254 = null;
  /**
   **/
  public ServerOrderCpuLi _254(ServerOrderCPU _254) {
    this._254 = _254;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("254")
  public ServerOrderCPU get254() {
    return _254;
  }
  public void set254(ServerOrderCPU _254) {
    this._254 = _254;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServerOrderCpuLi serverOrderCpuLi = (ServerOrderCpuLi) o;
    return Objects.equals(_254, serverOrderCpuLi._254);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

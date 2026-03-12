package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.ServerOrderControlPanel;
import io.swagger.v3.oas.annotations.media.Schema;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * Control Panel options for the server order.
 */
@Schema(description = "Control Panel options for the server order.")
@Validated
@Introspected

public class ServerOrderCpLi   {
  @JsonProperty("9")
  private ServerOrderControlPanel _9 = null;

  public ServerOrderCpLi _9(ServerOrderControlPanel _9) {
    this._9 = _9;
    return this;
  }

  /**
   * Get _9
   * @return _9
  **/
  @Schema(description = "")
  @NotNull

  @Valid
  public ServerOrderControlPanel get9() {
    return _9;
  }

  public void set9(ServerOrderControlPanel _9) {
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
    ServerOrderCpLi serverOrderCpLi = (ServerOrderCpLi) o;
    return Objects.equals(this._9, serverOrderCpLi._9);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_9);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerOrderCpLi {\n");
    
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

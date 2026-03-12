package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="IPMI Power command for servers")

public class ServerIpmiPowerRequest   {
  private Integer asset = null;  /**
   * The power action to send to the ipmi controller.
   */
  public enum ActionEnum {
    CYCLE("cycle"),
    RESET("reset"),
    ON("on"),
    OFF("off"),
    SOFT("soft");
    private String value;

    ActionEnum(String value) {
      this.value = value;
    }

    @Override
    @JsonValue
    public String toString() {
      return String.valueOf(value);
    }
  }
  private ActionEnum action = null;

  /**
   * The Asset ID
   **/
  
  @Schema(example = "5432", description = "The Asset ID")
  @JsonProperty("asset")
  @NotNull
  public Integer getAsset() {
    return asset;
  }
  public void setAsset(Integer asset) {
    this.asset = asset;
  }

  /**
   * The power action to send to the ipmi controller.
   **/
  
  @Schema(example = "on", required = true, description = "The power action to send to the ipmi controller.")
  @JsonProperty("action")
  @NotNull
  public ActionEnum getAction() {
    return action;
  }
  public void setAction(ActionEnum action) {
    this.action = action;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServerIpmiPowerRequest serverIpmiPowerRequest = (ServerIpmiPowerRequest) o;
    return Objects.equals(asset, serverIpmiPowerRequest.asset) &&
        Objects.equals(action, serverIpmiPowerRequest.action);
  }

  @Override
  public int hashCode() {
    return Objects.hash(asset, action);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerIpmiPowerRequest {\n");
    
    sb.append("    asset: ").append(toIndentedString(asset)).append("\n");
    sb.append("    action: ").append(toIndentedString(action)).append("\n");
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

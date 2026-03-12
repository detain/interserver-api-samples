package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * IPMI Power command for servers
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "IPMI Power command for servers")

public class ServerIpmiPowerRequest   {

  private @Valid Integer asset = null;

public enum ActionEnum {

    CYCLE(String.valueOf("cycle")), RESET(String.valueOf("reset")), ON(String.valueOf("on")), OFF(String.valueOf("off")), SOFT(String.valueOf("soft"));


    private String value;

    ActionEnum (String v) {
        value = v;
    }

    public String value() {
        return value;
    }

    @Override
    @JsonValue
    public String toString() {
        return String.valueOf(value);
    }

    @JsonCreator
    public static ActionEnum fromValue(String v) {
        for (ActionEnum b : ActionEnum.values()) {
            if (String.valueOf(b.value).equals(v)) {
                return b;
            }
        }
        return null;
    }
}
  private @Valid ActionEnum action = null;

  /**
   * The Asset ID
   **/
  public ServerIpmiPowerRequest asset(Integer asset) {
    this.asset = asset;
    return this;
  }

  
  @ApiModelProperty(example = "5432", value = "The Asset ID")
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
  public ServerIpmiPowerRequest action(ActionEnum action) {
    this.action = action;
    return this;
  }

  
  @ApiModelProperty(example = "on", required = true, value = "The power action to send to the ipmi controller.")
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

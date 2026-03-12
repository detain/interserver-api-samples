package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
/**
 * IPMI Power command for servers
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "IPMI Power command for servers")

public class ServerIpmiPowerRequest   {
  private Integer asset = null;
@XmlType(name="ActionEnum")
@XmlEnum(String.class)
public enum ActionEnum {

    @XmlEnumValue("cycle") CYCLE(String.valueOf("cycle")), @XmlEnumValue("reset") RESET(String.valueOf("reset")), @XmlEnumValue("on") ON(String.valueOf("on")), @XmlEnumValue("off") OFF(String.valueOf("off")), @XmlEnumValue("soft") SOFT(String.valueOf("soft"));


    private String value;

    ActionEnum (String v) {
        value = v;
    }

    public String value() {
        return value;
    }

    @Override
    public String toString() {
        return String.valueOf(value);
    }

    public static ActionEnum fromValue(String v) {
        for (ActionEnum b : ActionEnum.values()) {
            if (String.valueOf(b.value).equals(v)) {
                return b;
            }
        }
        return null;
    }
}
  private ActionEnum action = null;

  /**
   * The Asset ID
   **/
  public ServerIpmiPowerRequest asset(Integer asset) {
    this.asset = asset;
    return this;
  }

  
  
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
  public ServerIpmiPowerRequest action(ActionEnum action) {
    this.action = action;
    return this;
  }

  
  
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

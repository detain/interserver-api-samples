package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonCreator;

/**
  * IPMI Power command for servers
 **/
@Schema(description="IPMI Power command for servers")
public class ServerIpmiPowerRequest   {
  
  @Schema(example = "5432", description = "The Asset ID")
 /**
   * The Asset ID  
  **/
  private Integer asset = null;
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
    @JsonValue
    public String getValue() {
      return value;
    }

    @Override
    public String toString() {
      return String.valueOf(value);
    }
    @JsonCreator
    public static ActionEnum fromValue(String text) {
      for (ActionEnum b : ActionEnum.values()) {
        if (String.valueOf(b.value).equals(text)) {
          return b;
        }
      }
      return null;
    }
  }  
  @Schema(example = "on", required = true, description = "The power action to send to the ipmi controller.")
 /**
   * The power action to send to the ipmi controller.  
  **/
  private ActionEnum action = null;
 /**
   * The Asset ID
   * @return asset
  **/
  @JsonProperty("asset")
  @NotNull
  public Integer getAsset() {
    return asset;
  }

  public void setAsset(Integer asset) {
    this.asset = asset;
  }

  public ServerIpmiPowerRequest asset(Integer asset) {
    this.asset = asset;
    return this;
  }

 /**
   * The power action to send to the ipmi controller.
   * @return action
  **/
  @JsonProperty("action")
  @NotNull
  public String getAction() {
    if (action == null) {
      return null;
    }
    return action.getValue();
  }

  public void setAction(ActionEnum action) {
    this.action = action;
  }

  public ServerIpmiPowerRequest action(ActionEnum action) {
    this.action = action;
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

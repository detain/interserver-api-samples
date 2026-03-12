package io.swagger.model;

import io.swagger.model.ServerSwitchport;
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
  * Object containing switchport information.
 **/
@Schema(description="Object containing switchport information.")
public class ServerNetworkInfoSwitchports   {
  
  @Schema(required = true, description = "")
  private ServerSwitchport _10414 = null;
 /**
   * Get _10414
   * @return _10414
  **/
  @JsonProperty("10414")
  @NotNull
  public ServerSwitchport get10414() {
    return _10414;
  }

  public void set10414(ServerSwitchport _10414) {
    this._10414 = _10414;
  }

  public ServerNetworkInfoSwitchports _10414(ServerSwitchport _10414) {
    this._10414 = _10414;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerNetworkInfoSwitchports {\n");
    
    sb.append("    _10414: ").append(toIndentedString(_10414)).append("\n");
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

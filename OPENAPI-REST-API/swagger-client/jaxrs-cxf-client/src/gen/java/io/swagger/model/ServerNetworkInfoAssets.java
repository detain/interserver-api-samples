package io.swagger.model;

import io.swagger.model.ServerAsset;
import io.swagger.v3.oas.annotations.media.Schema;

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
  * Object containing asset information.
 **/
@Schema(description="Object containing asset information.")
public class ServerNetworkInfoAssets   {
  
  @Schema(required = true, description = "")
  private ServerAsset _3497 = null;
 /**
   * Get _3497
   * @return _3497
  **/
  @JsonProperty("3497")
  public ServerAsset get3497() {
    return _3497;
  }

  public void set3497(ServerAsset _3497) {
    this._3497 = _3497;
  }

  public ServerNetworkInfoAssets _3497(ServerAsset _3497) {
    this._3497 = _3497;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerNetworkInfoAssets {\n");
    
    sb.append("    _3497: ").append(toIndentedString(_3497)).append("\n");
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

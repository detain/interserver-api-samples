package io.swagger.model;

import io.swagger.model.ServerOrderBandwidth;
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
  * Bandwidth options for the server order.
 **/
@Schema(description="Bandwidth options for the server order.")
public class ServerOrderBandwidthLi   {
  
  @Schema(description = "")
  private ServerOrderBandwidth _15 = null;
 /**
   * Get _15
   * @return _15
  **/
  @JsonProperty("15")
  public ServerOrderBandwidth get15() {
    return _15;
  }

  public void set15(ServerOrderBandwidth _15) {
    this._15 = _15;
  }

  public ServerOrderBandwidthLi _15(ServerOrderBandwidth _15) {
    this._15 = _15;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerOrderBandwidthLi {\n");
    
    sb.append("    _15: ").append(toIndentedString(_15)).append("\n");
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

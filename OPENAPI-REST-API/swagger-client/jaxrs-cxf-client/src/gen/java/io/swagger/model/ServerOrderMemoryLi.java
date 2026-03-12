package io.swagger.model;

import io.swagger.model.ServerOrderMemoryLi254;
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
  * Memory options for the server order.
 **/
@Schema(description="Memory options for the server order.")
public class ServerOrderMemoryLi   {
  
  @Schema(description = "")
  private ServerOrderMemoryLi254 _254 = null;
 /**
   * Get _254
   * @return _254
  **/
  @JsonProperty("254")
  public ServerOrderMemoryLi254 get254() {
    return _254;
  }

  public void set254(ServerOrderMemoryLi254 _254) {
    this._254 = _254;
  }

  public ServerOrderMemoryLi _254(ServerOrderMemoryLi254 _254) {
    this._254 = _254;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerOrderMemoryLi {\n");
    
    sb.append("    _254: ").append(toIndentedString(_254)).append("\n");
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

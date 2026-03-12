package io.swagger.model;

import io.swagger.model.ServerOrderMemory;

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

public class ServerOrderMemoryLi254   {
  
  @Schema(description = "")
  private ServerOrderMemory _65 = null;
 /**
   * Get _65
   * @return _65
  **/
  @JsonProperty("65")
  public ServerOrderMemory get65() {
    return _65;
  }

  public void set65(ServerOrderMemory _65) {
    this._65 = _65;
  }

  public ServerOrderMemoryLi254 _65(ServerOrderMemory _65) {
    this._65 = _65;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerOrderMemoryLi254 {\n");
    
    sb.append("    _65: ").append(toIndentedString(_65)).append("\n");
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

package io.swagger.model;

import io.swagger.model.ServerOrderIP;
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
  * IP options for the server order.
 **/
@Schema(description="IP options for the server order.")
public class ServerOrderIpsLi   {
  
  @Schema(description = "")
  private ServerOrderIP _9 = null;
 /**
   * Get _9
   * @return _9
  **/
  @JsonProperty("9")
  @NotNull
  public ServerOrderIP get9() {
    return _9;
  }

  public void set9(ServerOrderIP _9) {
    this._9 = _9;
  }

  public ServerOrderIpsLi _9(ServerOrderIP _9) {
    this._9 = _9;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerOrderIpsLi {\n");
    
    sb.append("    _9: ").append(toIndentedString(_9)).append("\n");
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

package io.swagger.model;

import io.swagger.model.ServerOrderOS;
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
  * Operating System options for the server order.
 **/
@Schema(description="Operating System options for the server order.")
public class ServerOrderOsLi   {
  
  @Schema(description = "")
  private ServerOrderOS _51 = null;
 /**
   * Get _51
   * @return _51
  **/
  @JsonProperty("51")
  @NotNull
  public ServerOrderOS get51() {
    return _51;
  }

  public void set51(ServerOrderOS _51) {
    this._51 = _51;
  }

  public ServerOrderOsLi _51(ServerOrderOS _51) {
    this._51 = _51;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerOrderOsLi {\n");
    
    sb.append("    _51: ").append(toIndentedString(_51)).append("\n");
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

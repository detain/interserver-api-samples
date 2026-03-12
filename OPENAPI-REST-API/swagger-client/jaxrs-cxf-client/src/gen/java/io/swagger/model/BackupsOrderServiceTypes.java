package io.swagger.model;

import io.swagger.model.BackupsOrderServiceTypes;

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

public class BackupsOrderServiceTypes   {
  
  @Schema(description = "")
  private BackupsOrderServiceTypes _11006 = null;
 /**
   * Get _11006
   * @return _11006
  **/
  @JsonProperty("11006")
  public BackupsOrderServiceTypes get11006() {
    return _11006;
  }

  public void set11006(BackupsOrderServiceTypes _11006) {
    this._11006 = _11006;
  }

  public BackupsOrderServiceTypes _11006(BackupsOrderServiceTypes _11006) {
    this._11006 = _11006;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BackupsOrderServiceTypes {\n");
    
    sb.append("    _11006: ").append(toIndentedString(_11006)).append("\n");
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

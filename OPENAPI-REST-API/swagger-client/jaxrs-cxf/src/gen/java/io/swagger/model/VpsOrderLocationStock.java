package io.swagger.model;

import io.swagger.model.VpsOrderLocationStock1;
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
  * Location Stock
 **/
@Schema(description="Location Stock")
public class VpsOrderLocationStock   {
  
  @Schema(description = "")
  private VpsOrderLocationStock1 _1 = null;
 /**
   * Get _1
   * @return _1
  **/
  @JsonProperty("1")
  @NotNull
  public VpsOrderLocationStock1 get1() {
    return _1;
  }

  public void set1(VpsOrderLocationStock1 _1) {
    this._1 = _1;
  }

  public VpsOrderLocationStock _1(VpsOrderLocationStock1 _1) {
    this._1 = _1;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsOrderLocationStock {\n");
    
    sb.append("    _1: ").append(toIndentedString(_1)).append("\n");
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

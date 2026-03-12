package io.swagger.model;

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
  * Schema for the jsonServices field in WebsitesOrder
 **/
@Schema(description="Schema for the jsonServices field in WebsitesOrder")
public class WebsitesOrderJsonServices   {
  
  @Schema(example = "5.00", required = true, description = "JSON services description")
 /**
   * JSON services description  
  **/
  private String _11447 = null;
 /**
   * JSON services description
   * @return _11447
  **/
  @JsonProperty("11447")
  public String get11447() {
    return _11447;
  }

  public void set11447(String _11447) {
    this._11447 = _11447;
  }

  public WebsitesOrderJsonServices _11447(String _11447) {
    this._11447 = _11447;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class WebsitesOrderJsonServices {\n");
    
    sb.append("    _11447: ").append(toIndentedString(_11447)).append("\n");
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

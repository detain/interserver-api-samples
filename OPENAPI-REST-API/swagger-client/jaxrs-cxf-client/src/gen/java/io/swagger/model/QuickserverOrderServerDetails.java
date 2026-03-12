package io.swagger.model;

import io.swagger.model.QuickserverOrderServerDetails381;
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
  * Server details.
 **/
@Schema(description="Server details.")
public class QuickserverOrderServerDetails   {
  
  @Schema(description = "")
  private QuickserverOrderServerDetails381 _381 = null;
 /**
   * Get _381
   * @return _381
  **/
  @JsonProperty("381")
  public QuickserverOrderServerDetails381 get381() {
    return _381;
  }

  public void set381(QuickserverOrderServerDetails381 _381) {
    this._381 = _381;
  }

  public QuickserverOrderServerDetails _381(QuickserverOrderServerDetails381 _381) {
    this._381 = _381;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class QuickserverOrderServerDetails {\n");
    
    sb.append("    _381: ").append(toIndentedString(_381)).append("\n");
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

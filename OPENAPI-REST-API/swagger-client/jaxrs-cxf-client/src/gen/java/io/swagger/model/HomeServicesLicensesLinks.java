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
  * Map of license service IDs to their IP addresses for the account dashboard.
 **/
@Schema(description="Map of license service IDs to their IP addresses for the account dashboard.")
public class HomeServicesLicensesLinks   {
  
  @Schema(example = "1.2.3.4", description = "Link to a license.")
 /**
   * Link to a license.  
  **/
  private String _386522 = null;
 /**
   * Link to a license.
   * @return _386522
  **/
  @JsonProperty("386522")
  public String get386522() {
    return _386522;
  }

  public void set386522(String _386522) {
    this._386522 = _386522;
  }

  public HomeServicesLicensesLinks _386522(String _386522) {
    this._386522 = _386522;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HomeServicesLicensesLinks {\n");
    
    sb.append("    _386522: ").append(toIndentedString(_386522)).append("\n");
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

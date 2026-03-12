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
  * Map of webhosting service IDs to their hostnames for the account dashboard.
 **/
@Schema(description="Map of webhosting service IDs to their hostnames for the account dashboard.")
public class HomeServicesWebhostingLinks   {
  
  @Schema(example = "Doefamily.com", description = "Link to a website.")
 /**
   * Link to a website.  
  **/
  private String _376359 = null;
  
  @Schema(example = "fancytush.com", description = "Link to a website.")
 /**
   * Link to a website.  
  **/
  private String _376473 = null;
  
  @Schema(example = "admincoded.net", description = "Link to a website.")
 /**
   * Link to a website.  
  **/
  private String _386218 = null;
 /**
   * Link to a website.
   * @return _376359
  **/
  @JsonProperty("376359")
  public String get376359() {
    return _376359;
  }

  public void set376359(String _376359) {
    this._376359 = _376359;
  }

  public HomeServicesWebhostingLinks _376359(String _376359) {
    this._376359 = _376359;
    return this;
  }

 /**
   * Link to a website.
   * @return _376473
  **/
  @JsonProperty("376473")
  public String get376473() {
    return _376473;
  }

  public void set376473(String _376473) {
    this._376473 = _376473;
  }

  public HomeServicesWebhostingLinks _376473(String _376473) {
    this._376473 = _376473;
    return this;
  }

 /**
   * Link to a website.
   * @return _386218
  **/
  @JsonProperty("386218")
  public String get386218() {
    return _386218;
  }

  public void set386218(String _386218) {
    this._386218 = _386218;
  }

  public HomeServicesWebhostingLinks _386218(String _386218) {
    this._386218 = _386218;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HomeServicesWebhostingLinks {\n");
    
    sb.append("    _376359: ").append(toIndentedString(_376359)).append("\n");
    sb.append("    _376473: ").append(toIndentedString(_376473)).append("\n");
    sb.append("    _386218: ").append(toIndentedString(_386218)).append("\n");
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

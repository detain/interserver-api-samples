package io.swagger.model;

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
  * Map of VPS service IDs to their hostnames for the account dashboard.
 **/
@Schema(description="Map of VPS service IDs to their hostnames for the account dashboard.")
public class HomeServicesVpsLinks   {
  
  @Schema(example = "vps465503", description = "Link to a VPS.")
 /**
   * Link to a VPS.  
  **/
  private String _465503 = null;
  
  @Schema(example = "vps2500081", description = "Link to a VPS.")
 /**
   * Link to a VPS.  
  **/
  private String _2500081 = null;
  
  @Schema(example = "vps2578866", description = "Link to a VPS.")
 /**
   * Link to a VPS.  
  **/
  private String _2578866 = null;
 /**
   * Link to a VPS.
   * @return _465503
  **/
  @JsonProperty("465503")
  @NotNull
  public String get465503() {
    return _465503;
  }

  public void set465503(String _465503) {
    this._465503 = _465503;
  }

  public HomeServicesVpsLinks _465503(String _465503) {
    this._465503 = _465503;
    return this;
  }

 /**
   * Link to a VPS.
   * @return _2500081
  **/
  @JsonProperty("2500081")
  @NotNull
  public String get2500081() {
    return _2500081;
  }

  public void set2500081(String _2500081) {
    this._2500081 = _2500081;
  }

  public HomeServicesVpsLinks _2500081(String _2500081) {
    this._2500081 = _2500081;
    return this;
  }

 /**
   * Link to a VPS.
   * @return _2578866
  **/
  @JsonProperty("2578866")
  @NotNull
  public String get2578866() {
    return _2578866;
  }

  public void set2578866(String _2578866) {
    this._2578866 = _2578866;
  }

  public HomeServicesVpsLinks _2578866(String _2578866) {
    this._2578866 = _2578866;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HomeServicesVpsLinks {\n");
    
    sb.append("    _465503: ").append(toIndentedString(_465503)).append("\n");
    sb.append("    _2500081: ").append(toIndentedString(_2500081)).append("\n");
    sb.append("    _2578866: ").append(toIndentedString(_2578866)).append("\n");
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

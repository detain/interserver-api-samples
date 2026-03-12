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
  * Map of domain service IDs to their hostnames for the account dashboard.
 **/
@Schema(description="Map of domain service IDs to their hostnames for the account dashboard.")
public class HomeServicesDomainsLinks   {
  
  @Schema(example = "pimpmy.website", description = "Link to a domain.")
 /**
   * Link to a domain.  
  **/
  private String _376114 = null;
  
  @Schema(example = "hostingenuity.com", description = "Link to a domain.")
 /**
   * Link to a domain.  
  **/
  private String _376503 = null;
  
  @Schema(example = "detain.dev", description = "Link to a domain.")
 /**
   * Link to a domain.  
  **/
  private String _592337 = null;
 /**
   * Link to a domain.
   * @return _376114
  **/
  @JsonProperty("376114")
  @NotNull
  public String get376114() {
    return _376114;
  }

  public void set376114(String _376114) {
    this._376114 = _376114;
  }

  public HomeServicesDomainsLinks _376114(String _376114) {
    this._376114 = _376114;
    return this;
  }

 /**
   * Link to a domain.
   * @return _376503
  **/
  @JsonProperty("376503")
  @NotNull
  public String get376503() {
    return _376503;
  }

  public void set376503(String _376503) {
    this._376503 = _376503;
  }

  public HomeServicesDomainsLinks _376503(String _376503) {
    this._376503 = _376503;
    return this;
  }

 /**
   * Link to a domain.
   * @return _592337
  **/
  @JsonProperty("592337")
  @NotNull
  public String get592337() {
    return _592337;
  }

  public void set592337(String _592337) {
    this._592337 = _592337;
  }

  public HomeServicesDomainsLinks _592337(String _592337) {
    this._592337 = _592337;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HomeServicesDomainsLinks {\n");
    
    sb.append("    _376114: ").append(toIndentedString(_376114)).append("\n");
    sb.append("    _376503: ").append(toIndentedString(_376503)).append("\n");
    sb.append("    _592337: ").append(toIndentedString(_592337)).append("\n");
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

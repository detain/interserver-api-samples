package io.swagger.model;

import io.swagger.model.DomainOrderServices;
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
  * Ordering metadata for domain registration and transfers.
 **/
@Schema(description="Ordering metadata for domain registration and transfers.")
public class DomainOrder   {
  
  @Schema(example = "5", description = "Cost of Whois Privacy")
 /**
   * Cost of Whois Privacy  
  **/
  private String whoisPrivacyCost = null;
  
  @Schema(description = "")
  private DomainOrderServices services = null;
  
  @Schema(description = "Map of TLDs to domain service IDs.")
 /**
   * Map of TLDs to domain service IDs.  
  **/
  private Object tldServices = null;
 /**
   * Cost of Whois Privacy
   * @return whoisPrivacyCost
  **/
  @JsonProperty("whoisPrivacyCost")
  public String getWhoisPrivacyCost() {
    return whoisPrivacyCost;
  }

  public void setWhoisPrivacyCost(String whoisPrivacyCost) {
    this.whoisPrivacyCost = whoisPrivacyCost;
  }

  public DomainOrder whoisPrivacyCost(String whoisPrivacyCost) {
    this.whoisPrivacyCost = whoisPrivacyCost;
    return this;
  }

 /**
   * Get services
   * @return services
  **/
  @JsonProperty("services")
  public DomainOrderServices getServices() {
    return services;
  }

  public void setServices(DomainOrderServices services) {
    this.services = services;
  }

  public DomainOrder services(DomainOrderServices services) {
    this.services = services;
    return this;
  }

 /**
   * Map of TLDs to domain service IDs.
   * @return tldServices
  **/
  @JsonProperty("tldServices")
  public Object getTldServices() {
    return tldServices;
  }

  public void setTldServices(Object tldServices) {
    this.tldServices = tldServices;
  }

  public DomainOrder tldServices(Object tldServices) {
    this.tldServices = tldServices;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DomainOrder {\n");
    
    sb.append("    whoisPrivacyCost: ").append(toIndentedString(whoisPrivacyCost)).append("\n");
    sb.append("    services: ").append(toIndentedString(services)).append("\n");
    sb.append("    tldServices: ").append(toIndentedString(tldServices)).append("\n");
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

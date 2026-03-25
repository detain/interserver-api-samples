package org.openapitools.model;

import org.openapitools.model.DomainOrderServices;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Ordering metadata for domain registration and transfers.
 */
@ApiModel(description="Ordering metadata for domain registration and transfers.")

public class DomainOrder  {
  
 /**
  * Cost of Whois Privacy
  */
  @ApiModelProperty(example = "5", value = "Cost of Whois Privacy")

  private String whoisPrivacyCost;

  @ApiModelProperty(value = "")

  private DomainOrderServices services;

 /**
  * Map of TLDs to domain service IDs.
  */
  @ApiModelProperty(value = "Map of TLDs to domain service IDs.")

  private Object tldServices;
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DomainOrder domainOrder = (DomainOrder) o;
    return Objects.equals(this.whoisPrivacyCost, domainOrder.whoisPrivacyCost) &&
        Objects.equals(this.services, domainOrder.services) &&
        Objects.equals(this.tldServices, domainOrder.tldServices);
  }

  @Override
  public int hashCode() {
    return Objects.hash(whoisPrivacyCost, services, tldServices);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}


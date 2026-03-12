package io.swagger.model;

import io.swagger.model.DomainOrderServices;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Ordering metadata for domain registration and transfers.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Ordering metadata for domain registration and transfers.")

public class DomainOrder   {

  private @Valid String whoisPrivacyCost = null;

  private @Valid DomainOrderServices services = null;

  private @Valid Object tldServices = null;

  /**
   * Cost of Whois Privacy
   **/
  public DomainOrder whoisPrivacyCost(String whoisPrivacyCost) {
    this.whoisPrivacyCost = whoisPrivacyCost;
    return this;
  }

  
  @ApiModelProperty(example = "5", value = "Cost of Whois Privacy")
  @JsonProperty("whoisPrivacyCost")
  @NotNull

  public String getWhoisPrivacyCost() {
    return whoisPrivacyCost;
  }
  public void setWhoisPrivacyCost(String whoisPrivacyCost) {
    this.whoisPrivacyCost = whoisPrivacyCost;
  }

  /**
   **/
  public DomainOrder services(DomainOrderServices services) {
    this.services = services;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("services")
  @NotNull

  public DomainOrderServices getServices() {
    return services;
  }
  public void setServices(DomainOrderServices services) {
    this.services = services;
  }

  /**
   * Map of TLDs to domain service IDs.
   **/
  public DomainOrder tldServices(Object tldServices) {
    this.tldServices = tldServices;
    return this;
  }

  
  @ApiModelProperty(value = "Map of TLDs to domain service IDs.")
  @JsonProperty("tldServices")
  @NotNull

  public Object getTldServices() {
    return tldServices;
  }
  public void setTldServices(Object tldServices) {
    this.tldServices = tldServices;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DomainOrder domainOrder = (DomainOrder) o;
    return Objects.equals(whoisPrivacyCost, domainOrder.whoisPrivacyCost) &&
        Objects.equals(services, domainOrder.services) &&
        Objects.equals(tldServices, domainOrder.tldServices);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.DomainOrderServices;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Ordering metadata for domain registration and transfers.")

public class DomainOrder   {
  private String whoisPrivacyCost = null;  private DomainOrderServices services = null;  private Object tldServices = null;

  /**
   * Cost of Whois Privacy
   **/
  
  @Schema(example = "5", description = "Cost of Whois Privacy")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "Map of TLDs to domain service IDs.")
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

package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
/**
 * Service type definition for a domain registration, including name, pricing, and category.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "Service type definition for a domain registration, including name, pricing, and category.")

public class DomainServiceType   {
  private String servicesId = null;
  private String servicesName = null;
  private String servicesCost = null;
  private String servicesCategory = null;
  private String servicesBuyable = null;
  private String servicesType = null;
  private String servicesField1 = null;
  private String servicesField2 = null;
  private String servicesModule = null;

  /**
   * Service type ID.
   **/
  public DomainServiceType servicesId(String servicesId) {
    this.servicesId = servicesId;
    return this;
  }

  
  
  @Schema(description = "Service type ID.")
  @JsonProperty("services_id")
  @NotNull
  public String getServicesId() {
    return servicesId;
  }
  public void setServicesId(String servicesId) {
    this.servicesId = servicesId;
  }

  /**
   * Service type name (e.g., .com Registration).
   **/
  public DomainServiceType servicesName(String servicesName) {
    this.servicesName = servicesName;
    return this;
  }

  
  
  @Schema(description = "Service type name (e.g., .com Registration).")
  @JsonProperty("services_name")
  @NotNull
  public String getServicesName() {
    return servicesName;
  }
  public void setServicesName(String servicesName) {
    this.servicesName = servicesName;
  }

  /**
   * Service cost per billing period.
   **/
  public DomainServiceType servicesCost(String servicesCost) {
    this.servicesCost = servicesCost;
    return this;
  }

  
  
  @Schema(description = "Service cost per billing period.")
  @JsonProperty("services_cost")
  @NotNull
  public String getServicesCost() {
    return servicesCost;
  }
  public void setServicesCost(String servicesCost) {
    this.servicesCost = servicesCost;
  }

  /**
   * Service category ID.
   **/
  public DomainServiceType servicesCategory(String servicesCategory) {
    this.servicesCategory = servicesCategory;
    return this;
  }

  
  
  @Schema(description = "Service category ID.")
  @JsonProperty("services_category")
  @NotNull
  public String getServicesCategory() {
    return servicesCategory;
  }
  public void setServicesCategory(String servicesCategory) {
    this.servicesCategory = servicesCategory;
  }

  /**
   * Whether this service type is available for purchase.
   **/
  public DomainServiceType servicesBuyable(String servicesBuyable) {
    this.servicesBuyable = servicesBuyable;
    return this;
  }

  
  
  @Schema(description = "Whether this service type is available for purchase.")
  @JsonProperty("services_buyable")
  @NotNull
  public String getServicesBuyable() {
    return servicesBuyable;
  }
  public void setServicesBuyable(String servicesBuyable) {
    this.servicesBuyable = servicesBuyable;
  }

  /**
   * Internal service type identifier.
   **/
  public DomainServiceType servicesType(String servicesType) {
    this.servicesType = servicesType;
    return this;
  }

  
  
  @Schema(description = "Internal service type identifier.")
  @JsonProperty("services_type")
  @NotNull
  public String getServicesType() {
    return servicesType;
  }
  public void setServicesType(String servicesType) {
    this.servicesType = servicesType;
  }

  /**
   * TLD or first configurable field for the service type.
   **/
  public DomainServiceType servicesField1(String servicesField1) {
    this.servicesField1 = servicesField1;
    return this;
  }

  
  
  @Schema(description = "TLD or first configurable field for the service type.")
  @JsonProperty("services_field1")
  @NotNull
  public String getServicesField1() {
    return servicesField1;
  }
  public void setServicesField1(String servicesField1) {
    this.servicesField1 = servicesField1;
  }

  /**
   * Second configurable field for the service type.
   **/
  public DomainServiceType servicesField2(String servicesField2) {
    this.servicesField2 = servicesField2;
    return this;
  }

  
  
  @Schema(description = "Second configurable field for the service type.")
  @JsonProperty("services_field2")
  @NotNull
  public String getServicesField2() {
    return servicesField2;
  }
  public void setServicesField2(String servicesField2) {
    this.servicesField2 = servicesField2;
  }

  /**
   * Backend module handling this service type.
   **/
  public DomainServiceType servicesModule(String servicesModule) {
    this.servicesModule = servicesModule;
    return this;
  }

  
  
  @Schema(description = "Backend module handling this service type.")
  @JsonProperty("services_module")
  @NotNull
  public String getServicesModule() {
    return servicesModule;
  }
  public void setServicesModule(String servicesModule) {
    this.servicesModule = servicesModule;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DomainServiceType domainServiceType = (DomainServiceType) o;
    return Objects.equals(servicesId, domainServiceType.servicesId) &&
        Objects.equals(servicesName, domainServiceType.servicesName) &&
        Objects.equals(servicesCost, domainServiceType.servicesCost) &&
        Objects.equals(servicesCategory, domainServiceType.servicesCategory) &&
        Objects.equals(servicesBuyable, domainServiceType.servicesBuyable) &&
        Objects.equals(servicesType, domainServiceType.servicesType) &&
        Objects.equals(servicesField1, domainServiceType.servicesField1) &&
        Objects.equals(servicesField2, domainServiceType.servicesField2) &&
        Objects.equals(servicesModule, domainServiceType.servicesModule);
  }

  @Override
  public int hashCode() {
    return Objects.hash(servicesId, servicesName, servicesCost, servicesCategory, servicesBuyable, servicesType, servicesField1, servicesField2, servicesModule);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DomainServiceType {\n");
    
    sb.append("    servicesId: ").append(toIndentedString(servicesId)).append("\n");
    sb.append("    servicesName: ").append(toIndentedString(servicesName)).append("\n");
    sb.append("    servicesCost: ").append(toIndentedString(servicesCost)).append("\n");
    sb.append("    servicesCategory: ").append(toIndentedString(servicesCategory)).append("\n");
    sb.append("    servicesBuyable: ").append(toIndentedString(servicesBuyable)).append("\n");
    sb.append("    servicesType: ").append(toIndentedString(servicesType)).append("\n");
    sb.append("    servicesField1: ").append(toIndentedString(servicesField1)).append("\n");
    sb.append("    servicesField2: ").append(toIndentedString(servicesField2)).append("\n");
    sb.append("    servicesModule: ").append(toIndentedString(servicesModule)).append("\n");
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

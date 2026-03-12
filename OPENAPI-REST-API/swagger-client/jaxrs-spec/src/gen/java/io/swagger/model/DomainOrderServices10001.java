package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Example schema for a domain service catalog entry.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Example schema for a domain service catalog entry.")

public class DomainOrderServices10001   {

  private @Valid String servicesId = null;

  private @Valid String servicesName = null;

  private @Valid String servicesCost = null;

  private @Valid String servicesCurrency = null;

  private @Valid String servicesCategory = null;

  private @Valid String servicesBuyable = null;

  private @Valid String servicesType = null;

  private @Valid String servicesField1 = null;

  private @Valid String servicesField2 = null;

  private @Valid String servicesModule = null;

  private @Valid String servicesHidden = null;

  /**
   * Service ID
   **/
  public DomainOrderServices10001 servicesId(String servicesId) {
    this.servicesId = servicesId;
    return this;
  }

  
  @ApiModelProperty(example = "10001", value = "Service ID")
  @JsonProperty("services_id")
  @NotNull

  public String getServicesId() {
    return servicesId;
  }
  public void setServicesId(String servicesId) {
    this.servicesId = servicesId;
  }

  /**
   * Service Name
   **/
  public DomainOrderServices10001 servicesName(String servicesName) {
    this.servicesName = servicesName;
    return this;
  }

  
  @ApiModelProperty(example = ".asia Domain Name Registration", value = "Service Name")
  @JsonProperty("services_name")
  @NotNull

  public String getServicesName() {
    return servicesName;
  }
  public void setServicesName(String servicesName) {
    this.servicesName = servicesName;
  }

  /**
   * Service Cost
   **/
  public DomainOrderServices10001 servicesCost(String servicesCost) {
    this.servicesCost = servicesCost;
    return this;
  }

  
  @ApiModelProperty(example = "19.00", value = "Service Cost")
  @JsonProperty("services_cost")
  @NotNull

  public String getServicesCost() {
    return servicesCost;
  }
  public void setServicesCost(String servicesCost) {
    this.servicesCost = servicesCost;
  }

  /**
   * Currency of Service Cost
   **/
  public DomainOrderServices10001 servicesCurrency(String servicesCurrency) {
    this.servicesCurrency = servicesCurrency;
    return this;
  }

  
  @ApiModelProperty(example = "USD", value = "Currency of Service Cost")
  @JsonProperty("services_currency")
  @NotNull

  public String getServicesCurrency() {
    return servicesCurrency;
  }
  public void setServicesCurrency(String servicesCurrency) {
    this.servicesCurrency = servicesCurrency;
  }

  /**
   * Service Category
   **/
  public DomainOrderServices10001 servicesCategory(String servicesCategory) {
    this.servicesCategory = servicesCategory;
    return this;
  }

  
  @ApiModelProperty(example = "100", value = "Service Category")
  @JsonProperty("services_category")
  @NotNull

  public String getServicesCategory() {
    return servicesCategory;
  }
  public void setServicesCategory(String servicesCategory) {
    this.servicesCategory = servicesCategory;
  }

  /**
   * Buyable flag for Service
   **/
  public DomainOrderServices10001 servicesBuyable(String servicesBuyable) {
    this.servicesBuyable = servicesBuyable;
    return this;
  }

  
  @ApiModelProperty(example = "1", value = "Buyable flag for Service")
  @JsonProperty("services_buyable")
  @NotNull

  public String getServicesBuyable() {
    return servicesBuyable;
  }
  public void setServicesBuyable(String servicesBuyable) {
    this.servicesBuyable = servicesBuyable;
  }

  /**
   * Service Type
   **/
  public DomainOrderServices10001 servicesType(String servicesType) {
    this.servicesType = servicesType;
    return this;
  }

  
  @ApiModelProperty(example = "100", value = "Service Type")
  @JsonProperty("services_type")
  @NotNull

  public String getServicesType() {
    return servicesType;
  }
  public void setServicesType(String servicesType) {
    this.servicesType = servicesType;
  }

  /**
   * Field 1 of Service
   **/
  public DomainOrderServices10001 servicesField1(String servicesField1) {
    this.servicesField1 = servicesField1;
    return this;
  }

  
  @ApiModelProperty(example = ".asia", value = "Field 1 of Service")
  @JsonProperty("services_field1")
  @NotNull

  public String getServicesField1() {
    return servicesField1;
  }
  public void setServicesField1(String servicesField1) {
    this.servicesField1 = servicesField1;
  }

  /**
   * Field 2 of Service
   **/
  public DomainOrderServices10001 servicesField2(String servicesField2) {
    this.servicesField2 = servicesField2;
    return this;
  }

  
  @ApiModelProperty(value = "Field 2 of Service")
  @JsonProperty("services_field2")
  @NotNull

  public String getServicesField2() {
    return servicesField2;
  }
  public void setServicesField2(String servicesField2) {
    this.servicesField2 = servicesField2;
  }

  /**
   * Module of Service
   **/
  public DomainOrderServices10001 servicesModule(String servicesModule) {
    this.servicesModule = servicesModule;
    return this;
  }

  
  @ApiModelProperty(example = "domains", value = "Module of Service")
  @JsonProperty("services_module")
  @NotNull

  public String getServicesModule() {
    return servicesModule;
  }
  public void setServicesModule(String servicesModule) {
    this.servicesModule = servicesModule;
  }

  /**
   * Hidden flag for Service
   **/
  public DomainOrderServices10001 servicesHidden(String servicesHidden) {
    this.servicesHidden = servicesHidden;
    return this;
  }

  
  @ApiModelProperty(example = "0", value = "Hidden flag for Service")
  @JsonProperty("services_hidden")
  @NotNull

  public String getServicesHidden() {
    return servicesHidden;
  }
  public void setServicesHidden(String servicesHidden) {
    this.servicesHidden = servicesHidden;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DomainOrderServices10001 domainOrderServices10001 = (DomainOrderServices10001) o;
    return Objects.equals(servicesId, domainOrderServices10001.servicesId) &&
        Objects.equals(servicesName, domainOrderServices10001.servicesName) &&
        Objects.equals(servicesCost, domainOrderServices10001.servicesCost) &&
        Objects.equals(servicesCurrency, domainOrderServices10001.servicesCurrency) &&
        Objects.equals(servicesCategory, domainOrderServices10001.servicesCategory) &&
        Objects.equals(servicesBuyable, domainOrderServices10001.servicesBuyable) &&
        Objects.equals(servicesType, domainOrderServices10001.servicesType) &&
        Objects.equals(servicesField1, domainOrderServices10001.servicesField1) &&
        Objects.equals(servicesField2, domainOrderServices10001.servicesField2) &&
        Objects.equals(servicesModule, domainOrderServices10001.servicesModule) &&
        Objects.equals(servicesHidden, domainOrderServices10001.servicesHidden);
  }

  @Override
  public int hashCode() {
    return Objects.hash(servicesId, servicesName, servicesCost, servicesCurrency, servicesCategory, servicesBuyable, servicesType, servicesField1, servicesField2, servicesModule, servicesHidden);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DomainOrderServices10001 {\n");
    
    sb.append("    servicesId: ").append(toIndentedString(servicesId)).append("\n");
    sb.append("    servicesName: ").append(toIndentedString(servicesName)).append("\n");
    sb.append("    servicesCost: ").append(toIndentedString(servicesCost)).append("\n");
    sb.append("    servicesCurrency: ").append(toIndentedString(servicesCurrency)).append("\n");
    sb.append("    servicesCategory: ").append(toIndentedString(servicesCategory)).append("\n");
    sb.append("    servicesBuyable: ").append(toIndentedString(servicesBuyable)).append("\n");
    sb.append("    servicesType: ").append(toIndentedString(servicesType)).append("\n");
    sb.append("    servicesField1: ").append(toIndentedString(servicesField1)).append("\n");
    sb.append("    servicesField2: ").append(toIndentedString(servicesField2)).append("\n");
    sb.append("    servicesModule: ").append(toIndentedString(servicesModule)).append("\n");
    sb.append("    servicesHidden: ").append(toIndentedString(servicesHidden)).append("\n");
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

package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * Example schema for a domain service catalog entry.
 **/
@Schema(description = "Example schema for a domain service catalog entry.")


public class DomainOrderServices10001   {
  @JsonProperty("services_id")
  private String servicesId = null;
  @JsonProperty("services_name")
  private String servicesName = null;
  @JsonProperty("services_cost")
  private String servicesCost = null;
  @JsonProperty("services_currency")
  private String servicesCurrency = null;
  @JsonProperty("services_category")
  private String servicesCategory = null;
  @JsonProperty("services_buyable")
  private String servicesBuyable = null;
  @JsonProperty("services_type")
  private String servicesType = null;
  @JsonProperty("services_field1")
  private String servicesField1 = null;
  @JsonProperty("services_field2")
  private String servicesField2 = null;
  @JsonProperty("services_module")
  private String servicesModule = null;
  @JsonProperty("services_hidden")
  private String servicesHidden = null;
  /**
   * Service ID
   **/
  public DomainOrderServices10001 servicesId(String servicesId) {
    this.servicesId = servicesId;
    return this;
  }

  
  @Schema(example = "10001", description = "Service ID")
  @JsonProperty("services_id")
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

  
  @Schema(example = ".asia Domain Name Registration", description = "Service Name")
  @JsonProperty("services_name")
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

  
  @Schema(example = "19.00", description = "Service Cost")
  @JsonProperty("services_cost")
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

  
  @Schema(example = "USD", description = "Currency of Service Cost")
  @JsonProperty("services_currency")
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

  
  @Schema(example = "100", description = "Service Category")
  @JsonProperty("services_category")
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

  
  @Schema(example = "1", description = "Buyable flag for Service")
  @JsonProperty("services_buyable")
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

  
  @Schema(example = "100", description = "Service Type")
  @JsonProperty("services_type")
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

  
  @Schema(example = ".asia", description = "Field 1 of Service")
  @JsonProperty("services_field1")
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

  
  @Schema(description = "Field 2 of Service")
  @JsonProperty("services_field2")
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

  
  @Schema(example = "domains", description = "Module of Service")
  @JsonProperty("services_module")
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

  
  @Schema(example = "0", description = "Hidden flag for Service")
  @JsonProperty("services_hidden")
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

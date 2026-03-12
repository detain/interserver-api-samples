package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;



public class LicensesOrderServiceTypes11482   {
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
   * Service ID
   **/
  
  @Schema(example = "11482", description = "Service ID")
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
  
  @Schema(example = "DirectAdmin Standard", description = "Service Name")
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
  
  @Schema(example = "21.75", description = "Service Cost")
  @JsonProperty("services_cost")
  @NotNull
  public String getServicesCost() {
    return servicesCost;
  }
  public void setServicesCost(String servicesCost) {
    this.servicesCost = servicesCost;
  }

  /**
   * Service Category
   **/
  
  @Schema(example = "506", description = "Service Category")
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
  
  @Schema(example = "1", description = "Buyable flag for Service")
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
  
  @Schema(example = "506", description = "Service Type")
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
  
  @Schema(example = "2704,Standard", description = "Field 1 of Service")
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
  
  @Schema(example = "Unlimited Accounts & Domains<br><br>The DirectAdmin standard license is best for medium to large shared-hosting and/or reseller-hosting companies. No limit on accounts or domains.", description = "Field 2 of Service")
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
  
  @Schema(example = "licenses", description = "Module of Service")
  @JsonProperty("services_module")
  @NotNull
  public String getServicesModule() {
    return servicesModule;
  }
  public void setServicesModule(String servicesModule) {
    this.servicesModule = servicesModule;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    LicensesOrderServiceTypes11482 licensesOrderServiceTypes11482 = (LicensesOrderServiceTypes11482) o;
    return Objects.equals(servicesId, licensesOrderServiceTypes11482.servicesId) &&
        Objects.equals(servicesName, licensesOrderServiceTypes11482.servicesName) &&
        Objects.equals(servicesCost, licensesOrderServiceTypes11482.servicesCost) &&
        Objects.equals(servicesCategory, licensesOrderServiceTypes11482.servicesCategory) &&
        Objects.equals(servicesBuyable, licensesOrderServiceTypes11482.servicesBuyable) &&
        Objects.equals(servicesType, licensesOrderServiceTypes11482.servicesType) &&
        Objects.equals(servicesField1, licensesOrderServiceTypes11482.servicesField1) &&
        Objects.equals(servicesField2, licensesOrderServiceTypes11482.servicesField2) &&
        Objects.equals(servicesModule, licensesOrderServiceTypes11482.servicesModule);
  }

  @Override
  public int hashCode() {
    return Objects.hash(servicesId, servicesName, servicesCost, servicesCategory, servicesBuyable, servicesType, servicesField1, servicesField2, servicesModule);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class LicensesOrderServiceTypes11482 {\n");
    
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

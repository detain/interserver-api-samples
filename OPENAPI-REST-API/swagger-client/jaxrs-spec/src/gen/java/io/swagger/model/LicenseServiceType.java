package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Service type definition for a software license, including name, pricing, and category.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Service type definition for a software license, including name, pricing, and category.")

public class LicenseServiceType   {

  private @Valid String servicesId = null;

  private @Valid String servicesName = null;

  private @Valid String servicesCost = null;

  private @Valid String servicesCategory = null;

  private @Valid String servicesBuyable = null;

  private @Valid String servicesType = null;

  private @Valid String servicesField1 = null;

  private @Valid String servicesField2 = null;

  private @Valid String servicesModule = null;

  /**
   * Service ID
   **/
  public LicenseServiceType servicesId(String servicesId) {
    this.servicesId = servicesId;
    return this;
  }

  
  @ApiModelProperty(example = "5034", value = "Service ID")
  @JsonProperty("services_id")
  @NotNull

  public String getServicesId() {
    return servicesId;
  }
  public void setServicesId(String servicesId) {
    this.servicesId = servicesId;
  }

  /**
   * Service name
   **/
  public LicenseServiceType servicesName(String servicesName) {
    this.servicesName = servicesName;
    return this;
  }

  
  @ApiModelProperty(example = "KernelCare License", value = "Service name")
  @JsonProperty("services_name")
  @NotNull

  public String getServicesName() {
    return servicesName;
  }
  public void setServicesName(String servicesName) {
    this.servicesName = servicesName;
  }

  /**
   * Service cost
   **/
  public LicenseServiceType servicesCost(String servicesCost) {
    this.servicesCost = servicesCost;
    return this;
  }

  
  @ApiModelProperty(example = "2.95", value = "Service cost")
  @JsonProperty("services_cost")
  @NotNull

  public String getServicesCost() {
    return servicesCost;
  }
  public void setServicesCost(String servicesCost) {
    this.servicesCost = servicesCost;
  }

  /**
   * Service category
   **/
  public LicenseServiceType servicesCategory(String servicesCategory) {
    this.servicesCategory = servicesCategory;
    return this;
  }

  
  @ApiModelProperty(example = "508", value = "Service category")
  @JsonProperty("services_category")
  @NotNull

  public String getServicesCategory() {
    return servicesCategory;
  }
  public void setServicesCategory(String servicesCategory) {
    this.servicesCategory = servicesCategory;
  }

  /**
   * Buyable status
   **/
  public LicenseServiceType servicesBuyable(String servicesBuyable) {
    this.servicesBuyable = servicesBuyable;
    return this;
  }

  
  @ApiModelProperty(example = "1", value = "Buyable status")
  @JsonProperty("services_buyable")
  @NotNull

  public String getServicesBuyable() {
    return servicesBuyable;
  }
  public void setServicesBuyable(String servicesBuyable) {
    this.servicesBuyable = servicesBuyable;
  }

  /**
   * Service type
   **/
  public LicenseServiceType servicesType(String servicesType) {
    this.servicesType = servicesType;
    return this;
  }

  
  @ApiModelProperty(example = "508", value = "Service type")
  @JsonProperty("services_type")
  @NotNull

  public String getServicesType() {
    return servicesType;
  }
  public void setServicesType(String servicesType) {
    this.servicesType = servicesType;
  }

  /**
   * Service field 1
   **/
  public LicenseServiceType servicesField1(String servicesField1) {
    this.servicesField1 = servicesField1;
    return this;
  }

  
  @ApiModelProperty(example = "16", value = "Service field 1")
  @JsonProperty("services_field1")
  @NotNull

  public String getServicesField1() {
    return servicesField1;
  }
  public void setServicesField1(String servicesField1) {
    this.servicesField1 = servicesField1;
  }

  /**
   * Service field 2
   **/
  public LicenseServiceType servicesField2(String servicesField2) {
    this.servicesField2 = servicesField2;
    return this;
  }

  
  @ApiModelProperty(value = "Service field 2")
  @JsonProperty("services_field2")
  @NotNull

  public String getServicesField2() {
    return servicesField2;
  }
  public void setServicesField2(String servicesField2) {
    this.servicesField2 = servicesField2;
  }

  /**
   * Service module
   **/
  public LicenseServiceType servicesModule(String servicesModule) {
    this.servicesModule = servicesModule;
    return this;
  }

  
  @ApiModelProperty(example = "licenses", value = "Service module")
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
    LicenseServiceType licenseServiceType = (LicenseServiceType) o;
    return Objects.equals(servicesId, licenseServiceType.servicesId) &&
        Objects.equals(servicesName, licenseServiceType.servicesName) &&
        Objects.equals(servicesCost, licenseServiceType.servicesCost) &&
        Objects.equals(servicesCategory, licenseServiceType.servicesCategory) &&
        Objects.equals(servicesBuyable, licenseServiceType.servicesBuyable) &&
        Objects.equals(servicesType, licenseServiceType.servicesType) &&
        Objects.equals(servicesField1, licenseServiceType.servicesField1) &&
        Objects.equals(servicesField2, licenseServiceType.servicesField2) &&
        Objects.equals(servicesModule, licenseServiceType.servicesModule);
  }

  @Override
  public int hashCode() {
    return Objects.hash(servicesId, servicesName, servicesCost, servicesCategory, servicesBuyable, servicesType, servicesField1, servicesField2, servicesModule);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class LicenseServiceType {\n");
    
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

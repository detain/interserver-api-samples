package io.swagger.model;

import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class VpsOrderServiceTypes32   {

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
   **/
  public VpsOrderServiceTypes32 servicesId(String servicesId) {
    this.servicesId = servicesId;
    return this;
  }

  
  @ApiModelProperty(example = "32", value = "")
  @JsonProperty("services_id")
  @NotNull

  public String getServicesId() {
    return servicesId;
  }
  public void setServicesId(String servicesId) {
    this.servicesId = servicesId;
  }

  /**
   **/
  public VpsOrderServiceTypes32 servicesName(String servicesName) {
    this.servicesName = servicesName;
    return this;
  }

  
  @ApiModelProperty(example = "KVM Windows VPS Slice", value = "")
  @JsonProperty("services_name")
  @NotNull

  public String getServicesName() {
    return servicesName;
  }
  public void setServicesName(String servicesName) {
    this.servicesName = servicesName;
  }

  /**
   **/
  public VpsOrderServiceTypes32 servicesCost(String servicesCost) {
    this.servicesCost = servicesCost;
    return this;
  }

  
  @ApiModelProperty(example = "10.00", value = "")
  @JsonProperty("services_cost")
  @NotNull

  public String getServicesCost() {
    return servicesCost;
  }
  public void setServicesCost(String servicesCost) {
    this.servicesCost = servicesCost;
  }

  /**
   **/
  public VpsOrderServiceTypes32 servicesCategory(String servicesCategory) {
    this.servicesCategory = servicesCategory;
    return this;
  }

  
  @ApiModelProperty(example = "2", value = "")
  @JsonProperty("services_category")
  @NotNull

  public String getServicesCategory() {
    return servicesCategory;
  }
  public void setServicesCategory(String servicesCategory) {
    this.servicesCategory = servicesCategory;
  }

  /**
   **/
  public VpsOrderServiceTypes32 servicesBuyable(String servicesBuyable) {
    this.servicesBuyable = servicesBuyable;
    return this;
  }

  
  @ApiModelProperty(example = "1", value = "")
  @JsonProperty("services_buyable")
  @NotNull

  public String getServicesBuyable() {
    return servicesBuyable;
  }
  public void setServicesBuyable(String servicesBuyable) {
    this.servicesBuyable = servicesBuyable;
  }

  /**
   **/
  public VpsOrderServiceTypes32 servicesType(String servicesType) {
    this.servicesType = servicesType;
    return this;
  }

  
  @ApiModelProperty(example = "1", value = "")
  @JsonProperty("services_type")
  @NotNull

  public String getServicesType() {
    return servicesType;
  }
  public void setServicesType(String servicesType) {
    this.servicesType = servicesType;
  }

  /**
   **/
  public VpsOrderServiceTypes32 servicesField1(String servicesField1) {
    this.servicesField1 = servicesField1;
    return this;
  }

  
  @ApiModelProperty(example = "slice", value = "")
  @JsonProperty("services_field1")
  @NotNull

  public String getServicesField1() {
    return servicesField1;
  }
  public void setServicesField1(String servicesField1) {
    this.servicesField1 = servicesField1;
  }

  /**
   **/
  public VpsOrderServiceTypes32 servicesField2(String servicesField2) {
    this.servicesField2 = servicesField2;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("services_field2")
  @NotNull

  public String getServicesField2() {
    return servicesField2;
  }
  public void setServicesField2(String servicesField2) {
    this.servicesField2 = servicesField2;
  }

  /**
   **/
  public VpsOrderServiceTypes32 servicesModule(String servicesModule) {
    this.servicesModule = servicesModule;
    return this;
  }

  
  @ApiModelProperty(example = "vps", value = "")
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
    VpsOrderServiceTypes32 vpsOrderServiceTypes32 = (VpsOrderServiceTypes32) o;
    return Objects.equals(servicesId, vpsOrderServiceTypes32.servicesId) &&
        Objects.equals(servicesName, vpsOrderServiceTypes32.servicesName) &&
        Objects.equals(servicesCost, vpsOrderServiceTypes32.servicesCost) &&
        Objects.equals(servicesCategory, vpsOrderServiceTypes32.servicesCategory) &&
        Objects.equals(servicesBuyable, vpsOrderServiceTypes32.servicesBuyable) &&
        Objects.equals(servicesType, vpsOrderServiceTypes32.servicesType) &&
        Objects.equals(servicesField1, vpsOrderServiceTypes32.servicesField1) &&
        Objects.equals(servicesField2, vpsOrderServiceTypes32.servicesField2) &&
        Objects.equals(servicesModule, vpsOrderServiceTypes32.servicesModule);
  }

  @Override
  public int hashCode() {
    return Objects.hash(servicesId, servicesName, servicesCost, servicesCategory, servicesBuyable, servicesType, servicesField1, servicesField2, servicesModule);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsOrderServiceTypes32 {\n");
    
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

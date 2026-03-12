package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.math.BigDecimal;
import javax.validation.Valid;
import javax.validation.constraints.*;
/**
 * An individual package tied to one of our services.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "An individual package tied to one of our services.")

public class Service   {
  private Integer servicesId = null;
  private String servicesName = null;
  private BigDecimal servicesCost = null;
  private String servicesCurrency = null;
  private Integer servicesCategory = null;
  private Boolean servicesBuyable = null;
  private Integer servicesType = null;
  private String servicesField1 = null;
  private String servicesField2 = null;
  private String servicesModule = null;

  /**
   **/
  public Service servicesId(Integer servicesId) {
    this.servicesId = servicesId;
    return this;
  }

  
  
  @Schema(example = "31", required = true, description = "")
  @JsonProperty("services_id")
  @NotNull
  public Integer getServicesId() {
    return servicesId;
  }
  public void setServicesId(Integer servicesId) {
    this.servicesId = servicesId;
  }

  /**
   **/
  public Service servicesName(String servicesName) {
    this.servicesName = servicesName;
    return this;
  }

  
  
  @Schema(example = "OpenVZ VPS Slice", required = true, description = "")
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
  public Service servicesCost(BigDecimal servicesCost) {
    this.servicesCost = servicesCost;
    return this;
  }

  
  
  @Schema(example = "6.0", required = true, description = "")
  @JsonProperty("services_cost")
  @NotNull
  @Valid
  public BigDecimal getServicesCost() {
    return servicesCost;
  }
  public void setServicesCost(BigDecimal servicesCost) {
    this.servicesCost = servicesCost;
  }

  /**
   **/
  public Service servicesCurrency(String servicesCurrency) {
    this.servicesCurrency = servicesCurrency;
    return this;
  }

  
  
  @Schema(example = "USD", required = true, description = "")
  @JsonProperty("services_currency")
  @NotNull
  public String getServicesCurrency() {
    return servicesCurrency;
  }
  public void setServicesCurrency(String servicesCurrency) {
    this.servicesCurrency = servicesCurrency;
  }

  /**
   **/
  public Service servicesCategory(Integer servicesCategory) {
    this.servicesCategory = servicesCategory;
    return this;
  }

  
  
  @Schema(example = "1", required = true, description = "")
  @JsonProperty("services_category")
  @NotNull
  public Integer getServicesCategory() {
    return servicesCategory;
  }
  public void setServicesCategory(Integer servicesCategory) {
    this.servicesCategory = servicesCategory;
  }

  /**
   **/
  public Service servicesBuyable(Boolean servicesBuyable) {
    this.servicesBuyable = servicesBuyable;
    return this;
  }

  
  
  @Schema(example = "true", required = true, description = "")
  @JsonProperty("services_buyable")
  @NotNull
  public Boolean isServicesBuyable() {
    return servicesBuyable;
  }
  public void setServicesBuyable(Boolean servicesBuyable) {
    this.servicesBuyable = servicesBuyable;
  }

  /**
   **/
  public Service servicesType(Integer servicesType) {
    this.servicesType = servicesType;
    return this;
  }

  
  
  @Schema(example = "6", required = true, description = "")
  @JsonProperty("services_type")
  @NotNull
  public Integer getServicesType() {
    return servicesType;
  }
  public void setServicesType(Integer servicesType) {
    this.servicesType = servicesType;
  }

  /**
   **/
  public Service servicesField1(String servicesField1) {
    this.servicesField1 = servicesField1;
    return this;
  }

  
  
  @Schema(example = "slice", required = true, description = "")
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
  public Service servicesField2(String servicesField2) {
    this.servicesField2 = servicesField2;
    return this;
  }

  
  
  @Schema(required = true, description = "")
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
  public Service servicesModule(String servicesModule) {
    this.servicesModule = servicesModule;
    return this;
  }

  
  
  @Schema(example = "vps", required = true, description = "")
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
    Service service = (Service) o;
    return Objects.equals(servicesId, service.servicesId) &&
        Objects.equals(servicesName, service.servicesName) &&
        Objects.equals(servicesCost, service.servicesCost) &&
        Objects.equals(servicesCurrency, service.servicesCurrency) &&
        Objects.equals(servicesCategory, service.servicesCategory) &&
        Objects.equals(servicesBuyable, service.servicesBuyable) &&
        Objects.equals(servicesType, service.servicesType) &&
        Objects.equals(servicesField1, service.servicesField1) &&
        Objects.equals(servicesField2, service.servicesField2) &&
        Objects.equals(servicesModule, service.servicesModule);
  }

  @Override
  public int hashCode() {
    return Objects.hash(servicesId, servicesName, servicesCost, servicesCurrency, servicesCategory, servicesBuyable, servicesType, servicesField1, servicesField2, servicesModule);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Service {\n");
    
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

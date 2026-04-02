package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import java.math.BigDecimal;
import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonCreator;

/**
  * An individual package tied to one of our services.
 **/
@Schema(description="An individual package tied to one of our services.")
public class Service   {
  
  @Schema(example = "31", required = true, description = "")
  private Integer servicesId = null;
  
  @Schema(example = "OpenVZ VPS Slice", required = true, description = "")
  private String servicesName = null;
  
  @Schema(example = "6", required = true, description = "")
  private BigDecimal servicesCost = null;
  
  @Schema(example = "USD", required = true, description = "")
  private String servicesCurrency = null;
  
  @Schema(example = "1", required = true, description = "")
  private Integer servicesCategory = null;
  
  @Schema(example = "true", required = true, description = "")
  private Boolean servicesBuyable = null;
  
  @Schema(example = "6", required = true, description = "")
  private Integer servicesType = null;
  
  @Schema(example = "slice", required = true, description = "")
  private String servicesField1 = null;
  
  @Schema(required = true, description = "")
  private String servicesField2 = null;
  
  @Schema(example = "vps", required = true, description = "")
  private String servicesModule = null;
 /**
   * Get servicesId
   * @return servicesId
  **/
  @JsonProperty("services_id")
  @NotNull
  public Integer getServicesId() {
    return servicesId;
  }

  public void setServicesId(Integer servicesId) {
    this.servicesId = servicesId;
  }

  public Service servicesId(Integer servicesId) {
    this.servicesId = servicesId;
    return this;
  }

 /**
   * Get servicesName
   * @return servicesName
  **/
  @JsonProperty("services_name")
  @NotNull
  public String getServicesName() {
    return servicesName;
  }

  public void setServicesName(String servicesName) {
    this.servicesName = servicesName;
  }

  public Service servicesName(String servicesName) {
    this.servicesName = servicesName;
    return this;
  }

 /**
   * Get servicesCost
   * @return servicesCost
  **/
  @JsonProperty("services_cost")
  @NotNull
  public BigDecimal getServicesCost() {
    return servicesCost;
  }

  public void setServicesCost(BigDecimal servicesCost) {
    this.servicesCost = servicesCost;
  }

  public Service servicesCost(BigDecimal servicesCost) {
    this.servicesCost = servicesCost;
    return this;
  }

 /**
   * Get servicesCurrency
   * @return servicesCurrency
  **/
  @JsonProperty("services_currency")
  @NotNull
  public String getServicesCurrency() {
    return servicesCurrency;
  }

  public void setServicesCurrency(String servicesCurrency) {
    this.servicesCurrency = servicesCurrency;
  }

  public Service servicesCurrency(String servicesCurrency) {
    this.servicesCurrency = servicesCurrency;
    return this;
  }

 /**
   * Get servicesCategory
   * @return servicesCategory
  **/
  @JsonProperty("services_category")
  @NotNull
  public Integer getServicesCategory() {
    return servicesCategory;
  }

  public void setServicesCategory(Integer servicesCategory) {
    this.servicesCategory = servicesCategory;
  }

  public Service servicesCategory(Integer servicesCategory) {
    this.servicesCategory = servicesCategory;
    return this;
  }

 /**
   * Get servicesBuyable
   * @return servicesBuyable
  **/
  @JsonProperty("services_buyable")
  @NotNull
  public Boolean isServicesBuyable() {
    return servicesBuyable;
  }

  public void setServicesBuyable(Boolean servicesBuyable) {
    this.servicesBuyable = servicesBuyable;
  }

  public Service servicesBuyable(Boolean servicesBuyable) {
    this.servicesBuyable = servicesBuyable;
    return this;
  }

 /**
   * Get servicesType
   * @return servicesType
  **/
  @JsonProperty("services_type")
  @NotNull
  public Integer getServicesType() {
    return servicesType;
  }

  public void setServicesType(Integer servicesType) {
    this.servicesType = servicesType;
  }

  public Service servicesType(Integer servicesType) {
    this.servicesType = servicesType;
    return this;
  }

 /**
   * Get servicesField1
   * @return servicesField1
  **/
  @JsonProperty("services_field1")
  @NotNull
  public String getServicesField1() {
    return servicesField1;
  }

  public void setServicesField1(String servicesField1) {
    this.servicesField1 = servicesField1;
  }

  public Service servicesField1(String servicesField1) {
    this.servicesField1 = servicesField1;
    return this;
  }

 /**
   * Get servicesField2
   * @return servicesField2
  **/
  @JsonProperty("services_field2")
  @NotNull
  public String getServicesField2() {
    return servicesField2;
  }

  public void setServicesField2(String servicesField2) {
    this.servicesField2 = servicesField2;
  }

  public Service servicesField2(String servicesField2) {
    this.servicesField2 = servicesField2;
    return this;
  }

 /**
   * Get servicesModule
   * @return servicesModule
  **/
  @JsonProperty("services_module")
  @NotNull
  public String getServicesModule() {
    return servicesModule;
  }

  public void setServicesModule(String servicesModule) {
    this.servicesModule = servicesModule;
  }

  public Service servicesModule(String servicesModule) {
    this.servicesModule = servicesModule;
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

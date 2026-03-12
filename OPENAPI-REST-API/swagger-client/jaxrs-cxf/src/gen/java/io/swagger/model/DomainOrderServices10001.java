package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
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
  * Example schema for a domain service catalog entry.
 **/
@Schema(description="Example schema for a domain service catalog entry.")
public class DomainOrderServices10001   {
  
  @Schema(example = "10001", description = "Service ID")
 /**
   * Service ID  
  **/
  private String servicesId = null;
  
  @Schema(example = ".asia Domain Name Registration", description = "Service Name")
 /**
   * Service Name  
  **/
  private String servicesName = null;
  
  @Schema(example = "19.00", description = "Service Cost")
 /**
   * Service Cost  
  **/
  private String servicesCost = null;
  
  @Schema(example = "USD", description = "Currency of Service Cost")
 /**
   * Currency of Service Cost  
  **/
  private String servicesCurrency = null;
  
  @Schema(example = "100", description = "Service Category")
 /**
   * Service Category  
  **/
  private String servicesCategory = null;
  
  @Schema(example = "1", description = "Buyable flag for Service")
 /**
   * Buyable flag for Service  
  **/
  private String servicesBuyable = null;
  
  @Schema(example = "100", description = "Service Type")
 /**
   * Service Type  
  **/
  private String servicesType = null;
  
  @Schema(example = ".asia", description = "Field 1 of Service")
 /**
   * Field 1 of Service  
  **/
  private String servicesField1 = null;
  
  @Schema(description = "Field 2 of Service")
 /**
   * Field 2 of Service  
  **/
  private String servicesField2 = null;
  
  @Schema(example = "domains", description = "Module of Service")
 /**
   * Module of Service  
  **/
  private String servicesModule = null;
  
  @Schema(example = "0", description = "Hidden flag for Service")
 /**
   * Hidden flag for Service  
  **/
  private String servicesHidden = null;
 /**
   * Service ID
   * @return servicesId
  **/
  @JsonProperty("services_id")
  @NotNull
  public String getServicesId() {
    return servicesId;
  }

  public void setServicesId(String servicesId) {
    this.servicesId = servicesId;
  }

  public DomainOrderServices10001 servicesId(String servicesId) {
    this.servicesId = servicesId;
    return this;
  }

 /**
   * Service Name
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

  public DomainOrderServices10001 servicesName(String servicesName) {
    this.servicesName = servicesName;
    return this;
  }

 /**
   * Service Cost
   * @return servicesCost
  **/
  @JsonProperty("services_cost")
  @NotNull
  public String getServicesCost() {
    return servicesCost;
  }

  public void setServicesCost(String servicesCost) {
    this.servicesCost = servicesCost;
  }

  public DomainOrderServices10001 servicesCost(String servicesCost) {
    this.servicesCost = servicesCost;
    return this;
  }

 /**
   * Currency of Service Cost
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

  public DomainOrderServices10001 servicesCurrency(String servicesCurrency) {
    this.servicesCurrency = servicesCurrency;
    return this;
  }

 /**
   * Service Category
   * @return servicesCategory
  **/
  @JsonProperty("services_category")
  @NotNull
  public String getServicesCategory() {
    return servicesCategory;
  }

  public void setServicesCategory(String servicesCategory) {
    this.servicesCategory = servicesCategory;
  }

  public DomainOrderServices10001 servicesCategory(String servicesCategory) {
    this.servicesCategory = servicesCategory;
    return this;
  }

 /**
   * Buyable flag for Service
   * @return servicesBuyable
  **/
  @JsonProperty("services_buyable")
  @NotNull
  public String getServicesBuyable() {
    return servicesBuyable;
  }

  public void setServicesBuyable(String servicesBuyable) {
    this.servicesBuyable = servicesBuyable;
  }

  public DomainOrderServices10001 servicesBuyable(String servicesBuyable) {
    this.servicesBuyable = servicesBuyable;
    return this;
  }

 /**
   * Service Type
   * @return servicesType
  **/
  @JsonProperty("services_type")
  @NotNull
  public String getServicesType() {
    return servicesType;
  }

  public void setServicesType(String servicesType) {
    this.servicesType = servicesType;
  }

  public DomainOrderServices10001 servicesType(String servicesType) {
    this.servicesType = servicesType;
    return this;
  }

 /**
   * Field 1 of Service
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

  public DomainOrderServices10001 servicesField1(String servicesField1) {
    this.servicesField1 = servicesField1;
    return this;
  }

 /**
   * Field 2 of Service
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

  public DomainOrderServices10001 servicesField2(String servicesField2) {
    this.servicesField2 = servicesField2;
    return this;
  }

 /**
   * Module of Service
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

  public DomainOrderServices10001 servicesModule(String servicesModule) {
    this.servicesModule = servicesModule;
    return this;
  }

 /**
   * Hidden flag for Service
   * @return servicesHidden
  **/
  @JsonProperty("services_hidden")
  @NotNull
  public String getServicesHidden() {
    return servicesHidden;
  }

  public void setServicesHidden(String servicesHidden) {
    this.servicesHidden = servicesHidden;
  }

  public DomainOrderServices10001 servicesHidden(String servicesHidden) {
    this.servicesHidden = servicesHidden;
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

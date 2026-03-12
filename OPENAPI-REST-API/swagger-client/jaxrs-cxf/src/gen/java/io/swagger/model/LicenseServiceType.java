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
  * Service type definition for a software license, including name, pricing, and category.
 **/
@Schema(description="Service type definition for a software license, including name, pricing, and category.")
public class LicenseServiceType   {
  
  @Schema(example = "5034", description = "Service ID")
 /**
   * Service ID  
  **/
  private String servicesId = null;
  
  @Schema(example = "KernelCare License", description = "Service name")
 /**
   * Service name  
  **/
  private String servicesName = null;
  
  @Schema(example = "2.95", description = "Service cost")
 /**
   * Service cost  
  **/
  private String servicesCost = null;
  
  @Schema(example = "508", description = "Service category")
 /**
   * Service category  
  **/
  private String servicesCategory = null;
  
  @Schema(example = "1", description = "Buyable status")
 /**
   * Buyable status  
  **/
  private String servicesBuyable = null;
  
  @Schema(example = "508", description = "Service type")
 /**
   * Service type  
  **/
  private String servicesType = null;
  
  @Schema(example = "16", description = "Service field 1")
 /**
   * Service field 1  
  **/
  private String servicesField1 = null;
  
  @Schema(description = "Service field 2")
 /**
   * Service field 2  
  **/
  private String servicesField2 = null;
  
  @Schema(example = "licenses", description = "Service module")
 /**
   * Service module  
  **/
  private String servicesModule = null;
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

  public LicenseServiceType servicesId(String servicesId) {
    this.servicesId = servicesId;
    return this;
  }

 /**
   * Service name
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

  public LicenseServiceType servicesName(String servicesName) {
    this.servicesName = servicesName;
    return this;
  }

 /**
   * Service cost
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

  public LicenseServiceType servicesCost(String servicesCost) {
    this.servicesCost = servicesCost;
    return this;
  }

 /**
   * Service category
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

  public LicenseServiceType servicesCategory(String servicesCategory) {
    this.servicesCategory = servicesCategory;
    return this;
  }

 /**
   * Buyable status
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

  public LicenseServiceType servicesBuyable(String servicesBuyable) {
    this.servicesBuyable = servicesBuyable;
    return this;
  }

 /**
   * Service type
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

  public LicenseServiceType servicesType(String servicesType) {
    this.servicesType = servicesType;
    return this;
  }

 /**
   * Service field 1
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

  public LicenseServiceType servicesField1(String servicesField1) {
    this.servicesField1 = servicesField1;
    return this;
  }

 /**
   * Service field 2
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

  public LicenseServiceType servicesField2(String servicesField2) {
    this.servicesField2 = servicesField2;
    return this;
  }

 /**
   * Service module
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

  public LicenseServiceType servicesModule(String servicesModule) {
    this.servicesModule = servicesModule;
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

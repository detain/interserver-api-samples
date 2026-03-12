package io.swagger.model;


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

public class VpsOrderServiceTypes32   {
  
  @Schema(example = "32", description = "")
  private String servicesId = null;
  
  @Schema(example = "KVM Windows VPS Slice", description = "")
  private String servicesName = null;
  
  @Schema(example = "10.00", description = "")
  private String servicesCost = null;
  
  @Schema(example = "2", description = "")
  private String servicesCategory = null;
  
  @Schema(example = "1", description = "")
  private String servicesBuyable = null;
  
  @Schema(example = "1", description = "")
  private String servicesType = null;
  
  @Schema(example = "slice", description = "")
  private String servicesField1 = null;
  
  @Schema(description = "")
  private String servicesField2 = null;
  
  @Schema(example = "vps", description = "")
  private String servicesModule = null;
 /**
   * Get servicesId
   * @return servicesId
  **/
  @JsonProperty("services_id")
  public String getServicesId() {
    return servicesId;
  }

  public void setServicesId(String servicesId) {
    this.servicesId = servicesId;
  }

  public VpsOrderServiceTypes32 servicesId(String servicesId) {
    this.servicesId = servicesId;
    return this;
  }

 /**
   * Get servicesName
   * @return servicesName
  **/
  @JsonProperty("services_name")
  public String getServicesName() {
    return servicesName;
  }

  public void setServicesName(String servicesName) {
    this.servicesName = servicesName;
  }

  public VpsOrderServiceTypes32 servicesName(String servicesName) {
    this.servicesName = servicesName;
    return this;
  }

 /**
   * Get servicesCost
   * @return servicesCost
  **/
  @JsonProperty("services_cost")
  public String getServicesCost() {
    return servicesCost;
  }

  public void setServicesCost(String servicesCost) {
    this.servicesCost = servicesCost;
  }

  public VpsOrderServiceTypes32 servicesCost(String servicesCost) {
    this.servicesCost = servicesCost;
    return this;
  }

 /**
   * Get servicesCategory
   * @return servicesCategory
  **/
  @JsonProperty("services_category")
  public String getServicesCategory() {
    return servicesCategory;
  }

  public void setServicesCategory(String servicesCategory) {
    this.servicesCategory = servicesCategory;
  }

  public VpsOrderServiceTypes32 servicesCategory(String servicesCategory) {
    this.servicesCategory = servicesCategory;
    return this;
  }

 /**
   * Get servicesBuyable
   * @return servicesBuyable
  **/
  @JsonProperty("services_buyable")
  public String getServicesBuyable() {
    return servicesBuyable;
  }

  public void setServicesBuyable(String servicesBuyable) {
    this.servicesBuyable = servicesBuyable;
  }

  public VpsOrderServiceTypes32 servicesBuyable(String servicesBuyable) {
    this.servicesBuyable = servicesBuyable;
    return this;
  }

 /**
   * Get servicesType
   * @return servicesType
  **/
  @JsonProperty("services_type")
  public String getServicesType() {
    return servicesType;
  }

  public void setServicesType(String servicesType) {
    this.servicesType = servicesType;
  }

  public VpsOrderServiceTypes32 servicesType(String servicesType) {
    this.servicesType = servicesType;
    return this;
  }

 /**
   * Get servicesField1
   * @return servicesField1
  **/
  @JsonProperty("services_field1")
  public String getServicesField1() {
    return servicesField1;
  }

  public void setServicesField1(String servicesField1) {
    this.servicesField1 = servicesField1;
  }

  public VpsOrderServiceTypes32 servicesField1(String servicesField1) {
    this.servicesField1 = servicesField1;
    return this;
  }

 /**
   * Get servicesField2
   * @return servicesField2
  **/
  @JsonProperty("services_field2")
  public String getServicesField2() {
    return servicesField2;
  }

  public void setServicesField2(String servicesField2) {
    this.servicesField2 = servicesField2;
  }

  public VpsOrderServiceTypes32 servicesField2(String servicesField2) {
    this.servicesField2 = servicesField2;
    return this;
  }

 /**
   * Get servicesModule
   * @return servicesModule
  **/
  @JsonProperty("services_module")
  public String getServicesModule() {
    return servicesModule;
  }

  public void setServicesModule(String servicesModule) {
    this.servicesModule = servicesModule;
  }

  public VpsOrderServiceTypes32 servicesModule(String servicesModule) {
    this.servicesModule = servicesModule;
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

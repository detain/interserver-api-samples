package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Example schema for a domain service catalog entry.
 */
@ApiModel(description="Example schema for a domain service catalog entry.")

public class DomainOrderServices10001  {
  
 /**
  * Service ID
  */
  @ApiModelProperty(example = "10001", value = "Service ID")

  private String servicesId;

 /**
  * Service Name
  */
  @ApiModelProperty(example = ".asia Domain Name Registration", value = "Service Name")

  private String servicesName;

 /**
  * Service Cost
  */
  @ApiModelProperty(example = "19.00", value = "Service Cost")

  private String servicesCost;

 /**
  * Currency of Service Cost
  */
  @ApiModelProperty(example = "USD", value = "Currency of Service Cost")

  private String servicesCurrency;

 /**
  * Service Category
  */
  @ApiModelProperty(example = "100", value = "Service Category")

  private String servicesCategory;

 /**
  * Buyable flag for Service
  */
  @ApiModelProperty(example = "1", value = "Buyable flag for Service")

  private String servicesBuyable;

 /**
  * Service Type
  */
  @ApiModelProperty(example = "100", value = "Service Type")

  private String servicesType;

 /**
  * Field 1 of Service
  */
  @ApiModelProperty(example = ".asia", value = "Field 1 of Service")

  private String servicesField1;

 /**
  * Field 2 of Service
  */
  @ApiModelProperty(example = "", value = "Field 2 of Service")

  private String servicesField2;

 /**
  * Module of Service
  */
  @ApiModelProperty(example = "domains", value = "Module of Service")

  private String servicesModule;

 /**
  * Hidden flag for Service
  */
  @ApiModelProperty(example = "0", value = "Hidden flag for Service")

  private String servicesHidden;
 /**
   * Service ID
   * @return servicesId
  **/
  @JsonProperty("services_id")
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DomainOrderServices10001 domainOrderServices10001 = (DomainOrderServices10001) o;
    return Objects.equals(this.servicesId, domainOrderServices10001.servicesId) &&
        Objects.equals(this.servicesName, domainOrderServices10001.servicesName) &&
        Objects.equals(this.servicesCost, domainOrderServices10001.servicesCost) &&
        Objects.equals(this.servicesCurrency, domainOrderServices10001.servicesCurrency) &&
        Objects.equals(this.servicesCategory, domainOrderServices10001.servicesCategory) &&
        Objects.equals(this.servicesBuyable, domainOrderServices10001.servicesBuyable) &&
        Objects.equals(this.servicesType, domainOrderServices10001.servicesType) &&
        Objects.equals(this.servicesField1, domainOrderServices10001.servicesField1) &&
        Objects.equals(this.servicesField2, domainOrderServices10001.servicesField2) &&
        Objects.equals(this.servicesModule, domainOrderServices10001.servicesModule) &&
        Objects.equals(this.servicesHidden, domainOrderServices10001.servicesHidden);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}


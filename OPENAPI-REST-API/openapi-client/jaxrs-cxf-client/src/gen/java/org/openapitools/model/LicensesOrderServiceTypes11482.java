package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class LicensesOrderServiceTypes11482  {
  
 /**
  * Service ID
  */
  @ApiModelProperty(example = "11482", value = "Service ID")

  private String servicesId;

 /**
  * Service Name
  */
  @ApiModelProperty(example = "DirectAdmin Standard", value = "Service Name")

  private String servicesName;

 /**
  * Service Cost
  */
  @ApiModelProperty(example = "21.75", value = "Service Cost")

  private String servicesCost;

 /**
  * Service Category
  */
  @ApiModelProperty(example = "506", value = "Service Category")

  private String servicesCategory;

 /**
  * Buyable flag for Service
  */
  @ApiModelProperty(example = "1", value = "Buyable flag for Service")

  private String servicesBuyable;

 /**
  * Service Type
  */
  @ApiModelProperty(example = "506", value = "Service Type")

  private String servicesType;

 /**
  * Field 1 of Service
  */
  @ApiModelProperty(example = "2704,Standard", value = "Field 1 of Service")

  private String servicesField1;

 /**
  * Field 2 of Service
  */
  @ApiModelProperty(example = "Unlimited Accounts & Domains<br><br>The DirectAdmin standard license is best for medium to large shared-hosting and/or reseller-hosting companies. No limit on accounts or domains.", value = "Field 2 of Service")

  private String servicesField2;

 /**
  * Module of Service
  */
  @ApiModelProperty(example = "licenses", value = "Module of Service")

  private String servicesModule;
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

  public LicensesOrderServiceTypes11482 servicesId(String servicesId) {
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

  public LicensesOrderServiceTypes11482 servicesName(String servicesName) {
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

  public LicensesOrderServiceTypes11482 servicesCost(String servicesCost) {
    this.servicesCost = servicesCost;
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

  public LicensesOrderServiceTypes11482 servicesCategory(String servicesCategory) {
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

  public LicensesOrderServiceTypes11482 servicesBuyable(String servicesBuyable) {
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

  public LicensesOrderServiceTypes11482 servicesType(String servicesType) {
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

  public LicensesOrderServiceTypes11482 servicesField1(String servicesField1) {
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

  public LicensesOrderServiceTypes11482 servicesField2(String servicesField2) {
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

  public LicensesOrderServiceTypes11482 servicesModule(String servicesModule) {
    this.servicesModule = servicesModule;
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
    LicensesOrderServiceTypes11482 licensesOrderServiceTypes11482 = (LicensesOrderServiceTypes11482) o;
    return Objects.equals(this.servicesId, licensesOrderServiceTypes11482.servicesId) &&
        Objects.equals(this.servicesName, licensesOrderServiceTypes11482.servicesName) &&
        Objects.equals(this.servicesCost, licensesOrderServiceTypes11482.servicesCost) &&
        Objects.equals(this.servicesCategory, licensesOrderServiceTypes11482.servicesCategory) &&
        Objects.equals(this.servicesBuyable, licensesOrderServiceTypes11482.servicesBuyable) &&
        Objects.equals(this.servicesType, licensesOrderServiceTypes11482.servicesType) &&
        Objects.equals(this.servicesField1, licensesOrderServiceTypes11482.servicesField1) &&
        Objects.equals(this.servicesField2, licensesOrderServiceTypes11482.servicesField2) &&
        Objects.equals(this.servicesModule, licensesOrderServiceTypes11482.servicesModule);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}


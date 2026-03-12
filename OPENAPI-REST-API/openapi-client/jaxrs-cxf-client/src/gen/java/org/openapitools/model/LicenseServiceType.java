package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Service type definition for a software license, including name, pricing, and category.
 */
@ApiModel(description="Service type definition for a software license, including name, pricing, and category.")

public class LicenseServiceType  {
  
 /**
  * Service ID
  */
  @ApiModelProperty(example = "5034", value = "Service ID")

  private String servicesId;

 /**
  * Service name
  */
  @ApiModelProperty(example = "KernelCare License", value = "Service name")

  private String servicesName;

 /**
  * Service cost
  */
  @ApiModelProperty(example = "2.95", value = "Service cost")

  private String servicesCost;

 /**
  * Service category
  */
  @ApiModelProperty(example = "508", value = "Service category")

  private String servicesCategory;

 /**
  * Buyable status
  */
  @ApiModelProperty(example = "1", value = "Buyable status")

  private String servicesBuyable;

 /**
  * Service type
  */
  @ApiModelProperty(example = "508", value = "Service type")

  private String servicesType;

 /**
  * Service field 1
  */
  @ApiModelProperty(example = "16", value = "Service field 1")

  private String servicesField1;

 /**
  * Service field 2
  */
  @ApiModelProperty(example = "", value = "Service field 2")

  private String servicesField2;

 /**
  * Service module
  */
  @ApiModelProperty(example = "licenses", value = "Service module")

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

  public LicenseServiceType servicesId(String servicesId) {
    this.servicesId = servicesId;
    return this;
  }

 /**
   * Service name
   * @return servicesName
  **/
  @JsonProperty("services_name")
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    LicenseServiceType licenseServiceType = (LicenseServiceType) o;
    return Objects.equals(this.servicesId, licenseServiceType.servicesId) &&
        Objects.equals(this.servicesName, licenseServiceType.servicesName) &&
        Objects.equals(this.servicesCost, licenseServiceType.servicesCost) &&
        Objects.equals(this.servicesCategory, licenseServiceType.servicesCategory) &&
        Objects.equals(this.servicesBuyable, licenseServiceType.servicesBuyable) &&
        Objects.equals(this.servicesType, licenseServiceType.servicesType) &&
        Objects.equals(this.servicesField1, licenseServiceType.servicesField1) &&
        Objects.equals(this.servicesField2, licenseServiceType.servicesField2) &&
        Objects.equals(this.servicesModule, licenseServiceType.servicesModule);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}


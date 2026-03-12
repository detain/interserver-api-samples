package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Service type definition for a mail service, including name, pricing, and category.
 */
@ApiModel(description="Service type definition for a mail service, including name, pricing, and category.")

public class MailServiceType  {
  
 /**
  * The ID of the service type.
  */
  @ApiModelProperty(example = "10880", value = "The ID of the service type.")

  private String servicesId;

 /**
  * The name of the service type.
  */
  @ApiModelProperty(example = "MailBaby Mail", value = "The name of the service type.")

  private String servicesName;

 /**
  * The cost of the service type.
  */
  @ApiModelProperty(example = "1.00", value = "The cost of the service type.")

  private String servicesCost;

 /**
  * The category of the service type.
  */
  @ApiModelProperty(example = "800", value = "The category of the service type.")

  private String servicesCategory;

 /**
  * Whether the service type is buyable.
  */
  @ApiModelProperty(example = "1", value = "Whether the service type is buyable.")

  private String servicesBuyable;

 /**
  * The type of the service type.
  */
  @ApiModelProperty(example = "800", value = "The type of the service type.")

  private String servicesType;

 /**
  * Additional field for the service type.
  */
  @ApiModelProperty(example = "", value = "Additional field for the service type.")

  private String servicesField1;

 /**
  * Additional field for the service type.
  */
  @ApiModelProperty(example = "", value = "Additional field for the service type.")

  private String servicesField2;

 /**
  * The module of the service type.
  */
  @ApiModelProperty(example = "mail", value = "The module of the service type.")

  private String servicesModule;
 /**
   * The ID of the service type.
   * @return servicesId
  **/
  @JsonProperty("services_id")
  public String getServicesId() {
    return servicesId;
  }

  public void setServicesId(String servicesId) {
    this.servicesId = servicesId;
  }

  public MailServiceType servicesId(String servicesId) {
    this.servicesId = servicesId;
    return this;
  }

 /**
   * The name of the service type.
   * @return servicesName
  **/
  @JsonProperty("services_name")
  public String getServicesName() {
    return servicesName;
  }

  public void setServicesName(String servicesName) {
    this.servicesName = servicesName;
  }

  public MailServiceType servicesName(String servicesName) {
    this.servicesName = servicesName;
    return this;
  }

 /**
   * The cost of the service type.
   * @return servicesCost
  **/
  @JsonProperty("services_cost")
  public String getServicesCost() {
    return servicesCost;
  }

  public void setServicesCost(String servicesCost) {
    this.servicesCost = servicesCost;
  }

  public MailServiceType servicesCost(String servicesCost) {
    this.servicesCost = servicesCost;
    return this;
  }

 /**
   * The category of the service type.
   * @return servicesCategory
  **/
  @JsonProperty("services_category")
  public String getServicesCategory() {
    return servicesCategory;
  }

  public void setServicesCategory(String servicesCategory) {
    this.servicesCategory = servicesCategory;
  }

  public MailServiceType servicesCategory(String servicesCategory) {
    this.servicesCategory = servicesCategory;
    return this;
  }

 /**
   * Whether the service type is buyable.
   * @return servicesBuyable
  **/
  @JsonProperty("services_buyable")
  public String getServicesBuyable() {
    return servicesBuyable;
  }

  public void setServicesBuyable(String servicesBuyable) {
    this.servicesBuyable = servicesBuyable;
  }

  public MailServiceType servicesBuyable(String servicesBuyable) {
    this.servicesBuyable = servicesBuyable;
    return this;
  }

 /**
   * The type of the service type.
   * @return servicesType
  **/
  @JsonProperty("services_type")
  public String getServicesType() {
    return servicesType;
  }

  public void setServicesType(String servicesType) {
    this.servicesType = servicesType;
  }

  public MailServiceType servicesType(String servicesType) {
    this.servicesType = servicesType;
    return this;
  }

 /**
   * Additional field for the service type.
   * @return servicesField1
  **/
  @JsonProperty("services_field1")
  public String getServicesField1() {
    return servicesField1;
  }

  public void setServicesField1(String servicesField1) {
    this.servicesField1 = servicesField1;
  }

  public MailServiceType servicesField1(String servicesField1) {
    this.servicesField1 = servicesField1;
    return this;
  }

 /**
   * Additional field for the service type.
   * @return servicesField2
  **/
  @JsonProperty("services_field2")
  public String getServicesField2() {
    return servicesField2;
  }

  public void setServicesField2(String servicesField2) {
    this.servicesField2 = servicesField2;
  }

  public MailServiceType servicesField2(String servicesField2) {
    this.servicesField2 = servicesField2;
    return this;
  }

 /**
   * The module of the service type.
   * @return servicesModule
  **/
  @JsonProperty("services_module")
  public String getServicesModule() {
    return servicesModule;
  }

  public void setServicesModule(String servicesModule) {
    this.servicesModule = servicesModule;
  }

  public MailServiceType servicesModule(String servicesModule) {
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
    MailServiceType mailServiceType = (MailServiceType) o;
    return Objects.equals(this.servicesId, mailServiceType.servicesId) &&
        Objects.equals(this.servicesName, mailServiceType.servicesName) &&
        Objects.equals(this.servicesCost, mailServiceType.servicesCost) &&
        Objects.equals(this.servicesCategory, mailServiceType.servicesCategory) &&
        Objects.equals(this.servicesBuyable, mailServiceType.servicesBuyable) &&
        Objects.equals(this.servicesType, mailServiceType.servicesType) &&
        Objects.equals(this.servicesField1, mailServiceType.servicesField1) &&
        Objects.equals(this.servicesField2, mailServiceType.servicesField2) &&
        Objects.equals(this.servicesModule, mailServiceType.servicesModule);
  }

  @Override
  public int hashCode() {
    return Objects.hash(servicesId, servicesName, servicesCost, servicesCategory, servicesBuyable, servicesType, servicesField1, servicesField2, servicesModule);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MailServiceType {\n");
    
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


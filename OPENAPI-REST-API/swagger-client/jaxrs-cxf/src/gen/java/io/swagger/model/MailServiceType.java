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
  * Service type definition for a mail service, including name, pricing, and category.
 **/
@Schema(description="Service type definition for a mail service, including name, pricing, and category.")
public class MailServiceType   {
  
  @Schema(example = "10880", description = "The ID of the service type.")
 /**
   * The ID of the service type.  
  **/
  private String servicesId = null;
  
  @Schema(example = "MailBaby Mail", description = "The name of the service type.")
 /**
   * The name of the service type.  
  **/
  private String servicesName = null;
  
  @Schema(example = "1.00", description = "The cost of the service type.")
 /**
   * The cost of the service type.  
  **/
  private String servicesCost = null;
  
  @Schema(example = "800", description = "The category of the service type.")
 /**
   * The category of the service type.  
  **/
  private String servicesCategory = null;
  
  @Schema(example = "1", description = "Whether the service type is buyable.")
 /**
   * Whether the service type is buyable.  
  **/
  private String servicesBuyable = null;
  
  @Schema(example = "800", description = "The type of the service type.")
 /**
   * The type of the service type.  
  **/
  private String servicesType = null;
  
  @Schema(description = "Additional field for the service type.")
 /**
   * Additional field for the service type.  
  **/
  private String servicesField1 = null;
  
  @Schema(description = "Additional field for the service type.")
 /**
   * Additional field for the service type.  
  **/
  private String servicesField2 = null;
  
  @Schema(example = "mail", description = "The module of the service type.")
 /**
   * The module of the service type.  
  **/
  private String servicesModule = null;
 /**
   * The ID of the service type.
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

  public MailServiceType servicesId(String servicesId) {
    this.servicesId = servicesId;
    return this;
  }

 /**
   * The name of the service type.
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

  public MailServiceType servicesName(String servicesName) {
    this.servicesName = servicesName;
    return this;
  }

 /**
   * The cost of the service type.
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

  public MailServiceType servicesCost(String servicesCost) {
    this.servicesCost = servicesCost;
    return this;
  }

 /**
   * The category of the service type.
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

  public MailServiceType servicesCategory(String servicesCategory) {
    this.servicesCategory = servicesCategory;
    return this;
  }

 /**
   * Whether the service type is buyable.
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

  public MailServiceType servicesBuyable(String servicesBuyable) {
    this.servicesBuyable = servicesBuyable;
    return this;
  }

 /**
   * The type of the service type.
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

  public MailServiceType servicesType(String servicesType) {
    this.servicesType = servicesType;
    return this;
  }

 /**
   * Additional field for the service type.
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

  public MailServiceType servicesField1(String servicesField1) {
    this.servicesField1 = servicesField1;
    return this;
  }

 /**
   * Additional field for the service type.
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

  public MailServiceType servicesField2(String servicesField2) {
    this.servicesField2 = servicesField2;
    return this;
  }

 /**
   * The module of the service type.
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

  public MailServiceType servicesModule(String servicesModule) {
    this.servicesModule = servicesModule;
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

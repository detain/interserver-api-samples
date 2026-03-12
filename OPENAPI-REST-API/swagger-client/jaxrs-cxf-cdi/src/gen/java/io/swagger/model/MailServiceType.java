package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
/**
 * Service type definition for a mail service, including name, pricing, and category.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "Service type definition for a mail service, including name, pricing, and category.")

public class MailServiceType   {
  private String servicesId = null;
  private String servicesName = null;
  private String servicesCost = null;
  private String servicesCategory = null;
  private String servicesBuyable = null;
  private String servicesType = null;
  private String servicesField1 = null;
  private String servicesField2 = null;
  private String servicesModule = null;

  /**
   * The ID of the service type.
   **/
  public MailServiceType servicesId(String servicesId) {
    this.servicesId = servicesId;
    return this;
  }

  
  
  @Schema(example = "10880", description = "The ID of the service type.")
  @JsonProperty("services_id")
  @NotNull
  public String getServicesId() {
    return servicesId;
  }
  public void setServicesId(String servicesId) {
    this.servicesId = servicesId;
  }

  /**
   * The name of the service type.
   **/
  public MailServiceType servicesName(String servicesName) {
    this.servicesName = servicesName;
    return this;
  }

  
  
  @Schema(example = "MailBaby Mail", description = "The name of the service type.")
  @JsonProperty("services_name")
  @NotNull
  public String getServicesName() {
    return servicesName;
  }
  public void setServicesName(String servicesName) {
    this.servicesName = servicesName;
  }

  /**
   * The cost of the service type.
   **/
  public MailServiceType servicesCost(String servicesCost) {
    this.servicesCost = servicesCost;
    return this;
  }

  
  
  @Schema(example = "1.00", description = "The cost of the service type.")
  @JsonProperty("services_cost")
  @NotNull
  public String getServicesCost() {
    return servicesCost;
  }
  public void setServicesCost(String servicesCost) {
    this.servicesCost = servicesCost;
  }

  /**
   * The category of the service type.
   **/
  public MailServiceType servicesCategory(String servicesCategory) {
    this.servicesCategory = servicesCategory;
    return this;
  }

  
  
  @Schema(example = "800", description = "The category of the service type.")
  @JsonProperty("services_category")
  @NotNull
  public String getServicesCategory() {
    return servicesCategory;
  }
  public void setServicesCategory(String servicesCategory) {
    this.servicesCategory = servicesCategory;
  }

  /**
   * Whether the service type is buyable.
   **/
  public MailServiceType servicesBuyable(String servicesBuyable) {
    this.servicesBuyable = servicesBuyable;
    return this;
  }

  
  
  @Schema(example = "1", description = "Whether the service type is buyable.")
  @JsonProperty("services_buyable")
  @NotNull
  public String getServicesBuyable() {
    return servicesBuyable;
  }
  public void setServicesBuyable(String servicesBuyable) {
    this.servicesBuyable = servicesBuyable;
  }

  /**
   * The type of the service type.
   **/
  public MailServiceType servicesType(String servicesType) {
    this.servicesType = servicesType;
    return this;
  }

  
  
  @Schema(example = "800", description = "The type of the service type.")
  @JsonProperty("services_type")
  @NotNull
  public String getServicesType() {
    return servicesType;
  }
  public void setServicesType(String servicesType) {
    this.servicesType = servicesType;
  }

  /**
   * Additional field for the service type.
   **/
  public MailServiceType servicesField1(String servicesField1) {
    this.servicesField1 = servicesField1;
    return this;
  }

  
  
  @Schema(description = "Additional field for the service type.")
  @JsonProperty("services_field1")
  @NotNull
  public String getServicesField1() {
    return servicesField1;
  }
  public void setServicesField1(String servicesField1) {
    this.servicesField1 = servicesField1;
  }

  /**
   * Additional field for the service type.
   **/
  public MailServiceType servicesField2(String servicesField2) {
    this.servicesField2 = servicesField2;
    return this;
  }

  
  
  @Schema(description = "Additional field for the service type.")
  @JsonProperty("services_field2")
  @NotNull
  public String getServicesField2() {
    return servicesField2;
  }
  public void setServicesField2(String servicesField2) {
    this.servicesField2 = servicesField2;
  }

  /**
   * The module of the service type.
   **/
  public MailServiceType servicesModule(String servicesModule) {
    this.servicesModule = servicesModule;
    return this;
  }

  
  
  @Schema(example = "mail", description = "The module of the service type.")
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
    MailServiceType mailServiceType = (MailServiceType) o;
    return Objects.equals(servicesId, mailServiceType.servicesId) &&
        Objects.equals(servicesName, mailServiceType.servicesName) &&
        Objects.equals(servicesCost, mailServiceType.servicesCost) &&
        Objects.equals(servicesCategory, mailServiceType.servicesCategory) &&
        Objects.equals(servicesBuyable, mailServiceType.servicesBuyable) &&
        Objects.equals(servicesType, mailServiceType.servicesType) &&
        Objects.equals(servicesField1, mailServiceType.servicesField1) &&
        Objects.equals(servicesField2, mailServiceType.servicesField2) &&
        Objects.equals(servicesModule, mailServiceType.servicesModule);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

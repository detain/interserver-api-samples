package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * Service type definition for a software license, including name, pricing, and category.
 **/
@Schema(description = "Service type definition for a software license, including name, pricing, and category.")


public class LicenseServiceType   {
  @JsonProperty("services_id")
  private String servicesId = null;
  @JsonProperty("services_name")
  private String servicesName = null;
  @JsonProperty("services_cost")
  private String servicesCost = null;
  @JsonProperty("services_category")
  private String servicesCategory = null;
  @JsonProperty("services_buyable")
  private String servicesBuyable = null;
  @JsonProperty("services_type")
  private String servicesType = null;
  @JsonProperty("services_field1")
  private String servicesField1 = null;
  @JsonProperty("services_field2")
  private String servicesField2 = null;
  @JsonProperty("services_module")
  private String servicesModule = null;
  /**
   * Service ID
   **/
  public LicenseServiceType servicesId(String servicesId) {
    this.servicesId = servicesId;
    return this;
  }

  
  @Schema(example = "5034", description = "Service ID")
  @JsonProperty("services_id")
  public String getServicesId() {
    return servicesId;
  }
  public void setServicesId(String servicesId) {
    this.servicesId = servicesId;
  }

  /**
   * Service name
   **/
  public LicenseServiceType servicesName(String servicesName) {
    this.servicesName = servicesName;
    return this;
  }

  
  @Schema(example = "KernelCare License", description = "Service name")
  @JsonProperty("services_name")
  public String getServicesName() {
    return servicesName;
  }
  public void setServicesName(String servicesName) {
    this.servicesName = servicesName;
  }

  /**
   * Service cost
   **/
  public LicenseServiceType servicesCost(String servicesCost) {
    this.servicesCost = servicesCost;
    return this;
  }

  
  @Schema(example = "2.95", description = "Service cost")
  @JsonProperty("services_cost")
  public String getServicesCost() {
    return servicesCost;
  }
  public void setServicesCost(String servicesCost) {
    this.servicesCost = servicesCost;
  }

  /**
   * Service category
   **/
  public LicenseServiceType servicesCategory(String servicesCategory) {
    this.servicesCategory = servicesCategory;
    return this;
  }

  
  @Schema(example = "508", description = "Service category")
  @JsonProperty("services_category")
  public String getServicesCategory() {
    return servicesCategory;
  }
  public void setServicesCategory(String servicesCategory) {
    this.servicesCategory = servicesCategory;
  }

  /**
   * Buyable status
   **/
  public LicenseServiceType servicesBuyable(String servicesBuyable) {
    this.servicesBuyable = servicesBuyable;
    return this;
  }

  
  @Schema(example = "1", description = "Buyable status")
  @JsonProperty("services_buyable")
  public String getServicesBuyable() {
    return servicesBuyable;
  }
  public void setServicesBuyable(String servicesBuyable) {
    this.servicesBuyable = servicesBuyable;
  }

  /**
   * Service type
   **/
  public LicenseServiceType servicesType(String servicesType) {
    this.servicesType = servicesType;
    return this;
  }

  
  @Schema(example = "508", description = "Service type")
  @JsonProperty("services_type")
  public String getServicesType() {
    return servicesType;
  }
  public void setServicesType(String servicesType) {
    this.servicesType = servicesType;
  }

  /**
   * Service field 1
   **/
  public LicenseServiceType servicesField1(String servicesField1) {
    this.servicesField1 = servicesField1;
    return this;
  }

  
  @Schema(example = "16", description = "Service field 1")
  @JsonProperty("services_field1")
  public String getServicesField1() {
    return servicesField1;
  }
  public void setServicesField1(String servicesField1) {
    this.servicesField1 = servicesField1;
  }

  /**
   * Service field 2
   **/
  public LicenseServiceType servicesField2(String servicesField2) {
    this.servicesField2 = servicesField2;
    return this;
  }

  
  @Schema(description = "Service field 2")
  @JsonProperty("services_field2")
  public String getServicesField2() {
    return servicesField2;
  }
  public void setServicesField2(String servicesField2) {
    this.servicesField2 = servicesField2;
  }

  /**
   * Service module
   **/
  public LicenseServiceType servicesModule(String servicesModule) {
    this.servicesModule = servicesModule;
    return this;
  }

  
  @Schema(example = "licenses", description = "Service module")
  @JsonProperty("services_module")
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
    LicenseServiceType licenseServiceType = (LicenseServiceType) o;
    return Objects.equals(servicesId, licenseServiceType.servicesId) &&
        Objects.equals(servicesName, licenseServiceType.servicesName) &&
        Objects.equals(servicesCost, licenseServiceType.servicesCost) &&
        Objects.equals(servicesCategory, licenseServiceType.servicesCategory) &&
        Objects.equals(servicesBuyable, licenseServiceType.servicesBuyable) &&
        Objects.equals(servicesType, licenseServiceType.servicesType) &&
        Objects.equals(servicesField1, licenseServiceType.servicesField1) &&
        Objects.equals(servicesField2, licenseServiceType.servicesField2) &&
        Objects.equals(servicesModule, licenseServiceType.servicesModule);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

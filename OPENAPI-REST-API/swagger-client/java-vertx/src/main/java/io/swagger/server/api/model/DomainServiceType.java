package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * Service type definition for a domain registration, including name, pricing, and category.
 */




public class DomainServiceType   {
  private String servicesId = null;

  private String servicesName = null;

  private String servicesCost = null;

  private String servicesCategory = null;

  private String servicesBuyable = null;

  private String servicesType = null;

  private String servicesField1 = null;

  private String servicesField2 = null;

  private String servicesModule = null;

  public DomainServiceType servicesId(String servicesId) {
    this.servicesId = servicesId;
    return this;
  }

  /**
   * Service type ID.
   * @return servicesId
   **/
    public String getServicesId() {
    return servicesId;
  }

  public void setServicesId(String servicesId) {
    this.servicesId = servicesId;
  }

  public DomainServiceType servicesName(String servicesName) {
    this.servicesName = servicesName;
    return this;
  }

  /**
   * Service type name (e.g., .com Registration).
   * @return servicesName
   **/
    public String getServicesName() {
    return servicesName;
  }

  public void setServicesName(String servicesName) {
    this.servicesName = servicesName;
  }

  public DomainServiceType servicesCost(String servicesCost) {
    this.servicesCost = servicesCost;
    return this;
  }

  /**
   * Service cost per billing period.
   * @return servicesCost
   **/
    public String getServicesCost() {
    return servicesCost;
  }

  public void setServicesCost(String servicesCost) {
    this.servicesCost = servicesCost;
  }

  public DomainServiceType servicesCategory(String servicesCategory) {
    this.servicesCategory = servicesCategory;
    return this;
  }

  /**
   * Service category ID.
   * @return servicesCategory
   **/
    public String getServicesCategory() {
    return servicesCategory;
  }

  public void setServicesCategory(String servicesCategory) {
    this.servicesCategory = servicesCategory;
  }

  public DomainServiceType servicesBuyable(String servicesBuyable) {
    this.servicesBuyable = servicesBuyable;
    return this;
  }

  /**
   * Whether this service type is available for purchase.
   * @return servicesBuyable
   **/
    public String getServicesBuyable() {
    return servicesBuyable;
  }

  public void setServicesBuyable(String servicesBuyable) {
    this.servicesBuyable = servicesBuyable;
  }

  public DomainServiceType servicesType(String servicesType) {
    this.servicesType = servicesType;
    return this;
  }

  /**
   * Internal service type identifier.
   * @return servicesType
   **/
    public String getServicesType() {
    return servicesType;
  }

  public void setServicesType(String servicesType) {
    this.servicesType = servicesType;
  }

  public DomainServiceType servicesField1(String servicesField1) {
    this.servicesField1 = servicesField1;
    return this;
  }

  /**
   * TLD or first configurable field for the service type.
   * @return servicesField1
   **/
    public String getServicesField1() {
    return servicesField1;
  }

  public void setServicesField1(String servicesField1) {
    this.servicesField1 = servicesField1;
  }

  public DomainServiceType servicesField2(String servicesField2) {
    this.servicesField2 = servicesField2;
    return this;
  }

  /**
   * Second configurable field for the service type.
   * @return servicesField2
   **/
    public String getServicesField2() {
    return servicesField2;
  }

  public void setServicesField2(String servicesField2) {
    this.servicesField2 = servicesField2;
  }

  public DomainServiceType servicesModule(String servicesModule) {
    this.servicesModule = servicesModule;
    return this;
  }

  /**
   * Backend module handling this service type.
   * @return servicesModule
   **/
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
    DomainServiceType domainServiceType = (DomainServiceType) o;
    return Objects.equals(this.servicesId, domainServiceType.servicesId) &&
        Objects.equals(this.servicesName, domainServiceType.servicesName) &&
        Objects.equals(this.servicesCost, domainServiceType.servicesCost) &&
        Objects.equals(this.servicesCategory, domainServiceType.servicesCategory) &&
        Objects.equals(this.servicesBuyable, domainServiceType.servicesBuyable) &&
        Objects.equals(this.servicesType, domainServiceType.servicesType) &&
        Objects.equals(this.servicesField1, domainServiceType.servicesField1) &&
        Objects.equals(this.servicesField2, domainServiceType.servicesField2) &&
        Objects.equals(this.servicesModule, domainServiceType.servicesModule);
  }

  @Override
  public int hashCode() {
    return Objects.hash(servicesId, servicesName, servicesCost, servicesCategory, servicesBuyable, servicesType, servicesField1, servicesField2, servicesModule);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DomainServiceType {\n");
    
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

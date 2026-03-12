package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * Example schema for a domain service catalog entry.
 */




public class DomainOrderServices10001   {
  private String servicesId = null;

  private String servicesName = null;

  private String servicesCost = null;

  private String servicesCurrency = null;

  private String servicesCategory = null;

  private String servicesBuyable = null;

  private String servicesType = null;

  private String servicesField1 = null;

  private String servicesField2 = null;

  private String servicesModule = null;

  private String servicesHidden = null;

  public DomainOrderServices10001 servicesId(String servicesId) {
    this.servicesId = servicesId;
    return this;
  }

  /**
   * Service ID
   * @return servicesId
   **/
    public String getServicesId() {
    return servicesId;
  }

  public void setServicesId(String servicesId) {
    this.servicesId = servicesId;
  }

  public DomainOrderServices10001 servicesName(String servicesName) {
    this.servicesName = servicesName;
    return this;
  }

  /**
   * Service Name
   * @return servicesName
   **/
    public String getServicesName() {
    return servicesName;
  }

  public void setServicesName(String servicesName) {
    this.servicesName = servicesName;
  }

  public DomainOrderServices10001 servicesCost(String servicesCost) {
    this.servicesCost = servicesCost;
    return this;
  }

  /**
   * Service Cost
   * @return servicesCost
   **/
    public String getServicesCost() {
    return servicesCost;
  }

  public void setServicesCost(String servicesCost) {
    this.servicesCost = servicesCost;
  }

  public DomainOrderServices10001 servicesCurrency(String servicesCurrency) {
    this.servicesCurrency = servicesCurrency;
    return this;
  }

  /**
   * Currency of Service Cost
   * @return servicesCurrency
   **/
    public String getServicesCurrency() {
    return servicesCurrency;
  }

  public void setServicesCurrency(String servicesCurrency) {
    this.servicesCurrency = servicesCurrency;
  }

  public DomainOrderServices10001 servicesCategory(String servicesCategory) {
    this.servicesCategory = servicesCategory;
    return this;
  }

  /**
   * Service Category
   * @return servicesCategory
   **/
    public String getServicesCategory() {
    return servicesCategory;
  }

  public void setServicesCategory(String servicesCategory) {
    this.servicesCategory = servicesCategory;
  }

  public DomainOrderServices10001 servicesBuyable(String servicesBuyable) {
    this.servicesBuyable = servicesBuyable;
    return this;
  }

  /**
   * Buyable flag for Service
   * @return servicesBuyable
   **/
    public String getServicesBuyable() {
    return servicesBuyable;
  }

  public void setServicesBuyable(String servicesBuyable) {
    this.servicesBuyable = servicesBuyable;
  }

  public DomainOrderServices10001 servicesType(String servicesType) {
    this.servicesType = servicesType;
    return this;
  }

  /**
   * Service Type
   * @return servicesType
   **/
    public String getServicesType() {
    return servicesType;
  }

  public void setServicesType(String servicesType) {
    this.servicesType = servicesType;
  }

  public DomainOrderServices10001 servicesField1(String servicesField1) {
    this.servicesField1 = servicesField1;
    return this;
  }

  /**
   * Field 1 of Service
   * @return servicesField1
   **/
    public String getServicesField1() {
    return servicesField1;
  }

  public void setServicesField1(String servicesField1) {
    this.servicesField1 = servicesField1;
  }

  public DomainOrderServices10001 servicesField2(String servicesField2) {
    this.servicesField2 = servicesField2;
    return this;
  }

  /**
   * Field 2 of Service
   * @return servicesField2
   **/
    public String getServicesField2() {
    return servicesField2;
  }

  public void setServicesField2(String servicesField2) {
    this.servicesField2 = servicesField2;
  }

  public DomainOrderServices10001 servicesModule(String servicesModule) {
    this.servicesModule = servicesModule;
    return this;
  }

  /**
   * Module of Service
   * @return servicesModule
   **/
    public String getServicesModule() {
    return servicesModule;
  }

  public void setServicesModule(String servicesModule) {
    this.servicesModule = servicesModule;
  }

  public DomainOrderServices10001 servicesHidden(String servicesHidden) {
    this.servicesHidden = servicesHidden;
    return this;
  }

  /**
   * Hidden flag for Service
   * @return servicesHidden
   **/
    public String getServicesHidden() {
    return servicesHidden;
  }

  public void setServicesHidden(String servicesHidden) {
    this.servicesHidden = servicesHidden;
  }


  @Override
  public boolean equals(java.lang.Object o) {
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * InlineResponse20018ServiceTypes
 */




public class InlineResponse20018ServiceTypes   {
  private Integer servicesId = null;

  private String servicesName = null;

  private Integer servicesCost = null;

  private String servicesField1 = null;

  private String servicesField2 = null;

  private String servicesModule = null;

  public InlineResponse20018ServiceTypes servicesId(Integer servicesId) {
    this.servicesId = servicesId;
    return this;
  }

  /**
   * Get servicesId
   * @return servicesId
   **/
    public Integer getServicesId() {
    return servicesId;
  }

  public void setServicesId(Integer servicesId) {
    this.servicesId = servicesId;
  }

  public InlineResponse20018ServiceTypes servicesName(String servicesName) {
    this.servicesName = servicesName;
    return this;
  }

  /**
   * Get servicesName
   * @return servicesName
   **/
    public String getServicesName() {
    return servicesName;
  }

  public void setServicesName(String servicesName) {
    this.servicesName = servicesName;
  }

  public InlineResponse20018ServiceTypes servicesCost(Integer servicesCost) {
    this.servicesCost = servicesCost;
    return this;
  }

  /**
   * Get servicesCost
   * @return servicesCost
   **/
    public Integer getServicesCost() {
    return servicesCost;
  }

  public void setServicesCost(Integer servicesCost) {
    this.servicesCost = servicesCost;
  }

  public InlineResponse20018ServiceTypes servicesField1(String servicesField1) {
    this.servicesField1 = servicesField1;
    return this;
  }

  /**
   * Get servicesField1
   * @return servicesField1
   **/
    public String getServicesField1() {
    return servicesField1;
  }

  public void setServicesField1(String servicesField1) {
    this.servicesField1 = servicesField1;
  }

  public InlineResponse20018ServiceTypes servicesField2(String servicesField2) {
    this.servicesField2 = servicesField2;
    return this;
  }

  /**
   * Get servicesField2
   * @return servicesField2
   **/
    public String getServicesField2() {
    return servicesField2;
  }

  public void setServicesField2(String servicesField2) {
    this.servicesField2 = servicesField2;
  }

  public InlineResponse20018ServiceTypes servicesModule(String servicesModule) {
    this.servicesModule = servicesModule;
    return this;
  }

  /**
   * Get servicesModule
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
    InlineResponse20018ServiceTypes inlineResponse20018ServiceTypes = (InlineResponse20018ServiceTypes) o;
    return Objects.equals(this.servicesId, inlineResponse20018ServiceTypes.servicesId) &&
        Objects.equals(this.servicesName, inlineResponse20018ServiceTypes.servicesName) &&
        Objects.equals(this.servicesCost, inlineResponse20018ServiceTypes.servicesCost) &&
        Objects.equals(this.servicesField1, inlineResponse20018ServiceTypes.servicesField1) &&
        Objects.equals(this.servicesField2, inlineResponse20018ServiceTypes.servicesField2) &&
        Objects.equals(this.servicesModule, inlineResponse20018ServiceTypes.servicesModule);
  }

  @Override
  public int hashCode() {
    return Objects.hash(servicesId, servicesName, servicesCost, servicesField1, servicesField2, servicesModule);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse20018ServiceTypes {\n");
    
    sb.append("    servicesId: ").append(toIndentedString(servicesId)).append("\n");
    sb.append("    servicesName: ").append(toIndentedString(servicesName)).append("\n");
    sb.append("    servicesCost: ").append(toIndentedString(servicesCost)).append("\n");
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

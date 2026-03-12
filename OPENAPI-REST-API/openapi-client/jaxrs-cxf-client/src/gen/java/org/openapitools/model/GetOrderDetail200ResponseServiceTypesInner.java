package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class GetOrderDetail200ResponseServiceTypesInner  {
  
  @ApiModelProperty(example = "11552", value = "")

  private Integer servicesId;

  @ApiModelProperty(example = "Current IP + Scrub", value = "")

  private String servicesName;

  @ApiModelProperty(example = "5", value = "")

  private Integer servicesCost;

  @ApiModelProperty(example = "", value = "")

  private String servicesField1;

  @ApiModelProperty(example = "", value = "")

  private String servicesField2;

  @ApiModelProperty(example = "scrub_ips", value = "")

  private String servicesModule;
 /**
   * Get servicesId
   * @return servicesId
  **/
  @JsonProperty("services_id")
  public Integer getServicesId() {
    return servicesId;
  }

  public void setServicesId(Integer servicesId) {
    this.servicesId = servicesId;
  }

  public GetOrderDetail200ResponseServiceTypesInner servicesId(Integer servicesId) {
    this.servicesId = servicesId;
    return this;
  }

 /**
   * Get servicesName
   * @return servicesName
  **/
  @JsonProperty("services_name")
  public String getServicesName() {
    return servicesName;
  }

  public void setServicesName(String servicesName) {
    this.servicesName = servicesName;
  }

  public GetOrderDetail200ResponseServiceTypesInner servicesName(String servicesName) {
    this.servicesName = servicesName;
    return this;
  }

 /**
   * Get servicesCost
   * @return servicesCost
  **/
  @JsonProperty("services_cost")
  public Integer getServicesCost() {
    return servicesCost;
  }

  public void setServicesCost(Integer servicesCost) {
    this.servicesCost = servicesCost;
  }

  public GetOrderDetail200ResponseServiceTypesInner servicesCost(Integer servicesCost) {
    this.servicesCost = servicesCost;
    return this;
  }

 /**
   * Get servicesField1
   * @return servicesField1
  **/
  @JsonProperty("services_field1")
  public String getServicesField1() {
    return servicesField1;
  }

  public void setServicesField1(String servicesField1) {
    this.servicesField1 = servicesField1;
  }

  public GetOrderDetail200ResponseServiceTypesInner servicesField1(String servicesField1) {
    this.servicesField1 = servicesField1;
    return this;
  }

 /**
   * Get servicesField2
   * @return servicesField2
  **/
  @JsonProperty("services_field2")
  public String getServicesField2() {
    return servicesField2;
  }

  public void setServicesField2(String servicesField2) {
    this.servicesField2 = servicesField2;
  }

  public GetOrderDetail200ResponseServiceTypesInner servicesField2(String servicesField2) {
    this.servicesField2 = servicesField2;
    return this;
  }

 /**
   * Get servicesModule
   * @return servicesModule
  **/
  @JsonProperty("services_module")
  public String getServicesModule() {
    return servicesModule;
  }

  public void setServicesModule(String servicesModule) {
    this.servicesModule = servicesModule;
  }

  public GetOrderDetail200ResponseServiceTypesInner servicesModule(String servicesModule) {
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
    GetOrderDetail200ResponseServiceTypesInner getOrderDetail200ResponseServiceTypesInner = (GetOrderDetail200ResponseServiceTypesInner) o;
    return Objects.equals(this.servicesId, getOrderDetail200ResponseServiceTypesInner.servicesId) &&
        Objects.equals(this.servicesName, getOrderDetail200ResponseServiceTypesInner.servicesName) &&
        Objects.equals(this.servicesCost, getOrderDetail200ResponseServiceTypesInner.servicesCost) &&
        Objects.equals(this.servicesField1, getOrderDetail200ResponseServiceTypesInner.servicesField1) &&
        Objects.equals(this.servicesField2, getOrderDetail200ResponseServiceTypesInner.servicesField2) &&
        Objects.equals(this.servicesModule, getOrderDetail200ResponseServiceTypesInner.servicesModule);
  }

  @Override
  public int hashCode() {
    return Objects.hash(servicesId, servicesName, servicesCost, servicesField1, servicesField2, servicesModule);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class GetOrderDetail200ResponseServiceTypesInner {\n");
    
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}


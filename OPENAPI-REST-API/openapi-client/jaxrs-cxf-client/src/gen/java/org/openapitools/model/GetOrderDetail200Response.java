package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.GetOrderDetail200ResponseIpsInner;
import org.openapitools.model.GetOrderDetail200ResponsePackageCosts;
import org.openapitools.model.GetOrderDetail200ResponseServiceTypesInner;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class GetOrderDetail200Response  {
  
  @ApiModelProperty(value = "")

  private GetOrderDetail200ResponsePackageCosts packageCosts;

  @ApiModelProperty(value = "")

  private List<GetOrderDetail200ResponseServiceTypesInner> serviceTypes = new ArrayList<>();

  @ApiModelProperty(value = "")

  private List<GetOrderDetail200ResponseIpsInner> ips = new ArrayList<>();
 /**
   * Get packageCosts
   * @return packageCosts
  **/
  @JsonProperty("packageCosts")
  public GetOrderDetail200ResponsePackageCosts getPackageCosts() {
    return packageCosts;
  }

  public void setPackageCosts(GetOrderDetail200ResponsePackageCosts packageCosts) {
    this.packageCosts = packageCosts;
  }

  public GetOrderDetail200Response packageCosts(GetOrderDetail200ResponsePackageCosts packageCosts) {
    this.packageCosts = packageCosts;
    return this;
  }

 /**
   * Get serviceTypes
   * @return serviceTypes
  **/
  @JsonProperty("serviceTypes")
  public List<GetOrderDetail200ResponseServiceTypesInner> getServiceTypes() {
    return serviceTypes;
  }

  public void setServiceTypes(List<GetOrderDetail200ResponseServiceTypesInner> serviceTypes) {
    this.serviceTypes = serviceTypes;
  }

  public GetOrderDetail200Response serviceTypes(List<GetOrderDetail200ResponseServiceTypesInner> serviceTypes) {
    this.serviceTypes = serviceTypes;
    return this;
  }

  public GetOrderDetail200Response addServiceTypesItem(GetOrderDetail200ResponseServiceTypesInner serviceTypesItem) {
    this.serviceTypes.add(serviceTypesItem);
    return this;
  }

 /**
   * Get ips
   * @return ips
  **/
  @JsonProperty("ips")
  public List<GetOrderDetail200ResponseIpsInner> getIps() {
    return ips;
  }

  public void setIps(List<GetOrderDetail200ResponseIpsInner> ips) {
    this.ips = ips;
  }

  public GetOrderDetail200Response ips(List<GetOrderDetail200ResponseIpsInner> ips) {
    this.ips = ips;
    return this;
  }

  public GetOrderDetail200Response addIpsItem(GetOrderDetail200ResponseIpsInner ipsItem) {
    this.ips.add(ipsItem);
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
    GetOrderDetail200Response getOrderDetail200Response = (GetOrderDetail200Response) o;
    return Objects.equals(this.packageCosts, getOrderDetail200Response.packageCosts) &&
        Objects.equals(this.serviceTypes, getOrderDetail200Response.serviceTypes) &&
        Objects.equals(this.ips, getOrderDetail200Response.ips);
  }

  @Override
  public int hashCode() {
    return Objects.hash(packageCosts, serviceTypes, ips);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class GetOrderDetail200Response {\n");
    
    sb.append("    packageCosts: ").append(toIndentedString(packageCosts)).append("\n");
    sb.append("    serviceTypes: ").append(toIndentedString(serviceTypes)).append("\n");
    sb.append("    ips: ").append(toIndentedString(ips)).append("\n");
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


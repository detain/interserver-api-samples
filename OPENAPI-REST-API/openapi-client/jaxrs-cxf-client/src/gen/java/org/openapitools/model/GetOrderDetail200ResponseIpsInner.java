package org.openapitools.model;

import java.math.BigDecimal;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class GetOrderDetail200ResponseIpsInner  {
  
  @ApiModelProperty(example = "12345", value = "")

  private BigDecimal serviceId;

  @ApiModelProperty(example = "vps", value = "")

  private String serviceModule;

  @ApiModelProperty(example = "server.gtest.com", value = "")

  private String serviceHostname;
 /**
   * Get serviceId
   * @return serviceId
  **/
  @JsonProperty("service_id")
  public BigDecimal getServiceId() {
    return serviceId;
  }

  public void setServiceId(BigDecimal serviceId) {
    this.serviceId = serviceId;
  }

  public GetOrderDetail200ResponseIpsInner serviceId(BigDecimal serviceId) {
    this.serviceId = serviceId;
    return this;
  }

 /**
   * Get serviceModule
   * @return serviceModule
  **/
  @JsonProperty("service_module")
  public String getServiceModule() {
    return serviceModule;
  }

  public void setServiceModule(String serviceModule) {
    this.serviceModule = serviceModule;
  }

  public GetOrderDetail200ResponseIpsInner serviceModule(String serviceModule) {
    this.serviceModule = serviceModule;
    return this;
  }

 /**
   * Get serviceHostname
   * @return serviceHostname
  **/
  @JsonProperty("service_hostname")
  public String getServiceHostname() {
    return serviceHostname;
  }

  public void setServiceHostname(String serviceHostname) {
    this.serviceHostname = serviceHostname;
  }

  public GetOrderDetail200ResponseIpsInner serviceHostname(String serviceHostname) {
    this.serviceHostname = serviceHostname;
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
    GetOrderDetail200ResponseIpsInner getOrderDetail200ResponseIpsInner = (GetOrderDetail200ResponseIpsInner) o;
    return Objects.equals(this.serviceId, getOrderDetail200ResponseIpsInner.serviceId) &&
        Objects.equals(this.serviceModule, getOrderDetail200ResponseIpsInner.serviceModule) &&
        Objects.equals(this.serviceHostname, getOrderDetail200ResponseIpsInner.serviceHostname);
  }

  @Override
  public int hashCode() {
    return Objects.hash(serviceId, serviceModule, serviceHostname);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class GetOrderDetail200ResponseIpsInner {\n");
    
    sb.append("    serviceId: ").append(toIndentedString(serviceId)).append("\n");
    sb.append("    serviceModule: ").append(toIndentedString(serviceModule)).append("\n");
    sb.append("    serviceHostname: ").append(toIndentedString(serviceHostname)).append("\n");
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


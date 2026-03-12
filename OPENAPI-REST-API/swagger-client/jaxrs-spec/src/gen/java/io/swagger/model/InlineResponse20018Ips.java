package io.swagger.model;

import java.math.BigDecimal;
import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class InlineResponse20018Ips   {

  private @Valid BigDecimal serviceId = null;

  private @Valid String serviceModule = null;

  private @Valid String serviceHostname = null;

  /**
   **/
  public InlineResponse20018Ips serviceId(BigDecimal serviceId) {
    this.serviceId = serviceId;
    return this;
  }

  
  @ApiModelProperty(example = "12345", value = "")
  @JsonProperty("service_id")
  @NotNull

  public BigDecimal getServiceId() {
    return serviceId;
  }
  public void setServiceId(BigDecimal serviceId) {
    this.serviceId = serviceId;
  }

  /**
   **/
  public InlineResponse20018Ips serviceModule(String serviceModule) {
    this.serviceModule = serviceModule;
    return this;
  }

  
  @ApiModelProperty(example = "vps", value = "")
  @JsonProperty("service_module")
  @NotNull

  public String getServiceModule() {
    return serviceModule;
  }
  public void setServiceModule(String serviceModule) {
    this.serviceModule = serviceModule;
  }

  /**
   **/
  public InlineResponse20018Ips serviceHostname(String serviceHostname) {
    this.serviceHostname = serviceHostname;
    return this;
  }

  
  @ApiModelProperty(example = "server.gtest.com", value = "")
  @JsonProperty("service_hostname")
  @NotNull

  public String getServiceHostname() {
    return serviceHostname;
  }
  public void setServiceHostname(String serviceHostname) {
    this.serviceHostname = serviceHostname;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InlineResponse20018Ips inlineResponse20018Ips = (InlineResponse20018Ips) o;
    return Objects.equals(serviceId, inlineResponse20018Ips.serviceId) &&
        Objects.equals(serviceModule, inlineResponse20018Ips.serviceModule) &&
        Objects.equals(serviceHostname, inlineResponse20018Ips.serviceHostname);
  }

  @Override
  public int hashCode() {
    return Objects.hash(serviceId, serviceModule, serviceHostname);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse20018Ips {\n");
    
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

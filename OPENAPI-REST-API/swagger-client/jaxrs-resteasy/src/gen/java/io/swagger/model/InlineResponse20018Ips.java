package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import java.math.BigDecimal;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;



public class InlineResponse20018Ips   {
  private BigDecimal serviceId = null;  private String serviceModule = null;  private String serviceHostname = null;

  /**
   **/
  
  @Schema(example = "12345", description = "")
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
  
  @Schema(example = "vps", description = "")
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
  
  @Schema(example = "server.gtest.com", description = "")
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

package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import java.math.BigDecimal;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * InlineResponse20018Ips
 */




public class InlineResponse20018Ips   {
  private BigDecimal serviceId = null;

  private String serviceModule = null;

  private String serviceHostname = null;

  public InlineResponse20018Ips serviceId(BigDecimal serviceId) {
    this.serviceId = serviceId;
    return this;
  }

  /**
   * Get serviceId
   * @return serviceId
   **/
    public BigDecimal getServiceId() {
    return serviceId;
  }

  public void setServiceId(BigDecimal serviceId) {
    this.serviceId = serviceId;
  }

  public InlineResponse20018Ips serviceModule(String serviceModule) {
    this.serviceModule = serviceModule;
    return this;
  }

  /**
   * Get serviceModule
   * @return serviceModule
   **/
    public String getServiceModule() {
    return serviceModule;
  }

  public void setServiceModule(String serviceModule) {
    this.serviceModule = serviceModule;
  }

  public InlineResponse20018Ips serviceHostname(String serviceHostname) {
    this.serviceHostname = serviceHostname;
    return this;
  }

  /**
   * Get serviceHostname
   * @return serviceHostname
   **/
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
    return Objects.equals(this.serviceId, inlineResponse20018Ips.serviceId) &&
        Objects.equals(this.serviceModule, inlineResponse20018Ips.serviceModule) &&
        Objects.equals(this.serviceHostname, inlineResponse20018Ips.serviceHostname);
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

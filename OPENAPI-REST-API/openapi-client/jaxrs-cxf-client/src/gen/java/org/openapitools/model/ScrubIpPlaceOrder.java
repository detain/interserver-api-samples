package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Place ScrubIP Order
 */
@ApiModel(description="Place ScrubIP Order")

public class ScrubIpPlaceOrder  {
  
  @ApiModelProperty(example = "102", required = true, value = "")

  private Integer serviceType;

  @ApiModelProperty(example = "1.2.3.4", required = true, value = "")

  private String ip;
 /**
   * Get serviceType
   * @return serviceType
  **/
  @JsonProperty("service_type")
  public Integer getServiceType() {
    return serviceType;
  }

  public void setServiceType(Integer serviceType) {
    this.serviceType = serviceType;
  }

  public ScrubIpPlaceOrder serviceType(Integer serviceType) {
    this.serviceType = serviceType;
    return this;
  }

 /**
   * Get ip
   * @return ip
  **/
  @JsonProperty("ip")
  public String getIp() {
    return ip;
  }

  public void setIp(String ip) {
    this.ip = ip;
  }

  public ScrubIpPlaceOrder ip(String ip) {
    this.ip = ip;
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
    ScrubIpPlaceOrder scrubIpPlaceOrder = (ScrubIpPlaceOrder) o;
    return Objects.equals(this.serviceType, scrubIpPlaceOrder.serviceType) &&
        Objects.equals(this.ip, scrubIpPlaceOrder.ip);
  }

  @Override
  public int hashCode() {
    return Objects.hash(serviceType, ip);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ScrubIpPlaceOrder {\n");
    
    sb.append("    serviceType: ").append(toIndentedString(serviceType)).append("\n");
    sb.append("    ip: ").append(toIndentedString(ip)).append("\n");
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


package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonCreator;

/**
  * Place ScrubIP Order
 **/
@Schema(description="Place ScrubIP Order")
public class ScrubIpPlaceOrder   {
  
  @Schema(example = "102", required = true, description = "")
  private Integer serviceType = null;
  
  @Schema(example = "1.2.3.4", required = true, description = "")
  private String ip = null;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

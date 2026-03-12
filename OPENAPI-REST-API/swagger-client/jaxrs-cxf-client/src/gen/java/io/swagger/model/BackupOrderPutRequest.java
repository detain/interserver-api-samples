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
  * Parameters to submit to validate your backup order
 **/
@Schema(description="Parameters to submit to validate your backup order")
public class BackupOrderPutRequest   {
  
  @Schema(description = "")
  private Boolean validateOnly = null;
  
  @Schema(description = "")
  private Integer serviceType = null;
  
  @Schema(description = "")
  private String coupon = null;
 /**
   * Get validateOnly
   * @return validateOnly
  **/
  @JsonProperty("validateOnly")
  public Boolean isValidateOnly() {
    return validateOnly;
  }

  public void setValidateOnly(Boolean validateOnly) {
    this.validateOnly = validateOnly;
  }

  public BackupOrderPutRequest validateOnly(Boolean validateOnly) {
    this.validateOnly = validateOnly;
    return this;
  }

 /**
   * Get serviceType
   * @return serviceType
  **/
  @JsonProperty("serviceType")
  public Integer getServiceType() {
    return serviceType;
  }

  public void setServiceType(Integer serviceType) {
    this.serviceType = serviceType;
  }

  public BackupOrderPutRequest serviceType(Integer serviceType) {
    this.serviceType = serviceType;
    return this;
  }

 /**
   * Get coupon
   * @return coupon
  **/
  @JsonProperty("coupon")
  public String getCoupon() {
    return coupon;
  }

  public void setCoupon(String coupon) {
    this.coupon = coupon;
  }

  public BackupOrderPutRequest coupon(String coupon) {
    this.coupon = coupon;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BackupOrderPutRequest {\n");
    
    sb.append("    validateOnly: ").append(toIndentedString(validateOnly)).append("\n");
    sb.append("    serviceType: ").append(toIndentedString(serviceType)).append("\n");
    sb.append("    coupon: ").append(toIndentedString(coupon)).append("\n");
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

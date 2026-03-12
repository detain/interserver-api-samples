package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import javax.validation.constraints.*;

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
  * Backup Order validation response
 **/
@Schema(description="Backup Order validation response")
public class BackupOrderPutResponse   {
  
  @Schema(description = "")
  private Boolean _continue = null;
  
  @Schema(description = "")
  private List<String> errors = null;
  
  @Schema(description = "")
  private Integer serviceType = null;
  
  @Schema(description = "")
  private String serviceCost = null;
  
  @Schema(description = "")
  private String originalCost = null;
  
  @Schema(description = "")
  private String repeatServiceCost = null;
  
  @Schema(description = "")
  private String hostname = null;
  
  @Schema(description = "")
  private String password = null;
  
  @Schema(description = "")
  private String coupon = null;
  
  @Schema(description = "")
  private Integer couponCode = null;
 /**
   * Get _continue
   * @return _continue
  **/
  @JsonProperty("continue")
  @NotNull
  public Boolean isContinue() {
    return _continue;
  }

  public void setContinue(Boolean _continue) {
    this._continue = _continue;
  }

  public BackupOrderPutResponse _continue(Boolean _continue) {
    this._continue = _continue;
    return this;
  }

 /**
   * Get errors
   * @return errors
  **/
  @JsonProperty("errors")
  @NotNull
  public List<String> getErrors() {
    return errors;
  }

  public void setErrors(List<String> errors) {
    this.errors = errors;
  }

  public BackupOrderPutResponse errors(List<String> errors) {
    this.errors = errors;
    return this;
  }

  public BackupOrderPutResponse addErrorsItem(String errorsItem) {
    this.errors.add(errorsItem);
    return this;
  }

 /**
   * Get serviceType
   * @return serviceType
  **/
  @JsonProperty("serviceType")
  @NotNull
  public Integer getServiceType() {
    return serviceType;
  }

  public void setServiceType(Integer serviceType) {
    this.serviceType = serviceType;
  }

  public BackupOrderPutResponse serviceType(Integer serviceType) {
    this.serviceType = serviceType;
    return this;
  }

 /**
   * Get serviceCost
   * @return serviceCost
  **/
  @JsonProperty("serviceCost")
  @NotNull
  public String getServiceCost() {
    return serviceCost;
  }

  public void setServiceCost(String serviceCost) {
    this.serviceCost = serviceCost;
  }

  public BackupOrderPutResponse serviceCost(String serviceCost) {
    this.serviceCost = serviceCost;
    return this;
  }

 /**
   * Get originalCost
   * @return originalCost
  **/
  @JsonProperty("originalCost")
  @NotNull
  public String getOriginalCost() {
    return originalCost;
  }

  public void setOriginalCost(String originalCost) {
    this.originalCost = originalCost;
  }

  public BackupOrderPutResponse originalCost(String originalCost) {
    this.originalCost = originalCost;
    return this;
  }

 /**
   * Get repeatServiceCost
   * @return repeatServiceCost
  **/
  @JsonProperty("repeatServiceCost")
  @NotNull
  public String getRepeatServiceCost() {
    return repeatServiceCost;
  }

  public void setRepeatServiceCost(String repeatServiceCost) {
    this.repeatServiceCost = repeatServiceCost;
  }

  public BackupOrderPutResponse repeatServiceCost(String repeatServiceCost) {
    this.repeatServiceCost = repeatServiceCost;
    return this;
  }

 /**
   * Get hostname
   * @return hostname
  **/
  @JsonProperty("hostname")
  @NotNull
  public String getHostname() {
    return hostname;
  }

  public void setHostname(String hostname) {
    this.hostname = hostname;
  }

  public BackupOrderPutResponse hostname(String hostname) {
    this.hostname = hostname;
    return this;
  }

 /**
   * Get password
   * @return password
  **/
  @JsonProperty("password")
  @NotNull
  public String getPassword() {
    return password;
  }

  public void setPassword(String password) {
    this.password = password;
  }

  public BackupOrderPutResponse password(String password) {
    this.password = password;
    return this;
  }

 /**
   * Get coupon
   * @return coupon
  **/
  @JsonProperty("coupon")
  @NotNull
  public String getCoupon() {
    return coupon;
  }

  public void setCoupon(String coupon) {
    this.coupon = coupon;
  }

  public BackupOrderPutResponse coupon(String coupon) {
    this.coupon = coupon;
    return this;
  }

 /**
   * Get couponCode
   * @return couponCode
  **/
  @JsonProperty("couponCode")
  @NotNull
  public Integer getCouponCode() {
    return couponCode;
  }

  public void setCouponCode(Integer couponCode) {
    this.couponCode = couponCode;
  }

  public BackupOrderPutResponse couponCode(Integer couponCode) {
    this.couponCode = couponCode;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BackupOrderPutResponse {\n");
    
    sb.append("    _continue: ").append(toIndentedString(_continue)).append("\n");
    sb.append("    errors: ").append(toIndentedString(errors)).append("\n");
    sb.append("    serviceType: ").append(toIndentedString(serviceType)).append("\n");
    sb.append("    serviceCost: ").append(toIndentedString(serviceCost)).append("\n");
    sb.append("    originalCost: ").append(toIndentedString(originalCost)).append("\n");
    sb.append("    repeatServiceCost: ").append(toIndentedString(repeatServiceCost)).append("\n");
    sb.append("    hostname: ").append(toIndentedString(hostname)).append("\n");
    sb.append("    password: ").append(toIndentedString(password)).append("\n");
    sb.append("    coupon: ").append(toIndentedString(coupon)).append("\n");
    sb.append("    couponCode: ").append(toIndentedString(couponCode)).append("\n");
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

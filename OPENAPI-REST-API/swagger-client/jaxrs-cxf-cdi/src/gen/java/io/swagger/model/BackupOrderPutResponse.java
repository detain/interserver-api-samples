package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import javax.validation.constraints.*;
/**
 * Backup Order validation response
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "Backup Order validation response")

public class BackupOrderPutResponse   {
  private Boolean _continue = null;
  private List<String> errors = new ArrayList<String>();
  private Integer serviceType = null;
  private String serviceCost = null;
  private String originalCost = null;
  private String repeatServiceCost = null;
  private String hostname = null;
  private String password = null;
  private String coupon = null;
  private Integer couponCode = null;

  /**
   **/
  public BackupOrderPutResponse _continue(Boolean _continue) {
    this._continue = _continue;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("continue")
  @NotNull
  public Boolean isContinue() {
    return _continue;
  }
  public void setContinue(Boolean _continue) {
    this._continue = _continue;
  }

  /**
   **/
  public BackupOrderPutResponse errors(List<String> errors) {
    this.errors = errors;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("errors")
  @NotNull
  public List<String> getErrors() {
    return errors;
  }
  public void setErrors(List<String> errors) {
    this.errors = errors;
  }

  /**
   **/
  public BackupOrderPutResponse serviceType(Integer serviceType) {
    this.serviceType = serviceType;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("serviceType")
  @NotNull
  public Integer getServiceType() {
    return serviceType;
  }
  public void setServiceType(Integer serviceType) {
    this.serviceType = serviceType;
  }

  /**
   **/
  public BackupOrderPutResponse serviceCost(String serviceCost) {
    this.serviceCost = serviceCost;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("serviceCost")
  @NotNull
  public String getServiceCost() {
    return serviceCost;
  }
  public void setServiceCost(String serviceCost) {
    this.serviceCost = serviceCost;
  }

  /**
   **/
  public BackupOrderPutResponse originalCost(String originalCost) {
    this.originalCost = originalCost;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("originalCost")
  @NotNull
  public String getOriginalCost() {
    return originalCost;
  }
  public void setOriginalCost(String originalCost) {
    this.originalCost = originalCost;
  }

  /**
   **/
  public BackupOrderPutResponse repeatServiceCost(String repeatServiceCost) {
    this.repeatServiceCost = repeatServiceCost;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("repeatServiceCost")
  @NotNull
  public String getRepeatServiceCost() {
    return repeatServiceCost;
  }
  public void setRepeatServiceCost(String repeatServiceCost) {
    this.repeatServiceCost = repeatServiceCost;
  }

  /**
   **/
  public BackupOrderPutResponse hostname(String hostname) {
    this.hostname = hostname;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("hostname")
  @NotNull
  public String getHostname() {
    return hostname;
  }
  public void setHostname(String hostname) {
    this.hostname = hostname;
  }

  /**
   **/
  public BackupOrderPutResponse password(String password) {
    this.password = password;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("password")
  @NotNull
  public String getPassword() {
    return password;
  }
  public void setPassword(String password) {
    this.password = password;
  }

  /**
   **/
  public BackupOrderPutResponse coupon(String coupon) {
    this.coupon = coupon;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("coupon")
  @NotNull
  public String getCoupon() {
    return coupon;
  }
  public void setCoupon(String coupon) {
    this.coupon = coupon;
  }

  /**
   **/
  public BackupOrderPutResponse couponCode(Integer couponCode) {
    this.couponCode = couponCode;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("couponCode")
  @NotNull
  public Integer getCouponCode() {
    return couponCode;
  }
  public void setCouponCode(Integer couponCode) {
    this.couponCode = couponCode;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    BackupOrderPutResponse backupOrderPutResponse = (BackupOrderPutResponse) o;
    return Objects.equals(_continue, backupOrderPutResponse._continue) &&
        Objects.equals(errors, backupOrderPutResponse.errors) &&
        Objects.equals(serviceType, backupOrderPutResponse.serviceType) &&
        Objects.equals(serviceCost, backupOrderPutResponse.serviceCost) &&
        Objects.equals(originalCost, backupOrderPutResponse.originalCost) &&
        Objects.equals(repeatServiceCost, backupOrderPutResponse.repeatServiceCost) &&
        Objects.equals(hostname, backupOrderPutResponse.hostname) &&
        Objects.equals(password, backupOrderPutResponse.password) &&
        Objects.equals(coupon, backupOrderPutResponse.coupon) &&
        Objects.equals(couponCode, backupOrderPutResponse.couponCode);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_continue, errors, serviceType, serviceCost, originalCost, repeatServiceCost, hostname, password, coupon, couponCode);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

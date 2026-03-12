package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.List;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Response from VPS order validation request")

public class VpsOrderPutResponse   {
  private Boolean _continue = null;  private List<Object> errors = new ArrayList<Object>();  private Integer couponCode = null;  private Integer serviceCost = null;  private Integer sliceCost = null;  private Integer serviceType = null;  private Integer repeatSliceCost = null;  private Integer originalSliceCost = null;  private Integer originalCost = null;  private Integer repeatServiceCost = null;  private Integer monthlyServiceCost = null;  private String custid = null;  private String os = null;  private String slices = null;  private String platform = null;  private String controlpanel = null;  private Integer period = null;  private Integer location = null;  private String version = null;  private String hostname = null;  private String coupon = null;  private String rootpass = null;

  /**
   **/
  
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
  
  @Schema(description = "")
  @JsonProperty("errors")
  @NotNull
  public List<Object> getErrors() {
    return errors;
  }
  public void setErrors(List<Object> errors) {
    this.errors = errors;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("coupon_code")
  @NotNull
  public Integer getCouponCode() {
    return couponCode;
  }
  public void setCouponCode(Integer couponCode) {
    this.couponCode = couponCode;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("service_cost")
  @NotNull
  public Integer getServiceCost() {
    return serviceCost;
  }
  public void setServiceCost(Integer serviceCost) {
    this.serviceCost = serviceCost;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("slice_cost")
  @NotNull
  public Integer getSliceCost() {
    return sliceCost;
  }
  public void setSliceCost(Integer sliceCost) {
    this.sliceCost = sliceCost;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("service_type")
  @NotNull
  public Integer getServiceType() {
    return serviceType;
  }
  public void setServiceType(Integer serviceType) {
    this.serviceType = serviceType;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("repeat_slice_cost")
  @NotNull
  public Integer getRepeatSliceCost() {
    return repeatSliceCost;
  }
  public void setRepeatSliceCost(Integer repeatSliceCost) {
    this.repeatSliceCost = repeatSliceCost;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("original_slice_cost")
  @NotNull
  public Integer getOriginalSliceCost() {
    return originalSliceCost;
  }
  public void setOriginalSliceCost(Integer originalSliceCost) {
    this.originalSliceCost = originalSliceCost;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("original_cost")
  @NotNull
  public Integer getOriginalCost() {
    return originalCost;
  }
  public void setOriginalCost(Integer originalCost) {
    this.originalCost = originalCost;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("repeat_service_cost")
  @NotNull
  public Integer getRepeatServiceCost() {
    return repeatServiceCost;
  }
  public void setRepeatServiceCost(Integer repeatServiceCost) {
    this.repeatServiceCost = repeatServiceCost;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("monthly_service_cost")
  @NotNull
  public Integer getMonthlyServiceCost() {
    return monthlyServiceCost;
  }
  public void setMonthlyServiceCost(Integer monthlyServiceCost) {
    this.monthlyServiceCost = monthlyServiceCost;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("custid")
  @NotNull
  public String getCustid() {
    return custid;
  }
  public void setCustid(String custid) {
    this.custid = custid;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("os")
  @NotNull
  public String getOs() {
    return os;
  }
  public void setOs(String os) {
    this.os = os;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("slices")
  @NotNull
  public String getSlices() {
    return slices;
  }
  public void setSlices(String slices) {
    this.slices = slices;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("platform")
  @NotNull
  public String getPlatform() {
    return platform;
  }
  public void setPlatform(String platform) {
    this.platform = platform;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("controlpanel")
  @NotNull
  public String getControlpanel() {
    return controlpanel;
  }
  public void setControlpanel(String controlpanel) {
    this.controlpanel = controlpanel;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("period")
  @NotNull
  public Integer getPeriod() {
    return period;
  }
  public void setPeriod(Integer period) {
    this.period = period;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("location")
  @NotNull
  public Integer getLocation() {
    return location;
  }
  public void setLocation(Integer location) {
    this.location = location;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("version")
  @NotNull
  public String getVersion() {
    return version;
  }
  public void setVersion(String version) {
    this.version = version;
  }

  /**
   **/
  
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
  
  @Schema(description = "")
  @JsonProperty("rootpass")
  @NotNull
  public String getRootpass() {
    return rootpass;
  }
  public void setRootpass(String rootpass) {
    this.rootpass = rootpass;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsOrderPutResponse vpsOrderPutResponse = (VpsOrderPutResponse) o;
    return Objects.equals(_continue, vpsOrderPutResponse._continue) &&
        Objects.equals(errors, vpsOrderPutResponse.errors) &&
        Objects.equals(couponCode, vpsOrderPutResponse.couponCode) &&
        Objects.equals(serviceCost, vpsOrderPutResponse.serviceCost) &&
        Objects.equals(sliceCost, vpsOrderPutResponse.sliceCost) &&
        Objects.equals(serviceType, vpsOrderPutResponse.serviceType) &&
        Objects.equals(repeatSliceCost, vpsOrderPutResponse.repeatSliceCost) &&
        Objects.equals(originalSliceCost, vpsOrderPutResponse.originalSliceCost) &&
        Objects.equals(originalCost, vpsOrderPutResponse.originalCost) &&
        Objects.equals(repeatServiceCost, vpsOrderPutResponse.repeatServiceCost) &&
        Objects.equals(monthlyServiceCost, vpsOrderPutResponse.monthlyServiceCost) &&
        Objects.equals(custid, vpsOrderPutResponse.custid) &&
        Objects.equals(os, vpsOrderPutResponse.os) &&
        Objects.equals(slices, vpsOrderPutResponse.slices) &&
        Objects.equals(platform, vpsOrderPutResponse.platform) &&
        Objects.equals(controlpanel, vpsOrderPutResponse.controlpanel) &&
        Objects.equals(period, vpsOrderPutResponse.period) &&
        Objects.equals(location, vpsOrderPutResponse.location) &&
        Objects.equals(version, vpsOrderPutResponse.version) &&
        Objects.equals(hostname, vpsOrderPutResponse.hostname) &&
        Objects.equals(coupon, vpsOrderPutResponse.coupon) &&
        Objects.equals(rootpass, vpsOrderPutResponse.rootpass);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_continue, errors, couponCode, serviceCost, sliceCost, serviceType, repeatSliceCost, originalSliceCost, originalCost, repeatServiceCost, monthlyServiceCost, custid, os, slices, platform, controlpanel, period, location, version, hostname, coupon, rootpass);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsOrderPutResponse {\n");
    
    sb.append("    _continue: ").append(toIndentedString(_continue)).append("\n");
    sb.append("    errors: ").append(toIndentedString(errors)).append("\n");
    sb.append("    couponCode: ").append(toIndentedString(couponCode)).append("\n");
    sb.append("    serviceCost: ").append(toIndentedString(serviceCost)).append("\n");
    sb.append("    sliceCost: ").append(toIndentedString(sliceCost)).append("\n");
    sb.append("    serviceType: ").append(toIndentedString(serviceType)).append("\n");
    sb.append("    repeatSliceCost: ").append(toIndentedString(repeatSliceCost)).append("\n");
    sb.append("    originalSliceCost: ").append(toIndentedString(originalSliceCost)).append("\n");
    sb.append("    originalCost: ").append(toIndentedString(originalCost)).append("\n");
    sb.append("    repeatServiceCost: ").append(toIndentedString(repeatServiceCost)).append("\n");
    sb.append("    monthlyServiceCost: ").append(toIndentedString(monthlyServiceCost)).append("\n");
    sb.append("    custid: ").append(toIndentedString(custid)).append("\n");
    sb.append("    os: ").append(toIndentedString(os)).append("\n");
    sb.append("    slices: ").append(toIndentedString(slices)).append("\n");
    sb.append("    platform: ").append(toIndentedString(platform)).append("\n");
    sb.append("    controlpanel: ").append(toIndentedString(controlpanel)).append("\n");
    sb.append("    period: ").append(toIndentedString(period)).append("\n");
    sb.append("    location: ").append(toIndentedString(location)).append("\n");
    sb.append("    version: ").append(toIndentedString(version)).append("\n");
    sb.append("    hostname: ").append(toIndentedString(hostname)).append("\n");
    sb.append("    coupon: ").append(toIndentedString(coupon)).append("\n");
    sb.append("    rootpass: ").append(toIndentedString(rootpass)).append("\n");
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

package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;


/**
 * Response from VPS order validation request
 **/
@Schema(description = "Response from VPS order validation request")


public class VpsOrderPutResponse   {
  @JsonProperty("continue")
  private Boolean _continue = null;
  @JsonProperty("errors")
  private List<Object> errors = null;
  @JsonProperty("coupon_code")
  private Integer couponCode = null;
  @JsonProperty("service_cost")
  private Integer serviceCost = null;
  @JsonProperty("slice_cost")
  private Integer sliceCost = null;
  @JsonProperty("service_type")
  private Integer serviceType = null;
  @JsonProperty("repeat_slice_cost")
  private Integer repeatSliceCost = null;
  @JsonProperty("original_slice_cost")
  private Integer originalSliceCost = null;
  @JsonProperty("original_cost")
  private Integer originalCost = null;
  @JsonProperty("repeat_service_cost")
  private Integer repeatServiceCost = null;
  @JsonProperty("monthly_service_cost")
  private Integer monthlyServiceCost = null;
  @JsonProperty("custid")
  private String custid = null;
  @JsonProperty("os")
  private String os = null;
  @JsonProperty("slices")
  private String slices = null;
  @JsonProperty("platform")
  private String platform = null;
  @JsonProperty("controlpanel")
  private String controlpanel = null;
  @JsonProperty("period")
  private Integer period = null;
  @JsonProperty("location")
  private Integer location = null;
  @JsonProperty("version")
  private String version = null;
  @JsonProperty("hostname")
  private String hostname = null;
  @JsonProperty("coupon")
  private String coupon = null;
  @JsonProperty("rootpass")
  private String rootpass = null;
  /**
   **/
  public VpsOrderPutResponse _continue(Boolean _continue) {
    this._continue = _continue;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("continue")
  public Boolean isContinue() {
    return _continue;
  }
  public void setContinue(Boolean _continue) {
    this._continue = _continue;
  }

  /**
   **/
  public VpsOrderPutResponse errors(List<Object> errors) {
    this.errors = errors;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("errors")
  public List<Object> getErrors() {
    return errors;
  }
  public void setErrors(List<Object> errors) {
    this.errors = errors;
  }

  /**
   **/
  public VpsOrderPutResponse couponCode(Integer couponCode) {
    this.couponCode = couponCode;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("coupon_code")
  public Integer getCouponCode() {
    return couponCode;
  }
  public void setCouponCode(Integer couponCode) {
    this.couponCode = couponCode;
  }

  /**
   **/
  public VpsOrderPutResponse serviceCost(Integer serviceCost) {
    this.serviceCost = serviceCost;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("service_cost")
  public Integer getServiceCost() {
    return serviceCost;
  }
  public void setServiceCost(Integer serviceCost) {
    this.serviceCost = serviceCost;
  }

  /**
   **/
  public VpsOrderPutResponse sliceCost(Integer sliceCost) {
    this.sliceCost = sliceCost;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("slice_cost")
  public Integer getSliceCost() {
    return sliceCost;
  }
  public void setSliceCost(Integer sliceCost) {
    this.sliceCost = sliceCost;
  }

  /**
   **/
  public VpsOrderPutResponse serviceType(Integer serviceType) {
    this.serviceType = serviceType;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("service_type")
  public Integer getServiceType() {
    return serviceType;
  }
  public void setServiceType(Integer serviceType) {
    this.serviceType = serviceType;
  }

  /**
   **/
  public VpsOrderPutResponse repeatSliceCost(Integer repeatSliceCost) {
    this.repeatSliceCost = repeatSliceCost;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("repeat_slice_cost")
  public Integer getRepeatSliceCost() {
    return repeatSliceCost;
  }
  public void setRepeatSliceCost(Integer repeatSliceCost) {
    this.repeatSliceCost = repeatSliceCost;
  }

  /**
   **/
  public VpsOrderPutResponse originalSliceCost(Integer originalSliceCost) {
    this.originalSliceCost = originalSliceCost;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("original_slice_cost")
  public Integer getOriginalSliceCost() {
    return originalSliceCost;
  }
  public void setOriginalSliceCost(Integer originalSliceCost) {
    this.originalSliceCost = originalSliceCost;
  }

  /**
   **/
  public VpsOrderPutResponse originalCost(Integer originalCost) {
    this.originalCost = originalCost;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("original_cost")
  public Integer getOriginalCost() {
    return originalCost;
  }
  public void setOriginalCost(Integer originalCost) {
    this.originalCost = originalCost;
  }

  /**
   **/
  public VpsOrderPutResponse repeatServiceCost(Integer repeatServiceCost) {
    this.repeatServiceCost = repeatServiceCost;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("repeat_service_cost")
  public Integer getRepeatServiceCost() {
    return repeatServiceCost;
  }
  public void setRepeatServiceCost(Integer repeatServiceCost) {
    this.repeatServiceCost = repeatServiceCost;
  }

  /**
   **/
  public VpsOrderPutResponse monthlyServiceCost(Integer monthlyServiceCost) {
    this.monthlyServiceCost = monthlyServiceCost;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("monthly_service_cost")
  public Integer getMonthlyServiceCost() {
    return monthlyServiceCost;
  }
  public void setMonthlyServiceCost(Integer monthlyServiceCost) {
    this.monthlyServiceCost = monthlyServiceCost;
  }

  /**
   **/
  public VpsOrderPutResponse custid(String custid) {
    this.custid = custid;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("custid")
  public String getCustid() {
    return custid;
  }
  public void setCustid(String custid) {
    this.custid = custid;
  }

  /**
   **/
  public VpsOrderPutResponse os(String os) {
    this.os = os;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("os")
  public String getOs() {
    return os;
  }
  public void setOs(String os) {
    this.os = os;
  }

  /**
   **/
  public VpsOrderPutResponse slices(String slices) {
    this.slices = slices;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("slices")
  public String getSlices() {
    return slices;
  }
  public void setSlices(String slices) {
    this.slices = slices;
  }

  /**
   **/
  public VpsOrderPutResponse platform(String platform) {
    this.platform = platform;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("platform")
  public String getPlatform() {
    return platform;
  }
  public void setPlatform(String platform) {
    this.platform = platform;
  }

  /**
   **/
  public VpsOrderPutResponse controlpanel(String controlpanel) {
    this.controlpanel = controlpanel;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("controlpanel")
  public String getControlpanel() {
    return controlpanel;
  }
  public void setControlpanel(String controlpanel) {
    this.controlpanel = controlpanel;
  }

  /**
   **/
  public VpsOrderPutResponse period(Integer period) {
    this.period = period;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("period")
  public Integer getPeriod() {
    return period;
  }
  public void setPeriod(Integer period) {
    this.period = period;
  }

  /**
   **/
  public VpsOrderPutResponse location(Integer location) {
    this.location = location;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("location")
  public Integer getLocation() {
    return location;
  }
  public void setLocation(Integer location) {
    this.location = location;
  }

  /**
   **/
  public VpsOrderPutResponse version(String version) {
    this.version = version;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("version")
  public String getVersion() {
    return version;
  }
  public void setVersion(String version) {
    this.version = version;
  }

  /**
   **/
  public VpsOrderPutResponse hostname(String hostname) {
    this.hostname = hostname;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("hostname")
  public String getHostname() {
    return hostname;
  }
  public void setHostname(String hostname) {
    this.hostname = hostname;
  }

  /**
   **/
  public VpsOrderPutResponse coupon(String coupon) {
    this.coupon = coupon;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("coupon")
  public String getCoupon() {
    return coupon;
  }
  public void setCoupon(String coupon) {
    this.coupon = coupon;
  }

  /**
   **/
  public VpsOrderPutResponse rootpass(String rootpass) {
    this.rootpass = rootpass;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("rootpass")
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

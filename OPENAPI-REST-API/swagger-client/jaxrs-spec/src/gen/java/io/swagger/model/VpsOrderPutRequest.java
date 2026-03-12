package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * request to validate a vps order
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "request to validate a vps order")

public class VpsOrderPutRequest   {

  private @Valid String osDistro = null;

  private @Valid Integer slices = 1;

public enum VpsPlatformEnum {

    KVM(String.valueOf("kvm")), HYPERV(String.valueOf("hyperv")), KVMSTORAGE(String.valueOf("kvmstorage"));


    private String value;

    VpsPlatformEnum (String v) {
        value = v;
    }

    public String value() {
        return value;
    }

    @Override
    @JsonValue
    public String toString() {
        return String.valueOf(value);
    }

    @JsonCreator
    public static VpsPlatformEnum fromValue(String v) {
        for (VpsPlatformEnum b : VpsPlatformEnum.values()) {
            if (String.valueOf(b.value).equals(v)) {
                return b;
            }
        }
        return null;
    }
}
  private @Valid VpsPlatformEnum vpsPlatform = null;

public enum ControlpanelEnum {

    NONE(String.valueOf("none")), CPANEL(String.valueOf("cpanel")), DA(String.valueOf("da"));


    private String value;

    ControlpanelEnum (String v) {
        value = v;
    }

    public String value() {
        return value;
    }

    @Override
    @JsonValue
    public String toString() {
        return String.valueOf(value);
    }

    @JsonCreator
    public static ControlpanelEnum fromValue(String v) {
        for (ControlpanelEnum b : ControlpanelEnum.values()) {
            if (String.valueOf(b.value).equals(v)) {
                return b;
            }
        }
        return null;
    }
}
  private @Valid ControlpanelEnum controlpanel = null;

  private @Valid Integer period = 1;

  private @Valid Integer location = 1;

  private @Valid String osVersion = null;

  private @Valid String hostname = "";

  private @Valid String coupon = "";

  private @Valid String rootpass = null;

  private @Valid String comment = "";

  /**
   * OS Distribution
   **/
  public VpsOrderPutRequest osDistro(String osDistro) {
    this.osDistro = osDistro;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "OS Distribution")
  @JsonProperty("osDistro")
  @NotNull

  public String getOsDistro() {
    return osDistro;
  }
  public void setOsDistro(String osDistro) {
    this.osDistro = osDistro;
  }

  /**
   * Number of slices
   * minimum: 1
   * maximum: 32
   **/
  public VpsOrderPutRequest slices(Integer slices) {
    this.slices = slices;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "Number of slices")
  @JsonProperty("slices")
  @NotNull
 @Min(1) @Max(32)
  public Integer getSlices() {
    return slices;
  }
  public void setSlices(Integer slices) {
    this.slices = slices;
  }

  /**
   * VPS Platform
   **/
  public VpsOrderPutRequest vpsPlatform(VpsPlatformEnum vpsPlatform) {
    this.vpsPlatform = vpsPlatform;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "VPS Platform")
  @JsonProperty("vpsPlatform")
  @NotNull

  public VpsPlatformEnum getVpsPlatform() {
    return vpsPlatform;
  }
  public void setVpsPlatform(VpsPlatformEnum vpsPlatform) {
    this.vpsPlatform = vpsPlatform;
  }

  /**
   * Control Panel
   **/
  public VpsOrderPutRequest controlpanel(ControlpanelEnum controlpanel) {
    this.controlpanel = controlpanel;
    return this;
  }

  
  @ApiModelProperty(value = "Control Panel")
  @JsonProperty("controlpanel")
  @NotNull

  public ControlpanelEnum getControlpanel() {
    return controlpanel;
  }
  public void setControlpanel(ControlpanelEnum controlpanel) {
    this.controlpanel = controlpanel;
  }

  /**
   * Billing Period or Frequency
   * minimum: 1
   * maximum: 12
   **/
  public VpsOrderPutRequest period(Integer period) {
    this.period = period;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "Billing Period or Frequency")
  @JsonProperty("period")
  @NotNull
 @Min(1) @Max(12)
  public Integer getPeriod() {
    return period;
  }
  public void setPeriod(Integer period) {
    this.period = period;
  }

  /**
   * Location
   * minimum: 1
   * maximum: 3
   **/
  public VpsOrderPutRequest location(Integer location) {
    this.location = location;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "Location")
  @JsonProperty("location")
  @NotNull
 @Min(1) @Max(3)
  public Integer getLocation() {
    return location;
  }
  public void setLocation(Integer location) {
    this.location = location;
  }

  /**
   * OS Version
   **/
  public VpsOrderPutRequest osVersion(String osVersion) {
    this.osVersion = osVersion;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "OS Version")
  @JsonProperty("osVersion")
  @NotNull

  public String getOsVersion() {
    return osVersion;
  }
  public void setOsVersion(String osVersion) {
    this.osVersion = osVersion;
  }

  /**
   * The hostname to assign to the VPS
   **/
  public VpsOrderPutRequest hostname(String hostname) {
    this.hostname = hostname;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "The hostname to assign to the VPS")
  @JsonProperty("hostname")
  @NotNull

  public String getHostname() {
    return hostname;
  }
  public void setHostname(String hostname) {
    this.hostname = hostname;
  }

  /**
   * Coupon
   **/
  public VpsOrderPutRequest coupon(String coupon) {
    this.coupon = coupon;
    return this;
  }

  
  @ApiModelProperty(value = "Coupon")
  @JsonProperty("coupon")
  @NotNull

  public String getCoupon() {
    return coupon;
  }
  public void setCoupon(String coupon) {
    this.coupon = coupon;
  }

  /**
   * Root password to assign to the VVPS
   **/
  public VpsOrderPutRequest rootpass(String rootpass) {
    this.rootpass = rootpass;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "Root password to assign to the VVPS")
  @JsonProperty("rootpass")
  @NotNull

  public String getRootpass() {
    return rootpass;
  }
  public void setRootpass(String rootpass) {
    this.rootpass = rootpass;
  }

  /**
   * Order comments or notes
   **/
  public VpsOrderPutRequest comment(String comment) {
    this.comment = comment;
    return this;
  }

  
  @ApiModelProperty(value = "Order comments or notes")
  @JsonProperty("comment")
  @NotNull

  public String getComment() {
    return comment;
  }
  public void setComment(String comment) {
    this.comment = comment;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsOrderPutRequest vpsOrderPutRequest = (VpsOrderPutRequest) o;
    return Objects.equals(osDistro, vpsOrderPutRequest.osDistro) &&
        Objects.equals(slices, vpsOrderPutRequest.slices) &&
        Objects.equals(vpsPlatform, vpsOrderPutRequest.vpsPlatform) &&
        Objects.equals(controlpanel, vpsOrderPutRequest.controlpanel) &&
        Objects.equals(period, vpsOrderPutRequest.period) &&
        Objects.equals(location, vpsOrderPutRequest.location) &&
        Objects.equals(osVersion, vpsOrderPutRequest.osVersion) &&
        Objects.equals(hostname, vpsOrderPutRequest.hostname) &&
        Objects.equals(coupon, vpsOrderPutRequest.coupon) &&
        Objects.equals(rootpass, vpsOrderPutRequest.rootpass) &&
        Objects.equals(comment, vpsOrderPutRequest.comment);
  }

  @Override
  public int hashCode() {
    return Objects.hash(osDistro, slices, vpsPlatform, controlpanel, period, location, osVersion, hostname, coupon, rootpass, comment);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsOrderPutRequest {\n");
    
    sb.append("    osDistro: ").append(toIndentedString(osDistro)).append("\n");
    sb.append("    slices: ").append(toIndentedString(slices)).append("\n");
    sb.append("    vpsPlatform: ").append(toIndentedString(vpsPlatform)).append("\n");
    sb.append("    controlpanel: ").append(toIndentedString(controlpanel)).append("\n");
    sb.append("    period: ").append(toIndentedString(period)).append("\n");
    sb.append("    location: ").append(toIndentedString(location)).append("\n");
    sb.append("    osVersion: ").append(toIndentedString(osVersion)).append("\n");
    sb.append("    hostname: ").append(toIndentedString(hostname)).append("\n");
    sb.append("    coupon: ").append(toIndentedString(coupon)).append("\n");
    sb.append("    rootpass: ").append(toIndentedString(rootpass)).append("\n");
    sb.append("    comment: ").append(toIndentedString(comment)).append("\n");
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

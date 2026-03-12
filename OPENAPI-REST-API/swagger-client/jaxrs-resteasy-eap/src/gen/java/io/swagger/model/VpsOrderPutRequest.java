package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="request to validate a vps order")

public class VpsOrderPutRequest   {
  private String osDistro = null;
  private Integer slices = 1;
  /**
   * VPS Platform
   */
  public enum VpsPlatformEnum {
    KVM("kvm"),
    HYPERV("hyperv"),
    KVMSTORAGE("kvmstorage");
    private String value;

    VpsPlatformEnum(String value) {
      this.value = value;
    }

    @Override
    @JsonValue
    public String toString() {
      return String.valueOf(value);
    }
  }
  private VpsPlatformEnum vpsPlatform = null;
  /**
   * Control Panel
   */
  public enum ControlpanelEnum {
    NONE("none"),
    CPANEL("cpanel"),
    DA("da");
    private String value;

    ControlpanelEnum(String value) {
      this.value = value;
    }

    @Override
    @JsonValue
    public String toString() {
      return String.valueOf(value);
    }
  }
  private ControlpanelEnum controlpanel = null;
  private Integer period = 1;
  private Integer location = 1;
  private String osVersion = null;
  private String hostname = "";
  private String coupon = "";
  private String rootpass = null;
  private String comment = "";

  /**
   * OS Distribution
   **/
  
  @Schema(required = true, description = "OS Distribution")
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
  
  @Schema(required = true, description = "Number of slices")
  @JsonProperty("slices")
  @NotNull
  @Min(1)
  @Max(32)
  public Integer getSlices() {
    return slices;
  }
  public void setSlices(Integer slices) {
    this.slices = slices;
  }

  /**
   * VPS Platform
   **/
  
  @Schema(required = true, description = "VPS Platform")
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
  
  @Schema(description = "Control Panel")
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
  
  @Schema(required = true, description = "Billing Period or Frequency")
  @JsonProperty("period")
  @NotNull
  @Min(1)
  @Max(12)
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
  
  @Schema(required = true, description = "Location")
  @JsonProperty("location")
  @NotNull
  @Min(1)
  @Max(3)
  public Integer getLocation() {
    return location;
  }
  public void setLocation(Integer location) {
    this.location = location;
  }

  /**
   * OS Version
   **/
  
  @Schema(required = true, description = "OS Version")
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
  
  @Schema(required = true, description = "The hostname to assign to the VPS")
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
  
  @Schema(description = "Coupon")
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
  
  @Schema(required = true, description = "Root password to assign to the VVPS")
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
  
  @Schema(description = "Order comments or notes")
  @JsonProperty("comment")
  @NotNull
  public String getComment() {
    return comment;
  }
  public void setComment(String comment) {
    this.comment = comment;
  }


  @Override
  public boolean equals(Object o) {
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
/**
 * request to validate a vps order
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "request to validate a vps order")

public class VpsOrderPostRequest   {
  private String osDistro = null;
  private Integer slices = 1;
@XmlType(name="VpsPlatformEnum")
@XmlEnum(String.class)
public enum VpsPlatformEnum {

    @XmlEnumValue("kvm") KVM(String.valueOf("kvm")), @XmlEnumValue("hyperv") HYPERV(String.valueOf("hyperv")), @XmlEnumValue("kvmstorage") KVMSTORAGE(String.valueOf("kvmstorage"));


    private String value;

    VpsPlatformEnum (String v) {
        value = v;
    }

    public String value() {
        return value;
    }

    @Override
    public String toString() {
        return String.valueOf(value);
    }

    public static VpsPlatformEnum fromValue(String v) {
        for (VpsPlatformEnum b : VpsPlatformEnum.values()) {
            if (String.valueOf(b.value).equals(v)) {
                return b;
            }
        }
        return null;
    }
}
  private VpsPlatformEnum vpsPlatform = null;
@XmlType(name="ControlpanelEnum")
@XmlEnum(String.class)
public enum ControlpanelEnum {

    @XmlEnumValue("none") NONE(String.valueOf("none")), @XmlEnumValue("cpanel") CPANEL(String.valueOf("cpanel")), @XmlEnumValue("da") DA(String.valueOf("da"));


    private String value;

    ControlpanelEnum (String v) {
        value = v;
    }

    public String value() {
        return value;
    }

    @Override
    public String toString() {
        return String.valueOf(value);
    }

    public static ControlpanelEnum fromValue(String v) {
        for (ControlpanelEnum b : ControlpanelEnum.values()) {
            if (String.valueOf(b.value).equals(v)) {
                return b;
            }
        }
        return null;
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
  public VpsOrderPostRequest osDistro(String osDistro) {
    this.osDistro = osDistro;
    return this;
  }

  
  
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
  public VpsOrderPostRequest slices(Integer slices) {
    this.slices = slices;
    return this;
  }

  
  
  @Schema(required = true, description = "Number of slices")
  @JsonProperty("slices")
  @NotNull
 @Min(1) @Max(32)  public Integer getSlices() {
    return slices;
  }
  public void setSlices(Integer slices) {
    this.slices = slices;
  }

  /**
   * VPS Platform
   **/
  public VpsOrderPostRequest vpsPlatform(VpsPlatformEnum vpsPlatform) {
    this.vpsPlatform = vpsPlatform;
    return this;
  }

  
  
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
  public VpsOrderPostRequest controlpanel(ControlpanelEnum controlpanel) {
    this.controlpanel = controlpanel;
    return this;
  }

  
  
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
  public VpsOrderPostRequest period(Integer period) {
    this.period = period;
    return this;
  }

  
  
  @Schema(required = true, description = "Billing Period or Frequency")
  @JsonProperty("period")
  @NotNull
 @Min(1) @Max(12)  public Integer getPeriod() {
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
  public VpsOrderPostRequest location(Integer location) {
    this.location = location;
    return this;
  }

  
  
  @Schema(required = true, description = "Location")
  @JsonProperty("location")
  @NotNull
 @Min(1) @Max(3)  public Integer getLocation() {
    return location;
  }
  public void setLocation(Integer location) {
    this.location = location;
  }

  /**
   * OS Version
   **/
  public VpsOrderPostRequest osVersion(String osVersion) {
    this.osVersion = osVersion;
    return this;
  }

  
  
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
  public VpsOrderPostRequest hostname(String hostname) {
    this.hostname = hostname;
    return this;
  }

  
  
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
  public VpsOrderPostRequest coupon(String coupon) {
    this.coupon = coupon;
    return this;
  }

  
  
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
  public VpsOrderPostRequest rootpass(String rootpass) {
    this.rootpass = rootpass;
    return this;
  }

  
  
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
  public VpsOrderPostRequest comment(String comment) {
    this.comment = comment;
    return this;
  }

  
  
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
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsOrderPostRequest vpsOrderPostRequest = (VpsOrderPostRequest) o;
    return Objects.equals(osDistro, vpsOrderPostRequest.osDistro) &&
        Objects.equals(slices, vpsOrderPostRequest.slices) &&
        Objects.equals(vpsPlatform, vpsOrderPostRequest.vpsPlatform) &&
        Objects.equals(controlpanel, vpsOrderPostRequest.controlpanel) &&
        Objects.equals(period, vpsOrderPostRequest.period) &&
        Objects.equals(location, vpsOrderPostRequest.location) &&
        Objects.equals(osVersion, vpsOrderPostRequest.osVersion) &&
        Objects.equals(hostname, vpsOrderPostRequest.hostname) &&
        Objects.equals(coupon, vpsOrderPostRequest.coupon) &&
        Objects.equals(rootpass, vpsOrderPostRequest.rootpass) &&
        Objects.equals(comment, vpsOrderPostRequest.comment);
  }

  @Override
  public int hashCode() {
    return Objects.hash(osDistro, slices, vpsPlatform, controlpanel, period, location, osVersion, hostname, coupon, rootpass, comment);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsOrderPostRequest {\n");
    
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

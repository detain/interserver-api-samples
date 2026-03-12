package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
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
  * request to validate a vps order
 **/
@Schema(description="request to validate a vps order")
public class VpsOrderPostRequest   {
  
  @Schema(required = true, description = "OS Distribution")
 /**
   * OS Distribution  
  **/
  private String osDistro = null;
  
  @Schema(required = true, description = "Number of slices")
 /**
   * Number of slices  
  **/
  private Integer slices = 1;
  public enum VpsPlatformEnum {
    KVM("kvm"),
    HYPERV("hyperv"),
    KVMSTORAGE("kvmstorage");

    private String value;

    VpsPlatformEnum(String value) {
      this.value = value;
    }
    @JsonValue
    public String getValue() {
      return value;
    }

    @Override
    public String toString() {
      return String.valueOf(value);
    }
    @JsonCreator
    public static VpsPlatformEnum fromValue(String text) {
      for (VpsPlatformEnum b : VpsPlatformEnum.values()) {
        if (String.valueOf(b.value).equals(text)) {
          return b;
        }
      }
      return null;
    }
  }  
  @Schema(required = true, description = "VPS Platform")
 /**
   * VPS Platform  
  **/
  private VpsPlatformEnum vpsPlatform = null;
  public enum ControlpanelEnum {
    NONE("none"),
    CPANEL("cpanel"),
    DA("da");

    private String value;

    ControlpanelEnum(String value) {
      this.value = value;
    }
    @JsonValue
    public String getValue() {
      return value;
    }

    @Override
    public String toString() {
      return String.valueOf(value);
    }
    @JsonCreator
    public static ControlpanelEnum fromValue(String text) {
      for (ControlpanelEnum b : ControlpanelEnum.values()) {
        if (String.valueOf(b.value).equals(text)) {
          return b;
        }
      }
      return null;
    }
  }  
  @Schema(description = "Control Panel")
 /**
   * Control Panel  
  **/
  private ControlpanelEnum controlpanel = null;
  
  @Schema(required = true, description = "Billing Period or Frequency")
 /**
   * Billing Period or Frequency  
  **/
  private Integer period = 1;
  
  @Schema(required = true, description = "Location")
 /**
   * Location  
  **/
  private Integer location = 1;
  
  @Schema(required = true, description = "OS Version")
 /**
   * OS Version  
  **/
  private String osVersion = null;
  
  @Schema(required = true, description = "The hostname to assign to the VPS")
 /**
   * The hostname to assign to the VPS  
  **/
  private String hostname = "";
  
  @Schema(description = "Coupon")
 /**
   * Coupon  
  **/
  private String coupon = "";
  
  @Schema(required = true, description = "Root password to assign to the VVPS")
 /**
   * Root password to assign to the VVPS  
  **/
  private String rootpass = null;
  
  @Schema(description = "Order comments or notes")
 /**
   * Order comments or notes  
  **/
  private String comment = "";
 /**
   * OS Distribution
   * @return osDistro
  **/
  @JsonProperty("osDistro")
  @NotNull
  public String getOsDistro() {
    return osDistro;
  }

  public void setOsDistro(String osDistro) {
    this.osDistro = osDistro;
  }

  public VpsOrderPostRequest osDistro(String osDistro) {
    this.osDistro = osDistro;
    return this;
  }

 /**
   * Number of slices
   * minimum: 1
   * maximum: 32
   * @return slices
  **/
  @JsonProperty("slices")
  @NotNull
 @Min(1) @Max(32)  public Integer getSlices() {
    return slices;
  }

  public void setSlices(Integer slices) {
    this.slices = slices;
  }

  public VpsOrderPostRequest slices(Integer slices) {
    this.slices = slices;
    return this;
  }

 /**
   * VPS Platform
   * @return vpsPlatform
  **/
  @JsonProperty("vpsPlatform")
  @NotNull
  public String getVpsPlatform() {
    if (vpsPlatform == null) {
      return null;
    }
    return vpsPlatform.getValue();
  }

  public void setVpsPlatform(VpsPlatformEnum vpsPlatform) {
    this.vpsPlatform = vpsPlatform;
  }

  public VpsOrderPostRequest vpsPlatform(VpsPlatformEnum vpsPlatform) {
    this.vpsPlatform = vpsPlatform;
    return this;
  }

 /**
   * Control Panel
   * @return controlpanel
  **/
  @JsonProperty("controlpanel")
  @NotNull
  public String getControlpanel() {
    if (controlpanel == null) {
      return null;
    }
    return controlpanel.getValue();
  }

  public void setControlpanel(ControlpanelEnum controlpanel) {
    this.controlpanel = controlpanel;
  }

  public VpsOrderPostRequest controlpanel(ControlpanelEnum controlpanel) {
    this.controlpanel = controlpanel;
    return this;
  }

 /**
   * Billing Period or Frequency
   * minimum: 1
   * maximum: 12
   * @return period
  **/
  @JsonProperty("period")
  @NotNull
 @Min(1) @Max(12)  public Integer getPeriod() {
    return period;
  }

  public void setPeriod(Integer period) {
    this.period = period;
  }

  public VpsOrderPostRequest period(Integer period) {
    this.period = period;
    return this;
  }

 /**
   * Location
   * minimum: 1
   * maximum: 3
   * @return location
  **/
  @JsonProperty("location")
  @NotNull
 @Min(1) @Max(3)  public Integer getLocation() {
    return location;
  }

  public void setLocation(Integer location) {
    this.location = location;
  }

  public VpsOrderPostRequest location(Integer location) {
    this.location = location;
    return this;
  }

 /**
   * OS Version
   * @return osVersion
  **/
  @JsonProperty("osVersion")
  @NotNull
  public String getOsVersion() {
    return osVersion;
  }

  public void setOsVersion(String osVersion) {
    this.osVersion = osVersion;
  }

  public VpsOrderPostRequest osVersion(String osVersion) {
    this.osVersion = osVersion;
    return this;
  }

 /**
   * The hostname to assign to the VPS
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

  public VpsOrderPostRequest hostname(String hostname) {
    this.hostname = hostname;
    return this;
  }

 /**
   * Coupon
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

  public VpsOrderPostRequest coupon(String coupon) {
    this.coupon = coupon;
    return this;
  }

 /**
   * Root password to assign to the VVPS
   * @return rootpass
  **/
  @JsonProperty("rootpass")
  @NotNull
  public String getRootpass() {
    return rootpass;
  }

  public void setRootpass(String rootpass) {
    this.rootpass = rootpass;
  }

  public VpsOrderPostRequest rootpass(String rootpass) {
    this.rootpass = rootpass;
    return this;
  }

 /**
   * Order comments or notes
   * @return comment
  **/
  @JsonProperty("comment")
  @NotNull
  public String getComment() {
    return comment;
  }

  public void setComment(String comment) {
    this.comment = comment;
  }

  public VpsOrderPostRequest comment(String comment) {
    this.comment = comment;
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

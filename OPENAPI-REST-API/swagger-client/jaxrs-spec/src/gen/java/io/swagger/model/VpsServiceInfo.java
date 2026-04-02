package io.swagger.model;

import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class VpsServiceInfo   {

  private @Valid String vpsId = null;

  private @Valid String vpsCustid = null;

  private @Valid String vpsServer = null;

  private @Valid String vpsIp = null;

  private @Valid String vpsIpv6 = null;

  private @Valid String vpsVzid = null;

  private @Valid String vpsCurrency = null;

  private @Valid String vpsType = null;

  private @Valid String vpsOrderDate = null;

  private @Valid String vpsStatus = null;

  private @Valid String vpsInvoice = null;

  private @Valid String vpsCoupon = null;

  private @Valid String vpsExtra = null;

  private @Valid String vpsHostname = null;

  private @Valid String vpsServerStatus = null;

  private @Valid String vpsComment = null;

  private @Valid String vpsSlices = null;

  private @Valid String vpsVnc = null;

  private @Valid String vpsVncPort = null;

  private @Valid String vpsRootpass = null;

  private @Valid String vpsMac = null;

  private @Valid String vpsOs = null;

  private @Valid String vpsVersion = null;

  private @Valid String vpsLocation = null;

  private @Valid String vpsPlatform = null;

  private @Valid String vpsDiskused = null;

  private @Valid String vpsDiskmax = null;

  /**
   * VPS ID
   **/
  public VpsServiceInfo vpsId(String vpsId) {
    this.vpsId = vpsId;
    return this;
  }

  
  @ApiModelProperty(example = "85872", value = "VPS ID")
  @JsonProperty("vps_id")
  @NotNull

  public String getVpsId() {
    return vpsId;
  }
  public void setVpsId(String vpsId) {
    this.vpsId = vpsId;
  }

  /**
   * Customer ID
   **/
  public VpsServiceInfo vpsCustid(String vpsCustid) {
    this.vpsCustid = vpsCustid;
    return this;
  }

  
  @ApiModelProperty(example = "223513", value = "Customer ID")
  @JsonProperty("vps_custid")
  @NotNull

  public String getVpsCustid() {
    return vpsCustid;
  }
  public void setVpsCustid(String vpsCustid) {
    this.vpsCustid = vpsCustid;
  }

  /**
   * Server ID
   **/
  public VpsServiceInfo vpsServer(String vpsServer) {
    this.vpsServer = vpsServer;
    return this;
  }

  
  @ApiModelProperty(example = "2439", value = "Server ID")
  @JsonProperty("vps_server")
  @NotNull

  public String getVpsServer() {
    return vpsServer;
  }
  public void setVpsServer(String vpsServer) {
    this.vpsServer = vpsServer;
  }

  /**
   * IP address of the VPS
   **/
  public VpsServiceInfo vpsIp(String vpsIp) {
    this.vpsIp = vpsIp;
    return this;
  }

  
  @ApiModelProperty(example = "1.2.3.4", value = "IP address of the VPS")
  @JsonProperty("vps_ip")
  @NotNull

  public String getVpsIp() {
    return vpsIp;
  }
  public void setVpsIp(String vpsIp) {
    this.vpsIp = vpsIp;
  }

  /**
   * IPv6 address of the VPS
   **/
  public VpsServiceInfo vpsIpv6(String vpsIpv6) {
    this.vpsIpv6 = vpsIpv6;
    return this;
  }

  
  @ApiModelProperty(value = "IPv6 address of the VPS")
  @JsonProperty("vps_ipv6")
  @NotNull

  public String getVpsIpv6() {
    return vpsIpv6;
  }
  public void setVpsIpv6(String vpsIpv6) {
    this.vpsIpv6 = vpsIpv6;
  }

  /**
   * VPS Virtuozzo ID
   **/
  public VpsServiceInfo vpsVzid(String vpsVzid) {
    this.vpsVzid = vpsVzid;
    return this;
  }

  
  @ApiModelProperty(example = "vps85872", value = "VPS Virtuozzo ID")
  @JsonProperty("vps_vzid")
  @NotNull

  public String getVpsVzid() {
    return vpsVzid;
  }
  public void setVpsVzid(String vpsVzid) {
    this.vpsVzid = vpsVzid;
  }

  /**
   * Currency used for billing
   **/
  public VpsServiceInfo vpsCurrency(String vpsCurrency) {
    this.vpsCurrency = vpsCurrency;
    return this;
  }

  
  @ApiModelProperty(example = "USD", value = "Currency used for billing")
  @JsonProperty("vps_currency")
  @NotNull

  public String getVpsCurrency() {
    return vpsCurrency;
  }
  public void setVpsCurrency(String vpsCurrency) {
    this.vpsCurrency = vpsCurrency;
  }

  /**
   * VPS type
   **/
  public VpsServiceInfo vpsType(String vpsType) {
    this.vpsType = vpsType;
    return this;
  }

  
  @ApiModelProperty(example = "33", value = "VPS type")
  @JsonProperty("vps_type")
  @NotNull

  public String getVpsType() {
    return vpsType;
  }
  public void setVpsType(String vpsType) {
    this.vpsType = vpsType;
  }

  /**
   * Date of VPS order
   **/
  public VpsServiceInfo vpsOrderDate(String vpsOrderDate) {
    this.vpsOrderDate = vpsOrderDate;
    return this;
  }

  
  @ApiModelProperty(example = "2022-12-26T20:14:59.000Z", value = "Date of VPS order")
  @JsonProperty("vps_order_date")
  @NotNull

  public String getVpsOrderDate() {
    return vpsOrderDate;
  }
  public void setVpsOrderDate(String vpsOrderDate) {
    this.vpsOrderDate = vpsOrderDate;
  }

  /**
   * VPS status
   **/
  public VpsServiceInfo vpsStatus(String vpsStatus) {
    this.vpsStatus = vpsStatus;
    return this;
  }

  
  @ApiModelProperty(example = "active", value = "VPS status")
  @JsonProperty("vps_status")
  @NotNull

  public String getVpsStatus() {
    return vpsStatus;
  }
  public void setVpsStatus(String vpsStatus) {
    this.vpsStatus = vpsStatus;
  }

  /**
   * VPS invoice number
   **/
  public VpsServiceInfo vpsInvoice(String vpsInvoice) {
    this.vpsInvoice = vpsInvoice;
    return this;
  }

  
  @ApiModelProperty(example = "20130799", value = "VPS invoice number")
  @JsonProperty("vps_invoice")
  @NotNull

  public String getVpsInvoice() {
    return vpsInvoice;
  }
  public void setVpsInvoice(String vpsInvoice) {
    this.vpsInvoice = vpsInvoice;
  }

  /**
   * VPS coupon code
   **/
  public VpsServiceInfo vpsCoupon(String vpsCoupon) {
    this.vpsCoupon = vpsCoupon;
    return this;
  }

  
  @ApiModelProperty(example = "3646", value = "VPS coupon code")
  @JsonProperty("vps_coupon")
  @NotNull

  public String getVpsCoupon() {
    return vpsCoupon;
  }
  public void setVpsCoupon(String vpsCoupon) {
    this.vpsCoupon = vpsCoupon;
  }

  /**
   * Additional information about the VPS
   **/
  public VpsServiceInfo vpsExtra(String vpsExtra) {
    this.vpsExtra = vpsExtra;
    return this;
  }

  
  @ApiModelProperty(example = "{\"spice\":5903,\"snapshots\":[{\"name\":\"third\",\"used\":36490445,\"date\":1692095220},{\"name\":\"second\",\"used\":40894464,\"date\":1692181620},{\"name\":\"first\",\"used\":54735668,\"date\":1692268020}]}", value = "Additional information about the VPS")
  @JsonProperty("vps_extra")
  @NotNull

  public String getVpsExtra() {
    return vpsExtra;
  }
  public void setVpsExtra(String vpsExtra) {
    this.vpsExtra = vpsExtra;
  }

  /**
   * VPS hostname
   **/
  public VpsServiceInfo vpsHostname(String vpsHostname) {
    this.vpsHostname = vpsHostname;
    return this;
  }

  
  @ApiModelProperty(example = "vps85872", value = "VPS hostname")
  @JsonProperty("vps_hostname")
  @NotNull

  public String getVpsHostname() {
    return vpsHostname;
  }
  public void setVpsHostname(String vpsHostname) {
    this.vpsHostname = vpsHostname;
  }

  /**
   * Status of the VPS server
   **/
  public VpsServiceInfo vpsServerStatus(String vpsServerStatus) {
    this.vpsServerStatus = vpsServerStatus;
    return this;
  }

  
  @ApiModelProperty(example = "running", value = "Status of the VPS server")
  @JsonProperty("vps_server_status")
  @NotNull

  public String getVpsServerStatus() {
    return vpsServerStatus;
  }
  public void setVpsServerStatus(String vpsServerStatus) {
    this.vpsServerStatus = vpsServerStatus;
  }

  /**
   * Comment associated with the VPS
   **/
  public VpsServiceInfo vpsComment(String vpsComment) {
    this.vpsComment = vpsComment;
    return this;
  }

  
  @ApiModelProperty(example = "my-web-2", value = "Comment associated with the VPS")
  @JsonProperty("vps_comment")
  @NotNull

  public String getVpsComment() {
    return vpsComment;
  }
  public void setVpsComment(String vpsComment) {
    this.vpsComment = vpsComment;
  }

  /**
   * Number of VPS slices
   **/
  public VpsServiceInfo vpsSlices(String vpsSlices) {
    this.vpsSlices = vpsSlices;
    return this;
  }

  
  @ApiModelProperty(example = "16", value = "Number of VPS slices")
  @JsonProperty("vps_slices")
  @NotNull

  public String getVpsSlices() {
    return vpsSlices;
  }
  public void setVpsSlices(String vpsSlices) {
    this.vpsSlices = vpsSlices;
  }

  /**
   * VNC address
   **/
  public VpsServiceInfo vpsVnc(String vpsVnc) {
    this.vpsVnc = vpsVnc;
    return this;
  }

  
  @ApiModelProperty(example = "8.7.6.5", value = "VNC address")
  @JsonProperty("vps_vnc")
  @NotNull

  public String getVpsVnc() {
    return vpsVnc;
  }
  public void setVpsVnc(String vpsVnc) {
    this.vpsVnc = vpsVnc;
  }

  /**
   * VNC port
   **/
  public VpsServiceInfo vpsVncPort(String vpsVncPort) {
    this.vpsVncPort = vpsVncPort;
    return this;
  }

  
  @ApiModelProperty(example = "5902", value = "VNC port")
  @JsonProperty("vps_vnc_port")
  @NotNull

  public String getVpsVncPort() {
    return vpsVncPort;
  }
  public void setVpsVncPort(String vpsVncPort) {
    this.vpsVncPort = vpsVncPort;
  }

  /**
   * Root password of the VPS
   **/
  public VpsServiceInfo vpsRootpass(String vpsRootpass) {
    this.vpsRootpass = vpsRootpass;
    return this;
  }

  
  @ApiModelProperty(example = "mypassword", value = "Root password of the VPS")
  @JsonProperty("vps_rootpass")
  @NotNull

  public String getVpsRootpass() {
    return vpsRootpass;
  }
  public void setVpsRootpass(String vpsRootpass) {
    this.vpsRootpass = vpsRootpass;
  }

  /**
   * MAC address of the VPS
   **/
  public VpsServiceInfo vpsMac(String vpsMac) {
    this.vpsMac = vpsMac;
    return this;
  }

  
  @ApiModelProperty(example = "00:16:3e:27:59:b2", value = "MAC address of the VPS")
  @JsonProperty("vps_mac")
  @NotNull

  public String getVpsMac() {
    return vpsMac;
  }
  public void setVpsMac(String vpsMac) {
    this.vpsMac = vpsMac;
  }

  /**
   * Operating system of the VPS
   **/
  public VpsServiceInfo vpsOs(String vpsOs) {
    this.vpsOs = vpsOs;
    return this;
  }

  
  @ApiModelProperty(example = "ubuntu24", value = "Operating system of the VPS")
  @JsonProperty("vps_os")
  @NotNull

  public String getVpsOs() {
    return vpsOs;
  }
  public void setVpsOs(String vpsOs) {
    this.vpsOs = vpsOs;
  }

  /**
   * Version of the operating system
   **/
  public VpsServiceInfo vpsVersion(String vpsVersion) {
    this.vpsVersion = vpsVersion;
    return this;
  }

  
  @ApiModelProperty(example = "ubuntu", value = "Version of the operating system")
  @JsonProperty("vps_version")
  @NotNull

  public String getVpsVersion() {
    return vpsVersion;
  }
  public void setVpsVersion(String vpsVersion) {
    this.vpsVersion = vpsVersion;
  }

  /**
   * Location of the VPS
   **/
  public VpsServiceInfo vpsLocation(String vpsLocation) {
    this.vpsLocation = vpsLocation;
    return this;
  }

  
  @ApiModelProperty(example = "1", value = "Location of the VPS")
  @JsonProperty("vps_location")
  @NotNull

  public String getVpsLocation() {
    return vpsLocation;
  }
  public void setVpsLocation(String vpsLocation) {
    this.vpsLocation = vpsLocation;
  }

  /**
   * Virtualization platform
   **/
  public VpsServiceInfo vpsPlatform(String vpsPlatform) {
    this.vpsPlatform = vpsPlatform;
    return this;
  }

  
  @ApiModelProperty(example = "kvm", value = "Virtualization platform")
  @JsonProperty("vps_platform")
  @NotNull

  public String getVpsPlatform() {
    return vpsPlatform;
  }
  public void setVpsPlatform(String vpsPlatform) {
    this.vpsPlatform = vpsPlatform;
  }

  /**
   * Amount of disk space used
   **/
  public VpsServiceInfo vpsDiskused(String vpsDiskused) {
    this.vpsDiskused = vpsDiskused;
    return this;
  }

  
  @ApiModelProperty(example = "0", value = "Amount of disk space used")
  @JsonProperty("vps_diskused")
  @NotNull

  public String getVpsDiskused() {
    return vpsDiskused;
  }
  public void setVpsDiskused(String vpsDiskused) {
    this.vpsDiskused = vpsDiskused;
  }

  /**
   * Maximum disk space available
   **/
  public VpsServiceInfo vpsDiskmax(String vpsDiskmax) {
    this.vpsDiskmax = vpsDiskmax;
    return this;
  }

  
  @ApiModelProperty(example = "0", value = "Maximum disk space available")
  @JsonProperty("vps_diskmax")
  @NotNull

  public String getVpsDiskmax() {
    return vpsDiskmax;
  }
  public void setVpsDiskmax(String vpsDiskmax) {
    this.vpsDiskmax = vpsDiskmax;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsServiceInfo vpsServiceInfo = (VpsServiceInfo) o;
    return Objects.equals(vpsId, vpsServiceInfo.vpsId) &&
        Objects.equals(vpsCustid, vpsServiceInfo.vpsCustid) &&
        Objects.equals(vpsServer, vpsServiceInfo.vpsServer) &&
        Objects.equals(vpsIp, vpsServiceInfo.vpsIp) &&
        Objects.equals(vpsIpv6, vpsServiceInfo.vpsIpv6) &&
        Objects.equals(vpsVzid, vpsServiceInfo.vpsVzid) &&
        Objects.equals(vpsCurrency, vpsServiceInfo.vpsCurrency) &&
        Objects.equals(vpsType, vpsServiceInfo.vpsType) &&
        Objects.equals(vpsOrderDate, vpsServiceInfo.vpsOrderDate) &&
        Objects.equals(vpsStatus, vpsServiceInfo.vpsStatus) &&
        Objects.equals(vpsInvoice, vpsServiceInfo.vpsInvoice) &&
        Objects.equals(vpsCoupon, vpsServiceInfo.vpsCoupon) &&
        Objects.equals(vpsExtra, vpsServiceInfo.vpsExtra) &&
        Objects.equals(vpsHostname, vpsServiceInfo.vpsHostname) &&
        Objects.equals(vpsServerStatus, vpsServiceInfo.vpsServerStatus) &&
        Objects.equals(vpsComment, vpsServiceInfo.vpsComment) &&
        Objects.equals(vpsSlices, vpsServiceInfo.vpsSlices) &&
        Objects.equals(vpsVnc, vpsServiceInfo.vpsVnc) &&
        Objects.equals(vpsVncPort, vpsServiceInfo.vpsVncPort) &&
        Objects.equals(vpsRootpass, vpsServiceInfo.vpsRootpass) &&
        Objects.equals(vpsMac, vpsServiceInfo.vpsMac) &&
        Objects.equals(vpsOs, vpsServiceInfo.vpsOs) &&
        Objects.equals(vpsVersion, vpsServiceInfo.vpsVersion) &&
        Objects.equals(vpsLocation, vpsServiceInfo.vpsLocation) &&
        Objects.equals(vpsPlatform, vpsServiceInfo.vpsPlatform) &&
        Objects.equals(vpsDiskused, vpsServiceInfo.vpsDiskused) &&
        Objects.equals(vpsDiskmax, vpsServiceInfo.vpsDiskmax);
  }

  @Override
  public int hashCode() {
    return Objects.hash(vpsId, vpsCustid, vpsServer, vpsIp, vpsIpv6, vpsVzid, vpsCurrency, vpsType, vpsOrderDate, vpsStatus, vpsInvoice, vpsCoupon, vpsExtra, vpsHostname, vpsServerStatus, vpsComment, vpsSlices, vpsVnc, vpsVncPort, vpsRootpass, vpsMac, vpsOs, vpsVersion, vpsLocation, vpsPlatform, vpsDiskused, vpsDiskmax);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsServiceInfo {\n");
    
    sb.append("    vpsId: ").append(toIndentedString(vpsId)).append("\n");
    sb.append("    vpsCustid: ").append(toIndentedString(vpsCustid)).append("\n");
    sb.append("    vpsServer: ").append(toIndentedString(vpsServer)).append("\n");
    sb.append("    vpsIp: ").append(toIndentedString(vpsIp)).append("\n");
    sb.append("    vpsIpv6: ").append(toIndentedString(vpsIpv6)).append("\n");
    sb.append("    vpsVzid: ").append(toIndentedString(vpsVzid)).append("\n");
    sb.append("    vpsCurrency: ").append(toIndentedString(vpsCurrency)).append("\n");
    sb.append("    vpsType: ").append(toIndentedString(vpsType)).append("\n");
    sb.append("    vpsOrderDate: ").append(toIndentedString(vpsOrderDate)).append("\n");
    sb.append("    vpsStatus: ").append(toIndentedString(vpsStatus)).append("\n");
    sb.append("    vpsInvoice: ").append(toIndentedString(vpsInvoice)).append("\n");
    sb.append("    vpsCoupon: ").append(toIndentedString(vpsCoupon)).append("\n");
    sb.append("    vpsExtra: ").append(toIndentedString(vpsExtra)).append("\n");
    sb.append("    vpsHostname: ").append(toIndentedString(vpsHostname)).append("\n");
    sb.append("    vpsServerStatus: ").append(toIndentedString(vpsServerStatus)).append("\n");
    sb.append("    vpsComment: ").append(toIndentedString(vpsComment)).append("\n");
    sb.append("    vpsSlices: ").append(toIndentedString(vpsSlices)).append("\n");
    sb.append("    vpsVnc: ").append(toIndentedString(vpsVnc)).append("\n");
    sb.append("    vpsVncPort: ").append(toIndentedString(vpsVncPort)).append("\n");
    sb.append("    vpsRootpass: ").append(toIndentedString(vpsRootpass)).append("\n");
    sb.append("    vpsMac: ").append(toIndentedString(vpsMac)).append("\n");
    sb.append("    vpsOs: ").append(toIndentedString(vpsOs)).append("\n");
    sb.append("    vpsVersion: ").append(toIndentedString(vpsVersion)).append("\n");
    sb.append("    vpsLocation: ").append(toIndentedString(vpsLocation)).append("\n");
    sb.append("    vpsPlatform: ").append(toIndentedString(vpsPlatform)).append("\n");
    sb.append("    vpsDiskused: ").append(toIndentedString(vpsDiskused)).append("\n");
    sb.append("    vpsDiskmax: ").append(toIndentedString(vpsDiskmax)).append("\n");
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

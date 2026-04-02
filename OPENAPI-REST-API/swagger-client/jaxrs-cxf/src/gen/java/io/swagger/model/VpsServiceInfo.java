package io.swagger.model;

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

public class VpsServiceInfo   {
  
  @Schema(example = "85872", description = "VPS ID")
 /**
   * VPS ID  
  **/
  private String vpsId = null;
  
  @Schema(example = "223513", description = "Customer ID")
 /**
   * Customer ID  
  **/
  private String vpsCustid = null;
  
  @Schema(example = "2439", description = "Server ID")
 /**
   * Server ID  
  **/
  private String vpsServer = null;
  
  @Schema(example = "1.2.3.4", description = "IP address of the VPS")
 /**
   * IP address of the VPS  
  **/
  private String vpsIp = null;
  
  @Schema(description = "IPv6 address of the VPS")
 /**
   * IPv6 address of the VPS  
  **/
  private String vpsIpv6 = null;
  
  @Schema(example = "vps85872", description = "VPS Virtuozzo ID")
 /**
   * VPS Virtuozzo ID  
  **/
  private String vpsVzid = null;
  
  @Schema(example = "USD", description = "Currency used for billing")
 /**
   * Currency used for billing  
  **/
  private String vpsCurrency = null;
  
  @Schema(example = "33", description = "VPS type")
 /**
   * VPS type  
  **/
  private String vpsType = null;
  
  @Schema(example = "2022-12-26T20:14:59.000Z", description = "Date of VPS order")
 /**
   * Date of VPS order  
  **/
  private String vpsOrderDate = null;
  
  @Schema(example = "active", description = "VPS status")
 /**
   * VPS status  
  **/
  private String vpsStatus = null;
  
  @Schema(example = "20130799", description = "VPS invoice number")
 /**
   * VPS invoice number  
  **/
  private String vpsInvoice = null;
  
  @Schema(example = "3646", description = "VPS coupon code")
 /**
   * VPS coupon code  
  **/
  private String vpsCoupon = null;
  
  @Schema(example = "{\"spice\":5903,\"snapshots\":[{\"name\":\"third\",\"used\":36490445,\"date\":1692095220},{\"name\":\"second\",\"used\":40894464,\"date\":1692181620},{\"name\":\"first\",\"used\":54735668,\"date\":1692268020}]}", description = "Additional information about the VPS")
 /**
   * Additional information about the VPS  
  **/
  private String vpsExtra = null;
  
  @Schema(example = "vps85872", description = "VPS hostname")
 /**
   * VPS hostname  
  **/
  private String vpsHostname = null;
  
  @Schema(example = "running", description = "Status of the VPS server")
 /**
   * Status of the VPS server  
  **/
  private String vpsServerStatus = null;
  
  @Schema(example = "my-web-2", description = "Comment associated with the VPS")
 /**
   * Comment associated with the VPS  
  **/
  private String vpsComment = null;
  
  @Schema(example = "16", description = "Number of VPS slices")
 /**
   * Number of VPS slices  
  **/
  private String vpsSlices = null;
  
  @Schema(example = "8.7.6.5", description = "VNC address")
 /**
   * VNC address  
  **/
  private String vpsVnc = null;
  
  @Schema(example = "5902", description = "VNC port")
 /**
   * VNC port  
  **/
  private String vpsVncPort = null;
  
  @Schema(example = "mypassword", description = "Root password of the VPS")
 /**
   * Root password of the VPS  
  **/
  private String vpsRootpass = null;
  
  @Schema(example = "00:16:3e:27:59:b2", description = "MAC address of the VPS")
 /**
   * MAC address of the VPS  
  **/
  private String vpsMac = null;
  
  @Schema(example = "ubuntu24", description = "Operating system of the VPS")
 /**
   * Operating system of the VPS  
  **/
  private String vpsOs = null;
  
  @Schema(example = "ubuntu", description = "Version of the operating system")
 /**
   * Version of the operating system  
  **/
  private String vpsVersion = null;
  
  @Schema(example = "1", description = "Location of the VPS")
 /**
   * Location of the VPS  
  **/
  private String vpsLocation = null;
  
  @Schema(example = "kvm", description = "Virtualization platform")
 /**
   * Virtualization platform  
  **/
  private String vpsPlatform = null;
  
  @Schema(example = "0", description = "Amount of disk space used")
 /**
   * Amount of disk space used  
  **/
  private String vpsDiskused = null;
  
  @Schema(example = "0", description = "Maximum disk space available")
 /**
   * Maximum disk space available  
  **/
  private String vpsDiskmax = null;
 /**
   * VPS ID
   * @return vpsId
  **/
  @JsonProperty("vps_id")
  @NotNull
  public String getVpsId() {
    return vpsId;
  }

  public void setVpsId(String vpsId) {
    this.vpsId = vpsId;
  }

  public VpsServiceInfo vpsId(String vpsId) {
    this.vpsId = vpsId;
    return this;
  }

 /**
   * Customer ID
   * @return vpsCustid
  **/
  @JsonProperty("vps_custid")
  @NotNull
  public String getVpsCustid() {
    return vpsCustid;
  }

  public void setVpsCustid(String vpsCustid) {
    this.vpsCustid = vpsCustid;
  }

  public VpsServiceInfo vpsCustid(String vpsCustid) {
    this.vpsCustid = vpsCustid;
    return this;
  }

 /**
   * Server ID
   * @return vpsServer
  **/
  @JsonProperty("vps_server")
  @NotNull
  public String getVpsServer() {
    return vpsServer;
  }

  public void setVpsServer(String vpsServer) {
    this.vpsServer = vpsServer;
  }

  public VpsServiceInfo vpsServer(String vpsServer) {
    this.vpsServer = vpsServer;
    return this;
  }

 /**
   * IP address of the VPS
   * @return vpsIp
  **/
  @JsonProperty("vps_ip")
  @NotNull
  public String getVpsIp() {
    return vpsIp;
  }

  public void setVpsIp(String vpsIp) {
    this.vpsIp = vpsIp;
  }

  public VpsServiceInfo vpsIp(String vpsIp) {
    this.vpsIp = vpsIp;
    return this;
  }

 /**
   * IPv6 address of the VPS
   * @return vpsIpv6
  **/
  @JsonProperty("vps_ipv6")
  @NotNull
  public String getVpsIpv6() {
    return vpsIpv6;
  }

  public void setVpsIpv6(String vpsIpv6) {
    this.vpsIpv6 = vpsIpv6;
  }

  public VpsServiceInfo vpsIpv6(String vpsIpv6) {
    this.vpsIpv6 = vpsIpv6;
    return this;
  }

 /**
   * VPS Virtuozzo ID
   * @return vpsVzid
  **/
  @JsonProperty("vps_vzid")
  @NotNull
  public String getVpsVzid() {
    return vpsVzid;
  }

  public void setVpsVzid(String vpsVzid) {
    this.vpsVzid = vpsVzid;
  }

  public VpsServiceInfo vpsVzid(String vpsVzid) {
    this.vpsVzid = vpsVzid;
    return this;
  }

 /**
   * Currency used for billing
   * @return vpsCurrency
  **/
  @JsonProperty("vps_currency")
  @NotNull
  public String getVpsCurrency() {
    return vpsCurrency;
  }

  public void setVpsCurrency(String vpsCurrency) {
    this.vpsCurrency = vpsCurrency;
  }

  public VpsServiceInfo vpsCurrency(String vpsCurrency) {
    this.vpsCurrency = vpsCurrency;
    return this;
  }

 /**
   * VPS type
   * @return vpsType
  **/
  @JsonProperty("vps_type")
  @NotNull
  public String getVpsType() {
    return vpsType;
  }

  public void setVpsType(String vpsType) {
    this.vpsType = vpsType;
  }

  public VpsServiceInfo vpsType(String vpsType) {
    this.vpsType = vpsType;
    return this;
  }

 /**
   * Date of VPS order
   * @return vpsOrderDate
  **/
  @JsonProperty("vps_order_date")
  @NotNull
  public String getVpsOrderDate() {
    return vpsOrderDate;
  }

  public void setVpsOrderDate(String vpsOrderDate) {
    this.vpsOrderDate = vpsOrderDate;
  }

  public VpsServiceInfo vpsOrderDate(String vpsOrderDate) {
    this.vpsOrderDate = vpsOrderDate;
    return this;
  }

 /**
   * VPS status
   * @return vpsStatus
  **/
  @JsonProperty("vps_status")
  @NotNull
  public String getVpsStatus() {
    return vpsStatus;
  }

  public void setVpsStatus(String vpsStatus) {
    this.vpsStatus = vpsStatus;
  }

  public VpsServiceInfo vpsStatus(String vpsStatus) {
    this.vpsStatus = vpsStatus;
    return this;
  }

 /**
   * VPS invoice number
   * @return vpsInvoice
  **/
  @JsonProperty("vps_invoice")
  @NotNull
  public String getVpsInvoice() {
    return vpsInvoice;
  }

  public void setVpsInvoice(String vpsInvoice) {
    this.vpsInvoice = vpsInvoice;
  }

  public VpsServiceInfo vpsInvoice(String vpsInvoice) {
    this.vpsInvoice = vpsInvoice;
    return this;
  }

 /**
   * VPS coupon code
   * @return vpsCoupon
  **/
  @JsonProperty("vps_coupon")
  @NotNull
  public String getVpsCoupon() {
    return vpsCoupon;
  }

  public void setVpsCoupon(String vpsCoupon) {
    this.vpsCoupon = vpsCoupon;
  }

  public VpsServiceInfo vpsCoupon(String vpsCoupon) {
    this.vpsCoupon = vpsCoupon;
    return this;
  }

 /**
   * Additional information about the VPS
   * @return vpsExtra
  **/
  @JsonProperty("vps_extra")
  @NotNull
  public String getVpsExtra() {
    return vpsExtra;
  }

  public void setVpsExtra(String vpsExtra) {
    this.vpsExtra = vpsExtra;
  }

  public VpsServiceInfo vpsExtra(String vpsExtra) {
    this.vpsExtra = vpsExtra;
    return this;
  }

 /**
   * VPS hostname
   * @return vpsHostname
  **/
  @JsonProperty("vps_hostname")
  @NotNull
  public String getVpsHostname() {
    return vpsHostname;
  }

  public void setVpsHostname(String vpsHostname) {
    this.vpsHostname = vpsHostname;
  }

  public VpsServiceInfo vpsHostname(String vpsHostname) {
    this.vpsHostname = vpsHostname;
    return this;
  }

 /**
   * Status of the VPS server
   * @return vpsServerStatus
  **/
  @JsonProperty("vps_server_status")
  @NotNull
  public String getVpsServerStatus() {
    return vpsServerStatus;
  }

  public void setVpsServerStatus(String vpsServerStatus) {
    this.vpsServerStatus = vpsServerStatus;
  }

  public VpsServiceInfo vpsServerStatus(String vpsServerStatus) {
    this.vpsServerStatus = vpsServerStatus;
    return this;
  }

 /**
   * Comment associated with the VPS
   * @return vpsComment
  **/
  @JsonProperty("vps_comment")
  @NotNull
  public String getVpsComment() {
    return vpsComment;
  }

  public void setVpsComment(String vpsComment) {
    this.vpsComment = vpsComment;
  }

  public VpsServiceInfo vpsComment(String vpsComment) {
    this.vpsComment = vpsComment;
    return this;
  }

 /**
   * Number of VPS slices
   * @return vpsSlices
  **/
  @JsonProperty("vps_slices")
  @NotNull
  public String getVpsSlices() {
    return vpsSlices;
  }

  public void setVpsSlices(String vpsSlices) {
    this.vpsSlices = vpsSlices;
  }

  public VpsServiceInfo vpsSlices(String vpsSlices) {
    this.vpsSlices = vpsSlices;
    return this;
  }

 /**
   * VNC address
   * @return vpsVnc
  **/
  @JsonProperty("vps_vnc")
  @NotNull
  public String getVpsVnc() {
    return vpsVnc;
  }

  public void setVpsVnc(String vpsVnc) {
    this.vpsVnc = vpsVnc;
  }

  public VpsServiceInfo vpsVnc(String vpsVnc) {
    this.vpsVnc = vpsVnc;
    return this;
  }

 /**
   * VNC port
   * @return vpsVncPort
  **/
  @JsonProperty("vps_vnc_port")
  @NotNull
  public String getVpsVncPort() {
    return vpsVncPort;
  }

  public void setVpsVncPort(String vpsVncPort) {
    this.vpsVncPort = vpsVncPort;
  }

  public VpsServiceInfo vpsVncPort(String vpsVncPort) {
    this.vpsVncPort = vpsVncPort;
    return this;
  }

 /**
   * Root password of the VPS
   * @return vpsRootpass
  **/
  @JsonProperty("vps_rootpass")
  @NotNull
  public String getVpsRootpass() {
    return vpsRootpass;
  }

  public void setVpsRootpass(String vpsRootpass) {
    this.vpsRootpass = vpsRootpass;
  }

  public VpsServiceInfo vpsRootpass(String vpsRootpass) {
    this.vpsRootpass = vpsRootpass;
    return this;
  }

 /**
   * MAC address of the VPS
   * @return vpsMac
  **/
  @JsonProperty("vps_mac")
  @NotNull
  public String getVpsMac() {
    return vpsMac;
  }

  public void setVpsMac(String vpsMac) {
    this.vpsMac = vpsMac;
  }

  public VpsServiceInfo vpsMac(String vpsMac) {
    this.vpsMac = vpsMac;
    return this;
  }

 /**
   * Operating system of the VPS
   * @return vpsOs
  **/
  @JsonProperty("vps_os")
  @NotNull
  public String getVpsOs() {
    return vpsOs;
  }

  public void setVpsOs(String vpsOs) {
    this.vpsOs = vpsOs;
  }

  public VpsServiceInfo vpsOs(String vpsOs) {
    this.vpsOs = vpsOs;
    return this;
  }

 /**
   * Version of the operating system
   * @return vpsVersion
  **/
  @JsonProperty("vps_version")
  @NotNull
  public String getVpsVersion() {
    return vpsVersion;
  }

  public void setVpsVersion(String vpsVersion) {
    this.vpsVersion = vpsVersion;
  }

  public VpsServiceInfo vpsVersion(String vpsVersion) {
    this.vpsVersion = vpsVersion;
    return this;
  }

 /**
   * Location of the VPS
   * @return vpsLocation
  **/
  @JsonProperty("vps_location")
  @NotNull
  public String getVpsLocation() {
    return vpsLocation;
  }

  public void setVpsLocation(String vpsLocation) {
    this.vpsLocation = vpsLocation;
  }

  public VpsServiceInfo vpsLocation(String vpsLocation) {
    this.vpsLocation = vpsLocation;
    return this;
  }

 /**
   * Virtualization platform
   * @return vpsPlatform
  **/
  @JsonProperty("vps_platform")
  @NotNull
  public String getVpsPlatform() {
    return vpsPlatform;
  }

  public void setVpsPlatform(String vpsPlatform) {
    this.vpsPlatform = vpsPlatform;
  }

  public VpsServiceInfo vpsPlatform(String vpsPlatform) {
    this.vpsPlatform = vpsPlatform;
    return this;
  }

 /**
   * Amount of disk space used
   * @return vpsDiskused
  **/
  @JsonProperty("vps_diskused")
  @NotNull
  public String getVpsDiskused() {
    return vpsDiskused;
  }

  public void setVpsDiskused(String vpsDiskused) {
    this.vpsDiskused = vpsDiskused;
  }

  public VpsServiceInfo vpsDiskused(String vpsDiskused) {
    this.vpsDiskused = vpsDiskused;
    return this;
  }

 /**
   * Maximum disk space available
   * @return vpsDiskmax
  **/
  @JsonProperty("vps_diskmax")
  @NotNull
  public String getVpsDiskmax() {
    return vpsDiskmax;
  }

  public void setVpsDiskmax(String vpsDiskmax) {
    this.vpsDiskmax = vpsDiskmax;
  }

  public VpsServiceInfo vpsDiskmax(String vpsDiskmax) {
    this.vpsDiskmax = vpsDiskmax;
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

package org.openapitools.model;

import org.openapitools.jackson.nullable.JsonNullable;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class VpsServiceInfo  {
  
 /**
  * VPS ID
  */
  @ApiModelProperty(example = "85872", value = "VPS ID")

  private String vpsId;

 /**
  * Customer ID
  */
  @ApiModelProperty(example = "223513", value = "Customer ID")

  private String vpsCustid;

 /**
  * Server ID
  */
  @ApiModelProperty(example = "2439", value = "Server ID")

  private String vpsServer;

 /**
  * IP address of the VPS
  */
  @ApiModelProperty(example = "1.2.3.4", value = "IP address of the VPS")

  private String vpsIp;

 /**
  * IPv6 address of the VPS
  */
  @ApiModelProperty(value = "IPv6 address of the VPS")

  private Object vpsIpv6 = null;

 /**
  * VPS Virtuozzo ID
  */
  @ApiModelProperty(example = "vps85872", value = "VPS Virtuozzo ID")

  private String vpsVzid;

 /**
  * Currency used for billing
  */
  @ApiModelProperty(example = "USD", value = "Currency used for billing")

  private String vpsCurrency;

 /**
  * VPS type
  */
  @ApiModelProperty(example = "33", value = "VPS type")

  private String vpsType;

 /**
  * Date of VPS order
  */
  @ApiModelProperty(example = "2022-12-26T20:14:59.000Z", value = "Date of VPS order")

  private String vpsOrderDate;

 /**
  * VPS status
  */
  @ApiModelProperty(example = "active", value = "VPS status")

  private String vpsStatus;

 /**
  * VPS invoice number
  */
  @ApiModelProperty(example = "20130799", value = "VPS invoice number")

  private String vpsInvoice;

 /**
  * VPS coupon code
  */
  @ApiModelProperty(example = "3646", value = "VPS coupon code")

  private String vpsCoupon;

 /**
  * Additional information about the VPS
  */
  @ApiModelProperty(example = "{\"spice\":5903,\"snapshots\":[{\"name\":\"third\",\"used\":36490445,\"date\":1692095220},{\"name\":\"second\",\"used\":40894464,\"date\":1692181620},{\"name\":\"first\",\"used\":54735668,\"date\":1692268020}]}", value = "Additional information about the VPS")

  private String vpsExtra;

 /**
  * VPS hostname
  */
  @ApiModelProperty(example = "vps85872", value = "VPS hostname")

  private String vpsHostname;

 /**
  * Status of the VPS server
  */
  @ApiModelProperty(example = "running", value = "Status of the VPS server")

  private String vpsServerStatus;

 /**
  * Comment associated with the VPS
  */
  @ApiModelProperty(example = "my-web-2", value = "Comment associated with the VPS")

  private String vpsComment;

 /**
  * Number of VPS slices
  */
  @ApiModelProperty(example = "16", value = "Number of VPS slices")

  private String vpsSlices;

 /**
  * VNC address
  */
  @ApiModelProperty(example = "8.7.6.5", value = "VNC address")

  private String vpsVnc;

 /**
  * VNC port
  */
  @ApiModelProperty(example = "5902", value = "VNC port")

  private String vpsVncPort;

 /**
  * Root password of the VPS
  */
  @ApiModelProperty(example = "mypassword", value = "Root password of the VPS")

  private String vpsRootpass;

 /**
  * MAC address of the VPS
  */
  @ApiModelProperty(example = "00:16:3e:27:59:b2", value = "MAC address of the VPS")

  private String vpsMac;

 /**
  * Operating system of the VPS
  */
  @ApiModelProperty(example = "ubuntu24", value = "Operating system of the VPS")

  private String vpsOs;

 /**
  * Version of the operating system
  */
  @ApiModelProperty(example = "ubuntu", value = "Version of the operating system")

  private String vpsVersion;

 /**
  * Location of the VPS
  */
  @ApiModelProperty(example = "1", value = "Location of the VPS")

  private String vpsLocation;

 /**
  * Virtualization platform
  */
  @ApiModelProperty(example = "kvm", value = "Virtualization platform")

  private String vpsPlatform;

 /**
  * Amount of disk space used
  */
  @ApiModelProperty(example = "0", value = "Amount of disk space used")

  private String vpsDiskused;

 /**
  * Maximum disk space available
  */
  @ApiModelProperty(example = "0", value = "Maximum disk space available")

  private String vpsDiskmax;
 /**
   * VPS ID
   * @return vpsId
  **/
  @JsonProperty("vps_id")
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
  public Object getVpsIpv6() {
    return vpsIpv6;
  }

  public void setVpsIpv6(Object vpsIpv6) {
    this.vpsIpv6 = vpsIpv6;
  }

  public VpsServiceInfo vpsIpv6(Object vpsIpv6) {
    this.vpsIpv6 = vpsIpv6;
    return this;
  }

 /**
   * VPS Virtuozzo ID
   * @return vpsVzid
  **/
  @JsonProperty("vps_vzid")
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsServiceInfo vpsServiceInfo = (VpsServiceInfo) o;
    return Objects.equals(this.vpsId, vpsServiceInfo.vpsId) &&
        Objects.equals(this.vpsCustid, vpsServiceInfo.vpsCustid) &&
        Objects.equals(this.vpsServer, vpsServiceInfo.vpsServer) &&
        Objects.equals(this.vpsIp, vpsServiceInfo.vpsIp) &&
        Objects.equals(this.vpsIpv6, vpsServiceInfo.vpsIpv6) &&
        Objects.equals(this.vpsVzid, vpsServiceInfo.vpsVzid) &&
        Objects.equals(this.vpsCurrency, vpsServiceInfo.vpsCurrency) &&
        Objects.equals(this.vpsType, vpsServiceInfo.vpsType) &&
        Objects.equals(this.vpsOrderDate, vpsServiceInfo.vpsOrderDate) &&
        Objects.equals(this.vpsStatus, vpsServiceInfo.vpsStatus) &&
        Objects.equals(this.vpsInvoice, vpsServiceInfo.vpsInvoice) &&
        Objects.equals(this.vpsCoupon, vpsServiceInfo.vpsCoupon) &&
        Objects.equals(this.vpsExtra, vpsServiceInfo.vpsExtra) &&
        Objects.equals(this.vpsHostname, vpsServiceInfo.vpsHostname) &&
        Objects.equals(this.vpsServerStatus, vpsServiceInfo.vpsServerStatus) &&
        Objects.equals(this.vpsComment, vpsServiceInfo.vpsComment) &&
        Objects.equals(this.vpsSlices, vpsServiceInfo.vpsSlices) &&
        Objects.equals(this.vpsVnc, vpsServiceInfo.vpsVnc) &&
        Objects.equals(this.vpsVncPort, vpsServiceInfo.vpsVncPort) &&
        Objects.equals(this.vpsRootpass, vpsServiceInfo.vpsRootpass) &&
        Objects.equals(this.vpsMac, vpsServiceInfo.vpsMac) &&
        Objects.equals(this.vpsOs, vpsServiceInfo.vpsOs) &&
        Objects.equals(this.vpsVersion, vpsServiceInfo.vpsVersion) &&
        Objects.equals(this.vpsLocation, vpsServiceInfo.vpsLocation) &&
        Objects.equals(this.vpsPlatform, vpsServiceInfo.vpsPlatform) &&
        Objects.equals(this.vpsDiskused, vpsServiceInfo.vpsDiskused) &&
        Objects.equals(this.vpsDiskmax, vpsServiceInfo.vpsDiskmax);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}


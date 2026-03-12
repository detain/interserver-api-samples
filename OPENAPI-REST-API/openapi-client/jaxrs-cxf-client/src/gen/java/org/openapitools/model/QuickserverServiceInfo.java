package org.openapitools.model;

import org.openapitools.jackson.nullable.JsonNullable;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Core service record for a QuickServer including ID, status, IP, OS, and billing details.
 */
@ApiModel(description="Core service record for a QuickServer including ID, status, IP, OS, and billing details.")

public class QuickserverServiceInfo  {
  
 /**
  * Quickserver ID
  */
  @ApiModelProperty(example = "24355", value = "Quickserver ID")

  private String qsId;

 /**
  * Customer ID
  */
  @ApiModelProperty(example = "771282", value = "Customer ID")

  private String qsCustid;

 /**
  * Server information
  */
  @ApiModelProperty(example = "365", value = "Server information")

  private String qsServer;

 /**
  * IP address
  */
  @ApiModelProperty(example = "", value = "IP address")

  private String qsIp;

 /**
  * IPv6 address (null)
  */
  @ApiModelProperty(value = "IPv6 address (null)")

  private Object qsIpv6 = null;

 /**
  * VZ ID
  */
  @ApiModelProperty(example = "qs24355", value = "VZ ID")

  private String qsVzid;

 /**
  * Currency
  */
  @ApiModelProperty(example = "USD", value = "Currency")

  private String qsCurrency;

 /**
  * Type
  */
  @ApiModelProperty(example = "700", value = "Type")

  private String qsType;

 /**
  * Order date
  */
  @ApiModelProperty(example = "2023-04-11T20:00:06.000Z", value = "Order date")

  private String qsOrderDate;

 /**
  * Status
  */
  @ApiModelProperty(example = "canceled", value = "Status")

  private String qsStatus;

 /**
  * Invoice number
  */
  @ApiModelProperty(example = "20297531", value = "Invoice number")

  private String qsInvoice;

 /**
  * Coupon information
  */
  @ApiModelProperty(example = "0", value = "Coupon information")

  private String qsCoupon;

 /**
  * Extra information
  */
  @ApiModelProperty(example = "{\"platform\":\"kvm\"}", value = "Extra information")

  private String qsExtra;

 /**
  * Hostname
  */
  @ApiModelProperty(example = "qs24355", value = "Hostname")

  private String qsHostname;

 /**
  * Server status
  */
  @ApiModelProperty(example = "deleted", value = "Server status")

  private String qsServerStatus;

 /**
  * Comment
  */
  @ApiModelProperty(example = "", value = "Comment")

  private String qsComment;

 /**
  * Slices information
  */
  @ApiModelProperty(example = "0", value = "Slices information")

  private String qsSlices;

 /**
  * VNC information
  */
  @ApiModelProperty(example = "99.88.77.66", value = "VNC information")

  private String qsVnc;

 /**
  * VNC port (null)
  */
  @ApiModelProperty(value = "VNC port (null)")

  private Object qsVncPort = null;

 /**
  * Root password
  */
  @ApiModelProperty(example = "", value = "Root password")

  private String qsRootpass;

 /**
  * MAC address
  */
  @ApiModelProperty(example = "", value = "MAC address")

  private String qsMac;

 /**
  * Operating system
  */
  @ApiModelProperty(example = "ubuntu24", value = "Operating system")

  private String qsOs;

 /**
  * OS version
  */
  @ApiModelProperty(example = "Ubuntu", value = "OS version")

  private String qsVersion;

 /**
  * Location
  */
  @ApiModelProperty(example = "1", value = "Location")

  private String qsLocation;

 /**
  * Platform (null)
  */
  @ApiModelProperty(value = "Platform (null)")

  private Object qsPlatform = null;
 /**
   * Quickserver ID
   * @return qsId
  **/
  @JsonProperty("qs_id")
  public String getQsId() {
    return qsId;
  }

  public void setQsId(String qsId) {
    this.qsId = qsId;
  }

  public QuickserverServiceInfo qsId(String qsId) {
    this.qsId = qsId;
    return this;
  }

 /**
   * Customer ID
   * @return qsCustid
  **/
  @JsonProperty("qs_custid")
  public String getQsCustid() {
    return qsCustid;
  }

  public void setQsCustid(String qsCustid) {
    this.qsCustid = qsCustid;
  }

  public QuickserverServiceInfo qsCustid(String qsCustid) {
    this.qsCustid = qsCustid;
    return this;
  }

 /**
   * Server information
   * @return qsServer
  **/
  @JsonProperty("qs_server")
  public String getQsServer() {
    return qsServer;
  }

  public void setQsServer(String qsServer) {
    this.qsServer = qsServer;
  }

  public QuickserverServiceInfo qsServer(String qsServer) {
    this.qsServer = qsServer;
    return this;
  }

 /**
   * IP address
   * @return qsIp
  **/
  @JsonProperty("qs_ip")
  public String getQsIp() {
    return qsIp;
  }

  public void setQsIp(String qsIp) {
    this.qsIp = qsIp;
  }

  public QuickserverServiceInfo qsIp(String qsIp) {
    this.qsIp = qsIp;
    return this;
  }

 /**
   * IPv6 address (null)
   * @return qsIpv6
  **/
  @JsonProperty("qs_ipv6")
  public Object getQsIpv6() {
    return qsIpv6;
  }

  public void setQsIpv6(Object qsIpv6) {
    this.qsIpv6 = qsIpv6;
  }

  public QuickserverServiceInfo qsIpv6(Object qsIpv6) {
    this.qsIpv6 = qsIpv6;
    return this;
  }

 /**
   * VZ ID
   * @return qsVzid
  **/
  @JsonProperty("qs_vzid")
  public String getQsVzid() {
    return qsVzid;
  }

  public void setQsVzid(String qsVzid) {
    this.qsVzid = qsVzid;
  }

  public QuickserverServiceInfo qsVzid(String qsVzid) {
    this.qsVzid = qsVzid;
    return this;
  }

 /**
   * Currency
   * @return qsCurrency
  **/
  @JsonProperty("qs_currency")
  public String getQsCurrency() {
    return qsCurrency;
  }

  public void setQsCurrency(String qsCurrency) {
    this.qsCurrency = qsCurrency;
  }

  public QuickserverServiceInfo qsCurrency(String qsCurrency) {
    this.qsCurrency = qsCurrency;
    return this;
  }

 /**
   * Type
   * @return qsType
  **/
  @JsonProperty("qs_type")
  public String getQsType() {
    return qsType;
  }

  public void setQsType(String qsType) {
    this.qsType = qsType;
  }

  public QuickserverServiceInfo qsType(String qsType) {
    this.qsType = qsType;
    return this;
  }

 /**
   * Order date
   * @return qsOrderDate
  **/
  @JsonProperty("qs_order_date")
  public String getQsOrderDate() {
    return qsOrderDate;
  }

  public void setQsOrderDate(String qsOrderDate) {
    this.qsOrderDate = qsOrderDate;
  }

  public QuickserverServiceInfo qsOrderDate(String qsOrderDate) {
    this.qsOrderDate = qsOrderDate;
    return this;
  }

 /**
   * Status
   * @return qsStatus
  **/
  @JsonProperty("qs_status")
  public String getQsStatus() {
    return qsStatus;
  }

  public void setQsStatus(String qsStatus) {
    this.qsStatus = qsStatus;
  }

  public QuickserverServiceInfo qsStatus(String qsStatus) {
    this.qsStatus = qsStatus;
    return this;
  }

 /**
   * Invoice number
   * @return qsInvoice
  **/
  @JsonProperty("qs_invoice")
  public String getQsInvoice() {
    return qsInvoice;
  }

  public void setQsInvoice(String qsInvoice) {
    this.qsInvoice = qsInvoice;
  }

  public QuickserverServiceInfo qsInvoice(String qsInvoice) {
    this.qsInvoice = qsInvoice;
    return this;
  }

 /**
   * Coupon information
   * @return qsCoupon
  **/
  @JsonProperty("qs_coupon")
  public String getQsCoupon() {
    return qsCoupon;
  }

  public void setQsCoupon(String qsCoupon) {
    this.qsCoupon = qsCoupon;
  }

  public QuickserverServiceInfo qsCoupon(String qsCoupon) {
    this.qsCoupon = qsCoupon;
    return this;
  }

 /**
   * Extra information
   * @return qsExtra
  **/
  @JsonProperty("qs_extra")
  public String getQsExtra() {
    return qsExtra;
  }

  public void setQsExtra(String qsExtra) {
    this.qsExtra = qsExtra;
  }

  public QuickserverServiceInfo qsExtra(String qsExtra) {
    this.qsExtra = qsExtra;
    return this;
  }

 /**
   * Hostname
   * @return qsHostname
  **/
  @JsonProperty("qs_hostname")
  public String getQsHostname() {
    return qsHostname;
  }

  public void setQsHostname(String qsHostname) {
    this.qsHostname = qsHostname;
  }

  public QuickserverServiceInfo qsHostname(String qsHostname) {
    this.qsHostname = qsHostname;
    return this;
  }

 /**
   * Server status
   * @return qsServerStatus
  **/
  @JsonProperty("qs_server_status")
  public String getQsServerStatus() {
    return qsServerStatus;
  }

  public void setQsServerStatus(String qsServerStatus) {
    this.qsServerStatus = qsServerStatus;
  }

  public QuickserverServiceInfo qsServerStatus(String qsServerStatus) {
    this.qsServerStatus = qsServerStatus;
    return this;
  }

 /**
   * Comment
   * @return qsComment
  **/
  @JsonProperty("qs_comment")
  public String getQsComment() {
    return qsComment;
  }

  public void setQsComment(String qsComment) {
    this.qsComment = qsComment;
  }

  public QuickserverServiceInfo qsComment(String qsComment) {
    this.qsComment = qsComment;
    return this;
  }

 /**
   * Slices information
   * @return qsSlices
  **/
  @JsonProperty("qs_slices")
  public String getQsSlices() {
    return qsSlices;
  }

  public void setQsSlices(String qsSlices) {
    this.qsSlices = qsSlices;
  }

  public QuickserverServiceInfo qsSlices(String qsSlices) {
    this.qsSlices = qsSlices;
    return this;
  }

 /**
   * VNC information
   * @return qsVnc
  **/
  @JsonProperty("qs_vnc")
  public String getQsVnc() {
    return qsVnc;
  }

  public void setQsVnc(String qsVnc) {
    this.qsVnc = qsVnc;
  }

  public QuickserverServiceInfo qsVnc(String qsVnc) {
    this.qsVnc = qsVnc;
    return this;
  }

 /**
   * VNC port (null)
   * @return qsVncPort
  **/
  @JsonProperty("qs_vnc_port")
  public Object getQsVncPort() {
    return qsVncPort;
  }

  public void setQsVncPort(Object qsVncPort) {
    this.qsVncPort = qsVncPort;
  }

  public QuickserverServiceInfo qsVncPort(Object qsVncPort) {
    this.qsVncPort = qsVncPort;
    return this;
  }

 /**
   * Root password
   * @return qsRootpass
  **/
  @JsonProperty("qs_rootpass")
  public String getQsRootpass() {
    return qsRootpass;
  }

  public void setQsRootpass(String qsRootpass) {
    this.qsRootpass = qsRootpass;
  }

  public QuickserverServiceInfo qsRootpass(String qsRootpass) {
    this.qsRootpass = qsRootpass;
    return this;
  }

 /**
   * MAC address
   * @return qsMac
  **/
  @JsonProperty("qs_mac")
  public String getQsMac() {
    return qsMac;
  }

  public void setQsMac(String qsMac) {
    this.qsMac = qsMac;
  }

  public QuickserverServiceInfo qsMac(String qsMac) {
    this.qsMac = qsMac;
    return this;
  }

 /**
   * Operating system
   * @return qsOs
  **/
  @JsonProperty("qs_os")
  public String getQsOs() {
    return qsOs;
  }

  public void setQsOs(String qsOs) {
    this.qsOs = qsOs;
  }

  public QuickserverServiceInfo qsOs(String qsOs) {
    this.qsOs = qsOs;
    return this;
  }

 /**
   * OS version
   * @return qsVersion
  **/
  @JsonProperty("qs_version")
  public String getQsVersion() {
    return qsVersion;
  }

  public void setQsVersion(String qsVersion) {
    this.qsVersion = qsVersion;
  }

  public QuickserverServiceInfo qsVersion(String qsVersion) {
    this.qsVersion = qsVersion;
    return this;
  }

 /**
   * Location
   * @return qsLocation
  **/
  @JsonProperty("qs_location")
  public String getQsLocation() {
    return qsLocation;
  }

  public void setQsLocation(String qsLocation) {
    this.qsLocation = qsLocation;
  }

  public QuickserverServiceInfo qsLocation(String qsLocation) {
    this.qsLocation = qsLocation;
    return this;
  }

 /**
   * Platform (null)
   * @return qsPlatform
  **/
  @JsonProperty("qs_platform")
  public Object getQsPlatform() {
    return qsPlatform;
  }

  public void setQsPlatform(Object qsPlatform) {
    this.qsPlatform = qsPlatform;
  }

  public QuickserverServiceInfo qsPlatform(Object qsPlatform) {
    this.qsPlatform = qsPlatform;
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
    QuickserverServiceInfo quickserverServiceInfo = (QuickserverServiceInfo) o;
    return Objects.equals(this.qsId, quickserverServiceInfo.qsId) &&
        Objects.equals(this.qsCustid, quickserverServiceInfo.qsCustid) &&
        Objects.equals(this.qsServer, quickserverServiceInfo.qsServer) &&
        Objects.equals(this.qsIp, quickserverServiceInfo.qsIp) &&
        Objects.equals(this.qsIpv6, quickserverServiceInfo.qsIpv6) &&
        Objects.equals(this.qsVzid, quickserverServiceInfo.qsVzid) &&
        Objects.equals(this.qsCurrency, quickserverServiceInfo.qsCurrency) &&
        Objects.equals(this.qsType, quickserverServiceInfo.qsType) &&
        Objects.equals(this.qsOrderDate, quickserverServiceInfo.qsOrderDate) &&
        Objects.equals(this.qsStatus, quickserverServiceInfo.qsStatus) &&
        Objects.equals(this.qsInvoice, quickserverServiceInfo.qsInvoice) &&
        Objects.equals(this.qsCoupon, quickserverServiceInfo.qsCoupon) &&
        Objects.equals(this.qsExtra, quickserverServiceInfo.qsExtra) &&
        Objects.equals(this.qsHostname, quickserverServiceInfo.qsHostname) &&
        Objects.equals(this.qsServerStatus, quickserverServiceInfo.qsServerStatus) &&
        Objects.equals(this.qsComment, quickserverServiceInfo.qsComment) &&
        Objects.equals(this.qsSlices, quickserverServiceInfo.qsSlices) &&
        Objects.equals(this.qsVnc, quickserverServiceInfo.qsVnc) &&
        Objects.equals(this.qsVncPort, quickserverServiceInfo.qsVncPort) &&
        Objects.equals(this.qsRootpass, quickserverServiceInfo.qsRootpass) &&
        Objects.equals(this.qsMac, quickserverServiceInfo.qsMac) &&
        Objects.equals(this.qsOs, quickserverServiceInfo.qsOs) &&
        Objects.equals(this.qsVersion, quickserverServiceInfo.qsVersion) &&
        Objects.equals(this.qsLocation, quickserverServiceInfo.qsLocation) &&
        Objects.equals(this.qsPlatform, quickserverServiceInfo.qsPlatform);
  }

  @Override
  public int hashCode() {
    return Objects.hash(qsId, qsCustid, qsServer, qsIp, qsIpv6, qsVzid, qsCurrency, qsType, qsOrderDate, qsStatus, qsInvoice, qsCoupon, qsExtra, qsHostname, qsServerStatus, qsComment, qsSlices, qsVnc, qsVncPort, qsRootpass, qsMac, qsOs, qsVersion, qsLocation, qsPlatform);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class QuickserverServiceInfo {\n");
    
    sb.append("    qsId: ").append(toIndentedString(qsId)).append("\n");
    sb.append("    qsCustid: ").append(toIndentedString(qsCustid)).append("\n");
    sb.append("    qsServer: ").append(toIndentedString(qsServer)).append("\n");
    sb.append("    qsIp: ").append(toIndentedString(qsIp)).append("\n");
    sb.append("    qsIpv6: ").append(toIndentedString(qsIpv6)).append("\n");
    sb.append("    qsVzid: ").append(toIndentedString(qsVzid)).append("\n");
    sb.append("    qsCurrency: ").append(toIndentedString(qsCurrency)).append("\n");
    sb.append("    qsType: ").append(toIndentedString(qsType)).append("\n");
    sb.append("    qsOrderDate: ").append(toIndentedString(qsOrderDate)).append("\n");
    sb.append("    qsStatus: ").append(toIndentedString(qsStatus)).append("\n");
    sb.append("    qsInvoice: ").append(toIndentedString(qsInvoice)).append("\n");
    sb.append("    qsCoupon: ").append(toIndentedString(qsCoupon)).append("\n");
    sb.append("    qsExtra: ").append(toIndentedString(qsExtra)).append("\n");
    sb.append("    qsHostname: ").append(toIndentedString(qsHostname)).append("\n");
    sb.append("    qsServerStatus: ").append(toIndentedString(qsServerStatus)).append("\n");
    sb.append("    qsComment: ").append(toIndentedString(qsComment)).append("\n");
    sb.append("    qsSlices: ").append(toIndentedString(qsSlices)).append("\n");
    sb.append("    qsVnc: ").append(toIndentedString(qsVnc)).append("\n");
    sb.append("    qsVncPort: ").append(toIndentedString(qsVncPort)).append("\n");
    sb.append("    qsRootpass: ").append(toIndentedString(qsRootpass)).append("\n");
    sb.append("    qsMac: ").append(toIndentedString(qsMac)).append("\n");
    sb.append("    qsOs: ").append(toIndentedString(qsOs)).append("\n");
    sb.append("    qsVersion: ").append(toIndentedString(qsVersion)).append("\n");
    sb.append("    qsLocation: ").append(toIndentedString(qsLocation)).append("\n");
    sb.append("    qsPlatform: ").append(toIndentedString(qsPlatform)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}


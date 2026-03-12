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
  * Core service record for a QuickServer including ID, status, IP, OS, and billing details.
 **/
@Schema(description="Core service record for a QuickServer including ID, status, IP, OS, and billing details.")
public class QuickserverServiceInfo   {
  
  @Schema(example = "24355", description = "Quickserver ID")
 /**
   * Quickserver ID  
  **/
  private String qsId = null;
  
  @Schema(example = "771282", description = "Customer ID")
 /**
   * Customer ID  
  **/
  private String qsCustid = null;
  
  @Schema(example = "365", description = "Server information")
 /**
   * Server information  
  **/
  private String qsServer = null;
  
  @Schema(description = "IP address")
 /**
   * IP address  
  **/
  private String qsIp = null;
  
  @Schema(description = "IPv6 address (null)")
 /**
   * IPv6 address (null)  
  **/
  private Object qsIpv6 = null;
  
  @Schema(example = "qs24355", description = "VZ ID")
 /**
   * VZ ID  
  **/
  private String qsVzid = null;
  
  @Schema(example = "USD", description = "Currency")
 /**
   * Currency  
  **/
  private String qsCurrency = null;
  
  @Schema(example = "700", description = "Type")
 /**
   * Type  
  **/
  private String qsType = null;
  
  @Schema(example = "2023-04-11T20:00:06.000Z", description = "Order date")
 /**
   * Order date  
  **/
  private String qsOrderDate = null;
  
  @Schema(example = "canceled", description = "Status")
 /**
   * Status  
  **/
  private String qsStatus = null;
  
  @Schema(example = "20297531", description = "Invoice number")
 /**
   * Invoice number  
  **/
  private String qsInvoice = null;
  
  @Schema(example = "0", description = "Coupon information")
 /**
   * Coupon information  
  **/
  private String qsCoupon = null;
  
  @Schema(example = "{\"platform\":\"kvm\"}", description = "Extra information")
 /**
   * Extra information  
  **/
  private String qsExtra = null;
  
  @Schema(example = "qs24355", description = "Hostname")
 /**
   * Hostname  
  **/
  private String qsHostname = null;
  
  @Schema(example = "deleted", description = "Server status")
 /**
   * Server status  
  **/
  private String qsServerStatus = null;
  
  @Schema(description = "Comment")
 /**
   * Comment  
  **/
  private String qsComment = null;
  
  @Schema(example = "0", description = "Slices information")
 /**
   * Slices information  
  **/
  private String qsSlices = null;
  
  @Schema(example = "99.88.77.66", description = "VNC information")
 /**
   * VNC information  
  **/
  private String qsVnc = null;
  
  @Schema(description = "VNC port (null)")
 /**
   * VNC port (null)  
  **/
  private Object qsVncPort = null;
  
  @Schema(description = "Root password")
 /**
   * Root password  
  **/
  private String qsRootpass = null;
  
  @Schema(description = "MAC address")
 /**
   * MAC address  
  **/
  private String qsMac = null;
  
  @Schema(example = "ubuntu24", description = "Operating system")
 /**
   * Operating system  
  **/
  private String qsOs = null;
  
  @Schema(example = "Ubuntu", description = "OS version")
 /**
   * OS version  
  **/
  private String qsVersion = null;
  
  @Schema(example = "1", description = "Location")
 /**
   * Location  
  **/
  private String qsLocation = null;
  
  @Schema(description = "Platform (null)")
 /**
   * Platform (null)  
  **/
  private Object qsPlatform = null;
 /**
   * Quickserver ID
   * @return qsId
  **/
  @JsonProperty("qs_id")
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

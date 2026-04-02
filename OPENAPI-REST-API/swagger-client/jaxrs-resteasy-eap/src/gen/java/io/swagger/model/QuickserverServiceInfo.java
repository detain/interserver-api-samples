package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Core service record for a QuickServer including ID, status, IP, OS, and billing details.")

public class QuickserverServiceInfo   {
  private String qsId = null;
  private String qsCustid = null;
  private String qsServer = null;
  private String qsIp = null;
  private String qsIpv6 = null;
  private String qsVzid = null;
  private String qsCurrency = null;
  private String qsType = null;
  private String qsOrderDate = null;
  private String qsStatus = null;
  private String qsInvoice = null;
  private String qsCoupon = null;
  private String qsExtra = null;
  private String qsHostname = null;
  private String qsServerStatus = null;
  private String qsComment = null;
  private String qsSlices = null;
  private String qsVnc = null;
  private Integer qsVncPort = null;
  private String qsRootpass = null;
  private String qsMac = null;
  private String qsOs = null;
  private String qsVersion = null;
  private String qsLocation = null;
  private String qsPlatform = null;

  /**
   * Quickserver ID
   **/
  
  @Schema(example = "24355", description = "Quickserver ID")
  @JsonProperty("qs_id")
  @NotNull
  public String getQsId() {
    return qsId;
  }
  public void setQsId(String qsId) {
    this.qsId = qsId;
  }

  /**
   * Customer ID
   **/
  
  @Schema(example = "771282", description = "Customer ID")
  @JsonProperty("qs_custid")
  @NotNull
  public String getQsCustid() {
    return qsCustid;
  }
  public void setQsCustid(String qsCustid) {
    this.qsCustid = qsCustid;
  }

  /**
   * Server information
   **/
  
  @Schema(example = "365", description = "Server information")
  @JsonProperty("qs_server")
  @NotNull
  public String getQsServer() {
    return qsServer;
  }
  public void setQsServer(String qsServer) {
    this.qsServer = qsServer;
  }

  /**
   * IP address
   **/
  
  @Schema(description = "IP address")
  @JsonProperty("qs_ip")
  @NotNull
  public String getQsIp() {
    return qsIp;
  }
  public void setQsIp(String qsIp) {
    this.qsIp = qsIp;
  }

  /**
   * IPv6 address (null)
   **/
  
  @Schema(description = "IPv6 address (null)")
  @JsonProperty("qs_ipv6")
  public String getQsIpv6() {
    return qsIpv6;
  }
  public void setQsIpv6(String qsIpv6) {
    this.qsIpv6 = qsIpv6;
  }

  /**
   * VZ ID
   **/
  
  @Schema(example = "qs24355", description = "VZ ID")
  @JsonProperty("qs_vzid")
  @NotNull
  public String getQsVzid() {
    return qsVzid;
  }
  public void setQsVzid(String qsVzid) {
    this.qsVzid = qsVzid;
  }

  /**
   * Currency
   **/
  
  @Schema(example = "USD", description = "Currency")
  @JsonProperty("qs_currency")
  @NotNull
  public String getQsCurrency() {
    return qsCurrency;
  }
  public void setQsCurrency(String qsCurrency) {
    this.qsCurrency = qsCurrency;
  }

  /**
   * Type
   **/
  
  @Schema(example = "700", description = "Type")
  @JsonProperty("qs_type")
  @NotNull
  public String getQsType() {
    return qsType;
  }
  public void setQsType(String qsType) {
    this.qsType = qsType;
  }

  /**
   * Order date
   **/
  
  @Schema(example = "2023-04-11T20:00:06.000Z", description = "Order date")
  @JsonProperty("qs_order_date")
  @NotNull
  public String getQsOrderDate() {
    return qsOrderDate;
  }
  public void setQsOrderDate(String qsOrderDate) {
    this.qsOrderDate = qsOrderDate;
  }

  /**
   * Status
   **/
  
  @Schema(example = "canceled", description = "Status")
  @JsonProperty("qs_status")
  @NotNull
  public String getQsStatus() {
    return qsStatus;
  }
  public void setQsStatus(String qsStatus) {
    this.qsStatus = qsStatus;
  }

  /**
   * Invoice number
   **/
  
  @Schema(example = "20297531", description = "Invoice number")
  @JsonProperty("qs_invoice")
  @NotNull
  public String getQsInvoice() {
    return qsInvoice;
  }
  public void setQsInvoice(String qsInvoice) {
    this.qsInvoice = qsInvoice;
  }

  /**
   * Coupon information
   **/
  
  @Schema(example = "0", description = "Coupon information")
  @JsonProperty("qs_coupon")
  @NotNull
  public String getQsCoupon() {
    return qsCoupon;
  }
  public void setQsCoupon(String qsCoupon) {
    this.qsCoupon = qsCoupon;
  }

  /**
   * Extra information
   **/
  
  @Schema(example = "{\"platform\":\"kvm\"}", description = "Extra information")
  @JsonProperty("qs_extra")
  @NotNull
  public String getQsExtra() {
    return qsExtra;
  }
  public void setQsExtra(String qsExtra) {
    this.qsExtra = qsExtra;
  }

  /**
   * Hostname
   **/
  
  @Schema(example = "qs24355", description = "Hostname")
  @JsonProperty("qs_hostname")
  @NotNull
  public String getQsHostname() {
    return qsHostname;
  }
  public void setQsHostname(String qsHostname) {
    this.qsHostname = qsHostname;
  }

  /**
   * Server status
   **/
  
  @Schema(example = "deleted", description = "Server status")
  @JsonProperty("qs_server_status")
  @NotNull
  public String getQsServerStatus() {
    return qsServerStatus;
  }
  public void setQsServerStatus(String qsServerStatus) {
    this.qsServerStatus = qsServerStatus;
  }

  /**
   * Comment
   **/
  
  @Schema(description = "Comment")
  @JsonProperty("qs_comment")
  @NotNull
  public String getQsComment() {
    return qsComment;
  }
  public void setQsComment(String qsComment) {
    this.qsComment = qsComment;
  }

  /**
   * Slices information
   **/
  
  @Schema(example = "0", description = "Slices information")
  @JsonProperty("qs_slices")
  @NotNull
  public String getQsSlices() {
    return qsSlices;
  }
  public void setQsSlices(String qsSlices) {
    this.qsSlices = qsSlices;
  }

  /**
   * VNC information
   **/
  
  @Schema(example = "99.88.77.66", description = "VNC information")
  @JsonProperty("qs_vnc")
  @NotNull
  public String getQsVnc() {
    return qsVnc;
  }
  public void setQsVnc(String qsVnc) {
    this.qsVnc = qsVnc;
  }

  /**
   * VNC port (null)
   **/
  
  @Schema(description = "VNC port (null)")
  @JsonProperty("qs_vnc_port")
  public Integer getQsVncPort() {
    return qsVncPort;
  }
  public void setQsVncPort(Integer qsVncPort) {
    this.qsVncPort = qsVncPort;
  }

  /**
   * Root password
   **/
  
  @Schema(description = "Root password")
  @JsonProperty("qs_rootpass")
  @NotNull
  public String getQsRootpass() {
    return qsRootpass;
  }
  public void setQsRootpass(String qsRootpass) {
    this.qsRootpass = qsRootpass;
  }

  /**
   * MAC address
   **/
  
  @Schema(description = "MAC address")
  @JsonProperty("qs_mac")
  @NotNull
  public String getQsMac() {
    return qsMac;
  }
  public void setQsMac(String qsMac) {
    this.qsMac = qsMac;
  }

  /**
   * Operating system
   **/
  
  @Schema(example = "ubuntu24", description = "Operating system")
  @JsonProperty("qs_os")
  @NotNull
  public String getQsOs() {
    return qsOs;
  }
  public void setQsOs(String qsOs) {
    this.qsOs = qsOs;
  }

  /**
   * OS version
   **/
  
  @Schema(example = "Ubuntu", description = "OS version")
  @JsonProperty("qs_version")
  @NotNull
  public String getQsVersion() {
    return qsVersion;
  }
  public void setQsVersion(String qsVersion) {
    this.qsVersion = qsVersion;
  }

  /**
   * Location
   **/
  
  @Schema(example = "1", description = "Location")
  @JsonProperty("qs_location")
  @NotNull
  public String getQsLocation() {
    return qsLocation;
  }
  public void setQsLocation(String qsLocation) {
    this.qsLocation = qsLocation;
  }

  /**
   * Platform (null)
   **/
  
  @Schema(description = "Platform (null)")
  @JsonProperty("qs_platform")
  public String getQsPlatform() {
    return qsPlatform;
  }
  public void setQsPlatform(String qsPlatform) {
    this.qsPlatform = qsPlatform;
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
    return Objects.equals(qsId, quickserverServiceInfo.qsId) &&
        Objects.equals(qsCustid, quickserverServiceInfo.qsCustid) &&
        Objects.equals(qsServer, quickserverServiceInfo.qsServer) &&
        Objects.equals(qsIp, quickserverServiceInfo.qsIp) &&
        Objects.equals(qsIpv6, quickserverServiceInfo.qsIpv6) &&
        Objects.equals(qsVzid, quickserverServiceInfo.qsVzid) &&
        Objects.equals(qsCurrency, quickserverServiceInfo.qsCurrency) &&
        Objects.equals(qsType, quickserverServiceInfo.qsType) &&
        Objects.equals(qsOrderDate, quickserverServiceInfo.qsOrderDate) &&
        Objects.equals(qsStatus, quickserverServiceInfo.qsStatus) &&
        Objects.equals(qsInvoice, quickserverServiceInfo.qsInvoice) &&
        Objects.equals(qsCoupon, quickserverServiceInfo.qsCoupon) &&
        Objects.equals(qsExtra, quickserverServiceInfo.qsExtra) &&
        Objects.equals(qsHostname, quickserverServiceInfo.qsHostname) &&
        Objects.equals(qsServerStatus, quickserverServiceInfo.qsServerStatus) &&
        Objects.equals(qsComment, quickserverServiceInfo.qsComment) &&
        Objects.equals(qsSlices, quickserverServiceInfo.qsSlices) &&
        Objects.equals(qsVnc, quickserverServiceInfo.qsVnc) &&
        Objects.equals(qsVncPort, quickserverServiceInfo.qsVncPort) &&
        Objects.equals(qsRootpass, quickserverServiceInfo.qsRootpass) &&
        Objects.equals(qsMac, quickserverServiceInfo.qsMac) &&
        Objects.equals(qsOs, quickserverServiceInfo.qsOs) &&
        Objects.equals(qsVersion, quickserverServiceInfo.qsVersion) &&
        Objects.equals(qsLocation, quickserverServiceInfo.qsLocation) &&
        Objects.equals(qsPlatform, quickserverServiceInfo.qsPlatform);
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

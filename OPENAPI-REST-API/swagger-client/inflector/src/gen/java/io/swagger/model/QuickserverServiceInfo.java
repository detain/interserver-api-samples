package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * Core service record for a QuickServer including ID, status, IP, OS, and billing details.
 **/
@Schema(description = "Core service record for a QuickServer including ID, status, IP, OS, and billing details.")


public class QuickserverServiceInfo   {
  @JsonProperty("qs_id")
  private String qsId = null;
  @JsonProperty("qs_custid")
  private String qsCustid = null;
  @JsonProperty("qs_server")
  private String qsServer = null;
  @JsonProperty("qs_ip")
  private String qsIp = null;
  @JsonProperty("qs_ipv6")
  private Object qsIpv6 = null;
  @JsonProperty("qs_vzid")
  private String qsVzid = null;
  @JsonProperty("qs_currency")
  private String qsCurrency = null;
  @JsonProperty("qs_type")
  private String qsType = null;
  @JsonProperty("qs_order_date")
  private String qsOrderDate = null;
  @JsonProperty("qs_status")
  private String qsStatus = null;
  @JsonProperty("qs_invoice")
  private String qsInvoice = null;
  @JsonProperty("qs_coupon")
  private String qsCoupon = null;
  @JsonProperty("qs_extra")
  private String qsExtra = null;
  @JsonProperty("qs_hostname")
  private String qsHostname = null;
  @JsonProperty("qs_server_status")
  private String qsServerStatus = null;
  @JsonProperty("qs_comment")
  private String qsComment = null;
  @JsonProperty("qs_slices")
  private String qsSlices = null;
  @JsonProperty("qs_vnc")
  private String qsVnc = null;
  @JsonProperty("qs_vnc_port")
  private Object qsVncPort = null;
  @JsonProperty("qs_rootpass")
  private String qsRootpass = null;
  @JsonProperty("qs_mac")
  private String qsMac = null;
  @JsonProperty("qs_os")
  private String qsOs = null;
  @JsonProperty("qs_version")
  private String qsVersion = null;
  @JsonProperty("qs_location")
  private String qsLocation = null;
  @JsonProperty("qs_platform")
  private Object qsPlatform = null;
  /**
   * Quickserver ID
   **/
  public QuickserverServiceInfo qsId(String qsId) {
    this.qsId = qsId;
    return this;
  }

  
  @Schema(example = "24355", description = "Quickserver ID")
  @JsonProperty("qs_id")
  public String getQsId() {
    return qsId;
  }
  public void setQsId(String qsId) {
    this.qsId = qsId;
  }

  /**
   * Customer ID
   **/
  public QuickserverServiceInfo qsCustid(String qsCustid) {
    this.qsCustid = qsCustid;
    return this;
  }

  
  @Schema(example = "771282", description = "Customer ID")
  @JsonProperty("qs_custid")
  public String getQsCustid() {
    return qsCustid;
  }
  public void setQsCustid(String qsCustid) {
    this.qsCustid = qsCustid;
  }

  /**
   * Server information
   **/
  public QuickserverServiceInfo qsServer(String qsServer) {
    this.qsServer = qsServer;
    return this;
  }

  
  @Schema(example = "365", description = "Server information")
  @JsonProperty("qs_server")
  public String getQsServer() {
    return qsServer;
  }
  public void setQsServer(String qsServer) {
    this.qsServer = qsServer;
  }

  /**
   * IP address
   **/
  public QuickserverServiceInfo qsIp(String qsIp) {
    this.qsIp = qsIp;
    return this;
  }

  
  @Schema(description = "IP address")
  @JsonProperty("qs_ip")
  public String getQsIp() {
    return qsIp;
  }
  public void setQsIp(String qsIp) {
    this.qsIp = qsIp;
  }

  /**
   * IPv6 address (null)
   **/
  public QuickserverServiceInfo qsIpv6(Object qsIpv6) {
    this.qsIpv6 = qsIpv6;
    return this;
  }

  
  @Schema(description = "IPv6 address (null)")
  @JsonProperty("qs_ipv6")
  public Object getQsIpv6() {
    return qsIpv6;
  }
  public void setQsIpv6(Object qsIpv6) {
    this.qsIpv6 = qsIpv6;
  }

  /**
   * VZ ID
   **/
  public QuickserverServiceInfo qsVzid(String qsVzid) {
    this.qsVzid = qsVzid;
    return this;
  }

  
  @Schema(example = "qs24355", description = "VZ ID")
  @JsonProperty("qs_vzid")
  public String getQsVzid() {
    return qsVzid;
  }
  public void setQsVzid(String qsVzid) {
    this.qsVzid = qsVzid;
  }

  /**
   * Currency
   **/
  public QuickserverServiceInfo qsCurrency(String qsCurrency) {
    this.qsCurrency = qsCurrency;
    return this;
  }

  
  @Schema(example = "USD", description = "Currency")
  @JsonProperty("qs_currency")
  public String getQsCurrency() {
    return qsCurrency;
  }
  public void setQsCurrency(String qsCurrency) {
    this.qsCurrency = qsCurrency;
  }

  /**
   * Type
   **/
  public QuickserverServiceInfo qsType(String qsType) {
    this.qsType = qsType;
    return this;
  }

  
  @Schema(example = "700", description = "Type")
  @JsonProperty("qs_type")
  public String getQsType() {
    return qsType;
  }
  public void setQsType(String qsType) {
    this.qsType = qsType;
  }

  /**
   * Order date
   **/
  public QuickserverServiceInfo qsOrderDate(String qsOrderDate) {
    this.qsOrderDate = qsOrderDate;
    return this;
  }

  
  @Schema(example = "2023-04-11T20:00:06.000Z", description = "Order date")
  @JsonProperty("qs_order_date")
  public String getQsOrderDate() {
    return qsOrderDate;
  }
  public void setQsOrderDate(String qsOrderDate) {
    this.qsOrderDate = qsOrderDate;
  }

  /**
   * Status
   **/
  public QuickserverServiceInfo qsStatus(String qsStatus) {
    this.qsStatus = qsStatus;
    return this;
  }

  
  @Schema(example = "canceled", description = "Status")
  @JsonProperty("qs_status")
  public String getQsStatus() {
    return qsStatus;
  }
  public void setQsStatus(String qsStatus) {
    this.qsStatus = qsStatus;
  }

  /**
   * Invoice number
   **/
  public QuickserverServiceInfo qsInvoice(String qsInvoice) {
    this.qsInvoice = qsInvoice;
    return this;
  }

  
  @Schema(example = "20297531", description = "Invoice number")
  @JsonProperty("qs_invoice")
  public String getQsInvoice() {
    return qsInvoice;
  }
  public void setQsInvoice(String qsInvoice) {
    this.qsInvoice = qsInvoice;
  }

  /**
   * Coupon information
   **/
  public QuickserverServiceInfo qsCoupon(String qsCoupon) {
    this.qsCoupon = qsCoupon;
    return this;
  }

  
  @Schema(example = "0", description = "Coupon information")
  @JsonProperty("qs_coupon")
  public String getQsCoupon() {
    return qsCoupon;
  }
  public void setQsCoupon(String qsCoupon) {
    this.qsCoupon = qsCoupon;
  }

  /**
   * Extra information
   **/
  public QuickserverServiceInfo qsExtra(String qsExtra) {
    this.qsExtra = qsExtra;
    return this;
  }

  
  @Schema(example = "{\"platform\":\"kvm\"}", description = "Extra information")
  @JsonProperty("qs_extra")
  public String getQsExtra() {
    return qsExtra;
  }
  public void setQsExtra(String qsExtra) {
    this.qsExtra = qsExtra;
  }

  /**
   * Hostname
   **/
  public QuickserverServiceInfo qsHostname(String qsHostname) {
    this.qsHostname = qsHostname;
    return this;
  }

  
  @Schema(example = "qs24355", description = "Hostname")
  @JsonProperty("qs_hostname")
  public String getQsHostname() {
    return qsHostname;
  }
  public void setQsHostname(String qsHostname) {
    this.qsHostname = qsHostname;
  }

  /**
   * Server status
   **/
  public QuickserverServiceInfo qsServerStatus(String qsServerStatus) {
    this.qsServerStatus = qsServerStatus;
    return this;
  }

  
  @Schema(example = "deleted", description = "Server status")
  @JsonProperty("qs_server_status")
  public String getQsServerStatus() {
    return qsServerStatus;
  }
  public void setQsServerStatus(String qsServerStatus) {
    this.qsServerStatus = qsServerStatus;
  }

  /**
   * Comment
   **/
  public QuickserverServiceInfo qsComment(String qsComment) {
    this.qsComment = qsComment;
    return this;
  }

  
  @Schema(description = "Comment")
  @JsonProperty("qs_comment")
  public String getQsComment() {
    return qsComment;
  }
  public void setQsComment(String qsComment) {
    this.qsComment = qsComment;
  }

  /**
   * Slices information
   **/
  public QuickserverServiceInfo qsSlices(String qsSlices) {
    this.qsSlices = qsSlices;
    return this;
  }

  
  @Schema(example = "0", description = "Slices information")
  @JsonProperty("qs_slices")
  public String getQsSlices() {
    return qsSlices;
  }
  public void setQsSlices(String qsSlices) {
    this.qsSlices = qsSlices;
  }

  /**
   * VNC information
   **/
  public QuickserverServiceInfo qsVnc(String qsVnc) {
    this.qsVnc = qsVnc;
    return this;
  }

  
  @Schema(example = "99.88.77.66", description = "VNC information")
  @JsonProperty("qs_vnc")
  public String getQsVnc() {
    return qsVnc;
  }
  public void setQsVnc(String qsVnc) {
    this.qsVnc = qsVnc;
  }

  /**
   * VNC port (null)
   **/
  public QuickserverServiceInfo qsVncPort(Object qsVncPort) {
    this.qsVncPort = qsVncPort;
    return this;
  }

  
  @Schema(description = "VNC port (null)")
  @JsonProperty("qs_vnc_port")
  public Object getQsVncPort() {
    return qsVncPort;
  }
  public void setQsVncPort(Object qsVncPort) {
    this.qsVncPort = qsVncPort;
  }

  /**
   * Root password
   **/
  public QuickserverServiceInfo qsRootpass(String qsRootpass) {
    this.qsRootpass = qsRootpass;
    return this;
  }

  
  @Schema(description = "Root password")
  @JsonProperty("qs_rootpass")
  public String getQsRootpass() {
    return qsRootpass;
  }
  public void setQsRootpass(String qsRootpass) {
    this.qsRootpass = qsRootpass;
  }

  /**
   * MAC address
   **/
  public QuickserverServiceInfo qsMac(String qsMac) {
    this.qsMac = qsMac;
    return this;
  }

  
  @Schema(description = "MAC address")
  @JsonProperty("qs_mac")
  public String getQsMac() {
    return qsMac;
  }
  public void setQsMac(String qsMac) {
    this.qsMac = qsMac;
  }

  /**
   * Operating system
   **/
  public QuickserverServiceInfo qsOs(String qsOs) {
    this.qsOs = qsOs;
    return this;
  }

  
  @Schema(example = "ubuntu24", description = "Operating system")
  @JsonProperty("qs_os")
  public String getQsOs() {
    return qsOs;
  }
  public void setQsOs(String qsOs) {
    this.qsOs = qsOs;
  }

  /**
   * OS version
   **/
  public QuickserverServiceInfo qsVersion(String qsVersion) {
    this.qsVersion = qsVersion;
    return this;
  }

  
  @Schema(example = "Ubuntu", description = "OS version")
  @JsonProperty("qs_version")
  public String getQsVersion() {
    return qsVersion;
  }
  public void setQsVersion(String qsVersion) {
    this.qsVersion = qsVersion;
  }

  /**
   * Location
   **/
  public QuickserverServiceInfo qsLocation(String qsLocation) {
    this.qsLocation = qsLocation;
    return this;
  }

  
  @Schema(example = "1", description = "Location")
  @JsonProperty("qs_location")
  public String getQsLocation() {
    return qsLocation;
  }
  public void setQsLocation(String qsLocation) {
    this.qsLocation = qsLocation;
  }

  /**
   * Platform (null)
   **/
  public QuickserverServiceInfo qsPlatform(Object qsPlatform) {
    this.qsPlatform = qsPlatform;
    return this;
  }

  
  @Schema(description = "Platform (null)")
  @JsonProperty("qs_platform")
  public Object getQsPlatform() {
    return qsPlatform;
  }
  public void setQsPlatform(Object qsPlatform) {
    this.qsPlatform = qsPlatform;
  }


  @Override
  public boolean equals(java.lang.Object o) {
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

package org.openapitools.model;

import org.openapitools.jackson.nullable.JsonNullable;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class ServerServiceInfo  {
  
 /**
  * The ID of the server.
  */
  @ApiModelProperty(example = "16058", value = "The ID of the server.")

  private String serverId;

 /**
  * The hostname of the server.
  */
  @ApiModelProperty(example = "myserver.host.com", value = "The hostname of the server.")

  private String serverHostname;

 /**
  * The customer ID associated with the server.
  */
  @ApiModelProperty(example = "771282", value = "The customer ID associated with the server.")

  private String serverCustid;

 /**
  * The type of the server.
  */
  @ApiModelProperty(example = "600", value = "The type of the server.")

  private String serverType;

 /**
  * The currency used for billing.
  */
  @ApiModelProperty(example = "USD", value = "The currency used for billing.")

  private String serverCurrency;

 /**
  * The date when the server was ordered.
  */
  @ApiModelProperty(example = "2020-05-08T17:22:36.000Z", value = "The date when the server was ordered.")

  private String serverOrderDate;

 /**
  * The invoice number for the server.
  */
  @ApiModelProperty(example = "18738142", value = "The invoice number for the server.")

  private String serverInvoice;

 /**
  * The coupon associated with the server.
  */
  @ApiModelProperty(example = "0", value = "The coupon associated with the server.")

  private String serverCoupon;

 /**
  * The status of the server.
  */
  @ApiModelProperty(example = "active", value = "The status of the server.")

  private String serverStatus;

 /**
  * The root of the server.
  */
  @ApiModelProperty(example = "", value = "The root of the server.")

  private String serverRoot;

 /**
  * The dedicated tag of the server.
  */
  @ApiModelProperty(example = "0", value = "The dedicated tag of the server.")

  private String serverDedicatedTag;

 /**
  * The custom tag of the server.
  */
  @ApiModelProperty(example = "", value = "The custom tag of the server.")

  private String serverCustomTag;

 /**
  * Comments related to the server.
  */
  @ApiModelProperty(example = "", value = "Comments related to the server.")

  private String serverComment;

 /**
  * The initial billing amount for the server.
  */
  @ApiModelProperty(example = "0", value = "The initial billing amount for the server.")

  private String serverInitialBill;

 /**
  * The hardware information of the server.
  */
  @ApiModelProperty(example = "0", value = "The hardware information of the server.")

  private String serverHardware;

 /**
  * The number of IPs associated with the server.
  */
  @ApiModelProperty(example = "0", value = "The number of IPs associated with the server.")

  private String serverIps;

 /**
  * The monthly billing amount for the server.
  */
  @ApiModelProperty(example = "0", value = "The monthly billing amount for the server.")

  private String serverMonthlyBill;

 /**
  * The setup status of the server.
  */
  @ApiModelProperty(example = "0", value = "The setup status of the server.")

  private String serverSetup;

 /**
  * Discount information for the server.
  */
  @ApiModelProperty(value = "Discount information for the server.")

  private Object serverDiscount = null;

 /**
  * The reputation of the server.
  */
  @ApiModelProperty(example = "0", value = "The reputation of the server.")

  private String serverRep;

 /**
  * The date related to the server.
  */
  @ApiModelProperty(example = "1588972956", value = "The date related to the server.")

  private String serverDate;

 /**
  * The total cost of the server.
  */
  @ApiModelProperty(example = "230", value = "The total cost of the server.")

  private String serverTotalCost;

 /**
  * The location of the server.
  */
  @ApiModelProperty(value = "The location of the server.")

  private Object serverLocation = null;

 /**
  * The ordered hardware for the server.
  */
  @ApiModelProperty(example = "0", value = "The ordered hardware for the server.")

  private String serverHardwareOrdered;

 /**
  * The billed amount for the server.
  */
  @ApiModelProperty(example = "0", value = "The billed amount for the server.")

  private String serverBilled;

 /**
  * Indicates whether a welcome email was sent.
  */
  @ApiModelProperty(example = "1", value = "Indicates whether a welcome email was sent.")

  private String serverWelcomeEmail;

 /**
  * The number of dedicated CPUs for the server.
  */
  @ApiModelProperty(example = "38", value = "The number of dedicated CPUs for the server.")

  private String serverDedicatedCpu;

 /**
  * The amount of dedicated memory for the server.
  */
  @ApiModelProperty(example = "22", value = "The amount of dedicated memory for the server.")

  private String serverDedicatedMemory;

 /**
  * The size of the first dedicated hard drive.
  */
  @ApiModelProperty(example = "20", value = "The size of the first dedicated hard drive.")

  private String serverDedicatedHd1;

 /**
  * The size of the second dedicated hard drive.
  */
  @ApiModelProperty(value = "The size of the second dedicated hard drive.")

  private Object serverDedicatedHd2 = null;

 /**
  * The bandwidth of the server.
  */
  @ApiModelProperty(example = "3", value = "The bandwidth of the server.")

  private String serverDedicatedBandwidth;

 /**
  * The number of dedicated IPs for the server.
  */
  @ApiModelProperty(example = "5", value = "The number of dedicated IPs for the server.")

  private String serverDedicatedIps;

 /**
  * The operating system of the server.
  */
  @ApiModelProperty(example = "30", value = "The operating system of the server.")

  private String serverDedicatedOs;

 /**
  * The control panel of the server.
  */
  @ApiModelProperty(value = "The control panel of the server.")

  private Object serverDedicatedCp = null;

 /**
  * The RAID configuration of the server.
  */
  @ApiModelProperty(example = "0", value = "The RAID configuration of the server.")

  private String serverDedicatedRaid;

 /**
  * Additional information about the server.
  */
  @ApiModelProperty(example = "[]", value = "Additional information about the server.")

  private String serverExtra;
 /**
   * The ID of the server.
   * @return serverId
  **/
  @JsonProperty("server_id")
  public String getServerId() {
    return serverId;
  }

  public void setServerId(String serverId) {
    this.serverId = serverId;
  }

  public ServerServiceInfo serverId(String serverId) {
    this.serverId = serverId;
    return this;
  }

 /**
   * The hostname of the server.
   * @return serverHostname
  **/
  @JsonProperty("server_hostname")
  public String getServerHostname() {
    return serverHostname;
  }

  public void setServerHostname(String serverHostname) {
    this.serverHostname = serverHostname;
  }

  public ServerServiceInfo serverHostname(String serverHostname) {
    this.serverHostname = serverHostname;
    return this;
  }

 /**
   * The customer ID associated with the server.
   * @return serverCustid
  **/
  @JsonProperty("server_custid")
  public String getServerCustid() {
    return serverCustid;
  }

  public void setServerCustid(String serverCustid) {
    this.serverCustid = serverCustid;
  }

  public ServerServiceInfo serverCustid(String serverCustid) {
    this.serverCustid = serverCustid;
    return this;
  }

 /**
   * The type of the server.
   * @return serverType
  **/
  @JsonProperty("server_type")
  public String getServerType() {
    return serverType;
  }

  public void setServerType(String serverType) {
    this.serverType = serverType;
  }

  public ServerServiceInfo serverType(String serverType) {
    this.serverType = serverType;
    return this;
  }

 /**
   * The currency used for billing.
   * @return serverCurrency
  **/
  @JsonProperty("server_currency")
  public String getServerCurrency() {
    return serverCurrency;
  }

  public void setServerCurrency(String serverCurrency) {
    this.serverCurrency = serverCurrency;
  }

  public ServerServiceInfo serverCurrency(String serverCurrency) {
    this.serverCurrency = serverCurrency;
    return this;
  }

 /**
   * The date when the server was ordered.
   * @return serverOrderDate
  **/
  @JsonProperty("server_order_date")
  public String getServerOrderDate() {
    return serverOrderDate;
  }

  public void setServerOrderDate(String serverOrderDate) {
    this.serverOrderDate = serverOrderDate;
  }

  public ServerServiceInfo serverOrderDate(String serverOrderDate) {
    this.serverOrderDate = serverOrderDate;
    return this;
  }

 /**
   * The invoice number for the server.
   * @return serverInvoice
  **/
  @JsonProperty("server_invoice")
  public String getServerInvoice() {
    return serverInvoice;
  }

  public void setServerInvoice(String serverInvoice) {
    this.serverInvoice = serverInvoice;
  }

  public ServerServiceInfo serverInvoice(String serverInvoice) {
    this.serverInvoice = serverInvoice;
    return this;
  }

 /**
   * The coupon associated with the server.
   * @return serverCoupon
  **/
  @JsonProperty("server_coupon")
  public String getServerCoupon() {
    return serverCoupon;
  }

  public void setServerCoupon(String serverCoupon) {
    this.serverCoupon = serverCoupon;
  }

  public ServerServiceInfo serverCoupon(String serverCoupon) {
    this.serverCoupon = serverCoupon;
    return this;
  }

 /**
   * The status of the server.
   * @return serverStatus
  **/
  @JsonProperty("server_status")
  public String getServerStatus() {
    return serverStatus;
  }

  public void setServerStatus(String serverStatus) {
    this.serverStatus = serverStatus;
  }

  public ServerServiceInfo serverStatus(String serverStatus) {
    this.serverStatus = serverStatus;
    return this;
  }

 /**
   * The root of the server.
   * @return serverRoot
  **/
  @JsonProperty("server_root")
  public String getServerRoot() {
    return serverRoot;
  }

  public void setServerRoot(String serverRoot) {
    this.serverRoot = serverRoot;
  }

  public ServerServiceInfo serverRoot(String serverRoot) {
    this.serverRoot = serverRoot;
    return this;
  }

 /**
   * The dedicated tag of the server.
   * @return serverDedicatedTag
  **/
  @JsonProperty("server_dedicated_tag")
  public String getServerDedicatedTag() {
    return serverDedicatedTag;
  }

  public void setServerDedicatedTag(String serverDedicatedTag) {
    this.serverDedicatedTag = serverDedicatedTag;
  }

  public ServerServiceInfo serverDedicatedTag(String serverDedicatedTag) {
    this.serverDedicatedTag = serverDedicatedTag;
    return this;
  }

 /**
   * The custom tag of the server.
   * @return serverCustomTag
  **/
  @JsonProperty("server_custom_tag")
  public String getServerCustomTag() {
    return serverCustomTag;
  }

  public void setServerCustomTag(String serverCustomTag) {
    this.serverCustomTag = serverCustomTag;
  }

  public ServerServiceInfo serverCustomTag(String serverCustomTag) {
    this.serverCustomTag = serverCustomTag;
    return this;
  }

 /**
   * Comments related to the server.
   * @return serverComment
  **/
  @JsonProperty("server_comment")
  public String getServerComment() {
    return serverComment;
  }

  public void setServerComment(String serverComment) {
    this.serverComment = serverComment;
  }

  public ServerServiceInfo serverComment(String serverComment) {
    this.serverComment = serverComment;
    return this;
  }

 /**
   * The initial billing amount for the server.
   * @return serverInitialBill
  **/
  @JsonProperty("server_initial_bill")
  public String getServerInitialBill() {
    return serverInitialBill;
  }

  public void setServerInitialBill(String serverInitialBill) {
    this.serverInitialBill = serverInitialBill;
  }

  public ServerServiceInfo serverInitialBill(String serverInitialBill) {
    this.serverInitialBill = serverInitialBill;
    return this;
  }

 /**
   * The hardware information of the server.
   * @return serverHardware
  **/
  @JsonProperty("server_hardware")
  public String getServerHardware() {
    return serverHardware;
  }

  public void setServerHardware(String serverHardware) {
    this.serverHardware = serverHardware;
  }

  public ServerServiceInfo serverHardware(String serverHardware) {
    this.serverHardware = serverHardware;
    return this;
  }

 /**
   * The number of IPs associated with the server.
   * @return serverIps
  **/
  @JsonProperty("server_ips")
  public String getServerIps() {
    return serverIps;
  }

  public void setServerIps(String serverIps) {
    this.serverIps = serverIps;
  }

  public ServerServiceInfo serverIps(String serverIps) {
    this.serverIps = serverIps;
    return this;
  }

 /**
   * The monthly billing amount for the server.
   * @return serverMonthlyBill
  **/
  @JsonProperty("server_monthly_bill")
  public String getServerMonthlyBill() {
    return serverMonthlyBill;
  }

  public void setServerMonthlyBill(String serverMonthlyBill) {
    this.serverMonthlyBill = serverMonthlyBill;
  }

  public ServerServiceInfo serverMonthlyBill(String serverMonthlyBill) {
    this.serverMonthlyBill = serverMonthlyBill;
    return this;
  }

 /**
   * The setup status of the server.
   * @return serverSetup
  **/
  @JsonProperty("server_setup")
  public String getServerSetup() {
    return serverSetup;
  }

  public void setServerSetup(String serverSetup) {
    this.serverSetup = serverSetup;
  }

  public ServerServiceInfo serverSetup(String serverSetup) {
    this.serverSetup = serverSetup;
    return this;
  }

 /**
   * Discount information for the server.
   * @return serverDiscount
  **/
  @JsonProperty("server_discount")
  public Object getServerDiscount() {
    return serverDiscount;
  }

  public void setServerDiscount(Object serverDiscount) {
    this.serverDiscount = serverDiscount;
  }

  public ServerServiceInfo serverDiscount(Object serverDiscount) {
    this.serverDiscount = serverDiscount;
    return this;
  }

 /**
   * The reputation of the server.
   * @return serverRep
  **/
  @JsonProperty("server_rep")
  public String getServerRep() {
    return serverRep;
  }

  public void setServerRep(String serverRep) {
    this.serverRep = serverRep;
  }

  public ServerServiceInfo serverRep(String serverRep) {
    this.serverRep = serverRep;
    return this;
  }

 /**
   * The date related to the server.
   * @return serverDate
  **/
  @JsonProperty("server_date")
  public String getServerDate() {
    return serverDate;
  }

  public void setServerDate(String serverDate) {
    this.serverDate = serverDate;
  }

  public ServerServiceInfo serverDate(String serverDate) {
    this.serverDate = serverDate;
    return this;
  }

 /**
   * The total cost of the server.
   * @return serverTotalCost
  **/
  @JsonProperty("server_total_cost")
  public String getServerTotalCost() {
    return serverTotalCost;
  }

  public void setServerTotalCost(String serverTotalCost) {
    this.serverTotalCost = serverTotalCost;
  }

  public ServerServiceInfo serverTotalCost(String serverTotalCost) {
    this.serverTotalCost = serverTotalCost;
    return this;
  }

 /**
   * The location of the server.
   * @return serverLocation
  **/
  @JsonProperty("server_location")
  public Object getServerLocation() {
    return serverLocation;
  }

  public void setServerLocation(Object serverLocation) {
    this.serverLocation = serverLocation;
  }

  public ServerServiceInfo serverLocation(Object serverLocation) {
    this.serverLocation = serverLocation;
    return this;
  }

 /**
   * The ordered hardware for the server.
   * @return serverHardwareOrdered
  **/
  @JsonProperty("server_hardware_ordered")
  public String getServerHardwareOrdered() {
    return serverHardwareOrdered;
  }

  public void setServerHardwareOrdered(String serverHardwareOrdered) {
    this.serverHardwareOrdered = serverHardwareOrdered;
  }

  public ServerServiceInfo serverHardwareOrdered(String serverHardwareOrdered) {
    this.serverHardwareOrdered = serverHardwareOrdered;
    return this;
  }

 /**
   * The billed amount for the server.
   * @return serverBilled
  **/
  @JsonProperty("server_billed")
  public String getServerBilled() {
    return serverBilled;
  }

  public void setServerBilled(String serverBilled) {
    this.serverBilled = serverBilled;
  }

  public ServerServiceInfo serverBilled(String serverBilled) {
    this.serverBilled = serverBilled;
    return this;
  }

 /**
   * Indicates whether a welcome email was sent.
   * @return serverWelcomeEmail
  **/
  @JsonProperty("server_welcome_email")
  public String getServerWelcomeEmail() {
    return serverWelcomeEmail;
  }

  public void setServerWelcomeEmail(String serverWelcomeEmail) {
    this.serverWelcomeEmail = serverWelcomeEmail;
  }

  public ServerServiceInfo serverWelcomeEmail(String serverWelcomeEmail) {
    this.serverWelcomeEmail = serverWelcomeEmail;
    return this;
  }

 /**
   * The number of dedicated CPUs for the server.
   * @return serverDedicatedCpu
  **/
  @JsonProperty("server_dedicated_cpu")
  public String getServerDedicatedCpu() {
    return serverDedicatedCpu;
  }

  public void setServerDedicatedCpu(String serverDedicatedCpu) {
    this.serverDedicatedCpu = serverDedicatedCpu;
  }

  public ServerServiceInfo serverDedicatedCpu(String serverDedicatedCpu) {
    this.serverDedicatedCpu = serverDedicatedCpu;
    return this;
  }

 /**
   * The amount of dedicated memory for the server.
   * @return serverDedicatedMemory
  **/
  @JsonProperty("server_dedicated_memory")
  public String getServerDedicatedMemory() {
    return serverDedicatedMemory;
  }

  public void setServerDedicatedMemory(String serverDedicatedMemory) {
    this.serverDedicatedMemory = serverDedicatedMemory;
  }

  public ServerServiceInfo serverDedicatedMemory(String serverDedicatedMemory) {
    this.serverDedicatedMemory = serverDedicatedMemory;
    return this;
  }

 /**
   * The size of the first dedicated hard drive.
   * @return serverDedicatedHd1
  **/
  @JsonProperty("server_dedicated_hd1")
  public String getServerDedicatedHd1() {
    return serverDedicatedHd1;
  }

  public void setServerDedicatedHd1(String serverDedicatedHd1) {
    this.serverDedicatedHd1 = serverDedicatedHd1;
  }

  public ServerServiceInfo serverDedicatedHd1(String serverDedicatedHd1) {
    this.serverDedicatedHd1 = serverDedicatedHd1;
    return this;
  }

 /**
   * The size of the second dedicated hard drive.
   * @return serverDedicatedHd2
  **/
  @JsonProperty("server_dedicated_hd2")
  public Object getServerDedicatedHd2() {
    return serverDedicatedHd2;
  }

  public void setServerDedicatedHd2(Object serverDedicatedHd2) {
    this.serverDedicatedHd2 = serverDedicatedHd2;
  }

  public ServerServiceInfo serverDedicatedHd2(Object serverDedicatedHd2) {
    this.serverDedicatedHd2 = serverDedicatedHd2;
    return this;
  }

 /**
   * The bandwidth of the server.
   * @return serverDedicatedBandwidth
  **/
  @JsonProperty("server_dedicated_bandwidth")
  public String getServerDedicatedBandwidth() {
    return serverDedicatedBandwidth;
  }

  public void setServerDedicatedBandwidth(String serverDedicatedBandwidth) {
    this.serverDedicatedBandwidth = serverDedicatedBandwidth;
  }

  public ServerServiceInfo serverDedicatedBandwidth(String serverDedicatedBandwidth) {
    this.serverDedicatedBandwidth = serverDedicatedBandwidth;
    return this;
  }

 /**
   * The number of dedicated IPs for the server.
   * @return serverDedicatedIps
  **/
  @JsonProperty("server_dedicated_ips")
  public String getServerDedicatedIps() {
    return serverDedicatedIps;
  }

  public void setServerDedicatedIps(String serverDedicatedIps) {
    this.serverDedicatedIps = serverDedicatedIps;
  }

  public ServerServiceInfo serverDedicatedIps(String serverDedicatedIps) {
    this.serverDedicatedIps = serverDedicatedIps;
    return this;
  }

 /**
   * The operating system of the server.
   * @return serverDedicatedOs
  **/
  @JsonProperty("server_dedicated_os")
  public String getServerDedicatedOs() {
    return serverDedicatedOs;
  }

  public void setServerDedicatedOs(String serverDedicatedOs) {
    this.serverDedicatedOs = serverDedicatedOs;
  }

  public ServerServiceInfo serverDedicatedOs(String serverDedicatedOs) {
    this.serverDedicatedOs = serverDedicatedOs;
    return this;
  }

 /**
   * The control panel of the server.
   * @return serverDedicatedCp
  **/
  @JsonProperty("server_dedicated_cp")
  public Object getServerDedicatedCp() {
    return serverDedicatedCp;
  }

  public void setServerDedicatedCp(Object serverDedicatedCp) {
    this.serverDedicatedCp = serverDedicatedCp;
  }

  public ServerServiceInfo serverDedicatedCp(Object serverDedicatedCp) {
    this.serverDedicatedCp = serverDedicatedCp;
    return this;
  }

 /**
   * The RAID configuration of the server.
   * @return serverDedicatedRaid
  **/
  @JsonProperty("server_dedicated_raid")
  public String getServerDedicatedRaid() {
    return serverDedicatedRaid;
  }

  public void setServerDedicatedRaid(String serverDedicatedRaid) {
    this.serverDedicatedRaid = serverDedicatedRaid;
  }

  public ServerServiceInfo serverDedicatedRaid(String serverDedicatedRaid) {
    this.serverDedicatedRaid = serverDedicatedRaid;
    return this;
  }

 /**
   * Additional information about the server.
   * @return serverExtra
  **/
  @JsonProperty("server_extra")
  public String getServerExtra() {
    return serverExtra;
  }

  public void setServerExtra(String serverExtra) {
    this.serverExtra = serverExtra;
  }

  public ServerServiceInfo serverExtra(String serverExtra) {
    this.serverExtra = serverExtra;
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
    ServerServiceInfo serverServiceInfo = (ServerServiceInfo) o;
    return Objects.equals(this.serverId, serverServiceInfo.serverId) &&
        Objects.equals(this.serverHostname, serverServiceInfo.serverHostname) &&
        Objects.equals(this.serverCustid, serverServiceInfo.serverCustid) &&
        Objects.equals(this.serverType, serverServiceInfo.serverType) &&
        Objects.equals(this.serverCurrency, serverServiceInfo.serverCurrency) &&
        Objects.equals(this.serverOrderDate, serverServiceInfo.serverOrderDate) &&
        Objects.equals(this.serverInvoice, serverServiceInfo.serverInvoice) &&
        Objects.equals(this.serverCoupon, serverServiceInfo.serverCoupon) &&
        Objects.equals(this.serverStatus, serverServiceInfo.serverStatus) &&
        Objects.equals(this.serverRoot, serverServiceInfo.serverRoot) &&
        Objects.equals(this.serverDedicatedTag, serverServiceInfo.serverDedicatedTag) &&
        Objects.equals(this.serverCustomTag, serverServiceInfo.serverCustomTag) &&
        Objects.equals(this.serverComment, serverServiceInfo.serverComment) &&
        Objects.equals(this.serverInitialBill, serverServiceInfo.serverInitialBill) &&
        Objects.equals(this.serverHardware, serverServiceInfo.serverHardware) &&
        Objects.equals(this.serverIps, serverServiceInfo.serverIps) &&
        Objects.equals(this.serverMonthlyBill, serverServiceInfo.serverMonthlyBill) &&
        Objects.equals(this.serverSetup, serverServiceInfo.serverSetup) &&
        Objects.equals(this.serverDiscount, serverServiceInfo.serverDiscount) &&
        Objects.equals(this.serverRep, serverServiceInfo.serverRep) &&
        Objects.equals(this.serverDate, serverServiceInfo.serverDate) &&
        Objects.equals(this.serverTotalCost, serverServiceInfo.serverTotalCost) &&
        Objects.equals(this.serverLocation, serverServiceInfo.serverLocation) &&
        Objects.equals(this.serverHardwareOrdered, serverServiceInfo.serverHardwareOrdered) &&
        Objects.equals(this.serverBilled, serverServiceInfo.serverBilled) &&
        Objects.equals(this.serverWelcomeEmail, serverServiceInfo.serverWelcomeEmail) &&
        Objects.equals(this.serverDedicatedCpu, serverServiceInfo.serverDedicatedCpu) &&
        Objects.equals(this.serverDedicatedMemory, serverServiceInfo.serverDedicatedMemory) &&
        Objects.equals(this.serverDedicatedHd1, serverServiceInfo.serverDedicatedHd1) &&
        Objects.equals(this.serverDedicatedHd2, serverServiceInfo.serverDedicatedHd2) &&
        Objects.equals(this.serverDedicatedBandwidth, serverServiceInfo.serverDedicatedBandwidth) &&
        Objects.equals(this.serverDedicatedIps, serverServiceInfo.serverDedicatedIps) &&
        Objects.equals(this.serverDedicatedOs, serverServiceInfo.serverDedicatedOs) &&
        Objects.equals(this.serverDedicatedCp, serverServiceInfo.serverDedicatedCp) &&
        Objects.equals(this.serverDedicatedRaid, serverServiceInfo.serverDedicatedRaid) &&
        Objects.equals(this.serverExtra, serverServiceInfo.serverExtra);
  }

  @Override
  public int hashCode() {
    return Objects.hash(serverId, serverHostname, serverCustid, serverType, serverCurrency, serverOrderDate, serverInvoice, serverCoupon, serverStatus, serverRoot, serverDedicatedTag, serverCustomTag, serverComment, serverInitialBill, serverHardware, serverIps, serverMonthlyBill, serverSetup, serverDiscount, serverRep, serverDate, serverTotalCost, serverLocation, serverHardwareOrdered, serverBilled, serverWelcomeEmail, serverDedicatedCpu, serverDedicatedMemory, serverDedicatedHd1, serverDedicatedHd2, serverDedicatedBandwidth, serverDedicatedIps, serverDedicatedOs, serverDedicatedCp, serverDedicatedRaid, serverExtra);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerServiceInfo {\n");
    
    sb.append("    serverId: ").append(toIndentedString(serverId)).append("\n");
    sb.append("    serverHostname: ").append(toIndentedString(serverHostname)).append("\n");
    sb.append("    serverCustid: ").append(toIndentedString(serverCustid)).append("\n");
    sb.append("    serverType: ").append(toIndentedString(serverType)).append("\n");
    sb.append("    serverCurrency: ").append(toIndentedString(serverCurrency)).append("\n");
    sb.append("    serverOrderDate: ").append(toIndentedString(serverOrderDate)).append("\n");
    sb.append("    serverInvoice: ").append(toIndentedString(serverInvoice)).append("\n");
    sb.append("    serverCoupon: ").append(toIndentedString(serverCoupon)).append("\n");
    sb.append("    serverStatus: ").append(toIndentedString(serverStatus)).append("\n");
    sb.append("    serverRoot: ").append(toIndentedString(serverRoot)).append("\n");
    sb.append("    serverDedicatedTag: ").append(toIndentedString(serverDedicatedTag)).append("\n");
    sb.append("    serverCustomTag: ").append(toIndentedString(serverCustomTag)).append("\n");
    sb.append("    serverComment: ").append(toIndentedString(serverComment)).append("\n");
    sb.append("    serverInitialBill: ").append(toIndentedString(serverInitialBill)).append("\n");
    sb.append("    serverHardware: ").append(toIndentedString(serverHardware)).append("\n");
    sb.append("    serverIps: ").append(toIndentedString(serverIps)).append("\n");
    sb.append("    serverMonthlyBill: ").append(toIndentedString(serverMonthlyBill)).append("\n");
    sb.append("    serverSetup: ").append(toIndentedString(serverSetup)).append("\n");
    sb.append("    serverDiscount: ").append(toIndentedString(serverDiscount)).append("\n");
    sb.append("    serverRep: ").append(toIndentedString(serverRep)).append("\n");
    sb.append("    serverDate: ").append(toIndentedString(serverDate)).append("\n");
    sb.append("    serverTotalCost: ").append(toIndentedString(serverTotalCost)).append("\n");
    sb.append("    serverLocation: ").append(toIndentedString(serverLocation)).append("\n");
    sb.append("    serverHardwareOrdered: ").append(toIndentedString(serverHardwareOrdered)).append("\n");
    sb.append("    serverBilled: ").append(toIndentedString(serverBilled)).append("\n");
    sb.append("    serverWelcomeEmail: ").append(toIndentedString(serverWelcomeEmail)).append("\n");
    sb.append("    serverDedicatedCpu: ").append(toIndentedString(serverDedicatedCpu)).append("\n");
    sb.append("    serverDedicatedMemory: ").append(toIndentedString(serverDedicatedMemory)).append("\n");
    sb.append("    serverDedicatedHd1: ").append(toIndentedString(serverDedicatedHd1)).append("\n");
    sb.append("    serverDedicatedHd2: ").append(toIndentedString(serverDedicatedHd2)).append("\n");
    sb.append("    serverDedicatedBandwidth: ").append(toIndentedString(serverDedicatedBandwidth)).append("\n");
    sb.append("    serverDedicatedIps: ").append(toIndentedString(serverDedicatedIps)).append("\n");
    sb.append("    serverDedicatedOs: ").append(toIndentedString(serverDedicatedOs)).append("\n");
    sb.append("    serverDedicatedCp: ").append(toIndentedString(serverDedicatedCp)).append("\n");
    sb.append("    serverDedicatedRaid: ").append(toIndentedString(serverDedicatedRaid)).append("\n");
    sb.append("    serverExtra: ").append(toIndentedString(serverExtra)).append("\n");
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


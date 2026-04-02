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

public class ServerServiceInfo   {
  
  @Schema(example = "16058", description = "The ID of the server.")
 /**
   * The ID of the server.  
  **/
  private String serverId = null;
  
  @Schema(example = "myserver.host.com", description = "The hostname of the server.")
 /**
   * The hostname of the server.  
  **/
  private String serverHostname = null;
  
  @Schema(example = "771282", description = "The customer ID associated with the server.")
 /**
   * The customer ID associated with the server.  
  **/
  private String serverCustid = null;
  
  @Schema(example = "600", description = "The type of the server.")
 /**
   * The type of the server.  
  **/
  private String serverType = null;
  
  @Schema(example = "USD", description = "The currency used for billing.")
 /**
   * The currency used for billing.  
  **/
  private String serverCurrency = null;
  
  @Schema(example = "2020-05-08T17:22:36.000Z", description = "The date when the server was ordered.")
 /**
   * The date when the server was ordered.  
  **/
  private String serverOrderDate = null;
  
  @Schema(example = "18738142", description = "The invoice number for the server.")
 /**
   * The invoice number for the server.  
  **/
  private String serverInvoice = null;
  
  @Schema(example = "0", description = "The coupon associated with the server.")
 /**
   * The coupon associated with the server.  
  **/
  private String serverCoupon = null;
  
  @Schema(example = "active", description = "The status of the server.")
 /**
   * The status of the server.  
  **/
  private String serverStatus = null;
  
  @Schema(description = "The root of the server.")
 /**
   * The root of the server.  
  **/
  private String serverRoot = null;
  
  @Schema(example = "0", description = "The dedicated tag of the server.")
 /**
   * The dedicated tag of the server.  
  **/
  private String serverDedicatedTag = null;
  
  @Schema(description = "The custom tag of the server.")
 /**
   * The custom tag of the server.  
  **/
  private String serverCustomTag = null;
  
  @Schema(description = "Comments related to the server.")
 /**
   * Comments related to the server.  
  **/
  private String serverComment = null;
  
  @Schema(example = "0", description = "The initial billing amount for the server.")
 /**
   * The initial billing amount for the server.  
  **/
  private String serverInitialBill = null;
  
  @Schema(example = "0", description = "The hardware information of the server.")
 /**
   * The hardware information of the server.  
  **/
  private String serverHardware = null;
  
  @Schema(example = "0", description = "The number of IPs associated with the server.")
 /**
   * The number of IPs associated with the server.  
  **/
  private String serverIps = null;
  
  @Schema(example = "0", description = "The monthly billing amount for the server.")
 /**
   * The monthly billing amount for the server.  
  **/
  private String serverMonthlyBill = null;
  
  @Schema(example = "0", description = "The setup status of the server.")
 /**
   * The setup status of the server.  
  **/
  private String serverSetup = null;
  
  @Schema(description = "Discount information for the server.")
 /**
   * Discount information for the server.  
  **/
  private String serverDiscount = null;
  
  @Schema(example = "0", description = "The reputation of the server.")
 /**
   * The reputation of the server.  
  **/
  private String serverRep = null;
  
  @Schema(example = "1588972956", description = "The date related to the server.")
 /**
   * The date related to the server.  
  **/
  private String serverDate = null;
  
  @Schema(example = "230", description = "The total cost of the server.")
 /**
   * The total cost of the server.  
  **/
  private String serverTotalCost = null;
  
  @Schema(description = "The location of the server.")
 /**
   * The location of the server.  
  **/
  private String serverLocation = null;
  
  @Schema(example = "0", description = "The ordered hardware for the server.")
 /**
   * The ordered hardware for the server.  
  **/
  private String serverHardwareOrdered = null;
  
  @Schema(example = "0", description = "The billed amount for the server.")
 /**
   * The billed amount for the server.  
  **/
  private String serverBilled = null;
  
  @Schema(example = "1", description = "Indicates whether a welcome email was sent.")
 /**
   * Indicates whether a welcome email was sent.  
  **/
  private String serverWelcomeEmail = null;
  
  @Schema(example = "38", description = "The number of dedicated CPUs for the server.")
 /**
   * The number of dedicated CPUs for the server.  
  **/
  private String serverDedicatedCpu = null;
  
  @Schema(example = "22", description = "The amount of dedicated memory for the server.")
 /**
   * The amount of dedicated memory for the server.  
  **/
  private String serverDedicatedMemory = null;
  
  @Schema(example = "20", description = "The size of the first dedicated hard drive.")
 /**
   * The size of the first dedicated hard drive.  
  **/
  private String serverDedicatedHd1 = null;
  
  @Schema(description = "The size of the second dedicated hard drive.")
 /**
   * The size of the second dedicated hard drive.  
  **/
  private String serverDedicatedHd2 = null;
  
  @Schema(example = "3", description = "The bandwidth of the server.")
 /**
   * The bandwidth of the server.  
  **/
  private String serverDedicatedBandwidth = null;
  
  @Schema(example = "5", description = "The number of dedicated IPs for the server.")
 /**
   * The number of dedicated IPs for the server.  
  **/
  private String serverDedicatedIps = null;
  
  @Schema(example = "30", description = "The operating system of the server.")
 /**
   * The operating system of the server.  
  **/
  private String serverDedicatedOs = null;
  
  @Schema(description = "The control panel of the server.")
 /**
   * The control panel of the server.  
  **/
  private String serverDedicatedCp = null;
  
  @Schema(example = "0", description = "The RAID configuration of the server.")
 /**
   * The RAID configuration of the server.  
  **/
  private String serverDedicatedRaid = null;
  
  @Schema(example = "[]", description = "Additional information about the server.")
 /**
   * Additional information about the server.  
  **/
  private String serverExtra = null;
 /**
   * The ID of the server.
   * @return serverId
  **/
  @JsonProperty("server_id")
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
  public String getServerDiscount() {
    return serverDiscount;
  }

  public void setServerDiscount(String serverDiscount) {
    this.serverDiscount = serverDiscount;
  }

  public ServerServiceInfo serverDiscount(String serverDiscount) {
    this.serverDiscount = serverDiscount;
    return this;
  }

 /**
   * The reputation of the server.
   * @return serverRep
  **/
  @JsonProperty("server_rep")
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
  public String getServerLocation() {
    return serverLocation;
  }

  public void setServerLocation(String serverLocation) {
    this.serverLocation = serverLocation;
  }

  public ServerServiceInfo serverLocation(String serverLocation) {
    this.serverLocation = serverLocation;
    return this;
  }

 /**
   * The ordered hardware for the server.
   * @return serverHardwareOrdered
  **/
  @JsonProperty("server_hardware_ordered")
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
  public String getServerDedicatedHd2() {
    return serverDedicatedHd2;
  }

  public void setServerDedicatedHd2(String serverDedicatedHd2) {
    this.serverDedicatedHd2 = serverDedicatedHd2;
  }

  public ServerServiceInfo serverDedicatedHd2(String serverDedicatedHd2) {
    this.serverDedicatedHd2 = serverDedicatedHd2;
    return this;
  }

 /**
   * The bandwidth of the server.
   * @return serverDedicatedBandwidth
  **/
  @JsonProperty("server_dedicated_bandwidth")
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
  public String getServerDedicatedCp() {
    return serverDedicatedCp;
  }

  public void setServerDedicatedCp(String serverDedicatedCp) {
    this.serverDedicatedCp = serverDedicatedCp;
  }

  public ServerServiceInfo serverDedicatedCp(String serverDedicatedCp) {
    this.serverDedicatedCp = serverDedicatedCp;
    return this;
  }

 /**
   * The RAID configuration of the server.
   * @return serverDedicatedRaid
  **/
  @JsonProperty("server_dedicated_raid")
  @NotNull
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
  @NotNull
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

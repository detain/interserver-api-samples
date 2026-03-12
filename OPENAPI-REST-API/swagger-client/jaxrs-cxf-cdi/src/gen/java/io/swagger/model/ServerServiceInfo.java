package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;



public class ServerServiceInfo   {
  private String serverId = null;
  private String serverHostname = null;
  private String serverCustid = null;
  private String serverType = null;
  private String serverCurrency = null;
  private String serverOrderDate = null;
  private String serverInvoice = null;
  private String serverCoupon = null;
  private String serverStatus = null;
  private String serverRoot = null;
  private String serverDedicatedTag = null;
  private String serverCustomTag = null;
  private String serverComment = null;
  private String serverInitialBill = null;
  private String serverHardware = null;
  private String serverIps = null;
  private String serverMonthlyBill = null;
  private String serverSetup = null;
  private Object serverDiscount = null;
  private String serverRep = null;
  private String serverDate = null;
  private String serverTotalCost = null;
  private Object serverLocation = null;
  private String serverHardwareOrdered = null;
  private String serverBilled = null;
  private String serverWelcomeEmail = null;
  private String serverDedicatedCpu = null;
  private String serverDedicatedMemory = null;
  private String serverDedicatedHd1 = null;
  private Object serverDedicatedHd2 = null;
  private String serverDedicatedBandwidth = null;
  private String serverDedicatedIps = null;
  private String serverDedicatedOs = null;
  private Object serverDedicatedCp = null;
  private String serverDedicatedRaid = null;
  private String serverExtra = null;

  /**
   * The ID of the server.
   **/
  public ServerServiceInfo serverId(String serverId) {
    this.serverId = serverId;
    return this;
  }

  
  
  @Schema(example = "16058", description = "The ID of the server.")
  @JsonProperty("server_id")
  @NotNull
  public String getServerId() {
    return serverId;
  }
  public void setServerId(String serverId) {
    this.serverId = serverId;
  }

  /**
   * The hostname of the server.
   **/
  public ServerServiceInfo serverHostname(String serverHostname) {
    this.serverHostname = serverHostname;
    return this;
  }

  
  
  @Schema(example = "myserver.host.com", description = "The hostname of the server.")
  @JsonProperty("server_hostname")
  @NotNull
  public String getServerHostname() {
    return serverHostname;
  }
  public void setServerHostname(String serverHostname) {
    this.serverHostname = serverHostname;
  }

  /**
   * The customer ID associated with the server.
   **/
  public ServerServiceInfo serverCustid(String serverCustid) {
    this.serverCustid = serverCustid;
    return this;
  }

  
  
  @Schema(example = "771282", description = "The customer ID associated with the server.")
  @JsonProperty("server_custid")
  @NotNull
  public String getServerCustid() {
    return serverCustid;
  }
  public void setServerCustid(String serverCustid) {
    this.serverCustid = serverCustid;
  }

  /**
   * The type of the server.
   **/
  public ServerServiceInfo serverType(String serverType) {
    this.serverType = serverType;
    return this;
  }

  
  
  @Schema(example = "600", description = "The type of the server.")
  @JsonProperty("server_type")
  @NotNull
  public String getServerType() {
    return serverType;
  }
  public void setServerType(String serverType) {
    this.serverType = serverType;
  }

  /**
   * The currency used for billing.
   **/
  public ServerServiceInfo serverCurrency(String serverCurrency) {
    this.serverCurrency = serverCurrency;
    return this;
  }

  
  
  @Schema(example = "USD", description = "The currency used for billing.")
  @JsonProperty("server_currency")
  @NotNull
  public String getServerCurrency() {
    return serverCurrency;
  }
  public void setServerCurrency(String serverCurrency) {
    this.serverCurrency = serverCurrency;
  }

  /**
   * The date when the server was ordered.
   **/
  public ServerServiceInfo serverOrderDate(String serverOrderDate) {
    this.serverOrderDate = serverOrderDate;
    return this;
  }

  
  
  @Schema(example = "2020-05-08T17:22:36.000Z", description = "The date when the server was ordered.")
  @JsonProperty("server_order_date")
  @NotNull
  public String getServerOrderDate() {
    return serverOrderDate;
  }
  public void setServerOrderDate(String serverOrderDate) {
    this.serverOrderDate = serverOrderDate;
  }

  /**
   * The invoice number for the server.
   **/
  public ServerServiceInfo serverInvoice(String serverInvoice) {
    this.serverInvoice = serverInvoice;
    return this;
  }

  
  
  @Schema(example = "18738142", description = "The invoice number for the server.")
  @JsonProperty("server_invoice")
  @NotNull
  public String getServerInvoice() {
    return serverInvoice;
  }
  public void setServerInvoice(String serverInvoice) {
    this.serverInvoice = serverInvoice;
  }

  /**
   * The coupon associated with the server.
   **/
  public ServerServiceInfo serverCoupon(String serverCoupon) {
    this.serverCoupon = serverCoupon;
    return this;
  }

  
  
  @Schema(example = "0", description = "The coupon associated with the server.")
  @JsonProperty("server_coupon")
  @NotNull
  public String getServerCoupon() {
    return serverCoupon;
  }
  public void setServerCoupon(String serverCoupon) {
    this.serverCoupon = serverCoupon;
  }

  /**
   * The status of the server.
   **/
  public ServerServiceInfo serverStatus(String serverStatus) {
    this.serverStatus = serverStatus;
    return this;
  }

  
  
  @Schema(example = "active", description = "The status of the server.")
  @JsonProperty("server_status")
  @NotNull
  public String getServerStatus() {
    return serverStatus;
  }
  public void setServerStatus(String serverStatus) {
    this.serverStatus = serverStatus;
  }

  /**
   * The root of the server.
   **/
  public ServerServiceInfo serverRoot(String serverRoot) {
    this.serverRoot = serverRoot;
    return this;
  }

  
  
  @Schema(description = "The root of the server.")
  @JsonProperty("server_root")
  @NotNull
  public String getServerRoot() {
    return serverRoot;
  }
  public void setServerRoot(String serverRoot) {
    this.serverRoot = serverRoot;
  }

  /**
   * The dedicated tag of the server.
   **/
  public ServerServiceInfo serverDedicatedTag(String serverDedicatedTag) {
    this.serverDedicatedTag = serverDedicatedTag;
    return this;
  }

  
  
  @Schema(example = "0", description = "The dedicated tag of the server.")
  @JsonProperty("server_dedicated_tag")
  @NotNull
  public String getServerDedicatedTag() {
    return serverDedicatedTag;
  }
  public void setServerDedicatedTag(String serverDedicatedTag) {
    this.serverDedicatedTag = serverDedicatedTag;
  }

  /**
   * The custom tag of the server.
   **/
  public ServerServiceInfo serverCustomTag(String serverCustomTag) {
    this.serverCustomTag = serverCustomTag;
    return this;
  }

  
  
  @Schema(description = "The custom tag of the server.")
  @JsonProperty("server_custom_tag")
  @NotNull
  public String getServerCustomTag() {
    return serverCustomTag;
  }
  public void setServerCustomTag(String serverCustomTag) {
    this.serverCustomTag = serverCustomTag;
  }

  /**
   * Comments related to the server.
   **/
  public ServerServiceInfo serverComment(String serverComment) {
    this.serverComment = serverComment;
    return this;
  }

  
  
  @Schema(description = "Comments related to the server.")
  @JsonProperty("server_comment")
  @NotNull
  public String getServerComment() {
    return serverComment;
  }
  public void setServerComment(String serverComment) {
    this.serverComment = serverComment;
  }

  /**
   * The initial billing amount for the server.
   **/
  public ServerServiceInfo serverInitialBill(String serverInitialBill) {
    this.serverInitialBill = serverInitialBill;
    return this;
  }

  
  
  @Schema(example = "0", description = "The initial billing amount for the server.")
  @JsonProperty("server_initial_bill")
  @NotNull
  public String getServerInitialBill() {
    return serverInitialBill;
  }
  public void setServerInitialBill(String serverInitialBill) {
    this.serverInitialBill = serverInitialBill;
  }

  /**
   * The hardware information of the server.
   **/
  public ServerServiceInfo serverHardware(String serverHardware) {
    this.serverHardware = serverHardware;
    return this;
  }

  
  
  @Schema(example = "0", description = "The hardware information of the server.")
  @JsonProperty("server_hardware")
  @NotNull
  public String getServerHardware() {
    return serverHardware;
  }
  public void setServerHardware(String serverHardware) {
    this.serverHardware = serverHardware;
  }

  /**
   * The number of IPs associated with the server.
   **/
  public ServerServiceInfo serverIps(String serverIps) {
    this.serverIps = serverIps;
    return this;
  }

  
  
  @Schema(example = "0", description = "The number of IPs associated with the server.")
  @JsonProperty("server_ips")
  @NotNull
  public String getServerIps() {
    return serverIps;
  }
  public void setServerIps(String serverIps) {
    this.serverIps = serverIps;
  }

  /**
   * The monthly billing amount for the server.
   **/
  public ServerServiceInfo serverMonthlyBill(String serverMonthlyBill) {
    this.serverMonthlyBill = serverMonthlyBill;
    return this;
  }

  
  
  @Schema(example = "0", description = "The monthly billing amount for the server.")
  @JsonProperty("server_monthly_bill")
  @NotNull
  public String getServerMonthlyBill() {
    return serverMonthlyBill;
  }
  public void setServerMonthlyBill(String serverMonthlyBill) {
    this.serverMonthlyBill = serverMonthlyBill;
  }

  /**
   * The setup status of the server.
   **/
  public ServerServiceInfo serverSetup(String serverSetup) {
    this.serverSetup = serverSetup;
    return this;
  }

  
  
  @Schema(example = "0", description = "The setup status of the server.")
  @JsonProperty("server_setup")
  @NotNull
  public String getServerSetup() {
    return serverSetup;
  }
  public void setServerSetup(String serverSetup) {
    this.serverSetup = serverSetup;
  }

  /**
   * Discount information for the server.
   **/
  public ServerServiceInfo serverDiscount(Object serverDiscount) {
    this.serverDiscount = serverDiscount;
    return this;
  }

  
  
  @Schema(description = "Discount information for the server.")
  @JsonProperty("server_discount")
  @NotNull
  public Object getServerDiscount() {
    return serverDiscount;
  }
  public void setServerDiscount(Object serverDiscount) {
    this.serverDiscount = serverDiscount;
  }

  /**
   * The reputation of the server.
   **/
  public ServerServiceInfo serverRep(String serverRep) {
    this.serverRep = serverRep;
    return this;
  }

  
  
  @Schema(example = "0", description = "The reputation of the server.")
  @JsonProperty("server_rep")
  @NotNull
  public String getServerRep() {
    return serverRep;
  }
  public void setServerRep(String serverRep) {
    this.serverRep = serverRep;
  }

  /**
   * The date related to the server.
   **/
  public ServerServiceInfo serverDate(String serverDate) {
    this.serverDate = serverDate;
    return this;
  }

  
  
  @Schema(example = "1588972956", description = "The date related to the server.")
  @JsonProperty("server_date")
  @NotNull
  public String getServerDate() {
    return serverDate;
  }
  public void setServerDate(String serverDate) {
    this.serverDate = serverDate;
  }

  /**
   * The total cost of the server.
   **/
  public ServerServiceInfo serverTotalCost(String serverTotalCost) {
    this.serverTotalCost = serverTotalCost;
    return this;
  }

  
  
  @Schema(example = "230", description = "The total cost of the server.")
  @JsonProperty("server_total_cost")
  @NotNull
  public String getServerTotalCost() {
    return serverTotalCost;
  }
  public void setServerTotalCost(String serverTotalCost) {
    this.serverTotalCost = serverTotalCost;
  }

  /**
   * The location of the server.
   **/
  public ServerServiceInfo serverLocation(Object serverLocation) {
    this.serverLocation = serverLocation;
    return this;
  }

  
  
  @Schema(description = "The location of the server.")
  @JsonProperty("server_location")
  @NotNull
  public Object getServerLocation() {
    return serverLocation;
  }
  public void setServerLocation(Object serverLocation) {
    this.serverLocation = serverLocation;
  }

  /**
   * The ordered hardware for the server.
   **/
  public ServerServiceInfo serverHardwareOrdered(String serverHardwareOrdered) {
    this.serverHardwareOrdered = serverHardwareOrdered;
    return this;
  }

  
  
  @Schema(example = "0", description = "The ordered hardware for the server.")
  @JsonProperty("server_hardware_ordered")
  @NotNull
  public String getServerHardwareOrdered() {
    return serverHardwareOrdered;
  }
  public void setServerHardwareOrdered(String serverHardwareOrdered) {
    this.serverHardwareOrdered = serverHardwareOrdered;
  }

  /**
   * The billed amount for the server.
   **/
  public ServerServiceInfo serverBilled(String serverBilled) {
    this.serverBilled = serverBilled;
    return this;
  }

  
  
  @Schema(example = "0", description = "The billed amount for the server.")
  @JsonProperty("server_billed")
  @NotNull
  public String getServerBilled() {
    return serverBilled;
  }
  public void setServerBilled(String serverBilled) {
    this.serverBilled = serverBilled;
  }

  /**
   * Indicates whether a welcome email was sent.
   **/
  public ServerServiceInfo serverWelcomeEmail(String serverWelcomeEmail) {
    this.serverWelcomeEmail = serverWelcomeEmail;
    return this;
  }

  
  
  @Schema(example = "1", description = "Indicates whether a welcome email was sent.")
  @JsonProperty("server_welcome_email")
  @NotNull
  public String getServerWelcomeEmail() {
    return serverWelcomeEmail;
  }
  public void setServerWelcomeEmail(String serverWelcomeEmail) {
    this.serverWelcomeEmail = serverWelcomeEmail;
  }

  /**
   * The number of dedicated CPUs for the server.
   **/
  public ServerServiceInfo serverDedicatedCpu(String serverDedicatedCpu) {
    this.serverDedicatedCpu = serverDedicatedCpu;
    return this;
  }

  
  
  @Schema(example = "38", description = "The number of dedicated CPUs for the server.")
  @JsonProperty("server_dedicated_cpu")
  @NotNull
  public String getServerDedicatedCpu() {
    return serverDedicatedCpu;
  }
  public void setServerDedicatedCpu(String serverDedicatedCpu) {
    this.serverDedicatedCpu = serverDedicatedCpu;
  }

  /**
   * The amount of dedicated memory for the server.
   **/
  public ServerServiceInfo serverDedicatedMemory(String serverDedicatedMemory) {
    this.serverDedicatedMemory = serverDedicatedMemory;
    return this;
  }

  
  
  @Schema(example = "22", description = "The amount of dedicated memory for the server.")
  @JsonProperty("server_dedicated_memory")
  @NotNull
  public String getServerDedicatedMemory() {
    return serverDedicatedMemory;
  }
  public void setServerDedicatedMemory(String serverDedicatedMemory) {
    this.serverDedicatedMemory = serverDedicatedMemory;
  }

  /**
   * The size of the first dedicated hard drive.
   **/
  public ServerServiceInfo serverDedicatedHd1(String serverDedicatedHd1) {
    this.serverDedicatedHd1 = serverDedicatedHd1;
    return this;
  }

  
  
  @Schema(example = "20", description = "The size of the first dedicated hard drive.")
  @JsonProperty("server_dedicated_hd1")
  @NotNull
  public String getServerDedicatedHd1() {
    return serverDedicatedHd1;
  }
  public void setServerDedicatedHd1(String serverDedicatedHd1) {
    this.serverDedicatedHd1 = serverDedicatedHd1;
  }

  /**
   * The size of the second dedicated hard drive.
   **/
  public ServerServiceInfo serverDedicatedHd2(Object serverDedicatedHd2) {
    this.serverDedicatedHd2 = serverDedicatedHd2;
    return this;
  }

  
  
  @Schema(description = "The size of the second dedicated hard drive.")
  @JsonProperty("server_dedicated_hd2")
  @NotNull
  public Object getServerDedicatedHd2() {
    return serverDedicatedHd2;
  }
  public void setServerDedicatedHd2(Object serverDedicatedHd2) {
    this.serverDedicatedHd2 = serverDedicatedHd2;
  }

  /**
   * The bandwidth of the server.
   **/
  public ServerServiceInfo serverDedicatedBandwidth(String serverDedicatedBandwidth) {
    this.serverDedicatedBandwidth = serverDedicatedBandwidth;
    return this;
  }

  
  
  @Schema(example = "3", description = "The bandwidth of the server.")
  @JsonProperty("server_dedicated_bandwidth")
  @NotNull
  public String getServerDedicatedBandwidth() {
    return serverDedicatedBandwidth;
  }
  public void setServerDedicatedBandwidth(String serverDedicatedBandwidth) {
    this.serverDedicatedBandwidth = serverDedicatedBandwidth;
  }

  /**
   * The number of dedicated IPs for the server.
   **/
  public ServerServiceInfo serverDedicatedIps(String serverDedicatedIps) {
    this.serverDedicatedIps = serverDedicatedIps;
    return this;
  }

  
  
  @Schema(example = "5", description = "The number of dedicated IPs for the server.")
  @JsonProperty("server_dedicated_ips")
  @NotNull
  public String getServerDedicatedIps() {
    return serverDedicatedIps;
  }
  public void setServerDedicatedIps(String serverDedicatedIps) {
    this.serverDedicatedIps = serverDedicatedIps;
  }

  /**
   * The operating system of the server.
   **/
  public ServerServiceInfo serverDedicatedOs(String serverDedicatedOs) {
    this.serverDedicatedOs = serverDedicatedOs;
    return this;
  }

  
  
  @Schema(example = "30", description = "The operating system of the server.")
  @JsonProperty("server_dedicated_os")
  @NotNull
  public String getServerDedicatedOs() {
    return serverDedicatedOs;
  }
  public void setServerDedicatedOs(String serverDedicatedOs) {
    this.serverDedicatedOs = serverDedicatedOs;
  }

  /**
   * The control panel of the server.
   **/
  public ServerServiceInfo serverDedicatedCp(Object serverDedicatedCp) {
    this.serverDedicatedCp = serverDedicatedCp;
    return this;
  }

  
  
  @Schema(description = "The control panel of the server.")
  @JsonProperty("server_dedicated_cp")
  @NotNull
  public Object getServerDedicatedCp() {
    return serverDedicatedCp;
  }
  public void setServerDedicatedCp(Object serverDedicatedCp) {
    this.serverDedicatedCp = serverDedicatedCp;
  }

  /**
   * The RAID configuration of the server.
   **/
  public ServerServiceInfo serverDedicatedRaid(String serverDedicatedRaid) {
    this.serverDedicatedRaid = serverDedicatedRaid;
    return this;
  }

  
  
  @Schema(example = "0", description = "The RAID configuration of the server.")
  @JsonProperty("server_dedicated_raid")
  @NotNull
  public String getServerDedicatedRaid() {
    return serverDedicatedRaid;
  }
  public void setServerDedicatedRaid(String serverDedicatedRaid) {
    this.serverDedicatedRaid = serverDedicatedRaid;
  }

  /**
   * Additional information about the server.
   **/
  public ServerServiceInfo serverExtra(String serverExtra) {
    this.serverExtra = serverExtra;
    return this;
  }

  
  
  @Schema(example = "[]", description = "Additional information about the server.")
  @JsonProperty("server_extra")
  @NotNull
  public String getServerExtra() {
    return serverExtra;
  }
  public void setServerExtra(String serverExtra) {
    this.serverExtra = serverExtra;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServerServiceInfo serverServiceInfo = (ServerServiceInfo) o;
    return Objects.equals(serverId, serverServiceInfo.serverId) &&
        Objects.equals(serverHostname, serverServiceInfo.serverHostname) &&
        Objects.equals(serverCustid, serverServiceInfo.serverCustid) &&
        Objects.equals(serverType, serverServiceInfo.serverType) &&
        Objects.equals(serverCurrency, serverServiceInfo.serverCurrency) &&
        Objects.equals(serverOrderDate, serverServiceInfo.serverOrderDate) &&
        Objects.equals(serverInvoice, serverServiceInfo.serverInvoice) &&
        Objects.equals(serverCoupon, serverServiceInfo.serverCoupon) &&
        Objects.equals(serverStatus, serverServiceInfo.serverStatus) &&
        Objects.equals(serverRoot, serverServiceInfo.serverRoot) &&
        Objects.equals(serverDedicatedTag, serverServiceInfo.serverDedicatedTag) &&
        Objects.equals(serverCustomTag, serverServiceInfo.serverCustomTag) &&
        Objects.equals(serverComment, serverServiceInfo.serverComment) &&
        Objects.equals(serverInitialBill, serverServiceInfo.serverInitialBill) &&
        Objects.equals(serverHardware, serverServiceInfo.serverHardware) &&
        Objects.equals(serverIps, serverServiceInfo.serverIps) &&
        Objects.equals(serverMonthlyBill, serverServiceInfo.serverMonthlyBill) &&
        Objects.equals(serverSetup, serverServiceInfo.serverSetup) &&
        Objects.equals(serverDiscount, serverServiceInfo.serverDiscount) &&
        Objects.equals(serverRep, serverServiceInfo.serverRep) &&
        Objects.equals(serverDate, serverServiceInfo.serverDate) &&
        Objects.equals(serverTotalCost, serverServiceInfo.serverTotalCost) &&
        Objects.equals(serverLocation, serverServiceInfo.serverLocation) &&
        Objects.equals(serverHardwareOrdered, serverServiceInfo.serverHardwareOrdered) &&
        Objects.equals(serverBilled, serverServiceInfo.serverBilled) &&
        Objects.equals(serverWelcomeEmail, serverServiceInfo.serverWelcomeEmail) &&
        Objects.equals(serverDedicatedCpu, serverServiceInfo.serverDedicatedCpu) &&
        Objects.equals(serverDedicatedMemory, serverServiceInfo.serverDedicatedMemory) &&
        Objects.equals(serverDedicatedHd1, serverServiceInfo.serverDedicatedHd1) &&
        Objects.equals(serverDedicatedHd2, serverServiceInfo.serverDedicatedHd2) &&
        Objects.equals(serverDedicatedBandwidth, serverServiceInfo.serverDedicatedBandwidth) &&
        Objects.equals(serverDedicatedIps, serverServiceInfo.serverDedicatedIps) &&
        Objects.equals(serverDedicatedOs, serverServiceInfo.serverDedicatedOs) &&
        Objects.equals(serverDedicatedCp, serverServiceInfo.serverDedicatedCp) &&
        Objects.equals(serverDedicatedRaid, serverServiceInfo.serverDedicatedRaid) &&
        Objects.equals(serverExtra, serverServiceInfo.serverExtra);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

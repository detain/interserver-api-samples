package io.swagger.model;

import io.swagger.model.ServerLease;
import java.util.ArrayList;
import java.util.List;
import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class ServerAsset   {

  private @Valid Integer id = null;

  private @Valid String orderId = null;

  private @Valid String hostname = null;

  private @Valid String status = null;

  private @Valid String primaryIpv4 = null;

  private @Valid String primaryIpv6 = null;

  private @Valid String mac = null;

  private @Valid String datacenter = null;

  private @Valid String typeId = null;

  private @Valid String assetTag = null;

  private @Valid String rack = null;

  private @Valid String row = null;

  private @Valid String col = null;

  private @Valid String unitStart = null;

  private @Valid String unitEnd = null;

  private @Valid String unitSub = null;

  private @Valid String ipmiMac = null;

  private @Valid String ipmiIp = null;

  private @Valid String ipmiAdminUsername = null;

  private @Valid String ipmiAdminPassword = null;

  private @Valid String ipmiClientUsername = null;

  private @Valid String ipmiClientPassword = null;

  private @Valid String ipmiUpdated = null;

  private @Valid String ipmiWorking = null;

  private @Valid String company = null;

  private @Valid String comments = null;

  private @Valid String make = null;

  private @Valid String model = null;

  private @Valid String description = null;

  private @Valid String customerId = null;

  private @Valid String externalId = null;

  private @Valid String billingStatus = null;

  private @Valid String overdue = null;

  private @Valid String createTimestamp = null;

  private @Valid String updateTimestamp = null;

  private @Valid String assetId = null;

  private @Valid String assetName = null;

  private @Valid String rackId = null;

  private @Valid String rackName = null;

  private @Valid String rackLocation = null;

  private @Valid String rackSize = null;

  private @Valid String rackX = null;

  private @Valid String rackY = null;

  private @Valid String comment = null;

  private @Valid List<Integer> switchports = new ArrayList<Integer>();

  private @Valid List<String> vlans = new ArrayList<String>();

  private @Valid List<String> vlans6 = new ArrayList<String>();

  private @Valid ServerLease lease = null;

  /**
   * Unique identifier for the asset.
   **/
  public ServerAsset id(Integer id) {
    this.id = id;
    return this;
  }

  
  @ApiModelProperty(example = "3497", required = true, value = "Unique identifier for the asset.")
  @JsonProperty("id")
  @NotNull

  public Integer getId() {
    return id;
  }
  public void setId(Integer id) {
    this.id = id;
  }

  /**
   * Order identifier for the asset.
   **/
  public ServerAsset orderId(String orderId) {
    this.orderId = orderId;
    return this;
  }

  
  @ApiModelProperty(example = "16058", required = true, value = "Order identifier for the asset.")
  @JsonProperty("order_id")
  @NotNull

  public String getOrderId() {
    return orderId;
  }
  public void setOrderId(String orderId) {
    this.orderId = orderId;
  }

  /**
   * Hostname associated with the asset.
   **/
  public ServerAsset hostname(String hostname) {
    this.hostname = hostname;
    return this;
  }

  
  @ApiModelProperty(example = "myserver.host.com", required = true, value = "Hostname associated with the asset.")
  @JsonProperty("hostname")
  @NotNull

  public String getHostname() {
    return hostname;
  }
  public void setHostname(String hostname) {
    this.hostname = hostname;
  }

  /**
   * Status of the asset.
   **/
  public ServerAsset status(String status) {
    this.status = status;
    return this;
  }

  
  @ApiModelProperty(example = "active", required = true, value = "Status of the asset.")
  @JsonProperty("status")
  @NotNull

  public String getStatus() {
    return status;
  }
  public void setStatus(String status) {
    this.status = status;
  }

  /**
   * Primary IPv4 address of the asset.
   **/
  public ServerAsset primaryIpv4(String primaryIpv4) {
    this.primaryIpv4 = primaryIpv4;
    return this;
  }

  
  @ApiModelProperty(example = "1.2.3.250", required = true, value = "Primary IPv4 address of the asset.")
  @JsonProperty("primary_ipv4")
  @NotNull

  public String getPrimaryIpv4() {
    return primaryIpv4;
  }
  public void setPrimaryIpv4(String primaryIpv4) {
    this.primaryIpv4 = primaryIpv4;
  }

  /**
   * Primary IPv6 address of the asset.
   **/
  public ServerAsset primaryIpv6(String primaryIpv6) {
    this.primaryIpv6 = primaryIpv6;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "Primary IPv6 address of the asset.")
  @JsonProperty("primary_ipv6")
  @NotNull

  public String getPrimaryIpv6() {
    return primaryIpv6;
  }
  public void setPrimaryIpv6(String primaryIpv6) {
    this.primaryIpv6 = primaryIpv6;
  }

  /**
   * MAC address associated with the asset.
   **/
  public ServerAsset mac(String mac) {
    this.mac = mac;
    return this;
  }

  
  @ApiModelProperty(value = "MAC address associated with the asset.")
  @JsonProperty("mac")
  @NotNull

  public String getMac() {
    return mac;
  }
  public void setMac(String mac) {
    this.mac = mac;
  }

  /**
   * Datacenter identifier for the asset.
   **/
  public ServerAsset datacenter(String datacenter) {
    this.datacenter = datacenter;
    return this;
  }

  
  @ApiModelProperty(example = "2", required = true, value = "Datacenter identifier for the asset.")
  @JsonProperty("datacenter")
  @NotNull

  public String getDatacenter() {
    return datacenter;
  }
  public void setDatacenter(String datacenter) {
    this.datacenter = datacenter;
  }

  /**
   * Type identifier for the asset.
   **/
  public ServerAsset typeId(String typeId) {
    this.typeId = typeId;
    return this;
  }

  
  @ApiModelProperty(example = "1", required = true, value = "Type identifier for the asset.")
  @JsonProperty("type_id")
  @NotNull

  public String getTypeId() {
    return typeId;
  }
  public void setTypeId(String typeId) {
    this.typeId = typeId;
  }

  /**
   * Asset tag associated with the asset.
   **/
  public ServerAsset assetTag(String assetTag) {
    this.assetTag = assetTag;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "Asset tag associated with the asset.")
  @JsonProperty("asset_tag")
  @NotNull

  public String getAssetTag() {
    return assetTag;
  }
  public void setAssetTag(String assetTag) {
    this.assetTag = assetTag;
  }

  /**
   * Rack identifier for the asset.
   **/
  public ServerAsset rack(String rack) {
    this.rack = rack;
    return this;
  }

  
  @ApiModelProperty(example = "68", required = true, value = "Rack identifier for the asset.")
  @JsonProperty("rack")
  @NotNull

  public String getRack() {
    return rack;
  }
  public void setRack(String rack) {
    this.rack = rack;
  }

  /**
   * Row identifier for the asset.
   **/
  public ServerAsset row(String row) {
    this.row = row;
    return this;
  }

  
  @ApiModelProperty(example = "017", required = true, value = "Row identifier for the asset.")
  @JsonProperty("row")
  @NotNull

  public String getRow() {
    return row;
  }
  public void setRow(String row) {
    this.row = row;
  }

  /**
   * Column identifier for the asset.
   **/
  public ServerAsset col(String col) {
    this.col = col;
    return this;
  }

  
  @ApiModelProperty(example = "06", required = true, value = "Column identifier for the asset.")
  @JsonProperty("col")
  @NotNull

  public String getCol() {
    return col;
  }
  public void setCol(String col) {
    this.col = col;
  }

  /**
   * Starting unit identifier for the asset.
   **/
  public ServerAsset unitStart(String unitStart) {
    this.unitStart = unitStart;
    return this;
  }

  
  @ApiModelProperty(example = "37", required = true, value = "Starting unit identifier for the asset.")
  @JsonProperty("unit_start")
  @NotNull

  public String getUnitStart() {
    return unitStart;
  }
  public void setUnitStart(String unitStart) {
    this.unitStart = unitStart;
  }

  /**
   * Ending unit identifier for the asset.
   **/
  public ServerAsset unitEnd(String unitEnd) {
    this.unitEnd = unitEnd;
    return this;
  }

  
  @ApiModelProperty(example = "37", required = true, value = "Ending unit identifier for the asset.")
  @JsonProperty("unit_end")
  @NotNull

  public String getUnitEnd() {
    return unitEnd;
  }
  public void setUnitEnd(String unitEnd) {
    this.unitEnd = unitEnd;
  }

  /**
   * Subunit identifier for the asset.
   **/
  public ServerAsset unitSub(String unitSub) {
    this.unitSub = unitSub;
    return this;
  }

  
  @ApiModelProperty(example = "0", required = true, value = "Subunit identifier for the asset.")
  @JsonProperty("unit_sub")
  @NotNull

  public String getUnitSub() {
    return unitSub;
  }
  public void setUnitSub(String unitSub) {
    this.unitSub = unitSub;
  }

  /**
   * IPMI MAC address associated with the asset.
   **/
  public ServerAsset ipmiMac(String ipmiMac) {
    this.ipmiMac = ipmiMac;
    return this;
  }

  
  @ApiModelProperty(example = "0c:c4:7a:af:35:00", required = true, value = "IPMI MAC address associated with the asset.")
  @JsonProperty("ipmi_mac")
  @NotNull

  public String getIpmiMac() {
    return ipmiMac;
  }
  public void setIpmiMac(String ipmiMac) {
    this.ipmiMac = ipmiMac;
  }

  /**
   * IPMI IP address associated with the asset.
   **/
  public ServerAsset ipmiIp(String ipmiIp) {
    this.ipmiIp = ipmiIp;
    return this;
  }

  
  @ApiModelProperty(example = "10.8.69.7", required = true, value = "IPMI IP address associated with the asset.")
  @JsonProperty("ipmi_ip")
  @NotNull

  public String getIpmiIp() {
    return ipmiIp;
  }
  public void setIpmiIp(String ipmiIp) {
    this.ipmiIp = ipmiIp;
  }

  /**
   * IPMI admin username associated with the asset.
   **/
  public ServerAsset ipmiAdminUsername(String ipmiAdminUsername) {
    this.ipmiAdminUsername = ipmiAdminUsername;
    return this;
  }

  
  @ApiModelProperty(value = "IPMI admin username associated with the asset.")
  @JsonProperty("ipmi_admin_username")
  @NotNull

  public String getIpmiAdminUsername() {
    return ipmiAdminUsername;
  }
  public void setIpmiAdminUsername(String ipmiAdminUsername) {
    this.ipmiAdminUsername = ipmiAdminUsername;
  }

  /**
   * IPMI admin password associated with the asset.
   **/
  public ServerAsset ipmiAdminPassword(String ipmiAdminPassword) {
    this.ipmiAdminPassword = ipmiAdminPassword;
    return this;
  }

  
  @ApiModelProperty(value = "IPMI admin password associated with the asset.")
  @JsonProperty("ipmi_admin_password")
  @NotNull

  public String getIpmiAdminPassword() {
    return ipmiAdminPassword;
  }
  public void setIpmiAdminPassword(String ipmiAdminPassword) {
    this.ipmiAdminPassword = ipmiAdminPassword;
  }

  /**
   * IPMI client username associated with the asset.
   **/
  public ServerAsset ipmiClientUsername(String ipmiClientUsername) {
    this.ipmiClientUsername = ipmiClientUsername;
    return this;
  }

  
  @ApiModelProperty(value = "IPMI client username associated with the asset.")
  @JsonProperty("ipmi_client_username")
  @NotNull

  public String getIpmiClientUsername() {
    return ipmiClientUsername;
  }
  public void setIpmiClientUsername(String ipmiClientUsername) {
    this.ipmiClientUsername = ipmiClientUsername;
  }

  /**
   * IPMI client password associated with the asset.
   **/
  public ServerAsset ipmiClientPassword(String ipmiClientPassword) {
    this.ipmiClientPassword = ipmiClientPassword;
    return this;
  }

  
  @ApiModelProperty(value = "IPMI client password associated with the asset.")
  @JsonProperty("ipmi_client_password")
  @NotNull

  public String getIpmiClientPassword() {
    return ipmiClientPassword;
  }
  public void setIpmiClientPassword(String ipmiClientPassword) {
    this.ipmiClientPassword = ipmiClientPassword;
  }

  /**
   * IPMI update status associated with the asset.
   **/
  public ServerAsset ipmiUpdated(String ipmiUpdated) {
    this.ipmiUpdated = ipmiUpdated;
    return this;
  }

  
  @ApiModelProperty(value = "IPMI update status associated with the asset.")
  @JsonProperty("ipmi_updated")
  @NotNull

  public String getIpmiUpdated() {
    return ipmiUpdated;
  }
  public void setIpmiUpdated(String ipmiUpdated) {
    this.ipmiUpdated = ipmiUpdated;
  }

  /**
   * IPMI working status associated with the asset.
   **/
  public ServerAsset ipmiWorking(String ipmiWorking) {
    this.ipmiWorking = ipmiWorking;
    return this;
  }

  
  @ApiModelProperty(example = "0", required = true, value = "IPMI working status associated with the asset.")
  @JsonProperty("ipmi_working")
  @NotNull

  public String getIpmiWorking() {
    return ipmiWorking;
  }
  public void setIpmiWorking(String ipmiWorking) {
    this.ipmiWorking = ipmiWorking;
  }

  /**
   * Company associated with the asset.
   **/
  public ServerAsset company(String company) {
    this.company = company;
    return this;
  }

  
  @ApiModelProperty(example = "int", required = true, value = "Company associated with the asset.")
  @JsonProperty("company")
  @NotNull

  public String getCompany() {
    return company;
  }
  public void setCompany(String company) {
    this.company = company;
  }

  /**
   * Comments associated with the asset.
   **/
  public ServerAsset comments(String comments) {
    this.comments = comments;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "Comments associated with the asset.")
  @JsonProperty("comments")
  @NotNull

  public String getComments() {
    return comments;
  }
  public void setComments(String comments) {
    this.comments = comments;
  }

  /**
   * Make of the asset.
   **/
  public ServerAsset make(String make) {
    this.make = make;
    return this;
  }

  
  @ApiModelProperty(example = "Supermicro", required = true, value = "Make of the asset.")
  @JsonProperty("make")
  @NotNull

  public String getMake() {
    return make;
  }
  public void setMake(String make) {
    this.make = make;
  }

  /**
   * Model of the asset.
   **/
  public ServerAsset model(String model) {
    this.model = model;
    return this;
  }

  
  @ApiModelProperty(example = "SYS-6018R-TDW", required = true, value = "Model of the asset.")
  @JsonProperty("model")
  @NotNull

  public String getModel() {
    return model;
  }
  public void setModel(String model) {
    this.model = model;
  }

  /**
   * Description of the asset.
   **/
  public ServerAsset description(String description) {
    this.description = description;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "Description of the asset.")
  @JsonProperty("description")
  @NotNull

  public String getDescription() {
    return description;
  }
  public void setDescription(String description) {
    this.description = description;
  }

  /**
   * Customer identifier for the asset.
   **/
  public ServerAsset customerId(String customerId) {
    this.customerId = customerId;
    return this;
  }

  
  @ApiModelProperty(example = "int5377", required = true, value = "Customer identifier for the asset.")
  @JsonProperty("customer_id")
  @NotNull

  public String getCustomerId() {
    return customerId;
  }
  public void setCustomerId(String customerId) {
    this.customerId = customerId;
  }

  /**
   * External identifier for the asset.
   **/
  public ServerAsset externalId(String externalId) {
    this.externalId = externalId;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "External identifier for the asset.")
  @JsonProperty("external_id")
  @NotNull

  public String getExternalId() {
    return externalId;
  }
  public void setExternalId(String externalId) {
    this.externalId = externalId;
  }

  /**
   * Billing status of the asset.
   **/
  public ServerAsset billingStatus(String billingStatus) {
    this.billingStatus = billingStatus;
    return this;
  }

  
  @ApiModelProperty(example = "active", required = true, value = "Billing status of the asset.")
  @JsonProperty("billing_status")
  @NotNull

  public String getBillingStatus() {
    return billingStatus;
  }
  public void setBillingStatus(String billingStatus) {
    this.billingStatus = billingStatus;
  }

  /**
   * Overdue status of the asset.
   **/
  public ServerAsset overdue(String overdue) {
    this.overdue = overdue;
    return this;
  }

  
  @ApiModelProperty(example = "0", required = true, value = "Overdue status of the asset.")
  @JsonProperty("overdue")
  @NotNull

  public String getOverdue() {
    return overdue;
  }
  public void setOverdue(String overdue) {
    this.overdue = overdue;
  }

  /**
   * Timestamp of asset creation.
   **/
  public ServerAsset createTimestamp(String createTimestamp) {
    this.createTimestamp = createTimestamp;
    return this;
  }

  
  @ApiModelProperty(value = "Timestamp of asset creation.")
  @JsonProperty("create_timestamp")
  @NotNull

  public String getCreateTimestamp() {
    return createTimestamp;
  }
  public void setCreateTimestamp(String createTimestamp) {
    this.createTimestamp = createTimestamp;
  }

  /**
   * Timestamp of asset update.
   **/
  public ServerAsset updateTimestamp(String updateTimestamp) {
    this.updateTimestamp = updateTimestamp;
    return this;
  }

  
  @ApiModelProperty(value = "Timestamp of asset update.")
  @JsonProperty("update_timestamp")
  @NotNull

  public String getUpdateTimestamp() {
    return updateTimestamp;
  }
  public void setUpdateTimestamp(String updateTimestamp) {
    this.updateTimestamp = updateTimestamp;
  }

  /**
   * Asset identifier for the asset.
   **/
  public ServerAsset assetId(String assetId) {
    this.assetId = assetId;
    return this;
  }

  
  @ApiModelProperty(example = "1", required = true, value = "Asset identifier for the asset.")
  @JsonProperty("asset_id")
  @NotNull

  public String getAssetId() {
    return assetId;
  }
  public void setAssetId(String assetId) {
    this.assetId = assetId;
  }

  /**
   * Name of the asset.
   **/
  public ServerAsset assetName(String assetName) {
    this.assetName = assetName;
    return this;
  }

  
  @ApiModelProperty(example = "server", required = true, value = "Name of the asset.")
  @JsonProperty("asset_name")
  @NotNull

  public String getAssetName() {
    return assetName;
  }
  public void setAssetName(String assetName) {
    this.assetName = assetName;
  }

  /**
   * Rack identifier for the asset.
   **/
  public ServerAsset rackId(String rackId) {
    this.rackId = rackId;
    return this;
  }

  
  @ApiModelProperty(example = "68", required = true, value = "Rack identifier for the asset.")
  @JsonProperty("rack_id")
  @NotNull

  public String getRackId() {
    return rackId;
  }
  public void setRackId(String rackId) {
    this.rackId = rackId;
  }

  /**
   * Rack name associated with the asset.
   **/
  public ServerAsset rackName(String rackName) {
    this.rackName = rackName;
    return this;
  }

  
  @ApiModelProperty(example = "112.16", required = true, value = "Rack name associated with the asset.")
  @JsonProperty("rack_name")
  @NotNull

  public String getRackName() {
    return rackName;
  }
  public void setRackName(String rackName) {
    this.rackName = rackName;
  }

  /**
   * Location of the rack associated with the asset.
   **/
  public ServerAsset rackLocation(String rackLocation) {
    this.rackLocation = rackLocation;
    return this;
  }

  
  @ApiModelProperty(example = "2", required = true, value = "Location of the rack associated with the asset.")
  @JsonProperty("rack_location")
  @NotNull

  public String getRackLocation() {
    return rackLocation;
  }
  public void setRackLocation(String rackLocation) {
    this.rackLocation = rackLocation;
  }

  /**
   * Size of the rack associated with the asset.
   **/
  public ServerAsset rackSize(String rackSize) {
    this.rackSize = rackSize;
    return this;
  }

  
  @ApiModelProperty(example = "44", required = true, value = "Size of the rack associated with the asset.")
  @JsonProperty("rack_size")
  @NotNull

  public String getRackSize() {
    return rackSize;
  }
  public void setRackSize(String rackSize) {
    this.rackSize = rackSize;
  }

  /**
   * X-coordinate of the asset within the rack.
   **/
  public ServerAsset rackX(String rackX) {
    this.rackX = rackX;
    return this;
  }

  
  @ApiModelProperty(example = "25", required = true, value = "X-coordinate of the asset within the rack.")
  @JsonProperty("rack_x")
  @NotNull

  public String getRackX() {
    return rackX;
  }
  public void setRackX(String rackX) {
    this.rackX = rackX;
  }

  /**
   * Y-coordinate of the asset within the rack.
   **/
  public ServerAsset rackY(String rackY) {
    this.rackY = rackY;
    return this;
  }

  
  @ApiModelProperty(example = "5", required = true, value = "Y-coordinate of the asset within the rack.")
  @JsonProperty("rack_y")
  @NotNull

  public String getRackY() {
    return rackY;
  }
  public void setRackY(String rackY) {
    this.rackY = rackY;
  }

  /**
   * Comment associated with the asset.
   **/
  public ServerAsset comment(String comment) {
    this.comment = comment;
    return this;
  }

  
  @ApiModelProperty(value = "Comment associated with the asset.")
  @JsonProperty("comment")
  @NotNull

  public String getComment() {
    return comment;
  }
  public void setComment(String comment) {
    this.comment = comment;
  }

  /**
   * List of switchports associated with the asset.
   **/
  public ServerAsset switchports(List<Integer> switchports) {
    this.switchports = switchports;
    return this;
  }

  
  @ApiModelProperty(example = "[10414]", required = true, value = "List of switchports associated with the asset.")
  @JsonProperty("switchports")
  @NotNull

  public List<Integer> getSwitchports() {
    return switchports;
  }
  public void setSwitchports(List<Integer> switchports) {
    this.switchports = switchports;
  }

  /**
   * List of VLANs associated with the asset.
   **/
  public ServerAsset vlans(List<String> vlans) {
    this.vlans = vlans;
    return this;
  }

  
  @ApiModelProperty(example = "[]", required = true, value = "List of VLANs associated with the asset.")
  @JsonProperty("vlans")
  @NotNull

  public List<String> getVlans() {
    return vlans;
  }
  public void setVlans(List<String> vlans) {
    this.vlans = vlans;
  }

  /**
   * List of IPv6 VLANs associated with the asset.
   **/
  public ServerAsset vlans6(List<String> vlans6) {
    this.vlans6 = vlans6;
    return this;
  }

  
  @ApiModelProperty(example = "[]", required = true, value = "List of IPv6 VLANs associated with the asset.")
  @JsonProperty("vlans6")
  @NotNull

  public List<String> getVlans6() {
    return vlans6;
  }
  public void setVlans6(List<String> vlans6) {
    this.vlans6 = vlans6;
  }

  /**
   **/
  public ServerAsset lease(ServerLease lease) {
    this.lease = lease;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("lease")
  @NotNull

  public ServerLease getLease() {
    return lease;
  }
  public void setLease(ServerLease lease) {
    this.lease = lease;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServerAsset serverAsset = (ServerAsset) o;
    return Objects.equals(id, serverAsset.id) &&
        Objects.equals(orderId, serverAsset.orderId) &&
        Objects.equals(hostname, serverAsset.hostname) &&
        Objects.equals(status, serverAsset.status) &&
        Objects.equals(primaryIpv4, serverAsset.primaryIpv4) &&
        Objects.equals(primaryIpv6, serverAsset.primaryIpv6) &&
        Objects.equals(mac, serverAsset.mac) &&
        Objects.equals(datacenter, serverAsset.datacenter) &&
        Objects.equals(typeId, serverAsset.typeId) &&
        Objects.equals(assetTag, serverAsset.assetTag) &&
        Objects.equals(rack, serverAsset.rack) &&
        Objects.equals(row, serverAsset.row) &&
        Objects.equals(col, serverAsset.col) &&
        Objects.equals(unitStart, serverAsset.unitStart) &&
        Objects.equals(unitEnd, serverAsset.unitEnd) &&
        Objects.equals(unitSub, serverAsset.unitSub) &&
        Objects.equals(ipmiMac, serverAsset.ipmiMac) &&
        Objects.equals(ipmiIp, serverAsset.ipmiIp) &&
        Objects.equals(ipmiAdminUsername, serverAsset.ipmiAdminUsername) &&
        Objects.equals(ipmiAdminPassword, serverAsset.ipmiAdminPassword) &&
        Objects.equals(ipmiClientUsername, serverAsset.ipmiClientUsername) &&
        Objects.equals(ipmiClientPassword, serverAsset.ipmiClientPassword) &&
        Objects.equals(ipmiUpdated, serverAsset.ipmiUpdated) &&
        Objects.equals(ipmiWorking, serverAsset.ipmiWorking) &&
        Objects.equals(company, serverAsset.company) &&
        Objects.equals(comments, serverAsset.comments) &&
        Objects.equals(make, serverAsset.make) &&
        Objects.equals(model, serverAsset.model) &&
        Objects.equals(description, serverAsset.description) &&
        Objects.equals(customerId, serverAsset.customerId) &&
        Objects.equals(externalId, serverAsset.externalId) &&
        Objects.equals(billingStatus, serverAsset.billingStatus) &&
        Objects.equals(overdue, serverAsset.overdue) &&
        Objects.equals(createTimestamp, serverAsset.createTimestamp) &&
        Objects.equals(updateTimestamp, serverAsset.updateTimestamp) &&
        Objects.equals(assetId, serverAsset.assetId) &&
        Objects.equals(assetName, serverAsset.assetName) &&
        Objects.equals(rackId, serverAsset.rackId) &&
        Objects.equals(rackName, serverAsset.rackName) &&
        Objects.equals(rackLocation, serverAsset.rackLocation) &&
        Objects.equals(rackSize, serverAsset.rackSize) &&
        Objects.equals(rackX, serverAsset.rackX) &&
        Objects.equals(rackY, serverAsset.rackY) &&
        Objects.equals(comment, serverAsset.comment) &&
        Objects.equals(switchports, serverAsset.switchports) &&
        Objects.equals(vlans, serverAsset.vlans) &&
        Objects.equals(vlans6, serverAsset.vlans6) &&
        Objects.equals(lease, serverAsset.lease);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, orderId, hostname, status, primaryIpv4, primaryIpv6, mac, datacenter, typeId, assetTag, rack, row, col, unitStart, unitEnd, unitSub, ipmiMac, ipmiIp, ipmiAdminUsername, ipmiAdminPassword, ipmiClientUsername, ipmiClientPassword, ipmiUpdated, ipmiWorking, company, comments, make, model, description, customerId, externalId, billingStatus, overdue, createTimestamp, updateTimestamp, assetId, assetName, rackId, rackName, rackLocation, rackSize, rackX, rackY, comment, switchports, vlans, vlans6, lease);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerAsset {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    orderId: ").append(toIndentedString(orderId)).append("\n");
    sb.append("    hostname: ").append(toIndentedString(hostname)).append("\n");
    sb.append("    status: ").append(toIndentedString(status)).append("\n");
    sb.append("    primaryIpv4: ").append(toIndentedString(primaryIpv4)).append("\n");
    sb.append("    primaryIpv6: ").append(toIndentedString(primaryIpv6)).append("\n");
    sb.append("    mac: ").append(toIndentedString(mac)).append("\n");
    sb.append("    datacenter: ").append(toIndentedString(datacenter)).append("\n");
    sb.append("    typeId: ").append(toIndentedString(typeId)).append("\n");
    sb.append("    assetTag: ").append(toIndentedString(assetTag)).append("\n");
    sb.append("    rack: ").append(toIndentedString(rack)).append("\n");
    sb.append("    row: ").append(toIndentedString(row)).append("\n");
    sb.append("    col: ").append(toIndentedString(col)).append("\n");
    sb.append("    unitStart: ").append(toIndentedString(unitStart)).append("\n");
    sb.append("    unitEnd: ").append(toIndentedString(unitEnd)).append("\n");
    sb.append("    unitSub: ").append(toIndentedString(unitSub)).append("\n");
    sb.append("    ipmiMac: ").append(toIndentedString(ipmiMac)).append("\n");
    sb.append("    ipmiIp: ").append(toIndentedString(ipmiIp)).append("\n");
    sb.append("    ipmiAdminUsername: ").append(toIndentedString(ipmiAdminUsername)).append("\n");
    sb.append("    ipmiAdminPassword: ").append(toIndentedString(ipmiAdminPassword)).append("\n");
    sb.append("    ipmiClientUsername: ").append(toIndentedString(ipmiClientUsername)).append("\n");
    sb.append("    ipmiClientPassword: ").append(toIndentedString(ipmiClientPassword)).append("\n");
    sb.append("    ipmiUpdated: ").append(toIndentedString(ipmiUpdated)).append("\n");
    sb.append("    ipmiWorking: ").append(toIndentedString(ipmiWorking)).append("\n");
    sb.append("    company: ").append(toIndentedString(company)).append("\n");
    sb.append("    comments: ").append(toIndentedString(comments)).append("\n");
    sb.append("    make: ").append(toIndentedString(make)).append("\n");
    sb.append("    model: ").append(toIndentedString(model)).append("\n");
    sb.append("    description: ").append(toIndentedString(description)).append("\n");
    sb.append("    customerId: ").append(toIndentedString(customerId)).append("\n");
    sb.append("    externalId: ").append(toIndentedString(externalId)).append("\n");
    sb.append("    billingStatus: ").append(toIndentedString(billingStatus)).append("\n");
    sb.append("    overdue: ").append(toIndentedString(overdue)).append("\n");
    sb.append("    createTimestamp: ").append(toIndentedString(createTimestamp)).append("\n");
    sb.append("    updateTimestamp: ").append(toIndentedString(updateTimestamp)).append("\n");
    sb.append("    assetId: ").append(toIndentedString(assetId)).append("\n");
    sb.append("    assetName: ").append(toIndentedString(assetName)).append("\n");
    sb.append("    rackId: ").append(toIndentedString(rackId)).append("\n");
    sb.append("    rackName: ").append(toIndentedString(rackName)).append("\n");
    sb.append("    rackLocation: ").append(toIndentedString(rackLocation)).append("\n");
    sb.append("    rackSize: ").append(toIndentedString(rackSize)).append("\n");
    sb.append("    rackX: ").append(toIndentedString(rackX)).append("\n");
    sb.append("    rackY: ").append(toIndentedString(rackY)).append("\n");
    sb.append("    comment: ").append(toIndentedString(comment)).append("\n");
    sb.append("    switchports: ").append(toIndentedString(switchports)).append("\n");
    sb.append("    vlans: ").append(toIndentedString(vlans)).append("\n");
    sb.append("    vlans6: ").append(toIndentedString(vlans6)).append("\n");
    sb.append("    lease: ").append(toIndentedString(lease)).append("\n");
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

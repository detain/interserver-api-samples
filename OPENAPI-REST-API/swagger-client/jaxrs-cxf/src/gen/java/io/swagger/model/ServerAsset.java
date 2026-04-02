package io.swagger.model;

import io.swagger.model.ServerLease;
import java.util.ArrayList;
import java.util.List;
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

public class ServerAsset   {
  
  @Schema(example = "3497", required = true, description = "Unique identifier for the asset.")
 /**
   * Unique identifier for the asset.  
  **/
  private Integer id = null;
  
  @Schema(example = "16058", required = true, description = "Order identifier for the asset.")
 /**
   * Order identifier for the asset.  
  **/
  private String orderId = null;
  
  @Schema(example = "myserver.host.com", required = true, description = "Hostname associated with the asset.")
 /**
   * Hostname associated with the asset.  
  **/
  private String hostname = null;
  
  @Schema(example = "active", required = true, description = "Status of the asset.")
 /**
   * Status of the asset.  
  **/
  private String status = null;
  
  @Schema(example = "1.2.3.250", required = true, description = "Primary IPv4 address of the asset.")
 /**
   * Primary IPv4 address of the asset.  
  **/
  private String primaryIpv4 = null;
  
  @Schema(required = true, description = "Primary IPv6 address of the asset.")
 /**
   * Primary IPv6 address of the asset.  
  **/
  private String primaryIpv6 = null;
  
  @Schema(description = "MAC address associated with the asset.")
 /**
   * MAC address associated with the asset.  
  **/
  private String mac = null;
  
  @Schema(example = "2", required = true, description = "Datacenter identifier for the asset.")
 /**
   * Datacenter identifier for the asset.  
  **/
  private String datacenter = null;
  
  @Schema(example = "1", required = true, description = "Type identifier for the asset.")
 /**
   * Type identifier for the asset.  
  **/
  private String typeId = null;
  
  @Schema(required = true, description = "Asset tag associated with the asset.")
 /**
   * Asset tag associated with the asset.  
  **/
  private String assetTag = null;
  
  @Schema(example = "68", required = true, description = "Rack identifier for the asset.")
 /**
   * Rack identifier for the asset.  
  **/
  private String rack = null;
  
  @Schema(example = "017", required = true, description = "Row identifier for the asset.")
 /**
   * Row identifier for the asset.  
  **/
  private String row = null;
  
  @Schema(example = "06", required = true, description = "Column identifier for the asset.")
 /**
   * Column identifier for the asset.  
  **/
  private String col = null;
  
  @Schema(example = "37", required = true, description = "Starting unit identifier for the asset.")
 /**
   * Starting unit identifier for the asset.  
  **/
  private String unitStart = null;
  
  @Schema(example = "37", required = true, description = "Ending unit identifier for the asset.")
 /**
   * Ending unit identifier for the asset.  
  **/
  private String unitEnd = null;
  
  @Schema(example = "0", required = true, description = "Subunit identifier for the asset.")
 /**
   * Subunit identifier for the asset.  
  **/
  private String unitSub = null;
  
  @Schema(example = "0c:c4:7a:af:35:00", required = true, description = "IPMI MAC address associated with the asset.")
 /**
   * IPMI MAC address associated with the asset.  
  **/
  private String ipmiMac = null;
  
  @Schema(example = "10.8.69.7", required = true, description = "IPMI IP address associated with the asset.")
 /**
   * IPMI IP address associated with the asset.  
  **/
  private String ipmiIp = null;
  
  @Schema(description = "IPMI admin username associated with the asset.")
 /**
   * IPMI admin username associated with the asset.  
  **/
  private String ipmiAdminUsername = null;
  
  @Schema(description = "IPMI admin password associated with the asset.")
 /**
   * IPMI admin password associated with the asset.  
  **/
  private String ipmiAdminPassword = null;
  
  @Schema(description = "IPMI client username associated with the asset.")
 /**
   * IPMI client username associated with the asset.  
  **/
  private String ipmiClientUsername = null;
  
  @Schema(description = "IPMI client password associated with the asset.")
 /**
   * IPMI client password associated with the asset.  
  **/
  private String ipmiClientPassword = null;
  
  @Schema(description = "IPMI update status associated with the asset.")
 /**
   * IPMI update status associated with the asset.  
  **/
  private String ipmiUpdated = null;
  
  @Schema(example = "0", required = true, description = "IPMI working status associated with the asset.")
 /**
   * IPMI working status associated with the asset.  
  **/
  private String ipmiWorking = null;
  
  @Schema(example = "int", required = true, description = "Company associated with the asset.")
 /**
   * Company associated with the asset.  
  **/
  private String company = null;
  
  @Schema(required = true, description = "Comments associated with the asset.")
 /**
   * Comments associated with the asset.  
  **/
  private String comments = null;
  
  @Schema(example = "Supermicro", required = true, description = "Make of the asset.")
 /**
   * Make of the asset.  
  **/
  private String make = null;
  
  @Schema(example = "SYS-6018R-TDW", required = true, description = "Model of the asset.")
 /**
   * Model of the asset.  
  **/
  private String model = null;
  
  @Schema(required = true, description = "Description of the asset.")
 /**
   * Description of the asset.  
  **/
  private String description = null;
  
  @Schema(example = "int5377", required = true, description = "Customer identifier for the asset.")
 /**
   * Customer identifier for the asset.  
  **/
  private String customerId = null;
  
  @Schema(required = true, description = "External identifier for the asset.")
 /**
   * External identifier for the asset.  
  **/
  private String externalId = null;
  
  @Schema(example = "active", required = true, description = "Billing status of the asset.")
 /**
   * Billing status of the asset.  
  **/
  private String billingStatus = null;
  
  @Schema(example = "0", required = true, description = "Overdue status of the asset.")
 /**
   * Overdue status of the asset.  
  **/
  private String overdue = null;
  
  @Schema(description = "Timestamp of asset creation.")
 /**
   * Timestamp of asset creation.  
  **/
  private String createTimestamp = null;
  
  @Schema(description = "Timestamp of asset update.")
 /**
   * Timestamp of asset update.  
  **/
  private String updateTimestamp = null;
  
  @Schema(example = "1", required = true, description = "Asset identifier for the asset.")
 /**
   * Asset identifier for the asset.  
  **/
  private String assetId = null;
  
  @Schema(example = "server", required = true, description = "Name of the asset.")
 /**
   * Name of the asset.  
  **/
  private String assetName = null;
  
  @Schema(example = "68", required = true, description = "Rack identifier for the asset.")
 /**
   * Rack identifier for the asset.  
  **/
  private String rackId = null;
  
  @Schema(example = "112.16", required = true, description = "Rack name associated with the asset.")
 /**
   * Rack name associated with the asset.  
  **/
  private String rackName = null;
  
  @Schema(example = "2", required = true, description = "Location of the rack associated with the asset.")
 /**
   * Location of the rack associated with the asset.  
  **/
  private String rackLocation = null;
  
  @Schema(example = "44", required = true, description = "Size of the rack associated with the asset.")
 /**
   * Size of the rack associated with the asset.  
  **/
  private String rackSize = null;
  
  @Schema(example = "25", required = true, description = "X-coordinate of the asset within the rack.")
 /**
   * X-coordinate of the asset within the rack.  
  **/
  private String rackX = null;
  
  @Schema(example = "5", required = true, description = "Y-coordinate of the asset within the rack.")
 /**
   * Y-coordinate of the asset within the rack.  
  **/
  private String rackY = null;
  
  @Schema(description = "Comment associated with the asset.")
 /**
   * Comment associated with the asset.  
  **/
  private String comment = null;
  
  @Schema(example = "[10414]", required = true, description = "List of switchports associated with the asset.")
 /**
   * List of switchports associated with the asset.  
  **/
  private List<Integer> switchports = new ArrayList<Integer>();
  
  @Schema(example = "[]", required = true, description = "List of VLANs associated with the asset.")
 /**
   * List of VLANs associated with the asset.  
  **/
  private List<String> vlans = new ArrayList<String>();
  
  @Schema(example = "[]", required = true, description = "List of IPv6 VLANs associated with the asset.")
 /**
   * List of IPv6 VLANs associated with the asset.  
  **/
  private List<String> vlans6 = new ArrayList<String>();
  
  @Schema(required = true, description = "")
  private ServerLease lease = null;
 /**
   * Unique identifier for the asset.
   * @return id
  **/
  @JsonProperty("id")
  @NotNull
  public Integer getId() {
    return id;
  }

  public void setId(Integer id) {
    this.id = id;
  }

  public ServerAsset id(Integer id) {
    this.id = id;
    return this;
  }

 /**
   * Order identifier for the asset.
   * @return orderId
  **/
  @JsonProperty("order_id")
  @NotNull
  public String getOrderId() {
    return orderId;
  }

  public void setOrderId(String orderId) {
    this.orderId = orderId;
  }

  public ServerAsset orderId(String orderId) {
    this.orderId = orderId;
    return this;
  }

 /**
   * Hostname associated with the asset.
   * @return hostname
  **/
  @JsonProperty("hostname")
  @NotNull
  public String getHostname() {
    return hostname;
  }

  public void setHostname(String hostname) {
    this.hostname = hostname;
  }

  public ServerAsset hostname(String hostname) {
    this.hostname = hostname;
    return this;
  }

 /**
   * Status of the asset.
   * @return status
  **/
  @JsonProperty("status")
  @NotNull
  public String getStatus() {
    return status;
  }

  public void setStatus(String status) {
    this.status = status;
  }

  public ServerAsset status(String status) {
    this.status = status;
    return this;
  }

 /**
   * Primary IPv4 address of the asset.
   * @return primaryIpv4
  **/
  @JsonProperty("primary_ipv4")
  @NotNull
  public String getPrimaryIpv4() {
    return primaryIpv4;
  }

  public void setPrimaryIpv4(String primaryIpv4) {
    this.primaryIpv4 = primaryIpv4;
  }

  public ServerAsset primaryIpv4(String primaryIpv4) {
    this.primaryIpv4 = primaryIpv4;
    return this;
  }

 /**
   * Primary IPv6 address of the asset.
   * @return primaryIpv6
  **/
  @JsonProperty("primary_ipv6")
  @NotNull
  public String getPrimaryIpv6() {
    return primaryIpv6;
  }

  public void setPrimaryIpv6(String primaryIpv6) {
    this.primaryIpv6 = primaryIpv6;
  }

  public ServerAsset primaryIpv6(String primaryIpv6) {
    this.primaryIpv6 = primaryIpv6;
    return this;
  }

 /**
   * MAC address associated with the asset.
   * @return mac
  **/
  @JsonProperty("mac")
  @NotNull
  public String getMac() {
    return mac;
  }

  public void setMac(String mac) {
    this.mac = mac;
  }

  public ServerAsset mac(String mac) {
    this.mac = mac;
    return this;
  }

 /**
   * Datacenter identifier for the asset.
   * @return datacenter
  **/
  @JsonProperty("datacenter")
  @NotNull
  public String getDatacenter() {
    return datacenter;
  }

  public void setDatacenter(String datacenter) {
    this.datacenter = datacenter;
  }

  public ServerAsset datacenter(String datacenter) {
    this.datacenter = datacenter;
    return this;
  }

 /**
   * Type identifier for the asset.
   * @return typeId
  **/
  @JsonProperty("type_id")
  @NotNull
  public String getTypeId() {
    return typeId;
  }

  public void setTypeId(String typeId) {
    this.typeId = typeId;
  }

  public ServerAsset typeId(String typeId) {
    this.typeId = typeId;
    return this;
  }

 /**
   * Asset tag associated with the asset.
   * @return assetTag
  **/
  @JsonProperty("asset_tag")
  @NotNull
  public String getAssetTag() {
    return assetTag;
  }

  public void setAssetTag(String assetTag) {
    this.assetTag = assetTag;
  }

  public ServerAsset assetTag(String assetTag) {
    this.assetTag = assetTag;
    return this;
  }

 /**
   * Rack identifier for the asset.
   * @return rack
  **/
  @JsonProperty("rack")
  @NotNull
  public String getRack() {
    return rack;
  }

  public void setRack(String rack) {
    this.rack = rack;
  }

  public ServerAsset rack(String rack) {
    this.rack = rack;
    return this;
  }

 /**
   * Row identifier for the asset.
   * @return row
  **/
  @JsonProperty("row")
  @NotNull
  public String getRow() {
    return row;
  }

  public void setRow(String row) {
    this.row = row;
  }

  public ServerAsset row(String row) {
    this.row = row;
    return this;
  }

 /**
   * Column identifier for the asset.
   * @return col
  **/
  @JsonProperty("col")
  @NotNull
  public String getCol() {
    return col;
  }

  public void setCol(String col) {
    this.col = col;
  }

  public ServerAsset col(String col) {
    this.col = col;
    return this;
  }

 /**
   * Starting unit identifier for the asset.
   * @return unitStart
  **/
  @JsonProperty("unit_start")
  @NotNull
  public String getUnitStart() {
    return unitStart;
  }

  public void setUnitStart(String unitStart) {
    this.unitStart = unitStart;
  }

  public ServerAsset unitStart(String unitStart) {
    this.unitStart = unitStart;
    return this;
  }

 /**
   * Ending unit identifier for the asset.
   * @return unitEnd
  **/
  @JsonProperty("unit_end")
  @NotNull
  public String getUnitEnd() {
    return unitEnd;
  }

  public void setUnitEnd(String unitEnd) {
    this.unitEnd = unitEnd;
  }

  public ServerAsset unitEnd(String unitEnd) {
    this.unitEnd = unitEnd;
    return this;
  }

 /**
   * Subunit identifier for the asset.
   * @return unitSub
  **/
  @JsonProperty("unit_sub")
  @NotNull
  public String getUnitSub() {
    return unitSub;
  }

  public void setUnitSub(String unitSub) {
    this.unitSub = unitSub;
  }

  public ServerAsset unitSub(String unitSub) {
    this.unitSub = unitSub;
    return this;
  }

 /**
   * IPMI MAC address associated with the asset.
   * @return ipmiMac
  **/
  @JsonProperty("ipmi_mac")
  @NotNull
  public String getIpmiMac() {
    return ipmiMac;
  }

  public void setIpmiMac(String ipmiMac) {
    this.ipmiMac = ipmiMac;
  }

  public ServerAsset ipmiMac(String ipmiMac) {
    this.ipmiMac = ipmiMac;
    return this;
  }

 /**
   * IPMI IP address associated with the asset.
   * @return ipmiIp
  **/
  @JsonProperty("ipmi_ip")
  @NotNull
  public String getIpmiIp() {
    return ipmiIp;
  }

  public void setIpmiIp(String ipmiIp) {
    this.ipmiIp = ipmiIp;
  }

  public ServerAsset ipmiIp(String ipmiIp) {
    this.ipmiIp = ipmiIp;
    return this;
  }

 /**
   * IPMI admin username associated with the asset.
   * @return ipmiAdminUsername
  **/
  @JsonProperty("ipmi_admin_username")
  @NotNull
  public String getIpmiAdminUsername() {
    return ipmiAdminUsername;
  }

  public void setIpmiAdminUsername(String ipmiAdminUsername) {
    this.ipmiAdminUsername = ipmiAdminUsername;
  }

  public ServerAsset ipmiAdminUsername(String ipmiAdminUsername) {
    this.ipmiAdminUsername = ipmiAdminUsername;
    return this;
  }

 /**
   * IPMI admin password associated with the asset.
   * @return ipmiAdminPassword
  **/
  @JsonProperty("ipmi_admin_password")
  @NotNull
  public String getIpmiAdminPassword() {
    return ipmiAdminPassword;
  }

  public void setIpmiAdminPassword(String ipmiAdminPassword) {
    this.ipmiAdminPassword = ipmiAdminPassword;
  }

  public ServerAsset ipmiAdminPassword(String ipmiAdminPassword) {
    this.ipmiAdminPassword = ipmiAdminPassword;
    return this;
  }

 /**
   * IPMI client username associated with the asset.
   * @return ipmiClientUsername
  **/
  @JsonProperty("ipmi_client_username")
  @NotNull
  public String getIpmiClientUsername() {
    return ipmiClientUsername;
  }

  public void setIpmiClientUsername(String ipmiClientUsername) {
    this.ipmiClientUsername = ipmiClientUsername;
  }

  public ServerAsset ipmiClientUsername(String ipmiClientUsername) {
    this.ipmiClientUsername = ipmiClientUsername;
    return this;
  }

 /**
   * IPMI client password associated with the asset.
   * @return ipmiClientPassword
  **/
  @JsonProperty("ipmi_client_password")
  @NotNull
  public String getIpmiClientPassword() {
    return ipmiClientPassword;
  }

  public void setIpmiClientPassword(String ipmiClientPassword) {
    this.ipmiClientPassword = ipmiClientPassword;
  }

  public ServerAsset ipmiClientPassword(String ipmiClientPassword) {
    this.ipmiClientPassword = ipmiClientPassword;
    return this;
  }

 /**
   * IPMI update status associated with the asset.
   * @return ipmiUpdated
  **/
  @JsonProperty("ipmi_updated")
  @NotNull
  public String getIpmiUpdated() {
    return ipmiUpdated;
  }

  public void setIpmiUpdated(String ipmiUpdated) {
    this.ipmiUpdated = ipmiUpdated;
  }

  public ServerAsset ipmiUpdated(String ipmiUpdated) {
    this.ipmiUpdated = ipmiUpdated;
    return this;
  }

 /**
   * IPMI working status associated with the asset.
   * @return ipmiWorking
  **/
  @JsonProperty("ipmi_working")
  @NotNull
  public String getIpmiWorking() {
    return ipmiWorking;
  }

  public void setIpmiWorking(String ipmiWorking) {
    this.ipmiWorking = ipmiWorking;
  }

  public ServerAsset ipmiWorking(String ipmiWorking) {
    this.ipmiWorking = ipmiWorking;
    return this;
  }

 /**
   * Company associated with the asset.
   * @return company
  **/
  @JsonProperty("company")
  @NotNull
  public String getCompany() {
    return company;
  }

  public void setCompany(String company) {
    this.company = company;
  }

  public ServerAsset company(String company) {
    this.company = company;
    return this;
  }

 /**
   * Comments associated with the asset.
   * @return comments
  **/
  @JsonProperty("comments")
  @NotNull
  public String getComments() {
    return comments;
  }

  public void setComments(String comments) {
    this.comments = comments;
  }

  public ServerAsset comments(String comments) {
    this.comments = comments;
    return this;
  }

 /**
   * Make of the asset.
   * @return make
  **/
  @JsonProperty("make")
  @NotNull
  public String getMake() {
    return make;
  }

  public void setMake(String make) {
    this.make = make;
  }

  public ServerAsset make(String make) {
    this.make = make;
    return this;
  }

 /**
   * Model of the asset.
   * @return model
  **/
  @JsonProperty("model")
  @NotNull
  public String getModel() {
    return model;
  }

  public void setModel(String model) {
    this.model = model;
  }

  public ServerAsset model(String model) {
    this.model = model;
    return this;
  }

 /**
   * Description of the asset.
   * @return description
  **/
  @JsonProperty("description")
  @NotNull
  public String getDescription() {
    return description;
  }

  public void setDescription(String description) {
    this.description = description;
  }

  public ServerAsset description(String description) {
    this.description = description;
    return this;
  }

 /**
   * Customer identifier for the asset.
   * @return customerId
  **/
  @JsonProperty("customer_id")
  @NotNull
  public String getCustomerId() {
    return customerId;
  }

  public void setCustomerId(String customerId) {
    this.customerId = customerId;
  }

  public ServerAsset customerId(String customerId) {
    this.customerId = customerId;
    return this;
  }

 /**
   * External identifier for the asset.
   * @return externalId
  **/
  @JsonProperty("external_id")
  @NotNull
  public String getExternalId() {
    return externalId;
  }

  public void setExternalId(String externalId) {
    this.externalId = externalId;
  }

  public ServerAsset externalId(String externalId) {
    this.externalId = externalId;
    return this;
  }

 /**
   * Billing status of the asset.
   * @return billingStatus
  **/
  @JsonProperty("billing_status")
  @NotNull
  public String getBillingStatus() {
    return billingStatus;
  }

  public void setBillingStatus(String billingStatus) {
    this.billingStatus = billingStatus;
  }

  public ServerAsset billingStatus(String billingStatus) {
    this.billingStatus = billingStatus;
    return this;
  }

 /**
   * Overdue status of the asset.
   * @return overdue
  **/
  @JsonProperty("overdue")
  @NotNull
  public String getOverdue() {
    return overdue;
  }

  public void setOverdue(String overdue) {
    this.overdue = overdue;
  }

  public ServerAsset overdue(String overdue) {
    this.overdue = overdue;
    return this;
  }

 /**
   * Timestamp of asset creation.
   * @return createTimestamp
  **/
  @JsonProperty("create_timestamp")
  @NotNull
  public String getCreateTimestamp() {
    return createTimestamp;
  }

  public void setCreateTimestamp(String createTimestamp) {
    this.createTimestamp = createTimestamp;
  }

  public ServerAsset createTimestamp(String createTimestamp) {
    this.createTimestamp = createTimestamp;
    return this;
  }

 /**
   * Timestamp of asset update.
   * @return updateTimestamp
  **/
  @JsonProperty("update_timestamp")
  @NotNull
  public String getUpdateTimestamp() {
    return updateTimestamp;
  }

  public void setUpdateTimestamp(String updateTimestamp) {
    this.updateTimestamp = updateTimestamp;
  }

  public ServerAsset updateTimestamp(String updateTimestamp) {
    this.updateTimestamp = updateTimestamp;
    return this;
  }

 /**
   * Asset identifier for the asset.
   * @return assetId
  **/
  @JsonProperty("asset_id")
  @NotNull
  public String getAssetId() {
    return assetId;
  }

  public void setAssetId(String assetId) {
    this.assetId = assetId;
  }

  public ServerAsset assetId(String assetId) {
    this.assetId = assetId;
    return this;
  }

 /**
   * Name of the asset.
   * @return assetName
  **/
  @JsonProperty("asset_name")
  @NotNull
  public String getAssetName() {
    return assetName;
  }

  public void setAssetName(String assetName) {
    this.assetName = assetName;
  }

  public ServerAsset assetName(String assetName) {
    this.assetName = assetName;
    return this;
  }

 /**
   * Rack identifier for the asset.
   * @return rackId
  **/
  @JsonProperty("rack_id")
  @NotNull
  public String getRackId() {
    return rackId;
  }

  public void setRackId(String rackId) {
    this.rackId = rackId;
  }

  public ServerAsset rackId(String rackId) {
    this.rackId = rackId;
    return this;
  }

 /**
   * Rack name associated with the asset.
   * @return rackName
  **/
  @JsonProperty("rack_name")
  @NotNull
  public String getRackName() {
    return rackName;
  }

  public void setRackName(String rackName) {
    this.rackName = rackName;
  }

  public ServerAsset rackName(String rackName) {
    this.rackName = rackName;
    return this;
  }

 /**
   * Location of the rack associated with the asset.
   * @return rackLocation
  **/
  @JsonProperty("rack_location")
  @NotNull
  public String getRackLocation() {
    return rackLocation;
  }

  public void setRackLocation(String rackLocation) {
    this.rackLocation = rackLocation;
  }

  public ServerAsset rackLocation(String rackLocation) {
    this.rackLocation = rackLocation;
    return this;
  }

 /**
   * Size of the rack associated with the asset.
   * @return rackSize
  **/
  @JsonProperty("rack_size")
  @NotNull
  public String getRackSize() {
    return rackSize;
  }

  public void setRackSize(String rackSize) {
    this.rackSize = rackSize;
  }

  public ServerAsset rackSize(String rackSize) {
    this.rackSize = rackSize;
    return this;
  }

 /**
   * X-coordinate of the asset within the rack.
   * @return rackX
  **/
  @JsonProperty("rack_x")
  @NotNull
  public String getRackX() {
    return rackX;
  }

  public void setRackX(String rackX) {
    this.rackX = rackX;
  }

  public ServerAsset rackX(String rackX) {
    this.rackX = rackX;
    return this;
  }

 /**
   * Y-coordinate of the asset within the rack.
   * @return rackY
  **/
  @JsonProperty("rack_y")
  @NotNull
  public String getRackY() {
    return rackY;
  }

  public void setRackY(String rackY) {
    this.rackY = rackY;
  }

  public ServerAsset rackY(String rackY) {
    this.rackY = rackY;
    return this;
  }

 /**
   * Comment associated with the asset.
   * @return comment
  **/
  @JsonProperty("comment")
  @NotNull
  public String getComment() {
    return comment;
  }

  public void setComment(String comment) {
    this.comment = comment;
  }

  public ServerAsset comment(String comment) {
    this.comment = comment;
    return this;
  }

 /**
   * List of switchports associated with the asset.
   * @return switchports
  **/
  @JsonProperty("switchports")
  @NotNull
  public List<Integer> getSwitchports() {
    return switchports;
  }

  public void setSwitchports(List<Integer> switchports) {
    this.switchports = switchports;
  }

  public ServerAsset switchports(List<Integer> switchports) {
    this.switchports = switchports;
    return this;
  }

  public ServerAsset addSwitchportsItem(Integer switchportsItem) {
    this.switchports.add(switchportsItem);
    return this;
  }

 /**
   * List of VLANs associated with the asset.
   * @return vlans
  **/
  @JsonProperty("vlans")
  @NotNull
  public List<String> getVlans() {
    return vlans;
  }

  public void setVlans(List<String> vlans) {
    this.vlans = vlans;
  }

  public ServerAsset vlans(List<String> vlans) {
    this.vlans = vlans;
    return this;
  }

  public ServerAsset addVlansItem(String vlansItem) {
    this.vlans.add(vlansItem);
    return this;
  }

 /**
   * List of IPv6 VLANs associated with the asset.
   * @return vlans6
  **/
  @JsonProperty("vlans6")
  @NotNull
  public List<String> getVlans6() {
    return vlans6;
  }

  public void setVlans6(List<String> vlans6) {
    this.vlans6 = vlans6;
  }

  public ServerAsset vlans6(List<String> vlans6) {
    this.vlans6 = vlans6;
    return this;
  }

  public ServerAsset addVlans6Item(String vlans6Item) {
    this.vlans6.add(vlans6Item);
    return this;
  }

 /**
   * Get lease
   * @return lease
  **/
  @JsonProperty("lease")
  @NotNull
  public ServerLease getLease() {
    return lease;
  }

  public void setLease(ServerLease lease) {
    this.lease = lease;
  }

  public ServerAsset lease(ServerLease lease) {
    this.lease = lease;
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

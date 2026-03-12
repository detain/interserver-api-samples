package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.jackson.nullable.JsonNullable;
import org.openapitools.model.ServerLease;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class ServerAsset  {
  
 /**
  * Unique identifier for the asset.
  */
  @ApiModelProperty(example = "3497", required = true, value = "Unique identifier for the asset.")

  private Integer id;

 /**
  * Order identifier for the asset.
  */
  @ApiModelProperty(example = "16058", required = true, value = "Order identifier for the asset.")

  private String orderId;

 /**
  * Hostname associated with the asset.
  */
  @ApiModelProperty(example = "myserver.host.com", required = true, value = "Hostname associated with the asset.")

  private String hostname;

 /**
  * Status of the asset.
  */
  @ApiModelProperty(example = "active", required = true, value = "Status of the asset.")

  private String status;

 /**
  * Primary IPv4 address of the asset.
  */
  @ApiModelProperty(example = "1.2.3.250", required = true, value = "Primary IPv4 address of the asset.")

  private String primaryIpv4;

 /**
  * Primary IPv6 address of the asset.
  */
  @ApiModelProperty(example = "", required = true, value = "Primary IPv6 address of the asset.")

  private String primaryIpv6;

 /**
  * Datacenter identifier for the asset.
  */
  @ApiModelProperty(example = "2", required = true, value = "Datacenter identifier for the asset.")

  private String datacenter;

 /**
  * Type identifier for the asset.
  */
  @ApiModelProperty(example = "1", required = true, value = "Type identifier for the asset.")

  private String typeId;

 /**
  * Asset tag associated with the asset.
  */
  @ApiModelProperty(example = "", required = true, value = "Asset tag associated with the asset.")

  private String assetTag;

 /**
  * Rack identifier for the asset.
  */
  @ApiModelProperty(example = "68", required = true, value = "Rack identifier for the asset.")

  private String rack;

 /**
  * Row identifier for the asset.
  */
  @ApiModelProperty(example = "017", required = true, value = "Row identifier for the asset.")

  private String row;

 /**
  * Column identifier for the asset.
  */
  @ApiModelProperty(example = "06", required = true, value = "Column identifier for the asset.")

  private String col;

 /**
  * Starting unit identifier for the asset.
  */
  @ApiModelProperty(example = "37", required = true, value = "Starting unit identifier for the asset.")

  private String unitStart;

 /**
  * Ending unit identifier for the asset.
  */
  @ApiModelProperty(example = "37", required = true, value = "Ending unit identifier for the asset.")

  private String unitEnd;

 /**
  * Subunit identifier for the asset.
  */
  @ApiModelProperty(example = "0", required = true, value = "Subunit identifier for the asset.")

  private String unitSub;

 /**
  * IPMI MAC address associated with the asset.
  */
  @ApiModelProperty(example = "0c:c4:7a:af:35:00", required = true, value = "IPMI MAC address associated with the asset.")

  private String ipmiMac;

 /**
  * IPMI IP address associated with the asset.
  */
  @ApiModelProperty(example = "10.8.69.7", required = true, value = "IPMI IP address associated with the asset.")

  private String ipmiIp;

 /**
  * IPMI working status associated with the asset.
  */
  @ApiModelProperty(example = "0", required = true, value = "IPMI working status associated with the asset.")

  private String ipmiWorking;

 /**
  * Company associated with the asset.
  */
  @ApiModelProperty(example = "int", required = true, value = "Company associated with the asset.")

  private String company;

 /**
  * Comments associated with the asset.
  */
  @ApiModelProperty(example = "", required = true, value = "Comments associated with the asset.")

  private String comments;

 /**
  * Make of the asset.
  */
  @ApiModelProperty(example = "Supermicro", required = true, value = "Make of the asset.")

  private String make;

 /**
  * Model of the asset.
  */
  @ApiModelProperty(example = "SYS-6018R-TDW", required = true, value = "Model of the asset.")

  private String model;

 /**
  * Description of the asset.
  */
  @ApiModelProperty(example = "", required = true, value = "Description of the asset.")

  private String description;

 /**
  * Customer identifier for the asset.
  */
  @ApiModelProperty(example = "int5377", required = true, value = "Customer identifier for the asset.")

  private String customerId;

 /**
  * External identifier for the asset.
  */
  @ApiModelProperty(example = "", required = true, value = "External identifier for the asset.")

  private String externalId;

 /**
  * Billing status of the asset.
  */
  @ApiModelProperty(example = "active", required = true, value = "Billing status of the asset.")

  private String billingStatus;

 /**
  * Overdue status of the asset.
  */
  @ApiModelProperty(example = "0", required = true, value = "Overdue status of the asset.")

  private String overdue;

 /**
  * Asset identifier for the asset.
  */
  @ApiModelProperty(example = "1", required = true, value = "Asset identifier for the asset.")

  private String assetId;

 /**
  * Name of the asset.
  */
  @ApiModelProperty(example = "server", required = true, value = "Name of the asset.")

  private String assetName;

 /**
  * Rack identifier for the asset.
  */
  @ApiModelProperty(example = "68", required = true, value = "Rack identifier for the asset.")

  private String rackId;

 /**
  * Rack name associated with the asset.
  */
  @ApiModelProperty(example = "112.16", required = true, value = "Rack name associated with the asset.")

  private String rackName;

 /**
  * Location of the rack associated with the asset.
  */
  @ApiModelProperty(example = "2", required = true, value = "Location of the rack associated with the asset.")

  private String rackLocation;

 /**
  * Size of the rack associated with the asset.
  */
  @ApiModelProperty(example = "44", required = true, value = "Size of the rack associated with the asset.")

  private String rackSize;

 /**
  * X-coordinate of the asset within the rack.
  */
  @ApiModelProperty(example = "25", required = true, value = "X-coordinate of the asset within the rack.")

  private String rackX;

 /**
  * Y-coordinate of the asset within the rack.
  */
  @ApiModelProperty(example = "5", required = true, value = "Y-coordinate of the asset within the rack.")

  private String rackY;

 /**
  * List of switchports associated with the asset.
  */
  @ApiModelProperty(example = "[10414]", required = true, value = "List of switchports associated with the asset.")

  private List<Integer> switchports = new ArrayList<>();

 /**
  * List of VLANs associated with the asset.
  */
  @ApiModelProperty(example = "[]", required = true, value = "List of VLANs associated with the asset.")

  private List<String> vlans = new ArrayList<>();

 /**
  * List of IPv6 VLANs associated with the asset.
  */
  @ApiModelProperty(example = "[]", required = true, value = "List of IPv6 VLANs associated with the asset.")

  private List<String> vlans6 = new ArrayList<>();

  @ApiModelProperty(required = true, value = "")

  private ServerLease lease;

 /**
  * MAC address associated with the asset.
  */
  @ApiModelProperty(value = "MAC address associated with the asset.")

  private Object mac = null;

 /**
  * IPMI admin username associated with the asset.
  */
  @ApiModelProperty(value = "IPMI admin username associated with the asset.")

  private Object ipmiAdminUsername = null;

 /**
  * IPMI admin password associated with the asset.
  */
  @ApiModelProperty(value = "IPMI admin password associated with the asset.")

  private Object ipmiAdminPassword = null;

 /**
  * IPMI client username associated with the asset.
  */
  @ApiModelProperty(value = "IPMI client username associated with the asset.")

  private Object ipmiClientUsername = null;

 /**
  * IPMI client password associated with the asset.
  */
  @ApiModelProperty(value = "IPMI client password associated with the asset.")

  private Object ipmiClientPassword = null;

 /**
  * IPMI update status associated with the asset.
  */
  @ApiModelProperty(value = "IPMI update status associated with the asset.")

  private Object ipmiUpdated = null;

 /**
  * Timestamp of asset creation.
  */
  @ApiModelProperty(value = "Timestamp of asset creation.")

  private Object createTimestamp = null;

 /**
  * Timestamp of asset update.
  */
  @ApiModelProperty(value = "Timestamp of asset update.")

  private Object updateTimestamp = null;

 /**
  * Comment associated with the asset.
  */
  @ApiModelProperty(value = "Comment associated with the asset.")

  private Object comment = null;
 /**
   * Unique identifier for the asset.
   * @return id
  **/
  @JsonProperty("id")
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
   * Datacenter identifier for the asset.
   * @return datacenter
  **/
  @JsonProperty("datacenter")
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
   * IPMI working status associated with the asset.
   * @return ipmiWorking
  **/
  @JsonProperty("ipmi_working")
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
   * Asset identifier for the asset.
   * @return assetId
  **/
  @JsonProperty("asset_id")
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
   * List of switchports associated with the asset.
   * @return switchports
  **/
  @JsonProperty("switchports")
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

 /**
   * MAC address associated with the asset.
   * @return mac
  **/
  @JsonProperty("mac")
  public Object getMac() {
    return mac;
  }

  public void setMac(Object mac) {
    this.mac = mac;
  }

  public ServerAsset mac(Object mac) {
    this.mac = mac;
    return this;
  }

 /**
   * IPMI admin username associated with the asset.
   * @return ipmiAdminUsername
  **/
  @JsonProperty("ipmi_admin_username")
  public Object getIpmiAdminUsername() {
    return ipmiAdminUsername;
  }

  public void setIpmiAdminUsername(Object ipmiAdminUsername) {
    this.ipmiAdminUsername = ipmiAdminUsername;
  }

  public ServerAsset ipmiAdminUsername(Object ipmiAdminUsername) {
    this.ipmiAdminUsername = ipmiAdminUsername;
    return this;
  }

 /**
   * IPMI admin password associated with the asset.
   * @return ipmiAdminPassword
  **/
  @JsonProperty("ipmi_admin_password")
  public Object getIpmiAdminPassword() {
    return ipmiAdminPassword;
  }

  public void setIpmiAdminPassword(Object ipmiAdminPassword) {
    this.ipmiAdminPassword = ipmiAdminPassword;
  }

  public ServerAsset ipmiAdminPassword(Object ipmiAdminPassword) {
    this.ipmiAdminPassword = ipmiAdminPassword;
    return this;
  }

 /**
   * IPMI client username associated with the asset.
   * @return ipmiClientUsername
  **/
  @JsonProperty("ipmi_client_username")
  public Object getIpmiClientUsername() {
    return ipmiClientUsername;
  }

  public void setIpmiClientUsername(Object ipmiClientUsername) {
    this.ipmiClientUsername = ipmiClientUsername;
  }

  public ServerAsset ipmiClientUsername(Object ipmiClientUsername) {
    this.ipmiClientUsername = ipmiClientUsername;
    return this;
  }

 /**
   * IPMI client password associated with the asset.
   * @return ipmiClientPassword
  **/
  @JsonProperty("ipmi_client_password")
  public Object getIpmiClientPassword() {
    return ipmiClientPassword;
  }

  public void setIpmiClientPassword(Object ipmiClientPassword) {
    this.ipmiClientPassword = ipmiClientPassword;
  }

  public ServerAsset ipmiClientPassword(Object ipmiClientPassword) {
    this.ipmiClientPassword = ipmiClientPassword;
    return this;
  }

 /**
   * IPMI update status associated with the asset.
   * @return ipmiUpdated
  **/
  @JsonProperty("ipmi_updated")
  public Object getIpmiUpdated() {
    return ipmiUpdated;
  }

  public void setIpmiUpdated(Object ipmiUpdated) {
    this.ipmiUpdated = ipmiUpdated;
  }

  public ServerAsset ipmiUpdated(Object ipmiUpdated) {
    this.ipmiUpdated = ipmiUpdated;
    return this;
  }

 /**
   * Timestamp of asset creation.
   * @return createTimestamp
  **/
  @JsonProperty("create_timestamp")
  public Object getCreateTimestamp() {
    return createTimestamp;
  }

  public void setCreateTimestamp(Object createTimestamp) {
    this.createTimestamp = createTimestamp;
  }

  public ServerAsset createTimestamp(Object createTimestamp) {
    this.createTimestamp = createTimestamp;
    return this;
  }

 /**
   * Timestamp of asset update.
   * @return updateTimestamp
  **/
  @JsonProperty("update_timestamp")
  public Object getUpdateTimestamp() {
    return updateTimestamp;
  }

  public void setUpdateTimestamp(Object updateTimestamp) {
    this.updateTimestamp = updateTimestamp;
  }

  public ServerAsset updateTimestamp(Object updateTimestamp) {
    this.updateTimestamp = updateTimestamp;
    return this;
  }

 /**
   * Comment associated with the asset.
   * @return comment
  **/
  @JsonProperty("comment")
  public Object getComment() {
    return comment;
  }

  public void setComment(Object comment) {
    this.comment = comment;
  }

  public ServerAsset comment(Object comment) {
    this.comment = comment;
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
    ServerAsset serverAsset = (ServerAsset) o;
    return Objects.equals(this.id, serverAsset.id) &&
        Objects.equals(this.orderId, serverAsset.orderId) &&
        Objects.equals(this.hostname, serverAsset.hostname) &&
        Objects.equals(this.status, serverAsset.status) &&
        Objects.equals(this.primaryIpv4, serverAsset.primaryIpv4) &&
        Objects.equals(this.primaryIpv6, serverAsset.primaryIpv6) &&
        Objects.equals(this.datacenter, serverAsset.datacenter) &&
        Objects.equals(this.typeId, serverAsset.typeId) &&
        Objects.equals(this.assetTag, serverAsset.assetTag) &&
        Objects.equals(this.rack, serverAsset.rack) &&
        Objects.equals(this.row, serverAsset.row) &&
        Objects.equals(this.col, serverAsset.col) &&
        Objects.equals(this.unitStart, serverAsset.unitStart) &&
        Objects.equals(this.unitEnd, serverAsset.unitEnd) &&
        Objects.equals(this.unitSub, serverAsset.unitSub) &&
        Objects.equals(this.ipmiMac, serverAsset.ipmiMac) &&
        Objects.equals(this.ipmiIp, serverAsset.ipmiIp) &&
        Objects.equals(this.ipmiWorking, serverAsset.ipmiWorking) &&
        Objects.equals(this.company, serverAsset.company) &&
        Objects.equals(this.comments, serverAsset.comments) &&
        Objects.equals(this.make, serverAsset.make) &&
        Objects.equals(this.model, serverAsset.model) &&
        Objects.equals(this.description, serverAsset.description) &&
        Objects.equals(this.customerId, serverAsset.customerId) &&
        Objects.equals(this.externalId, serverAsset.externalId) &&
        Objects.equals(this.billingStatus, serverAsset.billingStatus) &&
        Objects.equals(this.overdue, serverAsset.overdue) &&
        Objects.equals(this.assetId, serverAsset.assetId) &&
        Objects.equals(this.assetName, serverAsset.assetName) &&
        Objects.equals(this.rackId, serverAsset.rackId) &&
        Objects.equals(this.rackName, serverAsset.rackName) &&
        Objects.equals(this.rackLocation, serverAsset.rackLocation) &&
        Objects.equals(this.rackSize, serverAsset.rackSize) &&
        Objects.equals(this.rackX, serverAsset.rackX) &&
        Objects.equals(this.rackY, serverAsset.rackY) &&
        Objects.equals(this.switchports, serverAsset.switchports) &&
        Objects.equals(this.vlans, serverAsset.vlans) &&
        Objects.equals(this.vlans6, serverAsset.vlans6) &&
        Objects.equals(this.lease, serverAsset.lease) &&
        Objects.equals(this.mac, serverAsset.mac) &&
        Objects.equals(this.ipmiAdminUsername, serverAsset.ipmiAdminUsername) &&
        Objects.equals(this.ipmiAdminPassword, serverAsset.ipmiAdminPassword) &&
        Objects.equals(this.ipmiClientUsername, serverAsset.ipmiClientUsername) &&
        Objects.equals(this.ipmiClientPassword, serverAsset.ipmiClientPassword) &&
        Objects.equals(this.ipmiUpdated, serverAsset.ipmiUpdated) &&
        Objects.equals(this.createTimestamp, serverAsset.createTimestamp) &&
        Objects.equals(this.updateTimestamp, serverAsset.updateTimestamp) &&
        Objects.equals(this.comment, serverAsset.comment);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, orderId, hostname, status, primaryIpv4, primaryIpv6, datacenter, typeId, assetTag, rack, row, col, unitStart, unitEnd, unitSub, ipmiMac, ipmiIp, ipmiWorking, company, comments, make, model, description, customerId, externalId, billingStatus, overdue, assetId, assetName, rackId, rackName, rackLocation, rackSize, rackX, rackY, switchports, vlans, vlans6, lease, mac, ipmiAdminUsername, ipmiAdminPassword, ipmiClientUsername, ipmiClientPassword, ipmiUpdated, createTimestamp, updateTimestamp, comment);
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
    sb.append("    assetId: ").append(toIndentedString(assetId)).append("\n");
    sb.append("    assetName: ").append(toIndentedString(assetName)).append("\n");
    sb.append("    rackId: ").append(toIndentedString(rackId)).append("\n");
    sb.append("    rackName: ").append(toIndentedString(rackName)).append("\n");
    sb.append("    rackLocation: ").append(toIndentedString(rackLocation)).append("\n");
    sb.append("    rackSize: ").append(toIndentedString(rackSize)).append("\n");
    sb.append("    rackX: ").append(toIndentedString(rackX)).append("\n");
    sb.append("    rackY: ").append(toIndentedString(rackY)).append("\n");
    sb.append("    switchports: ").append(toIndentedString(switchports)).append("\n");
    sb.append("    vlans: ").append(toIndentedString(vlans)).append("\n");
    sb.append("    vlans6: ").append(toIndentedString(vlans6)).append("\n");
    sb.append("    lease: ").append(toIndentedString(lease)).append("\n");
    sb.append("    mac: ").append(toIndentedString(mac)).append("\n");
    sb.append("    ipmiAdminUsername: ").append(toIndentedString(ipmiAdminUsername)).append("\n");
    sb.append("    ipmiAdminPassword: ").append(toIndentedString(ipmiAdminPassword)).append("\n");
    sb.append("    ipmiClientUsername: ").append(toIndentedString(ipmiClientUsername)).append("\n");
    sb.append("    ipmiClientPassword: ").append(toIndentedString(ipmiClientPassword)).append("\n");
    sb.append("    ipmiUpdated: ").append(toIndentedString(ipmiUpdated)).append("\n");
    sb.append("    createTimestamp: ").append(toIndentedString(createTimestamp)).append("\n");
    sb.append("    updateTimestamp: ").append(toIndentedString(updateTimestamp)).append("\n");
    sb.append("    comment: ").append(toIndentedString(comment)).append("\n");
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


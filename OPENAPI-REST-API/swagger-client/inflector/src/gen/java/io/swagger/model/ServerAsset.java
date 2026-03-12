package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.ServerLease;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;





public class ServerAsset   {
  @JsonProperty("id")
  private Integer id = null;
  @JsonProperty("order_id")
  private String orderId = null;
  @JsonProperty("hostname")
  private String hostname = null;
  @JsonProperty("status")
  private String status = null;
  @JsonProperty("primary_ipv4")
  private String primaryIpv4 = null;
  @JsonProperty("primary_ipv6")
  private String primaryIpv6 = null;
  @JsonProperty("mac")
  private Object mac = null;
  @JsonProperty("datacenter")
  private String datacenter = null;
  @JsonProperty("type_id")
  private String typeId = null;
  @JsonProperty("asset_tag")
  private String assetTag = null;
  @JsonProperty("rack")
  private String rack = null;
  @JsonProperty("row")
  private String row = null;
  @JsonProperty("col")
  private String col = null;
  @JsonProperty("unit_start")
  private String unitStart = null;
  @JsonProperty("unit_end")
  private String unitEnd = null;
  @JsonProperty("unit_sub")
  private String unitSub = null;
  @JsonProperty("ipmi_mac")
  private String ipmiMac = null;
  @JsonProperty("ipmi_ip")
  private String ipmiIp = null;
  @JsonProperty("ipmi_admin_username")
  private Object ipmiAdminUsername = null;
  @JsonProperty("ipmi_admin_password")
  private Object ipmiAdminPassword = null;
  @JsonProperty("ipmi_client_username")
  private Object ipmiClientUsername = null;
  @JsonProperty("ipmi_client_password")
  private Object ipmiClientPassword = null;
  @JsonProperty("ipmi_updated")
  private Object ipmiUpdated = null;
  @JsonProperty("ipmi_working")
  private String ipmiWorking = null;
  @JsonProperty("company")
  private String company = null;
  @JsonProperty("comments")
  private String comments = null;
  @JsonProperty("make")
  private String make = null;
  @JsonProperty("model")
  private String model = null;
  @JsonProperty("description")
  private String description = null;
  @JsonProperty("customer_id")
  private String customerId = null;
  @JsonProperty("external_id")
  private String externalId = null;
  @JsonProperty("billing_status")
  private String billingStatus = null;
  @JsonProperty("overdue")
  private String overdue = null;
  @JsonProperty("create_timestamp")
  private Object createTimestamp = null;
  @JsonProperty("update_timestamp")
  private Object updateTimestamp = null;
  @JsonProperty("asset_id")
  private String assetId = null;
  @JsonProperty("asset_name")
  private String assetName = null;
  @JsonProperty("rack_id")
  private String rackId = null;
  @JsonProperty("rack_name")
  private String rackName = null;
  @JsonProperty("rack_location")
  private String rackLocation = null;
  @JsonProperty("rack_size")
  private String rackSize = null;
  @JsonProperty("rack_x")
  private String rackX = null;
  @JsonProperty("rack_y")
  private String rackY = null;
  @JsonProperty("comment")
  private Object comment = null;
  @JsonProperty("switchports")
  private List<Integer> switchports = new ArrayList<Integer>();
  @JsonProperty("vlans")
  private List<String> vlans = new ArrayList<String>();
  @JsonProperty("vlans6")
  private List<String> vlans6 = new ArrayList<String>();
  @JsonProperty("lease")
  private ServerLease lease = null;
  /**
   * Unique identifier for the asset.
   **/
  public ServerAsset id(Integer id) {
    this.id = id;
    return this;
  }

  
  @Schema(example = "3497", required = true, description = "Unique identifier for the asset.")
  @JsonProperty("id")
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

  
  @Schema(example = "16058", required = true, description = "Order identifier for the asset.")
  @JsonProperty("order_id")
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

  
  @Schema(example = "myserver.host.com", required = true, description = "Hostname associated with the asset.")
  @JsonProperty("hostname")
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

  
  @Schema(example = "active", required = true, description = "Status of the asset.")
  @JsonProperty("status")
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

  
  @Schema(example = "1.2.3.250", required = true, description = "Primary IPv4 address of the asset.")
  @JsonProperty("primary_ipv4")
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

  
  @Schema(required = true, description = "Primary IPv6 address of the asset.")
  @JsonProperty("primary_ipv6")
  public String getPrimaryIpv6() {
    return primaryIpv6;
  }
  public void setPrimaryIpv6(String primaryIpv6) {
    this.primaryIpv6 = primaryIpv6;
  }

  /**
   * MAC address associated with the asset.
   **/
  public ServerAsset mac(Object mac) {
    this.mac = mac;
    return this;
  }

  
  @Schema(description = "MAC address associated with the asset.")
  @JsonProperty("mac")
  public Object getMac() {
    return mac;
  }
  public void setMac(Object mac) {
    this.mac = mac;
  }

  /**
   * Datacenter identifier for the asset.
   **/
  public ServerAsset datacenter(String datacenter) {
    this.datacenter = datacenter;
    return this;
  }

  
  @Schema(example = "2", required = true, description = "Datacenter identifier for the asset.")
  @JsonProperty("datacenter")
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

  
  @Schema(example = "1", required = true, description = "Type identifier for the asset.")
  @JsonProperty("type_id")
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

  
  @Schema(required = true, description = "Asset tag associated with the asset.")
  @JsonProperty("asset_tag")
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

  
  @Schema(example = "68", required = true, description = "Rack identifier for the asset.")
  @JsonProperty("rack")
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

  
  @Schema(example = "017", required = true, description = "Row identifier for the asset.")
  @JsonProperty("row")
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

  
  @Schema(example = "06", required = true, description = "Column identifier for the asset.")
  @JsonProperty("col")
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

  
  @Schema(example = "37", required = true, description = "Starting unit identifier for the asset.")
  @JsonProperty("unit_start")
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

  
  @Schema(example = "37", required = true, description = "Ending unit identifier for the asset.")
  @JsonProperty("unit_end")
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

  
  @Schema(example = "0", required = true, description = "Subunit identifier for the asset.")
  @JsonProperty("unit_sub")
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

  
  @Schema(example = "0c:c4:7a:af:35:00", required = true, description = "IPMI MAC address associated with the asset.")
  @JsonProperty("ipmi_mac")
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

  
  @Schema(example = "10.8.69.7", required = true, description = "IPMI IP address associated with the asset.")
  @JsonProperty("ipmi_ip")
  public String getIpmiIp() {
    return ipmiIp;
  }
  public void setIpmiIp(String ipmiIp) {
    this.ipmiIp = ipmiIp;
  }

  /**
   * IPMI admin username associated with the asset.
   **/
  public ServerAsset ipmiAdminUsername(Object ipmiAdminUsername) {
    this.ipmiAdminUsername = ipmiAdminUsername;
    return this;
  }

  
  @Schema(description = "IPMI admin username associated with the asset.")
  @JsonProperty("ipmi_admin_username")
  public Object getIpmiAdminUsername() {
    return ipmiAdminUsername;
  }
  public void setIpmiAdminUsername(Object ipmiAdminUsername) {
    this.ipmiAdminUsername = ipmiAdminUsername;
  }

  /**
   * IPMI admin password associated with the asset.
   **/
  public ServerAsset ipmiAdminPassword(Object ipmiAdminPassword) {
    this.ipmiAdminPassword = ipmiAdminPassword;
    return this;
  }

  
  @Schema(description = "IPMI admin password associated with the asset.")
  @JsonProperty("ipmi_admin_password")
  public Object getIpmiAdminPassword() {
    return ipmiAdminPassword;
  }
  public void setIpmiAdminPassword(Object ipmiAdminPassword) {
    this.ipmiAdminPassword = ipmiAdminPassword;
  }

  /**
   * IPMI client username associated with the asset.
   **/
  public ServerAsset ipmiClientUsername(Object ipmiClientUsername) {
    this.ipmiClientUsername = ipmiClientUsername;
    return this;
  }

  
  @Schema(description = "IPMI client username associated with the asset.")
  @JsonProperty("ipmi_client_username")
  public Object getIpmiClientUsername() {
    return ipmiClientUsername;
  }
  public void setIpmiClientUsername(Object ipmiClientUsername) {
    this.ipmiClientUsername = ipmiClientUsername;
  }

  /**
   * IPMI client password associated with the asset.
   **/
  public ServerAsset ipmiClientPassword(Object ipmiClientPassword) {
    this.ipmiClientPassword = ipmiClientPassword;
    return this;
  }

  
  @Schema(description = "IPMI client password associated with the asset.")
  @JsonProperty("ipmi_client_password")
  public Object getIpmiClientPassword() {
    return ipmiClientPassword;
  }
  public void setIpmiClientPassword(Object ipmiClientPassword) {
    this.ipmiClientPassword = ipmiClientPassword;
  }

  /**
   * IPMI update status associated with the asset.
   **/
  public ServerAsset ipmiUpdated(Object ipmiUpdated) {
    this.ipmiUpdated = ipmiUpdated;
    return this;
  }

  
  @Schema(description = "IPMI update status associated with the asset.")
  @JsonProperty("ipmi_updated")
  public Object getIpmiUpdated() {
    return ipmiUpdated;
  }
  public void setIpmiUpdated(Object ipmiUpdated) {
    this.ipmiUpdated = ipmiUpdated;
  }

  /**
   * IPMI working status associated with the asset.
   **/
  public ServerAsset ipmiWorking(String ipmiWorking) {
    this.ipmiWorking = ipmiWorking;
    return this;
  }

  
  @Schema(example = "0", required = true, description = "IPMI working status associated with the asset.")
  @JsonProperty("ipmi_working")
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

  
  @Schema(example = "int", required = true, description = "Company associated with the asset.")
  @JsonProperty("company")
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

  
  @Schema(required = true, description = "Comments associated with the asset.")
  @JsonProperty("comments")
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

  
  @Schema(example = "Supermicro", required = true, description = "Make of the asset.")
  @JsonProperty("make")
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

  
  @Schema(example = "SYS-6018R-TDW", required = true, description = "Model of the asset.")
  @JsonProperty("model")
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

  
  @Schema(required = true, description = "Description of the asset.")
  @JsonProperty("description")
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

  
  @Schema(example = "int5377", required = true, description = "Customer identifier for the asset.")
  @JsonProperty("customer_id")
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

  
  @Schema(required = true, description = "External identifier for the asset.")
  @JsonProperty("external_id")
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

  
  @Schema(example = "active", required = true, description = "Billing status of the asset.")
  @JsonProperty("billing_status")
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

  
  @Schema(example = "0", required = true, description = "Overdue status of the asset.")
  @JsonProperty("overdue")
  public String getOverdue() {
    return overdue;
  }
  public void setOverdue(String overdue) {
    this.overdue = overdue;
  }

  /**
   * Timestamp of asset creation.
   **/
  public ServerAsset createTimestamp(Object createTimestamp) {
    this.createTimestamp = createTimestamp;
    return this;
  }

  
  @Schema(description = "Timestamp of asset creation.")
  @JsonProperty("create_timestamp")
  public Object getCreateTimestamp() {
    return createTimestamp;
  }
  public void setCreateTimestamp(Object createTimestamp) {
    this.createTimestamp = createTimestamp;
  }

  /**
   * Timestamp of asset update.
   **/
  public ServerAsset updateTimestamp(Object updateTimestamp) {
    this.updateTimestamp = updateTimestamp;
    return this;
  }

  
  @Schema(description = "Timestamp of asset update.")
  @JsonProperty("update_timestamp")
  public Object getUpdateTimestamp() {
    return updateTimestamp;
  }
  public void setUpdateTimestamp(Object updateTimestamp) {
    this.updateTimestamp = updateTimestamp;
  }

  /**
   * Asset identifier for the asset.
   **/
  public ServerAsset assetId(String assetId) {
    this.assetId = assetId;
    return this;
  }

  
  @Schema(example = "1", required = true, description = "Asset identifier for the asset.")
  @JsonProperty("asset_id")
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

  
  @Schema(example = "server", required = true, description = "Name of the asset.")
  @JsonProperty("asset_name")
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

  
  @Schema(example = "68", required = true, description = "Rack identifier for the asset.")
  @JsonProperty("rack_id")
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

  
  @Schema(example = "112.16", required = true, description = "Rack name associated with the asset.")
  @JsonProperty("rack_name")
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

  
  @Schema(example = "2", required = true, description = "Location of the rack associated with the asset.")
  @JsonProperty("rack_location")
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

  
  @Schema(example = "44", required = true, description = "Size of the rack associated with the asset.")
  @JsonProperty("rack_size")
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

  
  @Schema(example = "25", required = true, description = "X-coordinate of the asset within the rack.")
  @JsonProperty("rack_x")
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

  
  @Schema(example = "5", required = true, description = "Y-coordinate of the asset within the rack.")
  @JsonProperty("rack_y")
  public String getRackY() {
    return rackY;
  }
  public void setRackY(String rackY) {
    this.rackY = rackY;
  }

  /**
   * Comment associated with the asset.
   **/
  public ServerAsset comment(Object comment) {
    this.comment = comment;
    return this;
  }

  
  @Schema(description = "Comment associated with the asset.")
  @JsonProperty("comment")
  public Object getComment() {
    return comment;
  }
  public void setComment(Object comment) {
    this.comment = comment;
  }

  /**
   * List of switchports associated with the asset.
   **/
  public ServerAsset switchports(List<Integer> switchports) {
    this.switchports = switchports;
    return this;
  }

  
  @Schema(example = "[10414]", required = true, description = "List of switchports associated with the asset.")
  @JsonProperty("switchports")
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

  
  @Schema(example = "[]", required = true, description = "List of VLANs associated with the asset.")
  @JsonProperty("vlans")
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

  
  @Schema(example = "[]", required = true, description = "List of IPv6 VLANs associated with the asset.")
  @JsonProperty("vlans6")
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

  
  @Schema(required = true, description = "")
  @JsonProperty("lease")
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

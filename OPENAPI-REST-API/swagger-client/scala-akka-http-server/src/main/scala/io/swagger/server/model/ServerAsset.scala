package io.swagger.server.model


/**
 * @param id Unique identifier for the asset. for example: ''3497''
 * @param order_id Order identifier for the asset. for example: ''16058''
 * @param hostname Hostname associated with the asset. for example: ''myserver.host.com''
 * @param status Status of the asset. for example: ''active''
 * @param primary_ipv4 Primary IPv4 address of the asset. for example: ''1.2.3.250''
 * @param primary_ipv6 Primary IPv6 address of the asset.
 * @param mac MAC address associated with the asset.
 * @param datacenter Datacenter identifier for the asset. for example: ''2''
 * @param type_id Type identifier for the asset. for example: ''1''
 * @param asset_tag Asset tag associated with the asset.
 * @param rack Rack identifier for the asset. for example: ''68''
 * @param row Row identifier for the asset. for example: ''017''
 * @param col Column identifier for the asset. for example: ''06''
 * @param unit_start Starting unit identifier for the asset. for example: ''37''
 * @param unit_end Ending unit identifier for the asset. for example: ''37''
 * @param unit_sub Subunit identifier for the asset. for example: ''0''
 * @param ipmi_mac IPMI MAC address associated with the asset. for example: ''0c:c4:7a:af:35:00''
 * @param ipmi_ip IPMI IP address associated with the asset. for example: ''10.8.69.7''
 * @param ipmi_admin_username IPMI admin username associated with the asset.
 * @param ipmi_admin_password IPMI admin password associated with the asset.
 * @param ipmi_client_username IPMI client username associated with the asset.
 * @param ipmi_client_password IPMI client password associated with the asset.
 * @param ipmi_updated IPMI update status associated with the asset.
 * @param ipmi_working IPMI working status associated with the asset. for example: ''0''
 * @param company Company associated with the asset. for example: ''int''
 * @param comments Comments associated with the asset.
 * @param make Make of the asset. for example: ''Supermicro''
 * @param model Model of the asset. for example: ''SYS-6018R-TDW''
 * @param description Description of the asset.
 * @param customer_id Customer identifier for the asset. for example: ''int5377''
 * @param external_id External identifier for the asset.
 * @param billing_status Billing status of the asset. for example: ''active''
 * @param overdue Overdue status of the asset. for example: ''0''
 * @param create_timestamp Timestamp of asset creation.
 * @param update_timestamp Timestamp of asset update.
 * @param asset_id Asset identifier for the asset. for example: ''1''
 * @param asset_name Name of the asset. for example: ''server''
 * @param rack_id Rack identifier for the asset. for example: ''68''
 * @param rack_name Rack name associated with the asset. for example: ''112.16''
 * @param rack_location Location of the rack associated with the asset. for example: ''2''
 * @param rack_size Size of the rack associated with the asset. for example: ''44''
 * @param rack_x X-coordinate of the asset within the rack. for example: ''25''
 * @param rack_y Y-coordinate of the asset within the rack. for example: ''5''
 * @param comment Comment associated with the asset.
 * @param switchports List of switchports associated with the asset. for example: ''[10414]''
 * @param vlans List of VLANs associated with the asset. for example: ''[]''
 * @param vlans6 List of IPv6 VLANs associated with the asset. for example: ''[]''
 * @param lease 
 */
case class ServerAsset (
  id: Int,
  order_id: String,
  hostname: String,
  status: String,
  primary_ipv4: String,
  primary_ipv6: String,
  mac: Option[String],
  datacenter: String,
  type_id: String,
  asset_tag: String,
  rack: String,
  row: String,
  col: String,
  unit_start: String,
  unit_end: String,
  unit_sub: String,
  ipmi_mac: String,
  ipmi_ip: String,
  ipmi_admin_username: Option[String],
  ipmi_admin_password: Option[String],
  ipmi_client_username: Option[String],
  ipmi_client_password: Option[String],
  ipmi_updated: Option[String],
  ipmi_working: String,
  company: String,
  comments: String,
  make: String,
  model: String,
  description: String,
  customer_id: String,
  external_id: String,
  billing_status: String,
  overdue: String,
  create_timestamp: Option[String],
  update_timestamp: Option[String],
  asset_id: String,
  asset_name: String,
  rack_id: String,
  rack_name: String,
  rack_location: String,
  rack_size: String,
  rack_x: String,
  rack_y: String,
  comment: Option[String],
  switchports: List[Int],
  vlans: List[String],
  vlans6: List[String],
  lease: ServerLease
)


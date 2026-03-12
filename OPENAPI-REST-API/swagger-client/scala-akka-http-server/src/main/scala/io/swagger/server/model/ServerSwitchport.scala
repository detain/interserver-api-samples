package io.swagger.server.model


/**
 * @param switchport_id Unique identifier for the switchport. for example: ''10414''
 * @param switch_id Unique identifier for the switch associated with the switchport. for example: ''118''
 * @param switch Name of the switch associated with the switchport. for example: ''edge1''
 * @param port Port name on the switch. for example: ''Ethernet1/33''
 * @param blade Blade name associated with the port. for example: ''Ethernet1''
 * @param justport Port identifier. for example: ''33''
 * @param graph_id Identifier for the graph associated with the switchport. for example: ''12622''
 * @param vlans List of VLANs associated with the switchport. for example: ''[]''
 * @param vlans6 List of IPv6 VLANs associated with the switchport. for example: ''[]''
 * @param asset_id Unique identifier of the asset associated with the switchport. for example: ''3497''
 */
case class ServerSwitchport (
  switchport_id: Int,
  switch_id: String,
  switch: String,
  port: String,
  blade: String,
  justport: String,
  graph_id: String,
  vlans: Option[List[String]],
  vlans6: Option[List[String]],
  asset_id: Int
)


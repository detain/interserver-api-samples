package io.swagger.server.model


/**
 * = Create Firewall Rule =
 *
 * Create firewall rule for your ip
 *
 * @param destination_port  for example: ''22''
 * @param source_ip Source IP address to match. Use '0.0.0.0' to match any source. for example: ''1.2.4.5''
 * @param source_port  for example: ''1302''
 * @param protocol_id 1 = TCP, 2 = UDP for example: ''1''
 * @param xdp_action 1 = Block,  0 = Whitelist for example: ''1''
 */
case class CreateFirewallRule (
  destination_port: Option[Int],
  source_ip: Option[String],
  source_port: Option[Int],
  protocol_id: Int,
  xdp_action: Int
)


package io.swagger.server.model


/**
 * = Create Firewall Rule =
 *
 * Create firewall rule for your ip
 *
 * @param destination_port  for example: ''22''
 * @param country_code To get country code refer our countries api - https://my.interserver.net/apiv2/account/countries?fetch_by=numcode for example: ''10''
 * @param asn ASN number for example: ''1331''
 * @param xdp_action 1 = Block,  0 = Whitelist for example: ''1''
 */
case class CreateGeoFirewallRule (
  destination_port: Option[Int],
  country_code: Option[Int],
  asn: Option[Int],
  xdp_action: Int
)


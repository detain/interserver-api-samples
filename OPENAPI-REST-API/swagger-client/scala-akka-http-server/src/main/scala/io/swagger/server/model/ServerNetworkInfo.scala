package io.swagger.server.model


/**
 * @param vlans List of VLANs. for example: ''[]''
 * @param vlans6 List of IPv6 VLANs. for example: ''[]''
 * @param assets 
 * @param switchports 
 */
case class ServerNetworkInfo (
  vlans: List[String],
  vlans6: List[String],
  assets: ServerNetworkInfo_assets,
  switchports: ServerNetworkInfo_switchports
)


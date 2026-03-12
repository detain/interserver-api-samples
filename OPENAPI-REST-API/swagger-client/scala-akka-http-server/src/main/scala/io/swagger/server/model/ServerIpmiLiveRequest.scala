package io.swagger.server.model


/**
 * = Root Type for ServerIpmiLiveRequest =
 *
 * Request body to setup an IPMI Live connection.
 *
 * @param asset Asset ID for example: ''5431''
 * @param ip Your IP Address you wish to connect to the IPMI system from. for example: ''1.2.3.4''
 */
case class ServerIpmiLiveRequest (
  asset: Option[Int],
  ip: String
)


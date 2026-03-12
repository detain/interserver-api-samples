package io.swagger.server.model


/**
 * = Root Type for ServerIpmiPowerRequest =
 *
 * IPMI Power command for servers
 *
 * @param asset The Asset ID for example: ''5432''
 * @param action The power action to send to the ipmi controller. for example: ''on''
 */
case class ServerIpmiPowerRequest (
  asset: Option[Int],
  action: String
)


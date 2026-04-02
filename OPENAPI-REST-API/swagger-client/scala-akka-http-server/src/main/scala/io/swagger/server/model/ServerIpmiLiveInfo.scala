package io.swagger.server.model


/**
 * = Root Type for ServerIpmiLiveInfo =
 *
 * Information about the IPMI connection.
 *
 * @param text 
 * @param public_ip 
 * @param allowed_ip 
 * @param client_username 
 * @param client_password 
 */
case class ServerIpmiLiveInfo (
  text: Option[String],
  public_ip: Option[String],
  allowed_ip: Option[String],
  client_username: Option[String],
  client_password: Option[String]
)


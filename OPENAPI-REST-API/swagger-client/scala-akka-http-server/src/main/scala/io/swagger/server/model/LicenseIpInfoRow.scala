package io.swagger.server.model


/**
 * A single row in the license IP information table.
 *
 * @param desc Row description for example: ''Netmask''
 * @param value Row value for example: ''255.255.255.248''
 */
case class LicenseIpInfoRow (
  desc: Option[String],
  value: Option[String]
)


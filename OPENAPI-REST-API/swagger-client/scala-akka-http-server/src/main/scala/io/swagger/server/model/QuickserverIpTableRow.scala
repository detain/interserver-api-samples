package io.swagger.server.model


/**
 * A single row in the QuickServer IP information table.
 *
 * @param desc Description for example: ''Netmask''
 * @param value Value
 */
case class QuickserverIpTableRow (
  desc: Option[String],
  value: Option[String]
)


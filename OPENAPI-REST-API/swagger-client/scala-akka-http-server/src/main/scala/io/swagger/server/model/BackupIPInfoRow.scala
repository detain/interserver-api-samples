package io.swagger.server.model


/**
 * A single row in the backup IP information table.
 *
 * @param desc Description of the IP information. for example: ''Netmask''
 * @param value Value of the IP information. for example: ''255.255.255.248''
 */
case class BackupIPInfoRow (
  desc: Option[String],
  value: Option[String]
)


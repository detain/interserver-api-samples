package io.swagger.server.model


/**
 * IP address information table for a backup service.
 *
 * @param title Title of the IP information table. for example: ''IP Information''
 * @param rows 
 */
case class BackupIPInfo (
  title: Option[String],
  rows: Option[List[BackupIPInfoRow]]
)


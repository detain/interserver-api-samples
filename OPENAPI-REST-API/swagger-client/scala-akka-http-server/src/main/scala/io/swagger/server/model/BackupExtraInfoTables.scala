package io.swagger.server.model


/**
 * Supplementary information tables for a backup service (IP info, etc.).
 *
 * @param ip_info 
 */
case class BackupExtraInfoTables (
  ip_info: Option[BackupIPInfo]
)


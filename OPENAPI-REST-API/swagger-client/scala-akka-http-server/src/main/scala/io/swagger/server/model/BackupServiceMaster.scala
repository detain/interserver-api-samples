package io.swagger.server.model


/**
 * @param backup_id Backup ID of the service master. for example: ''38''
 * @param backup_name Name of the backup service. for example: ''storage1400.is.cc''
 * @param backup_ip IP address of the backup service. for example: ''44.22.11.88''
 * @param backup_type Type of the backup service. for example: ''703''
 * @param backup_hdsize Size of the backup service's hard drive. for example: ''156448''
 * @param backup_hdfree Amount of free space on the backup service's hard drive. for example: ''61374''
 * @param backup_last_update Last update timestamp of the backup service. for example: ''2023-08-17T23:20:02.000Z''
 * @param backup_available Availability status of the backup service. for example: ''0''
 * @param backup_iowait I/O wait status of the backup service. for example: ''0''
 * @param backup_order Order associated with the backup service. for example: ''21359''
 */
case class BackupServiceMaster (
  backup_id: Option[Int],
  backup_name: Option[String],
  backup_ip: Option[String],
  backup_type: Option[Int],
  backup_hdsize: Option[Int],
  backup_hdfree: Option[Int],
  backup_last_update: Option[String],
  backup_available: Option[Int],
  backup_iowait: Option[Int],
  backup_order: Option[Int]
)


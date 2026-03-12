package io.swagger.server.model


/**
 * = VpsBackupRow =
 *
 * A single backed-up item and information about it.
 *
 * @param `type` Backup Type for example: ''zfs''
 * @param service The service id such as vps  id. for example: ''12343''
 * @param name The name of the backup. for example: ''automated_backup''
 * @param size Size of the file in bytes for example: ''132412343124213''
 * @param date The creation date of the backup in a unix timestamp. for example: ''1693996140''
 */
case class VpsBackupRow (
  `type`: String,
  service: Int,
  name: String,
  size: Int,
  date: Int
)


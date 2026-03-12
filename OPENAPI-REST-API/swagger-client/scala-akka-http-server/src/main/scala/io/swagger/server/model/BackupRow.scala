package io.swagger.server.model


/**
 * = BackupRow =
 *
 * A result row from the `Backups` `GET` request.
 *
 * @param backup_id The id of the backup. for example: ''2414''
 * @param backup_name The name of the backup. for example: ''storage-nj.interserver.net''
 * @param backup_cost The cost of the backup. for example: ''5.99''
 * @param backup_username The username of the backup. for example: ''detainin2414''
 * @param backup_status The status of the backup. for example: ''pending-setup''
 * @param services_name The services name of the backup. for example: ''Swift Storage''
 */
case class BackupRow (
  backup_id: Option[String],
  backup_name: Option[String],
  backup_cost: Option[String],
  backup_username: Option[String],
  backup_status: Option[String],
  services_name: Option[String]
)


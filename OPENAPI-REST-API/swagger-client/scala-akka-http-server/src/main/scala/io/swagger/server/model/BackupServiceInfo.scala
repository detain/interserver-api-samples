package io.swagger.server.model


/**
 * Core service record for a backup storage service including ID, status, quota, and billing details.
 *
 * @param backup_id Backup ID. for example: ''21163''
 * @param backup_server Backup server ID. for example: ''38''
 * @param backup_username Backup username. for example: ''st21163''
 * @param backup_type Backup type. for example: ''10831''
 * @param backup_currency Backup currency. for example: ''USD''
 * @param backup_order_date Backup order date. for example: ''2021-12-29T14:09:57.000Z''
 * @param backup_custid Backup customer ID. for example: ''2773''
 * @param backup_quota Backup quota. for example: ''0''
 * @param backup_ip Backup IP address. for example: ''64.20.55.234''
 * @param backup_status Backup status. for example: ''canceled''
 * @param backup_invoice Backup invoice. for example: ''19591007''
 * @param backup_coupon Backup coupon. for example: ''0''
 * @param backup_extra Backup extra information. for example: ''[]''
 * @param backup_server_status Backup server status. for example: ''deleted''
 * @param backup_comment Backup comment.
 */
case class BackupServiceInfo (
  backup_id: Option[String],
  backup_server: Option[String],
  backup_username: Option[String],
  backup_type: Option[String],
  backup_currency: Option[String],
  backup_order_date: Option[String],
  backup_custid: Option[String],
  backup_quota: Option[String],
  backup_ip: Option[String],
  backup_status: Option[String],
  backup_invoice: Option[String],
  backup_coupon: Option[String],
  backup_extra: Option[String],
  backup_server_status: Option[String],
  backup_comment: Option[String]
)


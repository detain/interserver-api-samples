
package org.openapitools.client.model


case class BackupServiceInfo (
    /* Backup ID. */
    _backup_id: Option[String],
    /* Backup server ID. */
    _backup_server: Option[String],
    /* Backup username. */
    _backup_username: Option[String],
    /* Backup type. */
    _backup_type: Option[String],
    /* Backup currency. */
    _backup_currency: Option[String],
    /* Backup order date. */
    _backup_order_date: Option[String],
    /* Backup customer ID. */
    _backup_custid: Option[String],
    /* Backup quota. */
    _backup_quota: Option[String],
    /* Backup IP address. */
    _backup_ip: Option[String],
    /* Backup status. */
    _backup_status: Option[String],
    /* Backup invoice. */
    _backup_invoice: Option[String],
    /* Backup coupon. */
    _backup_coupon: Option[String],
    /* Backup extra information. */
    _backup_extra: Option[String],
    /* Backup server status. */
    _backup_server_status: Option[String],
    /* Backup comment. */
    _backup_comment: Option[String]
)
object BackupServiceInfo {
    def toStringBody(var_backup_id: Object, var_backup_server: Object, var_backup_username: Object, var_backup_type: Object, var_backup_currency: Object, var_backup_order_date: Object, var_backup_custid: Object, var_backup_quota: Object, var_backup_ip: Object, var_backup_status: Object, var_backup_invoice: Object, var_backup_coupon: Object, var_backup_extra: Object, var_backup_server_status: Object, var_backup_comment: Object) =
        s"""
        | {
        | "backup_id":$var_backup_id,"backup_server":$var_backup_server,"backup_username":$var_backup_username,"backup_type":$var_backup_type,"backup_currency":$var_backup_currency,"backup_order_date":$var_backup_order_date,"backup_custid":$var_backup_custid,"backup_quota":$var_backup_quota,"backup_ip":$var_backup_ip,"backup_status":$var_backup_status,"backup_invoice":$var_backup_invoice,"backup_coupon":$var_backup_coupon,"backup_extra":$var_backup_extra,"backup_server_status":$var_backup_server_status,"backup_comment":$var_backup_comment
        | }
        """.stripMargin
}

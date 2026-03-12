
package org.openapitools.client.model


case class BackupServiceMaster (
    /* Backup ID of the service master. */
    _backup_id: Option[Integer],
    /* Name of the backup service. */
    _backup_name: Option[String],
    /* IP address of the backup service. */
    _backup_ip: Option[String],
    /* Type of the backup service. */
    _backup_type: Option[Integer],
    /* Size of the backup service's hard drive. */
    _backup_hdsize: Option[Integer],
    /* Amount of free space on the backup service's hard drive. */
    _backup_hdfree: Option[Integer],
    /* Last update timestamp of the backup service. */
    _backup_last_update: Option[String],
    /* Availability status of the backup service. */
    _backup_available: Option[Integer],
    /* I/O wait status of the backup service. */
    _backup_iowait: Option[Integer],
    /* Order associated with the backup service. */
    _backup_order: Option[Integer]
)
object BackupServiceMaster {
    def toStringBody(var_backup_id: Object, var_backup_name: Object, var_backup_ip: Object, var_backup_type: Object, var_backup_hdsize: Object, var_backup_hdfree: Object, var_backup_last_update: Object, var_backup_available: Object, var_backup_iowait: Object, var_backup_order: Object) =
        s"""
        | {
        | "backup_id":$var_backup_id,"backup_name":$var_backup_name,"backup_ip":$var_backup_ip,"backup_type":$var_backup_type,"backup_hdsize":$var_backup_hdsize,"backup_hdfree":$var_backup_hdfree,"backup_last_update":$var_backup_last_update,"backup_available":$var_backup_available,"backup_iowait":$var_backup_iowait,"backup_order":$var_backup_order
        | }
        """.stripMargin
}

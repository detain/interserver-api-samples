
package org.openapitools.client.model


case class BackupRow (
    /* The id of the backup. */
    _backup_id: Option[String],
    /* The name of the backup. */
    _backup_name: Option[String],
    /* The cost of the backup. */
    _backup_cost: Option[String],
    /* The username of the backup. */
    _backup_username: Option[String],
    /* The status of the backup. */
    _backup_status: Option[String],
    /* The services name of the backup. */
    _services_name: Option[String]
)
object BackupRow {
    def toStringBody(var_backup_id: Object, var_backup_name: Object, var_backup_cost: Object, var_backup_username: Object, var_backup_status: Object, var_services_name: Object) =
        s"""
        | {
        | "backup_id":$var_backup_id,"backup_name":$var_backup_name,"backup_cost":$var_backup_cost,"backup_username":$var_backup_username,"backup_status":$var_backup_status,"services_name":$var_services_name
        | }
        """.stripMargin
}

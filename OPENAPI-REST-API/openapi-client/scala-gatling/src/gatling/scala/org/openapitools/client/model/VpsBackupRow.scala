
package org.openapitools.client.model


case class VpsBackupRow (
    /* Backup Type */
    _type: String,
    /* The service id such as vps  id. */
    _service: Integer,
    /* The name of the backup. */
    _name: String,
    /* Size of the file in bytes */
    _size: Integer,
    /* The creation date of the backup in a unix timestamp. */
    _date: Integer
)
object VpsBackupRow {
    def toStringBody(var_type: Object, var_service: Object, var_name: Object, var_size: Object, var_date: Object) =
        s"""
        | {
        | "type":$var_type,"service":$var_service,"name":$var_name,"size":$var_size,"date":$var_date
        | }
        """.stripMargin
}

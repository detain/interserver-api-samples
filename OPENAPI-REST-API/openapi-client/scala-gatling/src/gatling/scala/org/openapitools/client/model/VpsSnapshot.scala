
package org.openapitools.client.model


case class VpsSnapshot (
    /* Snapshot name. */
    _name: Option[String],
    /* Disk space used by this snapshot in bytes. */
    _used: Option[Integer],
    /* Unix timestamp of when the snapshot was created. */
    _date: Option[Integer]
)
object VpsSnapshot {
    def toStringBody(var_name: Object, var_used: Object, var_date: Object) =
        s"""
        | {
        | "name":$var_name,"used":$var_used,"date":$var_date
        | }
        """.stripMargin
}

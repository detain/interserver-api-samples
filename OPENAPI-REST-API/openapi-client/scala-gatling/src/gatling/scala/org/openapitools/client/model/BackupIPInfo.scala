
package org.openapitools.client.model


case class BackupIPInfo (
    /* Title of the IP information table. */
    _title: Option[String],
    _rows: Option[List[BackupIPInfoRow]]
)
object BackupIPInfo {
    def toStringBody(var_title: Object, var_rows: Object) =
        s"""
        | {
        | "title":$var_title,"rows":$var_rows
        | }
        """.stripMargin
}

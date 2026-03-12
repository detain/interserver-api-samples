
package org.openapitools.client.model


case class VpsIPInfo (
    /* Title of the table */
    _title: Option[String],
    _rows: Option[List[VpsIPInfoRow]]
)
object VpsIPInfo {
    def toStringBody(var_title: Object, var_rows: Object) =
        s"""
        | {
        | "title":$var_title,"rows":$var_rows
        | }
        """.stripMargin
}

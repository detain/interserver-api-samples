
package org.openapitools.client.model


case class QuickserverIpInfo (
    /* Table title */
    _title: Option[String],
    _rows: Option[List[QuickserverIpTableRow]]
)
object QuickserverIpInfo {
    def toStringBody(var_title: Object, var_rows: Object) =
        s"""
        | {
        | "title":$var_title,"rows":$var_rows
        | }
        """.stripMargin
}

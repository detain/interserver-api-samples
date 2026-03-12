
package org.openapitools.client.model


case class QuickserverAddons (
    /* Table title */
    _title: Option[String],
    _rows: Option[List[QuickserverAddonsRow]]
)
object QuickserverAddons {
    def toStringBody(var_title: Object, var_rows: Object) =
        s"""
        | {
        | "title":$var_title,"rows":$var_rows
        | }
        """.stripMargin
}

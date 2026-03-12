
package org.openapitools.client.model


case class QuickserverAddonsRow (
    /* Description */
    _desc: Option[String],
    /* Value */
    _value: Option[String]
)
object QuickserverAddonsRow {
    def toStringBody(var_desc: Object, var_value: Object) =
        s"""
        | {
        | "desc":$var_desc,"value":$var_value
        | }
        """.stripMargin
}

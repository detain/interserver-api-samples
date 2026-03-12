
package org.openapitools.client.model


case class QuickserverIpTableRow (
    /* Description */
    _desc: Option[String],
    /* Value */
    _value: Option[String]
)
object QuickserverIpTableRow {
    def toStringBody(var_desc: Object, var_value: Object) =
        s"""
        | {
        | "desc":$var_desc,"value":$var_value
        | }
        """.stripMargin
}

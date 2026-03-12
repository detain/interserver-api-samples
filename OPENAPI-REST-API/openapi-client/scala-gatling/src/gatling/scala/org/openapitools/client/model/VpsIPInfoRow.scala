
package org.openapitools.client.model


case class VpsIPInfoRow (
    /* Description */
    _desc: Option[String],
    /* Value */
    _value: Option[String]
)
object VpsIPInfoRow {
    def toStringBody(var_desc: Object, var_value: Object) =
        s"""
        | {
        | "desc":$var_desc,"value":$var_value
        | }
        """.stripMargin
}

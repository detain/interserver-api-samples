
package org.openapitools.client.model


case class WebsiteTableRow (
    /* Description for the row */
    _desc: Option[String],
    /* Value for the row */
    _value: Option[String]
)
object WebsiteTableRow {
    def toStringBody(var_desc: Object, var_value: Object) =
        s"""
        | {
        | "desc":$var_desc,"value":$var_value
        | }
        """.stripMargin
}

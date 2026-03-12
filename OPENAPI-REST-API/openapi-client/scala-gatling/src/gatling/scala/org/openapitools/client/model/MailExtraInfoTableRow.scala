
package org.openapitools.client.model


case class MailExtraInfoTableRow (
    /* The description of the extra info table row. */
    _desc: Option[String],
    /* The value of the extra info table row. */
    _value: Option[String]
)
object MailExtraInfoTableRow {
    def toStringBody(var_desc: Object, var_value: Object) =
        s"""
        | {
        | "desc":$var_desc,"value":$var_value
        | }
        """.stripMargin
}

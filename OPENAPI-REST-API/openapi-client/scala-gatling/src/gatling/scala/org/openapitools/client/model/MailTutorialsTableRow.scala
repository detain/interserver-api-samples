
package org.openapitools.client.model


case class MailTutorialsTableRow (
    /* The description of the tutorials table row. */
    _desc: Option[String],
    /* The value of the tutorials table row. */
    _value: Option[String]
)
object MailTutorialsTableRow {
    def toStringBody(var_desc: Object, var_value: Object) =
        s"""
        | {
        | "desc":$var_desc,"value":$var_value
        | }
        """.stripMargin
}

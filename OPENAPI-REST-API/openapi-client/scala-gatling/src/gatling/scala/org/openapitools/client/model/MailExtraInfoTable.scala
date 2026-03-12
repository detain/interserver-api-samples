
package org.openapitools.client.model


case class MailExtraInfoTable (
    /* The title of the extra info table. */
    _title: Option[String],
    /* The rows of the extra info table. */
    _rows: Option[List[MailExtraInfoTableRow]]
)
object MailExtraInfoTable {
    def toStringBody(var_title: Object, var_rows: Object) =
        s"""
        | {
        | "title":$var_title,"rows":$var_rows
        | }
        """.stripMargin
}

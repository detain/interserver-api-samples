
package org.openapitools.client.model


case class MailTutorialsTable (
    /* The title of the tutorials table. */
    _title: Option[String],
    /* The rows of the tutorials table. */
    _rows: Option[List[MailTutorialsTableRow]]
)
object MailTutorialsTable {
    def toStringBody(var_title: Object, var_rows: Object) =
        s"""
        | {
        | "title":$var_title,"rows":$var_rows
        | }
        """.stripMargin
}

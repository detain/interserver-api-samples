
package org.openapitools.client.model


case class MailLog (
    /* Total number of log entries that match the supplied filters, regardless of `skip` and `limit`.  Reflects the `groupby` mode. */
    _total: Integer,
    /* The `skip` value used for this page (echoed from the request). */
    _skip: Integer,
    /* The `limit` value used for this page (echoed from the request). */
    _limit: Integer,
    _emails: List[MailLogEntry]
)
object MailLog {
    def toStringBody(var_total: Object, var_skip: Object, var_limit: Object, var_emails: Object) =
        s"""
        | {
        | "total":$var_total,"skip":$var_skip,"limit":$var_limit,"emails":$var_emails
        | }
        """.stripMargin
}

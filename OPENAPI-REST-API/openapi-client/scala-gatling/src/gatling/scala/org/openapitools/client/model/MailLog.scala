
package org.openapitools.client.model


case class MailLog (
    /* total number of mail log entries */
    _total: Integer,
    /* number of emails skipped in listing */
    _skip: Integer,
    /* number of emails to return */
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

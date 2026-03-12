
package org.openapitools.client.model

import java.time.LocalDate

case class MailBlockClickHouse (
    _date: LocalDate,
    _from: String,
    _messageId: String,
    _subject: String,
    _to: String
)
object MailBlockClickHouse {
    def toStringBody(var_date: Object, var_from: Object, var_messageId: Object, var_subject: Object, var_to: Object) =
        s"""
        | {
        | "date":$var_date,"from":$var_from,"messageId":$var_messageId,"subject":$var_subject,"to":$var_to
        | }
        """.stripMargin
}

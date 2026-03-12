
package org.openapitools.client.model


case class MailBlockRspamd (
    _from: String,
    _subject: String
)
object MailBlockRspamd {
    def toStringBody(var_from: Object, var_subject: Object) =
        s"""
        | {
        | "from":$var_from,"subject":$var_subject
        | }
        """.stripMargin
}


package org.openapitools.client.model


case class SendMailAdv (
    /* The subject or title of the email */
    _subject: String,
    /* The main email contents. */
    _body: String,
    _from: EmailAddressName,
    /* A list of destionation email addresses to send this to */
    _to: List[EmailAddressName],
    /* (optional) A list of email addresses that specify where replies to the email should be sent instead of the _from_ address. */
    _replyto: Option[List[EmailAddressName]],
    /* (optional) A list of email addresses to carbon copy this message to.  They are listed on the email and anyone getting the email can see this full list of Contacts who received the email as well. */
    _cc: Option[List[EmailAddressName]],
    /* (optional) list of email addresses that should receive copies of the email.  They are hidden on the email and anyone gettitng the email would not see the other people getting the email in this list. */
    _bcc: Option[List[EmailAddressName]],
    /* (optional) File attachments to include in the email.  The file contents must be base64 encoded! */
    _attachments: Option[List[MailAttachment]],
    /* (optional)  ID of the Mail order within our system to use as the Mail Account. */
    _id: Option[Long]
)
object SendMailAdv {
    def toStringBody(var_subject: Object, var_body: Object, var_from: Object, var_to: Object, var_replyto: Object, var_cc: Object, var_bcc: Object, var_attachments: Object, var_id: Object) =
        s"""
        | {
        | "subject":$var_subject,"body":$var_body,"from":$var_from,"to":$var_to,"replyto":$var_replyto,"cc":$var_cc,"bcc":$var_bcc,"attachments":$var_attachments,"id":$var_id
        | }
        """.stripMargin
}

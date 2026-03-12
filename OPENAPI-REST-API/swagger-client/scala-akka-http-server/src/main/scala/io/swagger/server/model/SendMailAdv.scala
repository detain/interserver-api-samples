package io.swagger.server.model


/**
 * = SendMailAdv =
 *
 * Details for an Email
 *
 * @param subject The subject or title of the email for example: ''Your Package has been Delivered!''
 * @param body The main email contents. for example: ''The package you ordered on 2021-01-23 has been delivered. If the package is broken into many pieces, please blaim someone else.''
 * @param from 
 * @param to A list of destionation email addresses to send this to for example: ''[{"email":"user@domain.com","name":"John Smith"}]''
 * @param replyto (optional) A list of email addresses that specify where replies to the email should be sent instead of the _from_ address. for example: ''[{"email":"user@domain.com","name":"John Smith"}]''
 * @param cc (optional) A list of email addresses to carbon copy this message to.  They are listed on the email and anyone getting the email can see this full list of Contacts who received the email as well. for example: ''[{"email":"user@domain.com","name":"John Smith"}]''
 * @param bcc (optional) list of email addresses that should receive copies of the email.  They are hidden on the email and anyone gettitng the email would not see the other people getting the email in this list. for example: ''[{"email":"user@domain.com","name":"John Smith"}]''
 * @param attachments (optional) File attachments to include in the email.  The file contents must be base64 encoded! for example: ''[{"filename":"text.txt","data":"base64_encoded_contents"}]''
 * @param id (optional)  ID of the Mail order within our system to use as the Mail Account. for example: ''5000''
 */
case class SendMailAdv (
  subject: String,
  body: String,
  from: EmailAddressName,
  to: List[EmailAddressName],
  replyto: Option[List[EmailAddressName]],
  cc: Option[List[EmailAddressName]],
  bcc: Option[List[EmailAddressName]],
  attachments: Option[List[MailAttachment]],
  id: Option[Long]
)


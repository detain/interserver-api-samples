package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import SendMailAdv._

case class SendMailAdv (
  /* The subject or title of the email */
  subject: String,
/* The main email contents. */
  body: String,
from: EmailAddressName,
/* A list of destionation email addresses to send this to */
  to: List[EmailAddressName],
/* (optional) A list of email addresses that specify where replies to the email should be sent instead of the _from_ address. */
  replyto: Option[List[EmailAddressName]],
/* (optional) A list of email addresses to carbon copy this message to.  They are listed on the email and anyone getting the email can see this full list of Contacts who received the email as well. */
  cc: Option[List[EmailAddressName]],
/* (optional) list of email addresses that should receive copies of the email.  They are hidden on the email and anyone gettitng the email would not see the other people getting the email in this list. */
  bcc: Option[List[EmailAddressName]],
/* (optional) File attachments to include in the email.  The file contents must be base64 encoded! */
  attachments: Option[List[MailAttachment]],
/* (optional)  ID of the Mail order within our system to use as the Mail Account. */
  id: Option[Long])

object SendMailAdv {
  import DateTimeCodecs._

  implicit val SendMailAdvCodecJson: CodecJson[SendMailAdv] = CodecJson.derive[SendMailAdv]
  implicit val SendMailAdvDecoder: EntityDecoder[SendMailAdv] = jsonOf[SendMailAdv]
  implicit val SendMailAdvEncoder: EntityEncoder[SendMailAdv] = jsonEncoderOf[SendMailAdv]
}

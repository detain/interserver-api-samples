package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import SendMail._

case class SendMail (
  /* The Contact whom is the primary recipient of this email. */
  to: String,
/* The contact whom is the this email is from. */
  from: String,
/* The subject or title of the email */
  subject: String,
/* The main email contents. */
  body: String)

object SendMail {
  import DateTimeCodecs._

  implicit val SendMailCodecJson: CodecJson[SendMail] = CodecJson.derive[SendMail]
  implicit val SendMailDecoder: EntityDecoder[SendMail] = jsonOf[SendMail]
  implicit val SendMailEncoder: EntityEncoder[SendMail] = jsonEncoderOf[SendMail]
}

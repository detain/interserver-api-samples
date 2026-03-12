package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import MailLog._

case class MailLog (
  /* total number of mail log entries */
  total: Integer,
/* number of emails skipped in listing */
  skip: Integer,
/* number of emails to return */
  limit: Integer,
emails: List[MailLogEntry])

object MailLog {
  import DateTimeCodecs._

  implicit val MailLogCodecJson: CodecJson[MailLog] = CodecJson.derive[MailLog]
  implicit val MailLogDecoder: EntityDecoder[MailLog] = jsonOf[MailLog]
  implicit val MailLogEncoder: EntityEncoder[MailLog] = jsonEncoderOf[MailLog]
}

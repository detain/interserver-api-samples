package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import MailLog._

case class MailLog (
  /* Total number of log entries that match the supplied filters, regardless of `skip` and `limit`.  Reflects the `groupby` mode. */
  total: Integer,
/* The `skip` value used for this page (echoed from the request). */
  skip: Integer,
/* The `limit` value used for this page (echoed from the request). */
  limit: Integer,
emails: List[MailLogEntry])

object MailLog {
  import DateTimeCodecs._

  implicit val MailLogCodecJson: CodecJson[MailLog] = CodecJson.derive[MailLog]
  implicit val MailLogDecoder: EntityDecoder[MailLog] = jsonOf[MailLog]
  implicit val MailLogEncoder: EntityEncoder[MailLog] = jsonEncoderOf[MailLog]
}

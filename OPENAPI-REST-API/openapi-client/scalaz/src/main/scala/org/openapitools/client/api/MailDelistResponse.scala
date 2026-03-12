package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import MailDelistResponse._

case class MailDelistResponse (
  /* Mail service ID. */
  id: Option[Integer],
/* Local blocklist entries. */
  local: Option[List[Any]],
/* MailBaby trap block entries. */
  mbtrap: Option[List[Any]],
/* Subject-based block entries. */
  subject: Option[List[Any]],
/* Manually blocked entries. */
  manual: Option[List[Any]])

object MailDelistResponse {
  import DateTimeCodecs._

  implicit val MailDelistResponseCodecJson: CodecJson[MailDelistResponse] = CodecJson.derive[MailDelistResponse]
  implicit val MailDelistResponseDecoder: EntityDecoder[MailDelistResponse] = jsonOf[MailDelistResponse]
  implicit val MailDelistResponseEncoder: EntityEncoder[MailDelistResponse] = jsonEncoderOf[MailDelistResponse]
}

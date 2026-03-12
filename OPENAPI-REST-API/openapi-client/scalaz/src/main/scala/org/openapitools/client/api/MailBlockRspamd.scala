package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import MailBlockRspamd._

case class MailBlockRspamd (
  from: String,
subject: String)

object MailBlockRspamd {
  import DateTimeCodecs._

  implicit val MailBlockRspamdCodecJson: CodecJson[MailBlockRspamd] = CodecJson.derive[MailBlockRspamd]
  implicit val MailBlockRspamdDecoder: EntityDecoder[MailBlockRspamd] = jsonOf[MailBlockRspamd]
  implicit val MailBlockRspamdEncoder: EntityEncoder[MailBlockRspamd] = jsonEncoderOf[MailBlockRspamd]
}

package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ScrubIpsDeleteRule500Response._

case class ScrubIpsDeleteRule500Response (
  success: Option[Boolean],
text: Option[String])

object ScrubIpsDeleteRule500Response {
  import DateTimeCodecs._

  implicit val ScrubIpsDeleteRule500ResponseCodecJson: CodecJson[ScrubIpsDeleteRule500Response] = CodecJson.derive[ScrubIpsDeleteRule500Response]
  implicit val ScrubIpsDeleteRule500ResponseDecoder: EntityDecoder[ScrubIpsDeleteRule500Response] = jsonOf[ScrubIpsDeleteRule500Response]
  implicit val ScrubIpsDeleteRule500ResponseEncoder: EntityEncoder[ScrubIpsDeleteRule500Response] = jsonEncoderOf[ScrubIpsDeleteRule500Response]
}

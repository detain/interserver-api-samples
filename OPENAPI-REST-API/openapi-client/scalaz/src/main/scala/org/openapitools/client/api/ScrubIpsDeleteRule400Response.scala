package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ScrubIpsDeleteRule400Response._

case class ScrubIpsDeleteRule400Response (
  success: Option[Boolean],
text: Option[String])

object ScrubIpsDeleteRule400Response {
  import DateTimeCodecs._

  implicit val ScrubIpsDeleteRule400ResponseCodecJson: CodecJson[ScrubIpsDeleteRule400Response] = CodecJson.derive[ScrubIpsDeleteRule400Response]
  implicit val ScrubIpsDeleteRule400ResponseDecoder: EntityDecoder[ScrubIpsDeleteRule400Response] = jsonOf[ScrubIpsDeleteRule400Response]
  implicit val ScrubIpsDeleteRule400ResponseEncoder: EntityEncoder[ScrubIpsDeleteRule400Response] = jsonEncoderOf[ScrubIpsDeleteRule400Response]
}

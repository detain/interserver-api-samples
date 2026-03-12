package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DisableScrub500Response._

case class DisableScrub500Response (
  success: Boolean,
text: String)

object DisableScrub500Response {
  import DateTimeCodecs._

  implicit val DisableScrub500ResponseCodecJson: CodecJson[DisableScrub500Response] = CodecJson.derive[DisableScrub500Response]
  implicit val DisableScrub500ResponseDecoder: EntityDecoder[DisableScrub500Response] = jsonOf[DisableScrub500Response]
  implicit val DisableScrub500ResponseEncoder: EntityEncoder[DisableScrub500Response] = jsonEncoderOf[DisableScrub500Response]
}

package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DisableScrub400Response._

case class DisableScrub400Response (
  success: Boolean,
text: String)

object DisableScrub400Response {
  import DateTimeCodecs._

  implicit val DisableScrub400ResponseCodecJson: CodecJson[DisableScrub400Response] = CodecJson.derive[DisableScrub400Response]
  implicit val DisableScrub400ResponseDecoder: EntityDecoder[DisableScrub400Response] = jsonOf[DisableScrub400Response]
  implicit val DisableScrub400ResponseEncoder: EntityEncoder[DisableScrub400Response] = jsonEncoderOf[DisableScrub400Response]
}

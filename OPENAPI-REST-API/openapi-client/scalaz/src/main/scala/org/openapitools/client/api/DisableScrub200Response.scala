package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DisableScrub200Response._

case class DisableScrub200Response (
  success: Boolean,
text: String)

object DisableScrub200Response {
  import DateTimeCodecs._

  implicit val DisableScrub200ResponseCodecJson: CodecJson[DisableScrub200Response] = CodecJson.derive[DisableScrub200Response]
  implicit val DisableScrub200ResponseDecoder: EntityDecoder[DisableScrub200Response] = jsonOf[DisableScrub200Response]
  implicit val DisableScrub200ResponseEncoder: EntityEncoder[DisableScrub200Response] = jsonEncoderOf[DisableScrub200Response]
}

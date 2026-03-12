package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import CancelScrubIp200Response._

case class CancelScrubIp200Response (
  success: Boolean,
text: String)

object CancelScrubIp200Response {
  import DateTimeCodecs._

  implicit val CancelScrubIp200ResponseCodecJson: CodecJson[CancelScrubIp200Response] = CodecJson.derive[CancelScrubIp200Response]
  implicit val CancelScrubIp200ResponseDecoder: EntityDecoder[CancelScrubIp200Response] = jsonOf[CancelScrubIp200Response]
  implicit val CancelScrubIp200ResponseEncoder: EntityEncoder[CancelScrubIp200Response] = jsonEncoderOf[CancelScrubIp200Response]
}

package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import VPSCancel200Response._

case class VPSCancel200Response (
  success: Boolean,
text: String)

object VPSCancel200Response {
  import DateTimeCodecs._

  implicit val VPSCancel200ResponseCodecJson: CodecJson[VPSCancel200Response] = CodecJson.derive[VPSCancel200Response]
  implicit val VPSCancel200ResponseDecoder: EntityDecoder[VPSCancel200Response] = jsonOf[VPSCancel200Response]
  implicit val VPSCancel200ResponseEncoder: EntityEncoder[VPSCancel200Response] = jsonEncoderOf[VPSCancel200Response]
}

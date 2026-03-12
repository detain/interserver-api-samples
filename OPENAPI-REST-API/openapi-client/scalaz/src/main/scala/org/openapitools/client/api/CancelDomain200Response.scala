package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import CancelDomain200Response._

case class CancelDomain200Response (
  success: Boolean,
text: String)

object CancelDomain200Response {
  import DateTimeCodecs._

  implicit val CancelDomain200ResponseCodecJson: CodecJson[CancelDomain200Response] = CodecJson.derive[CancelDomain200Response]
  implicit val CancelDomain200ResponseDecoder: EntityDecoder[CancelDomain200Response] = jsonOf[CancelDomain200Response]
  implicit val CancelDomain200ResponseEncoder: EntityEncoder[CancelDomain200Response] = jsonEncoderOf[CancelDomain200Response]
}

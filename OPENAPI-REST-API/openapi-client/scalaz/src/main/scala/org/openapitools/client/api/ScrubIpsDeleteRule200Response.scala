package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ScrubIpsDeleteRule200Response._

case class ScrubIpsDeleteRule200Response (
  success: Option[Boolean],
text: Option[String])

object ScrubIpsDeleteRule200Response {
  import DateTimeCodecs._

  implicit val ScrubIpsDeleteRule200ResponseCodecJson: CodecJson[ScrubIpsDeleteRule200Response] = CodecJson.derive[ScrubIpsDeleteRule200Response]
  implicit val ScrubIpsDeleteRule200ResponseDecoder: EntityDecoder[ScrubIpsDeleteRule200Response] = jsonOf[ScrubIpsDeleteRule200Response]
  implicit val ScrubIpsDeleteRule200ResponseEncoder: EntityEncoder[ScrubIpsDeleteRule200Response] = jsonEncoderOf[ScrubIpsDeleteRule200Response]
}

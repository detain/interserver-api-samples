package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import PlaceScrubOrder201Response._

case class PlaceScrubOrder201Response (
  success: Option[Boolean],
text: Option[String],
order_details: Option[PlaceScrubOrder201ResponseOrderDetails])

object PlaceScrubOrder201Response {
  import DateTimeCodecs._

  implicit val PlaceScrubOrder201ResponseCodecJson: CodecJson[PlaceScrubOrder201Response] = CodecJson.derive[PlaceScrubOrder201Response]
  implicit val PlaceScrubOrder201ResponseDecoder: EntityDecoder[PlaceScrubOrder201Response] = jsonOf[PlaceScrubOrder201Response]
  implicit val PlaceScrubOrder201ResponseEncoder: EntityEncoder[PlaceScrubOrder201Response] = jsonEncoderOf[PlaceScrubOrder201Response]
}

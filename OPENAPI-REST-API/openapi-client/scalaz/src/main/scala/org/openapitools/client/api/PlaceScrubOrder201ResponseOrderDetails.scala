package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import PlaceScrubOrder201ResponseOrderDetails._

case class PlaceScrubOrder201ResponseOrderDetails (
  total_cost: Option[Integer],
service_id: Option[Integer],
invoice_id: Option[Integer],
invoice_description: Option[String],
cj_params: Option[PlaceScrubOrder201ResponseOrderDetailsCjParams])

object PlaceScrubOrder201ResponseOrderDetails {
  import DateTimeCodecs._

  implicit val PlaceScrubOrder201ResponseOrderDetailsCodecJson: CodecJson[PlaceScrubOrder201ResponseOrderDetails] = CodecJson.derive[PlaceScrubOrder201ResponseOrderDetails]
  implicit val PlaceScrubOrder201ResponseOrderDetailsDecoder: EntityDecoder[PlaceScrubOrder201ResponseOrderDetails] = jsonOf[PlaceScrubOrder201ResponseOrderDetails]
  implicit val PlaceScrubOrder201ResponseOrderDetailsEncoder: EntityEncoder[PlaceScrubOrder201ResponseOrderDetails] = jsonEncoderOf[PlaceScrubOrder201ResponseOrderDetails]
}

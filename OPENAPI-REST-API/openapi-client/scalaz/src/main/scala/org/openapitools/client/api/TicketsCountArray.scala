package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import TicketsCountArray._

case class TicketsCountArray (
  Open: Option[Integer],
On_Hold: Option[Integer],
Closed: Option[Integer])

object TicketsCountArray {
  import DateTimeCodecs._

  implicit val TicketsCountArrayCodecJson: CodecJson[TicketsCountArray] = CodecJson.derive[TicketsCountArray]
  implicit val TicketsCountArrayDecoder: EntityDecoder[TicketsCountArray] = jsonOf[TicketsCountArray]
  implicit val TicketsCountArrayEncoder: EntityEncoder[TicketsCountArray] = jsonEncoderOf[TicketsCountArray]
}

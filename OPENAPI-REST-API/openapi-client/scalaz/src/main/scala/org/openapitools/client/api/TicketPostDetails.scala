package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime

import scala.collection.mutable.ListBuffer

import TicketPostDetails._

case class TicketPostDetails (
  
object TicketPostDetails {
  import DateTimeCodecs._

  implicit val TicketPostDetailsCodecJson: CodecJson[TicketPostDetails] = CodecJson.derive[TicketPostDetails]
  implicit val TicketPostDetailsDecoder: EntityDecoder[TicketPostDetails] = jsonOf[TicketPostDetails]
  implicit val TicketPostDetailsEncoder: EntityEncoder[TicketPostDetails] = jsonEncoderOf[TicketPostDetails]
}

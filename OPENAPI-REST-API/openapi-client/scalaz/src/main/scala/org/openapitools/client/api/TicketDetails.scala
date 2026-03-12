package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import TicketDetails._

case class TicketDetails (
  ticketid: Option[Integer],
ticketmaskid: Option[String],
department: Option[String],
status: Option[String],
priority: Option[String],
subject: Option[String],
created_on: Option[String],
updated_on: Option[String])

object TicketDetails {
  import DateTimeCodecs._

  implicit val TicketDetailsCodecJson: CodecJson[TicketDetails] = CodecJson.derive[TicketDetails]
  implicit val TicketDetailsDecoder: EntityDecoder[TicketDetails] = jsonOf[TicketDetails]
  implicit val TicketDetailsEncoder: EntityEncoder[TicketDetails] = jsonEncoderOf[TicketDetails]
}

package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import HomeTicketStatus._

case class HomeTicketStatus (
  /* Count of open tickets. */
  Open: Option[Integer],
/* Count of tickets on hold. */
  On_Hold: Option[Integer])

object HomeTicketStatus {
  import DateTimeCodecs._

  implicit val HomeTicketStatusCodecJson: CodecJson[HomeTicketStatus] = CodecJson.derive[HomeTicketStatus]
  implicit val HomeTicketStatusDecoder: EntityDecoder[HomeTicketStatus] = jsonOf[HomeTicketStatus]
  implicit val HomeTicketStatusEncoder: EntityEncoder[HomeTicketStatus] = jsonEncoderOf[HomeTicketStatus]
}

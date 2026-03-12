package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import TicketNewResponse._

case class TicketNewResponse (
  text: String,
success: Boolean,
ticket_id: Option[Integer])

object TicketNewResponse {
  import DateTimeCodecs._

  implicit val TicketNewResponseCodecJson: CodecJson[TicketNewResponse] = CodecJson.derive[TicketNewResponse]
  implicit val TicketNewResponseDecoder: EntityDecoder[TicketNewResponse] = jsonOf[TicketNewResponse]
  implicit val TicketNewResponseEncoder: EntityEncoder[TicketNewResponse] = jsonEncoderOf[TicketNewResponse]
}

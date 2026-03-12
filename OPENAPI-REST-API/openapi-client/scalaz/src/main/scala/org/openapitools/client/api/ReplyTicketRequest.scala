package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ReplyTicketRequest._

case class ReplyTicketRequest (
  content: Option[String])

object ReplyTicketRequest {
  import DateTimeCodecs._

  implicit val ReplyTicketRequestCodecJson: CodecJson[ReplyTicketRequest] = CodecJson.derive[ReplyTicketRequest]
  implicit val ReplyTicketRequestDecoder: EntityDecoder[ReplyTicketRequest] = jsonOf[ReplyTicketRequest]
  implicit val ReplyTicketRequestEncoder: EntityEncoder[ReplyTicketRequest] = jsonEncoderOf[ReplyTicketRequest]
}

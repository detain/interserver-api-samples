package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import TicketNew._

case class TicketNew (
  subject: String,
body: String,
service_id: Option[Integer],
service_module: Option[String])

object TicketNew {
  import DateTimeCodecs._

  implicit val TicketNewCodecJson: CodecJson[TicketNew] = CodecJson.derive[TicketNew]
  implicit val TicketNewDecoder: EntityDecoder[TicketNew] = jsonOf[TicketNew]
  implicit val TicketNewEncoder: EntityEncoder[TicketNew] = jsonEncoderOf[TicketNew]
}

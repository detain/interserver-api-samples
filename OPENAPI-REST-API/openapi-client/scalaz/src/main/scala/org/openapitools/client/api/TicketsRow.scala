package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import TicketsRow._

case class TicketsRow (
  title: String,
ticketmaskid: String,
lastreplier: String,
status: String,
priority: String,
total_replies: Integer,
lastactivity: String,
departmenttitle: String,
ticketid: Integer,
can_close: String,
attachments: AnyType,
status_text: String,
checked: Boolean)

object TicketsRow {
  import DateTimeCodecs._

  implicit val TicketsRowCodecJson: CodecJson[TicketsRow] = CodecJson.derive[TicketsRow]
  implicit val TicketsRowDecoder: EntityDecoder[TicketsRow] = jsonOf[TicketsRow]
  implicit val TicketsRowEncoder: EntityEncoder[TicketsRow] = jsonEncoderOf[TicketsRow]
}

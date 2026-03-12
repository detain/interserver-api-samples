package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import Tickets._

case class Tickets (
  ima: String,
custid: String,
view: String,
currentPage: Integer,
limit: Integer,
sortcol: Integer,
sortdir: Integer,
rowsOffset: Integer,
tickets: List[TicketsRow],
pages: Integer,
rowsTotal: Integer,
inboxCount: Integer,
countArray: TicketsCountArray,
viewText: String)

object Tickets {
  import DateTimeCodecs._

  implicit val TicketsCodecJson: CodecJson[Tickets] = CodecJson.derive[Tickets]
  implicit val TicketsDecoder: EntityDecoder[Tickets] = jsonOf[Tickets]
  implicit val TicketsEncoder: EntityEncoder[Tickets] = jsonEncoderOf[Tickets]
}

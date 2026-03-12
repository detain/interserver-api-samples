package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import Home._

case class Home (
  /* Last login IP. */
  last_login_ip: String,
/* Last login time. */
  last_login: String,
/* Currency symbol. */
  currency: String,
/* Amount with currency. */
  amount: String,
/* Number of invoices. */
  invoice_list: Integer,
/* Balance with currency. */
  balance: String,
/* Users full name. */
  full_name: String,
/* User email address. */
  email: String,
/* List of tickets. */
  tickets: List[String],
ticketStatus: HomeTicketStatus,
ticketStatusView: HomeTicketStatusView,
details: HomeDetails,
services: HomeServices,
/* Affiliate amount with currency. */
  AFFILIATE_AMOUNT: String)

object Home {
  import DateTimeCodecs._

  implicit val HomeCodecJson: CodecJson[Home] = CodecJson.derive[Home]
  implicit val HomeDecoder: EntityDecoder[Home] = jsonOf[Home]
  implicit val HomeEncoder: EntityEncoder[Home] = jsonEncoderOf[Home]
}

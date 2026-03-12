package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import Server._

case class Server (
  ipmiAuth: Boolean,
client_links: List[ServerClientLink],
billingDetails: ServerBillingDetails,
custCurrency: String,
custCurrencySymbol: String,
`package`: String,
serviceExtra: List[String],
locations: ServerLocations,
networkInfo: ServerNetworkInfo,
extraInfoTables: ServerExtraInfoTables,
serviceInfo: ServerServiceInfo)

object Server {
  import DateTimeCodecs._

  implicit val ServerCodecJson: CodecJson[Server] = CodecJson.derive[Server]
  implicit val ServerDecoder: EntityDecoder[Server] = jsonOf[Server]
  implicit val ServerEncoder: EntityEncoder[Server] = jsonEncoderOf[Server]
}

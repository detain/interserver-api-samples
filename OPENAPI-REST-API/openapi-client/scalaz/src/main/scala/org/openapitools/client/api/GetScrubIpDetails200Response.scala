package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import GetScrubIpDetails200Response._

case class GetScrubIpDetails200Response (
  serviceInfo: Option[GetScrubIpDetails200ResponseServiceInfo],
client_links: Option[List[GetScrubIpDetails200ResponseClientLinksInner]],
billingDetails: Option[GetScrubIpDetails200ResponseBillingDetails],
custCurrency: Option[String],
custCurrencySymbol: Option[String],
`package`: Option[String],
extraInfoTables: Option[GetScrubIpDetails200ResponseExtraInfoTables],
filter_firewall: Option[GetScrubIpDetails200ResponseFilterFirewall])

object GetScrubIpDetails200Response {
  import DateTimeCodecs._

  implicit val GetScrubIpDetails200ResponseCodecJson: CodecJson[GetScrubIpDetails200Response] = CodecJson.derive[GetScrubIpDetails200Response]
  implicit val GetScrubIpDetails200ResponseDecoder: EntityDecoder[GetScrubIpDetails200Response] = jsonOf[GetScrubIpDetails200Response]
  implicit val GetScrubIpDetails200ResponseEncoder: EntityEncoder[GetScrubIpDetails200Response] = jsonEncoderOf[GetScrubIpDetails200Response]
}
